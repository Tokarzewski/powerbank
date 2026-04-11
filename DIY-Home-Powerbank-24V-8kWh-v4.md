# DIY Home Powerbank 24V 8kWh — Dokumentacja projektu v4

---

## 1. Założenia systemu

| Parametr               | Wartość                                                                                     |
| ---------------------- | ------------------------------------------------------------------------------------------- |
| Konfiguracja           | 8S Bjock (8 ogniw szeregowo, układ 2×4)                                                     |
| Napięcie nominalne     | 24V (8 × 3,2V)                                                                              |
| Pojemność              | 320Ah (8S — napięcia się sumują, pojemność bez zmiany)                                      |
| Energia                | ~8,19 kWh (użyteczna ~6,55 kWh przy DoD 80%)                                                |
| Topologia              | AC-coupled (panele na mikroinwerterze EcoFlow Stream)                                       |
| Inwerter akumulatorowy | ECGSOLAX MIN-3K 24V + WiFi (klon Voltronic/MPP-Solar — protokół PI30 po RS232)              |
| BMS                    | JK BMS B1A8S10PHC (8S, 100A, BT+RS485), firmware 15.41                                      |
| Integracja             | ESP32 ESPHome → HAOS (BMS); Pi Zero 2W + mpp-solar → MQTT → HAOS (inwerter)                 |
| HAOS                   | Home Assistant OS jako VM na lokalnej maszynie (nie na Pi Zero — Pi Zero 2W ma za mało RAM) |

### Architektura komunikacji (decyzje projektowe)

- **JK BMS → ESP32 z ESPHome (`syssi/esphome-jk-bms`, protokół `JK02_32S`).** Firmware BMS 15.41 używa nowszej generacji protokołu (chip TI, usługa BLE `f000ffc0`), dla której mpp-solar `jkbleio` jest popsuty (hardcoded write + parser nie obsługuje fragmentowanych ramek BLE). ESPHome to referencyjna implementacja i jedyna sprawdzona ścieżka dla firmware 15.x.
- **ECGSOLAX MIN-3K to NIE klon Growatta** — to klon Voltronic/MPP-Solar (PIP/Axpert/InfiniSolar family). Dongle WiFi rozmawia ze złączem RJ45 oznaczonym RS232 używając poziomów RS232 (nie Ethernet). `grott` nie zadziała. Zamiast tego: wyciągnij dongle, podłącz kabel USB↔RJ45 (Axpert communication cable) do Pi Zero, użyj `mpp-solar` z protokołem `PI30`.
- **JK BMS pozwala tylko na JEDNO aktywne połączenie BLE naraz.** Kiedy ESP32 jest podłączony, aplikacja JIKONG na telefonie ani skrypt bleak z laptopa nie mogą się połączyć. Przy commissioningu zawsze force-stop telefonu.
- **Pi Zero 2W nie obsługuje HAOS.** 512 MB RAM jest poniżej minimum HA, nie ma oficjalnego obrazu dla Pi Zero 2W. HAOS idzie na oddzielną maszynę (VM na desktopie albo Pi 4/5), Pi Zero zostaje jako lokalny kolektor danych + most MQTT.

---

## 2. BOM — Pełna lista zakupów

### 2.1 Zamówione z AliExpress

| #   | Komponent                                                                              | Wariant                | Cena      | Status      |
| --- | -------------------------------------------------------------------------------------- | ---------------------- | --------- | ----------- |
| 1   | [Ogniwa LiFePO4 OOZING 320Ah](https://pl.aliexpress.com/item/1005008365255618.html)    | 8 szt.                 | 1952 zł   | ✅ Zamówione |
| 2   | [JK BMS B1A8S10PHC](https://pl.aliexpress.com/item/1005007612738588.html)              | 8S 100A BT+RS485       | 127,50 zł | ✅ Zamówione |
| 3   | [ECGSOLAX MIN-3K](https://pl.aliexpress.com/item/1005010303644717.html)                | 3KW 24V + WiFi         | 604 zł    | ✅ Zamówione |
| 4   | [ESP32-WROOM-32U DevKit](https://pl.aliexpress.com/item/1005010136688086.html)         | 1Set-Type-C (z anteną) | 26,69 zł  | ✅ Zamówione |
| 5   | [ANL holder osobny](https://pl.aliexpress.com/item/1005001282853678.html)              | Gniazdo/200A           | 29,99 zł  | ✅ Zamówione |
| 6   | [DC switch 1P 150A](https://pl.aliexpress.com/item/1005008516700696.html)              | 150A/1                 | 54,99 zł  | ✅ Zamówione |
| 7   | [Dual TYPE-C DC-DC 6V-36V→5V 3A](https://pl.aliexpress.com/item/1005007422356449.html) | 1PCS                   | 5,40 zł   | ✅ Zamówione |
| 8   | [Kabel USB-C do USB-C 60W 25cm](https://pl.aliexpress.com/item/1005006350363185.html)  | czarny/0,25m × 2       | 2,68 zł   | ✅ Zamówione |

**Łączny koszt AliExpress: ~2 803 zł**

### 2.2 Do kupienia lokalnie

| #   | Komponent                                                                                                                                                                 | Ilość   | Cena szac. |
| --- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------- | ---------- |
| 1   | Śruby M6×12mm                                                                                                                                                             | 25 szt. | ~10 zł     |
| 2   | Podkładki M6                                                                                                                                                              | 50 szt. | ~8 zł      |
| 3   | Nakrętki M6                                                                                                                                                               | 25 szt. | ~8 zł      |
| 4   | Obudowa niemetalowa na ogniwa (tworzywo)                                                                                                                                  | 1 szt.  | ~150 zł    |
| 5   | Materiały instalacyjne (opaski, koszulki, taśma elektr.)                                                                                                                  | —       | ~50 zł     |
| 6   | [Raspberry Pi Zero 2W 512MB RAM, WiFi, BT](https://botland.com.pl/moduly-i-zestawy-raspberry-pi-zero/20347-raspberry-pi-zero-2-w-512mb-ram-wifi-bt-42-5056561800004.html) | 1 szt.  | 72,90 zł   |
| 7   | [Samsung PRO Endurance 32GB microSDHC](https://www.x-kom.pl/p/1368965-karta-pamieci-microsd-samsung-32gb-microsdhc-pro-endurance-100mb-s.html)                            | 1 szt.  | 29 zł      |
| 8   | Kabel USB-C → microUSB                                                                                                                                                    | ~25cm   | ~10 zł     |
| 9   | [Końcówka kablowa Cu ocynowana oczko 25mm² M8 (10 szt.)](https://allegro.pl/oferta/10x-koncowka-kablowa-miedziana-ocynowana-konektor-oczko-cu-25mm2-m8-2-17652361988)     | 10 szt. | 14,40 zł   |
| 10  | [Kabel LGY H07V-K 25mm² czarny](https://allegro.pl/oferta/przewod-linka-kabel-jednozylowy-lgy-h07v-k-25mm2-czarny-1m-14119320982)                                         | 1 m     | 18,89 zł   |
| 11  | [Kabel LGY H07V-K 25mm² czerwony](https://allegro.pl/oferta/przewod-linka-kabel-jednozylowy-lgy-h07v-k-25mm2-czerwony-1m-14177221554)                                     | 1 m     | 18,89 zł   |

**Łączny koszt lokalnie: ~511 zł**

### 2.3 Dołączone gratis z ogniwami OOZING (nie kupować!)

| Komponent                           | Ilość (na 8 ogniw) | Uwagi                                          |
| ----------------------------------- | ------------------ | ---------------------------------------------- |
| Taśma z włókna siatkowego           | 2 szt.             | Do spinania pakietu ogniw                      |
| Płyta izolacyjna epoksydowa         | 10 szt.            | Separatory między ogniwami i na końcach        |
| Miedziana szyna zbiorcza (cynowana) | 8 szt.             | Do połączeń szeregowych 8S — nie kupuj osobno! |
| Osłona zacisku akumulatora          | 8 kpl.             | Nakładki na bieguny ogniw                      |

**ŁĄCZNY KOSZT CAŁOŚCI: ~3 314 zł**

---

## 3. Schematy połączeń

### 3.1 Schemat główny systemu

```
PANELE FOTOWOLTAICZNE
        │
   [EcoFlow Stream]  ← mikroinwerter AC (już zainstalowany)
        │ 230V AC
   [Gniazdko ścienne — faza 1]
        │
   [ECGSOLAX MIN-3K 24V + WiFi]  ← inwerter hybrydowy
        │
   [Gniazdko ścienne — faza 2]  ← wyjście UPS
        │
   [Akumulator 24V 320Ah 8S Bjock]
        │
   [JK BMS B1A8S10PHC]
        │
   [8× Ogniwo OOZING LiFePO4 320Ah]
```

### 3.2 Schemat akumulatora (8S Bjock)

```
[Og.1-] [Og.1+]─[Og.2-] [Og.2+]─[Og.3-] ... [Og.8+]
   │                                               │
  B-  (GND / 0V)                               B+ (~25,6V)
   │                                               │
   └────────────── JK BMS ─────────────────────────┘
   │                 │
  P-               P+
   │                 │
   └─── Inwerter ────┘

Przewody balansujące (z zestawu BMS — sampling line):
B0→B1→B2→B3→B4→B5→B6→B7→B8  (9 przewodów)
```

### 3.3 Schemat zabezpieczeń DC

```
B+ akumulatora
    │
   [ANL fuse 200A]
    │
   [DC switch 1P 150A]
    │
   P+ inwertera

B- akumulatora ══════════════ P- inwertera (bezpośrednio)
```

### 3.4 Schemat zasilania elektroniki

```
Akumulator 24V
    │
    └─► [Dual TYPE-C DC-DC moduł]
         Wejście: 24V (6V–36V)
         Wyjście: 5V stałe / 3A max
         Gniazda wyjściowe: 2× USB-C
              │
              ├─ USB-C ──[kabel 25cm 60W]──► ESP32-WROOM-32U TYPE-C
              │                              (ESPHome / JK BMS Bluetooth)
              │
              └─ USB-C ──[kabel USB-C→microUSB]──► Raspberry Pi Zero 2W
                                                    (Mosquitto / grott / Python)

Zasilanie BMS — samodzielne:
    Ogniwa ──[sampling line 9-żyłowa]──► JK BMS (brak zewnętrznego zasilacza)
```

### 3.5 Schemat komunikacji

```
[JK BMS] ──BLE (JK02_32S)──► [ESP32 + ESPHome] ──WiFi──► [Pi Zero 2W Mosquitto] ──bridge──► [HAOS VM]
                                                               ▲
[ECGSOLAX MIN-3K] ──RS232 (RJ45)──► [Pi Zero 2W: mpp-solar] ───┘
                                          │
                                          └─► Python automation (zero-export, alerty, ntfy)
```

- **ESP32** publikuje do Mosquitto na Pi Zero (ESPHome → MQTT output, nie native API). Dzięki temu dane BMS są lokalne i nie zależą od HAOS.
- **Pi Zero 2W** jest zawsze-włączonym kolektorem: Mosquitto broker, `mpp-solar` dla inwertera, skrypt automatyzacji. Most Mosquitto przekazuje tematy `jkbms/#` i `inverter/#` do HAOS gdy HAOS jest dostępny; buforuje gdy nie.
- **HAOS VM** subskrybuje brokera Pi Zero i auto-wykrywa encje przez MQTT discovery. Reboot HAOS / offline ≠ utrata danych.

### 3.6 Schemat komunikacji inwertera — mpp-solar RS232

```
ECGSOLAX MIN-3K
    ├─ (wyjmij dongle WiFi — zajmuje gniazdo RJ45 RS232)
    └─ gniazdo RJ45 oznaczone RS232 ──[kabel Axpert USB ↔ RJ45]──► Pi Zero 2W USB
                                                                       │
                                                                 mpp-solar -P PI30
                                                                 (protokół QPIGS)
                                                                       │
                                                                 Mosquitto (localhost)
                                                                       │
                                                                  temat inverter/#
```

> ECGSOLAX MIN-3K to klon Voltronic — używa protokołu tekstowego PI30 (QPIGS/QMOD/QPIRI)
> po RS232 na RJ45. `mpp-solar` obsługuje to natywnie, włącznie z MQTT auto-discovery
> dla HAOS. Dongle WiFi (chmura Sun Home) nie ma REST API — zostaje odłączony.
> Kabel: szukaj "Axpert USB communication cable RJ45" lub "PIP inverter RS232 USB" (~20–40 zł).

---

## 4. Kolejność montażu

### ETAP 0 — Przygotowanie IT (przed dostawą sprzętu)

- [ ] Pobierz Raspberry Pi Imager: https://www.raspberrypi.com/software/
- [ ] Pobierz Raspberry Pi OS Lite (64-bit)
- [ ] Przygotuj kartę microSD 32GB
- [ ] Przygotuj obudowę niemetalową (otwory wentylacyjne Ø8mm, otwory kablowe)

### ETAP 1 — Przygotowanie ogniw

- [ ] Sprawdź napięcie każdego ogniwa multimetrem — powinno być ~3,2–3,3V
- [ ] Wyrównaj napięcia (top-balance): ładuj każde ogniwo do 3,45V i rozładuj do 3,2V
- [ ] Oczyść zaciski z tlenków (papier ścierny 400, alkohol izopropylowy)
- [ ] Ułóż ogniwa w konfiguracji 8S Bjock (2 rzędy po 4, bieguny na zmianę +/-, B+ i B- po tej samej stronie)

### ETAP 2 — Połączenia szyn prądowych

- [ ] Podłącz szyny zbiorcze (gratis z ogniwami): nakrętka M6 + 2 podkładki na kołek ogniwa
- [ ] **Jeszcze NIE podłączaj B+ i B- do BMS**
- [ ] Zmierz napięcie pakietu: powinno być ~25,6V (8 × 3,2V)

### ETAP 3 — BMS

- [ ] Podłącz sampling line (9 przewodów z zestawu BMS):
  - B0 → minus ogniwa 1 = GND pakietu
  - B1 → styk między ogniwem 1 i 2
  - B2 → styk między ogniwem 2 i 3
  - ... (kolejno)
  - B8 → plus ogniwa 8 = B+ pakietu
- [ ] Podłącz czujnik temperatury NTC (z zestawu) — umieść między ogniwami
- [ ] Podłącz przewód switch (z zestawu)
- [ ] Uruchom aplikację JIKONG BMS na telefonie
- [ ] Sprawdź: 8 ogniw widocznych, napięcia i SoC poprawne

### ETAP 4 — Zabezpieczenia DC

- [ ] Zainstaluj bezpiecznik ANL 200A na przewodzie B+
- [ ] Zainstaluj wyłącznik DC 1P 150A w szeregu na B+
- [ ] Podłącz B- bezpośrednio do P-
- [ ] **Wyłącznik w pozycji OFF**

### ETAP 5 — Inwerter ECGSOLAX MIN-3K

- [ ] Kabel 25mm²: P+ → zacisk B+ inwertera
- [ ] Kabel 25mm²: P- → zacisk B- inwertera
- [ ] Włącz wyłącznik DC
- [ ] Konfiguracja inwertera (menu LCD):
  - Battery type: Lithium (LiFePO4)
  - Bulk voltage: 27,6V
  - Float voltage: 27,2V
  - Low DC cutoff: 22,4V
  - Charge current: 80A
  - Output mode: SBU (Solar → Battery → Utility)

### ETAP 6 — Uruchomienie Raspberry Pi Zero 2W

#### 6.1 Przygotowanie karty microSD

- [ ] Pobierz **Raspberry Pi Imager**: https://www.raspberrypi.com/software/
- [ ] Wybierz system: **Raspberry Pi OS Lite (64-bit)** — bez GUI
- [ ] Przed wgraniem kliknij ikonę ⚙ (ustawienia zaawansowane) i ustaw:
  - Hostname: `powerbank`
  - Użytkownik: `pi` / hasło: (własne)
  - WiFi: SSID i hasło sieci domowej
  - SSH: włączony
  - Locale: Europe/Warsaw, pl
- [ ] Wgraj obraz na kartę microSD, włóż kartę do RPi

#### 6.2 Pierwsze uruchomienie i aktualizacja

- [ ] Podłącz RPi do zasilania (tymczasowo przez kabel USB do komputera lub zasilacza 5V)
- [ ] Poczekaj ~60 sekund na boot
- [ ] Znajdź adres IP w routerze lub: `ping powerbank.local`
- [ ] Zaloguj przez SSH: `ssh pi@powerbank.local`
- [ ] Zaktualizuj system:
  
  ```
  sudo apt update && sudo apt upgrade -y
  ```

#### 6.3 Instalacja Mosquitto (broker MQTT)

- [ ] Zainstaluj:
  
  ```
  sudo apt install -y mosquitto mosquitto-clients
  ```
- [ ] Włącz autostart:
  
  ```
  sudo systemctl enable mosquitto
  sudo systemctl start mosquitto
  ```
- [ ] Skonfiguruj nasłuchiwanie na wszystkich interfejsach (`/etc/mosquitto/mosquitto.conf`):
  
  ```
  listener 1883
  allow_anonymous true
  ```
- [ ] Zrestartuj: `sudo systemctl restart mosquitto`
- [ ] Test: `mosquitto_sub -h localhost -t "#" -v`

#### 6.4 Instalacja mpp-solar (dane z inwertera ECGSOLAX, zamiast grott)

- [ ] Kup kabel RS232 "Axpert USB communication cable" (RJ45 ↔ USB-A, CH340/PL2303 w środku)
- [ ] Wyjmij oryginalny dongle WiFi z gniazda RJ45 oznaczonego RS232 w ECGSOLAX (blokuje port)
- [ ] Podłącz kabel: RJ45 do inwertera, USB do Pi Zero — pojawi się `/dev/ttyUSB0`
- [ ] Zainstaluj mpp-solar:
  
  ```
  sudo apt install -y python3-pip
  pip3 install 'mppsolar[ble]'
  ```
- [ ] Testowe odczyty (sanity check):
  
  ```
  mpp-solar -p /dev/ttyUSB0 -P PI30 -c QPIGS    # live dane (moc, napięcia, SoC)
  mpp-solar -p /dev/ttyUSB0 -P PI30 -c QMOD     # tryb pracy (L=line, B=battery, ...)
  mpp-solar -p /dev/ttyUSB0 -P PI30 -c QPIRI    # ustawienia ratingowe
  ```
- [ ] Jeśli QPIGS działa — skonfiguruj demona z wyjściem MQTT i HA discovery:
  
  ```
  mpp-solar -p /dev/ttyUSB0 -P PI30 -c QPIGS \
            -q localhost --mqtttopic inverter \
            -n "ECGSOLAX MIN-3K" --daemon
  ```
- [ ] Uruchom jako usługa systemd (`Restart=always`) — polling co 5–10 s
- [ ] Sprawdź dane: `mosquitto_sub -h localhost -t "inverter/#" -v`
- [ ] Na HAOS: Settings → Devices → MQTT → device powinno pojawić się automatycznie przez MQTT discovery

#### 6.5 Instalacja skryptu Python (automatyzacje)

- [ ] Zainstaluj biblioteki:
  
  ```
  pip3 install paho-mqtt schedule requests
  ```
- [ ] Wgraj skrypt automatyzacji (sekcja 5.3) na RPi
- [ ] Uruchom jako usługa systemd (`Restart=always`)
- [ ] Sprawdź logi: `journalctl -u powerbank-automation -f`

### ETAP 7 — BMS Bluetooth (ESP32)

- [ ] Podłącz ESP32 USB-C do komputera
- [ ] Wejdź na https://web.esphome.io → wgraj YAML z sekcji 5.1
- [ ] Zeskanuj Bluetooth w apce JIKONG → zanotuj MAC adres BMS
- [ ] Uzupełnij MAC w YAML i wgraj ponownie
- [ ] Sprawdź w MQTT Explorer: topic jkbms/sensor/state_of_charge i inne

### ETAP 8 — Zasilanie elektroniki (Dual TYPE-C)

- [ ] Podłącz moduł Dual TYPE-C DC-DC: B+ i B- akumulatora (wejście 24V)
- [ ] **Najpierw sprawdź multimetrem napięcie na wyjściu USB-C: powinno być 5,0V**
- [ ] Podłącz kabel USB-C 25cm → USB-C port 1 → ESP32
- [ ] Podłącz kabel USB-C → microUSB → USB-C port 2 → Raspberry Pi Zero 2W
- [ ] Odłącz kable USB od komputera — od teraz oba urządzenia zasilane z akumulatora
- [ ] Sprawdź przez SSH że RPi działa, Mosquitto i grott aktywne
- [ ] Sprawdź w MQTT Explorer: ESP32 (JK BMS) i grott (inwerter) publikują dane

### ETAP 9 — Bezpieczeństwo

- [ ] Zamontuj czujnik dymu/temperatury WiFi nad akumulatorem
- [ ] Sprawdź że skrypt Python (sekcja 5.3) wysyła alert przy temp > 45°C
- [ ] Umieść gaśnicę CO₂ 2kg w pobliżu i oznacz
- [ ] Podłącz zacisk PE inwertera ECGSOLAX do PE gniazdka ściennego (kabel 1,5–2,5mm² żółto-zielony)
- [ ] Zrób zdjęcia połączeń przed zamknięciem obudowy

---

## 5. Konfiguracja oprogramowania

### 5.1 ESPHome YAML — JK BMS (ESP32)

- Konfiguracja ESPHome: [`jkbms.yaml`](jkbms.yaml)
- Sekrety (WiFi, API, OTA): [`secrets.yaml`](secrets.yaml)

**Kluczowe ustawienia w jkbms.yaml:**

- `protocol_version: JK02_32S` — wymagane dla firmware BMS 15.41 (TI-chip generation, usługa BLE `f000ffc0`)
- `mac_address: C8:47:80:50:0F:8C` — MAC konkretnego BMS, odczytany z aplikacji JIKONG
- `external_components: syssi/esphome-jk-bms@main`
- komplet sensorów: 8× napięcie ogniwa + 8× rezystancja, SoC, moc ładowania/rozładowania, temperatury, cykle, balancing current, errors
- zapisywalne switches (charging/discharging/balancer/emergency) i numbers (OVP/UVP/OTP/pojemność) — realnie sterują BMS, używać ostrożnie

**Flashowanie ESP32 z linii poleceń (zamiast web.esphome.io):**

```bash
cd ~/Github/diy_powerbank_8kWh
source .venv/bin/activate
python -m ensurepip --upgrade   # jeśli venv bez pip (np. utworzony przez uv)
pip install esphome
esphome run jkbms.yaml
```

Pierwsza kompilacja ~5 min (pobiera toolchain ESP32 + esp32-arduino-libs). Kolejne ~30 s. Wymaga grupy `dialout` (`sudo usermod -aG dialout $USER` + re-login).

**Przed pierwszym uruchomieniem:** force-stop aplikacji JIKONG na telefonie — JK BMS pozwala tylko na JEDNO aktywne połączenie BLE, telefon zablokuje ESP32. W logach ESPHome powinno pojawić się `[jk_bms_ble] Connected` i napięcia ogniw w ciągu ~10 s.

### 5.2 Automatyzacje Home Assistant

```yaml
automation:
  - alias: "Alert: Wysoka temperatura akumulatora"
    trigger:
      - platform: numeric_state
        entity_id: sensor.jk_bms_temperature_1
        above: 45
    action:
      - service: notify.mobile_app
        data:
          title: "⚠️ Akumulator — wysoka temperatura"
          message: "Temperatura: {{ states('sensor.jk_bms_temperature_1') }}°C — sprawdź natychmiast!"

  - alias: "Alert: Niska pojemność akumulatora"
    trigger:
      - platform: numeric_state
        entity_id: sensor.jk_bms_state_of_charge
        below: 15
    action:
      - service: notify.mobile_app
        data:
          title: "🔋 Akumulator — niski poziom"
          message: "SoC: {{ states('sensor.jk_bms_state_of_charge') }}% — rozważ ładowanie z sieci"

  - alias: "Zero-export: ładuj gdy nadwyżka solarna"
    trigger:
      - platform: numeric_state
        entity_id: sensor.grott_pv_power
        above: 500
    condition:
      - condition: numeric_state
        entity_id: sensor.jk_bms_state_of_charge
        below: 90
    action:
      - service: mqtt.publish
        data:
          topic: "grott/set/output_source_priority"
          payload: "SBU"

  - alias: "Zero-export: rozładuj w godzinach szczytu"
    trigger:
      - platform: time
        at: "17:00:00"
    condition:
      - condition: numeric_state
        entity_id: sensor.jk_bms_state_of_charge
        above: 20
    action:
      - service: mqtt.publish
        data:
          topic: "grott/set/output_source_priority"
          payload: "SUB"
```

### 5.3 Automatyzacje bez Home Assistant

Alternatywa dla sekcji 5.2 — działa na dowolnym serwerze, VPS lub Raspberry Pi.

#### Wybór języka

| Język                    | Biblioteka MQTT | Harmonogram                  | Powiadomienia                   |
| ------------------------ | --------------- | ---------------------------- | ------------------------------- |
| **Python**               | `paho-mqtt`     | `schedule` lub `APScheduler` | `requests` → Pushover / Ntfy.sh |
| **JavaScript (Node.js)** | `mqtt` (npm)    | `node-cron`                  | `axios` → Pushover / Ntfy.sh    |

Oba podejścia są równoważne. Python jest prostszy do uruchomienia na VPS/RPi; Node.js jeśli już znasz JS.

#### Co musi robić skrypt

| Zadanie                                  | Mechanizm                                                                |
| ---------------------------------------- | ------------------------------------------------------------------------ |
| Połączyć się z brokerem Mosquitto        | klient MQTT — `connect(broker_ip, 1883)`                                 |
| Subskrybować 3 tematy                    | `jkbms/…/state_of_charge`, `jkbms/…/temperature`, `grott/…/pvpowertoday` |
| Przy każdej wiadomości sprawdzić warunek | if/else na wartości liczbowej                                            |
| Wysłać alert                             | HTTP POST do Pushover lub Ntfy.sh                                        |
| Wysłać komendę do inwertera              | MQTT publish → `grott/set/output_source_priority`                        |
| Uruchomić regułę o 17:00                 | cron/scheduler w tle                                                     |
| Działać ciągle jako usługa               | systemd (`Restart=always`)                                               |

#### Broker MQTT

Mosquitto zainstalowany lokalnie lub na VPS — ten sam co w wersji z HA. ESP32 łączy się z nim bez zmian, wystarczy podać nowy IP brokera w konfiguracji ESPHome. Grott również publikuje na ten sam broker.

#### Powiadomienia push bez HA

- **Ntfy.sh** — bezpłatny, open-source, aplikacja na Android/iOS, wysyłka przez prosty HTTP POST na `https://ntfy.sh/twoj_kanal`
- **Pushover** — płatny jednorazowo (~5$), bardziej niezawodny, dobra aplikacja mobilna

---

### 5.4 Zero-export 3-fazowy — Zamel Supla + akumulator na 1 fazie

#### Zasada działania

Licznik Zamel Supla mierzy moc na 3 fazach i publikuje dane przez MQTT.
Akumulator podłączony jest do **jednej fazy**. Skrypt odczytuje sumę mocy
ze wszystkich faz i steruje mocą rozładowania inwertera tak, żeby saldo
sieci wynosiło 0 W:

```
cel_moc_inwertera = -(P1 + P2 + P3)
```

Przykład: F1=−1000 W, F2=−1000 W, F3=−200 W → inwerter daje +2200 W → saldo = 0 W.
Jeśli suma > 0 (nadwyżka solarna), inwerter jest wstrzymywany (moc = 0).

#### Przepływ danych

```
[Licznik Supla 3-faz]
    └─ MQTT (power_active F1/F2/F3) ──► [Mosquitto na RPi Zero]
                                              │
                                         [skrypt Python]
                                         liczy: cel = -(P1+P2+P3)
                                              │
                                         wywołuje: mpp-solar -P PI30 -c POP<SBU|SUB>
                                              │
                                    [mpp-solar RS232] ──► [ECGSOLAX MIN-3K]
                                               przełącza priorytet wyjścia
```

#### Dostępne technologie

| Warstwa               | Technologia                                | Uwagi                                                                                                    |
| --------------------- | ------------------------------------------ | -------------------------------------------------------------------------------------------------------- |
| Pomiar mocy           | Zamel Supla MQTT                           | tematy `supla/…/state/phases/N/power_active` [W]                                                         |
| Broker                | Mosquitto (Pi Zero)                        | ten sam co dla JK BMS (MQTT bridge z ESP32) i mpp-solar                                                  |
| Logika sterowania     | Python `paho-mqtt`                         | pętla reagująca na każdy pomiar Supla                                                                    |
| Sterowanie inwerterem | `mpp-solar -P PI30` komendy POP/PCP/MUCHGC | Voltronic nie ma ciągłego setpointu mocy — tylko przełączanie priorytetu źródła i limitu prądu ładowania |
| Usługa systemd        | `Restart=always`                           | działa ciągle w tle na Pi Zero                                                                           |

#### Ograniczenia Voltronic PI30 (inaczej niż Growatt)

**Ważne:** ECGSOLAX MIN-3K (klon Voltronic) **nie ma rejestru "ac_discharge_power"** jak Growatt SPH/MIN. Zamiast ciągłego setpointu mocy PI30 oferuje tylko dyskretne tryby:

- `POP00` — Utility first (sieć pierwsza)
- `POP01` — Solar first (słońce pierwsze) 
- `POP02` — SBU (Solar → Battery → Utility — typowy tryb zero-export)
- `PCP01/02` — Charger source priority (Solar/Solar+Utility/Only Solar)
- `MUCHGC` — Max utility charging current [A]
- `MCHGC` — Max total charging current [A]

Dla zero-export na 1 fazie z Voltronic: praktycznie jest to **histereza między SBU i SUB** (przełączanie co kilka-kilkanaście sekund) zamiast płynnej regulacji mocy. Jeśli chcesz prawdziwej regulacji mocy, trzeba dodać zewnętrzny kontroler (relay na wyjściu AC inwertera albo smart-plug z MQTT-em odcinający obciążenie).

#### Kwestie do uwzględnienia przy implementacji

| Kwestia            | Uwaga                                                                                                          |
| ------------------ | -------------------------------------------------------------------------------------------------------------- |
| Opóźnienie pomiaru | Supla publikuje z ~1–2 s opóźnieniem — zastosować martwą strefę (~50 W) i minimalny interwał komend (~5 s)     |
| Limit BMS          | BMS odcina przy 100 A → max moc inwertera ≤ 2400 W (100 A × 24 V)                                              |
| Nadwyżka solarna   | Gdy cel < 0, przełącz na `POP00` (grid first) — inwerter nie rozładowuje                                       |
| Tematy Supla       | Zweryfikuj na żywo: `mosquitto_sub -h localhost -t "supla/#" -v`                                               |
| Protokół inwertera | `mpp-solar -p /dev/ttyUSB0 -P PI30 -c QPIGS` — test podstawowego odczytu; `QMOD`, `QPIRI` dla trybu i ustawień |
| Kabel RS232        | "Axpert USB communication cable" — RJ45 po stronie inwertera, USB po stronie Pi; szukaj na AliExpress/Allegro  |

---

## 6. Zasoby i dokumentacja

### GitHub — repozytoria do obserwowania

| Repozytorium         | Opis                                                                              | Link                                    |
| -------------------- | --------------------------------------------------------------------------------- | --------------------------------------- |
| syssi/esphome-jk-bms | ESPHome component dla JK BMS (firmware 15.x, JK02_32S) — **używane dla BMS**      | https://github.com/syssi/esphome-jk-bms |
| jblance/mpp-solar    | Python lib dla Voltronic/MPP Solar PI30 (RS232 QPIGS) — **używane dla inwertera** | https://github.com/jblance/mpp-solar    |
| home-assistant/core  | Home Assistant (HAOS jako VM na lokalnej maszynie)                                | https://github.com/home-assistant/core  |
| esphome/esphome      | ESPHome platforma                                                                 | https://github.com/esphome/esphome      |

### Narzędzia online

| Narzędzie                                      | Link                                                                        |
| ---------------------------------------------- | --------------------------------------------------------------------------- |
| ESPHome Web Flash (tylko Chrome/Edge)          | https://web.esphome.io                                                      |
| ESPHome API encryption key generator           | https://esphome.io/components/api.html                                      |
| syssi/esphome-jk-bms — dokumentacja protokołów | https://github.com/syssi/esphome-jk-bms#-supported-devices                  |
| mpp-solar — obsługiwane komendy PI30           | https://github.com/jblance/mpp-solar/blob/master/mppsolar/protocols/pi30.py |

### Narzędzia odrzucone (NIE używać dla tego projektu)

| Narzędzie                   | Powód odrzucenia                                                                                                    |
| --------------------------- | ------------------------------------------------------------------------------------------------------------------- |
| `grott` (johanmeijer/grott) | ECGSOLAX MIN-3K to klon Voltronic, nie Growatta — grott nie rozpozna protokołu                                      |
| `mpp-solar` JK02_32 BLE     | Działa dla firmware BMS <15; firmware 15.41 łamie `jkbleio` (hardcoded write + brak obsługi fragmentowanych ramek)  |
| `jkbms-brn`                 | Nieprzetestowane dla firmware 15.41, ten sam autor co mpp-solar → prawdopodobnie te same ograniczenia               |
| HAOS na Pi Zero 2W          | 512 MB RAM < minimum HA, brak oficjalnego obrazu dla tego boardu                                                    |
| HAOS native BLE integration | VM nie widzi hci0 hosta bez USB passthrough; chip BT na płycie głównej zwykle nie jest passthrough-owalny           |
| Sun Home REST API           | Aplikacja chmurowa dla Voltronic-family rebrandów nie ma publicznego API; tylko reverse engineering przez mitmproxy |

### Kluczowe dane dla tego konkretnego systemu

| Parametr                 | Wartość                  | Źródło                                                                          |
| ------------------------ | ------------------------ | ------------------------------------------------------------------------------- |
| BMS MAC BLE              | `C8:47:80:50:0F:8C`      | aplikacja JIKONG → Device Info                                                  |
| BMS model string         | `JK_B1A8S10P`            | `jkbms -p <MAC> -P jk02_32 -c getInfo`                                          |
| BMS firmware             | `15.41`                  | `getInfo`                                                                       |
| BMS hardware             | `15H`                    | `getInfo`                                                                       |
| BMS serial               | `51210430793`            | `getInfo`                                                                       |
| ESPHome protocol_version | `JK02_32S`               | zdeterminowane przez firmware + obecność usługi TI `f000ffc0`                   |
| Inverter protocol        | `PI30` (Voltronic QPIGS) | wnioskowane z formy dongle RS232 RJ45 + nazwy "MIN" jako Voltronic, nie Growatt |

---

## 7. Parametry LiFePO4 — tabela referencyjna

### 7.1 Parametry ogniwa OOZING 320Ah (dane producenta)

| Parametr                              | Wartość                        |
| ------------------------------------- | ------------------------------ |
| Pojemność                             | 300–320 Ah                     |
| Napięcie nominalne                    | 3,2V                           |
| Max napięcie ładowania (abs.)         | 3,65V                          |
| Napięcie odcięcia rozładowania (abs.) | 2,5V                           |
| Max prąd ładowania                    | 0,5C (160A)                    |
| Max prąd rozładowania                 | 1C / 3C (320A / 960A)          |
| Impedancja wewnętrzna                 | ≤0,3 mΩ                        |
| Temperatura ładowania                 | 0–60°C                         |
| Temperatura rozładowania              | -30–60°C                       |
| Żywotność                             | ≥8000 cykli                    |
| Wymiary (dł.×szer.×wys.)              | 174,26 × 71,5 × 207,31 ±0,5 mm |
| Waga                                  | 5,45 ±0,3 kg                   |
| Rozmiar śruby                         | M6                             |

### 7.2 Parametry pakietu 8S (konfiguracja projektu)

| Parametr                                   | Wartość            | Obliczenie                           |
| ------------------------------------------ | ------------------ | ------------------------------------ |
| Napięcie nominalne pakietu                 | 25,6V              | 8 × 3,2V                             |
| Napięcie ładowania (BMS cutoff)            | 27,6V              | 8 × 3,45V                            |
| Napięcie ładowania (abs. max)              | 29,2V              | 8 × 3,65V                            |
| Napięcie odcięcia rozładowania (BMS)       | 22,4V              | 8 × 2,8V                             |
| Napięcie odcięcia rozładowania (abs.)      | 20,0V              | 8 × 2,5V                             |
| Prąd ładowania (ustawienie inwertera)      | 80A                | ~0,25C — dla długiej żywotności      |
| Prąd rozładowania ciągły max               | 100A               | limit BMS B1A8S10PHC                 |
| Energia całkowita                          | 8,19 kWh           | 25,6V × 320Ah                        |
| Energia użyteczna (DoD 80%)                | 6,55 kWh           | 8,19 × 0,8                           |
| Waga pakietu (same ogniwa)                 | 43,6 kg            | 8 × 5,45 kg                          |
| Wymiary pakietu Bjock 8S (same ogniwa)     | 286 × 349 × 207 mm | 4×71,5 mm / 2×174 mm / wys. ogniwa   |
| Wymiary pakietu Bjock 8S (z szynami + BMS) | 286 × 349 × 237 mm | +~30 mm na szyny i BMS               |
| Min. wymiary wewnętrzne obudowy            | 306 × 369 × 257 mm | +10 mm margines z każdej strony (×2) |

---

*Wygenerowano: 12.04.2026 | Wersja: 4.2*
