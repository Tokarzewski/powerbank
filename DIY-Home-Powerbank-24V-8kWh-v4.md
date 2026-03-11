# DIY Home Powerbank 24V 8kWh — Dokumentacja projektu v4

---

## 1. Założenia systemu

| Parametr | Wartość |
|---|---|
| Konfiguracja | 8S Bjock (8 ogniw szeregowo, układ 2×4) |
| Napięcie nominalne | 24V (8 × 3,2V) |
| Pojemność | 320Ah (8S — napięcia się sumują, pojemność bez zmiany) |
| Energia | ~8,19 kWh (użyteczna ~6,55 kWh przy DoD 80%) |
| Topologia | AC-coupled (panele na mikroinwerterze EcoFlow Stream) |
| Inwerter akumulatorowy | ECGSOLAX MIN-3K 24V + WiFi |
| BMS | JK BMS B1A8S10PHC (8S, 100A, BT+RS485) |
| Integracja | MQTT (Raspberry Pi Zero 2W + Python) |

---

## 2. BOM — Pełna lista zakupów

### 2.1 Zamówione z AliExpress

| # | Komponent | Wariant | Cena | Link | Status |
|---|---|---|---|---|---|
| 1 | Ogniwa LiFePO4 OOZING 320Ah | 8 szt. | 1952 zł | [AliExpress](https://pl.aliexpress.com/item/1005008365255618.html) | ✅ Zamówione |
| | ↳ *Gratis (na 8 szt.): taśma z włókna siatkowego ×2, płyta izolacyjna epoksydowa ×10, miedziana szyna zbiorcza ×8, osłona zacisku ×8 kpl.* | | | | |
| 2 | JK BMS B1A8S10PHC | 8S 100A BT+RS485 | 127,50 zł | [AliExpress](https://pl.aliexpress.com/item/1005007612738588.html) | ✅ Zamówione |
| 3 | ECGSOLAX MIN-3K | 3KW 24V + WiFi | 604 zł | [AliExpress](https://pl.aliexpress.com/item/1005010303644717.html) | ✅ Zamówione |
| 4 | ESP32-WROOM-32U DevKit | 1Set-Type-C (z anteną) | 26,69 zł | [AliExpress](https://pl.aliexpress.com/item/1005010136688086.html) | ✅ Zamówione |
| 5 | LM2596 DC-DC Buck | 1PCS | 4,64 zł | [AliExpress](https://pl.aliexpress.com/item/1005007795274654.html) | ✅ Zamówione — do innych zastosowań 5V w przyszłości |
| 6 | ANL fuse 200A + holder | 1Set/200A | 44,75 zł | [AliExpress](https://pl.aliexpress.com/item/1005005333041562.html) | ✅ Zamówione |
| 7 | ANL holder osobny | Gniazdo/200A | 29,99 zł | [AliExpress](https://pl.aliexpress.com/item/1005001282853678.html) | ✅ Zamówione |
| 8 | DC switch 1P 150A | 150A/1 | 54,99 zł | [AliExpress](https://pl.aliexpress.com/item/1005008516700696.html) | ✅ Zamówione |
| 9 | Kabel DC 25mm² z końcówkami | ~2m | ~38 zł | [AliExpress](https://pl.aliexpress.com/item/1005003444381103.html) | ✅ Zamówione |
| 10 | Dual TYPE-C DC-DC 6V-36V→5V 3A | 1PCS | 5,40 zł | [AliExpress](https://pl.aliexpress.com/item/1005007422356449.html) | ✅ Zamówione |
| 11 | Kabel USB-C do USB-C 60W 25cm | czarny/0,25m × 2 | 2,68 zł | [AliExpress](https://pl.aliexpress.com/item/1005006350363185.html) | ✅ Zamówione |

**Łączny koszt AliExpress: ~2 890 zł**

### 2.2 Do kupienia lokalnie

| # | Komponent | Ilość | Cena szac. |
|---|---|---|---|
| 1 | Śruby M6×12mm | 25 szt. | ~10 zł |
| 2 | Podkładki M6 | 50 szt. | ~8 zł |
| 3 | Nakrętki M6 | 25 szt. | ~8 zł |
| 4 | Obudowa niemetalowa na ogniwa (tworzywo) | 1 szt. | ~150 zł |
| 5 | Gaśnica CO₂ 2kg | 1 szt. | ~100 zł |
| 6 | Czujnik dymu/temperatury WiFi | 1 szt. | ~50 zł |
| 7 | Materiały instalacyjne (opaski, koszulki, taśma elektr.) | — | ~20 zł |
| 8 | Raspberry Pi Zero 2W | 512MB RAM, WiFi, BT | 72,90 zł (Botland) |
| 9 | Karta microSD 32GB (Samsung/SanDisk Endurance) | 1 szt. | ~30 zł |
| 10 | Kabel USB-C → microUSB | ~25cm | ~10 zł |

**Łączny koszt lokalnie: ~459 zł** 

### 2.3 Dołączone gratis z ogniwami OOZING (nie kupować!)

| Komponent | Ilość (na 8 ogniw) | Uwagi |
|---|---|---|
| Taśma z włókna siatkowego | 2 szt. | Do spinania pakietu ogniw |
| Płyta izolacyjna epoksydowa | 10 szt. | Separatory między ogniwami i na końcach |
| Miedziana szyna zbiorcza (cynowana) | 8 szt. | Do połączeń szeregowych 8S — nie kupuj osobno! |
| Osłona zacisku akumulatora | 8 kpl. | Nakładki na bieguny ogniw |

**ŁĄCZNY KOSZT CAŁOŚCI: ~3 349 zł**

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
[JK BMS]
    └─ Bluetooth ────────────────────────────────────► [ESP32]
                                                        │ WiFi → MQTT
                                                        │
[ECGSOLAX MIN-3K]                                       │
    └─ WiFi ──► [grott na RPi Zero 2W] ──────────────► MQTT
                                                        │
                                              [Mosquitto na RPi Zero 2W]
                                                        │
                                              [skrypt Python na RPi Zero 2W]
                                                        │
                                         [Automatyzacje zero-export]
                                         [Monitoring SoC / temperatury]
                                         [Powiadomienia push — ntfy.sh]
```

### 3.6 Schemat komunikacji inwertera — grott (WiFi)

```
ECGSOLAX MIN-3K
    └─ WiFi (wbudowane) ──► router domowy ──► Raspberry Pi Zero 2W
                                                    │
                                             grott (Python)
                                             nasłuchuje ruch inwertera,
                                             przechwytuje dane i publikuje na MQTT
                                                    │
                                             Mosquitto MQTT Broker (na tym samym RPi)
```

> grott działa jako lokalny proxy — inwerter wysyła dane jak do chmury Growatt,
> grott je przechwytuje i przekazuje na lokalny broker MQTT.
> Brak kabli, brak dodatkowego sprzętu.

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

#### 6.4 Instalacja grott (dane z inwertera)
- [ ] Zainstaluj Python i grott:
  ```
  sudo apt install -y python3-pip
  pip3 install grott
  ```
- [ ] Skonfiguruj `~/.grott/grott.ini`:
  ```
  [Generic]
  mode = proxy
  [MQTT]
  host = localhost
  port = 1883
  ```
- [ ] Podłącz inwerter ECGSOLAX do WiFi przez menu LCD
- [ ] Przekieruj ruch inwertera na RPi — w routerze ustaw statyczny DNS lub przekierowanie IP chmury Growatt na adres RPi
- [ ] Uruchom grott jako usługa systemd (`Restart=always`)
- [ ] Sprawdź dane: `mosquitto_sub -h localhost -t "energy/#" -v`

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

```yaml
esphome:
  name: jk-bms
  platform: ESP32
  board: esp32dev

wifi:
  ssid: "TwojeSSID"
  password: "TwojeHaslo"
  ap:
    ssid: "JK-BMS Fallback"
    password: "fallback123"

api:
  encryption:
    key: "twoj_klucz_api"

ota:
  password: "twoje_haslo_ota"

logger:

mqtt:
  broker: 192.168.1.xxx  # IP twojego serwera HA
  port: 1883
  topic_prefix: jkbms
  discovery: true

bluetooth_proxy:
  active: true

esp32_ble_tracker:
  scan_parameters:
    active: true

external_components:
  - source: github://syssi/esphome-jk-bms@main
    refresh: 0d

jk_bms_ble:
  - id: jk_bms_ble_0
    mac_address: "XX:XX:XX:XX:XX:XX"  # MAC z aplikacji JIKONG

sensor:
  - platform: jk_bms_ble
    jk_bms_ble_id: jk_bms_ble_0
    state_of_charge:
      name: "JK BMS State of Charge"
    total_voltage:
      name: "JK BMS Total Voltage"
    current:
      name: "JK BMS Current"
    power:
      name: "JK BMS Power"
    capacity_remaining:
      name: "JK BMS Capacity Remaining"
    min_cell_voltage:
      name: "JK BMS Min Cell Voltage"
    max_cell_voltage:
      name: "JK BMS Max Cell Voltage"
    delta_cell_voltage:
      name: "JK BMS Delta Cell Voltage"
    temperature_sensor_1:
      name: "JK BMS Temperature 1"
    temperature_sensor_2:
      name: "JK BMS Temperature 2"
    charging_cycles:
      name: "JK BMS Cycles"
```

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

| Język | Biblioteka MQTT | Harmonogram | Powiadomienia |
|---|---|---|---|
| **Python** | `paho-mqtt` | `schedule` lub `APScheduler` | `requests` → Pushover / Ntfy.sh |
| **JavaScript (Node.js)** | `mqtt` (npm) | `node-cron` | `axios` → Pushover / Ntfy.sh |

Oba podejścia są równoważne. Python jest prostszy do uruchomienia na VPS/RPi; Node.js jeśli już znasz JS.

#### Co musi robić skrypt

| Zadanie | Mechanizm |
|---|---|
| Połączyć się z brokerem Mosquitto | klient MQTT — `connect(broker_ip, 1883)` |
| Subskrybować 3 tematy | `jkbms/…/state_of_charge`, `jkbms/…/temperature`, `grott/…/pvpowertoday` |
| Przy każdej wiadomości sprawdzić warunek | if/else na wartości liczbowej |
| Wysłać alert | HTTP POST do Pushover lub Ntfy.sh |
| Wysłać komendę do inwertera | MQTT publish → `grott/set/output_source_priority` |
| Uruchomić regułę o 17:00 | cron/scheduler w tle |
| Działać ciągle jako usługa | systemd (`Restart=always`) |

#### Broker MQTT

Mosquitto zainstalowany lokalnie lub na VPS — ten sam co w wersji z HA. ESP32 łączy się z nim bez zmian, wystarczy podać nowy IP brokera w konfiguracji ESPHome. Grott również publikuje na ten sam broker.

#### Powiadomienia push bez HA

- **Ntfy.sh** — bezpłatny, open-source, aplikacja na Android/iOS, wysyłka przez prosty HTTP POST na `https://ntfy.sh/twoj_kanal`
- **Pushover** — płatny jednorazowo (~5$), bardziej niezawodny, dobra aplikacja mobilna

---

## 6. Zasoby i dokumentacja

### GitHub — repozytoria do obserwowania

| Repozytorium | Opis | Link |
|---|---|---|
| johanmeijer/grott | Lokalny proxy dla inwerterów Growatt/ECGSOLAX → MQTT | https://github.com/johanmeijer/grott |
| syssi/esphome-jk-bms | ESPHome component dla JK BMS | https://github.com/syssi/esphome-jk-bms |
| home-assistant/core | Home Assistant | https://github.com/home-assistant/core |
| esphome/esphome | ESPHome platforma | https://github.com/esphome/esphome |

### Narzędzia online

| Narzędzie | Link |
|---|---|
| ESPHome Web Flash | https://web.esphome.io |
| grott — dokumentacja konfiguracji | https://github.com/johanmeijer/grott/wiki |
| grott — integracja z MQTT | https://github.com/johanmeijer/grott/wiki/MQTT |

---

## 7. Parametry LiFePO4 — tabela referencyjna

### 7.1 Parametry ogniwa OOZING 320Ah (dane producenta)

| Parametr | Wartość |
|---|---|
| Pojemność | 300–320 Ah |
| Napięcie nominalne | 3,2V |
| Max napięcie ładowania (abs.) | 3,65V |
| Napięcie odcięcia rozładowania (abs.) | 2,5V |
| Max prąd ładowania | 0,5C (160A) |
| Max prąd rozładowania | 1C / 3C (320A / 960A) |
| Impedancja wewnętrzna | ≤0,3 mΩ |
| Temperatura ładowania | 0–60°C |
| Temperatura rozładowania | -30–60°C |
| Żywotność | ≥8000 cykli |
| Wymiary (dł.×szer.×wys.) | 174,26 × 71,5 × 207,31 ±0,5 mm |
| Waga | 5,45 ±0,3 kg |
| Rozmiar śruby | M6 |

### 7.2 Parametry pakietu 8S (konfiguracja projektu)

| Parametr | Wartość | Obliczenie |
|---|---|---|
| Napięcie nominalne pakietu | 25,6V | 8 × 3,2V |
| Napięcie ładowania (BMS cutoff) | 27,6V | 8 × 3,45V |
| Napięcie ładowania (abs. max) | 29,2V | 8 × 3,65V |
| Napięcie odcięcia rozładowania (BMS) | 22,4V | 8 × 2,8V |
| Napięcie odcięcia rozładowania (abs.) | 20,0V | 8 × 2,5V |
| Prąd ładowania (ustawienie inwertera) | 80A | ~0,25C — dla długiej żywotności |
| Prąd rozładowania ciągły max | 100A | limit BMS B1A8S10PHC |
| Energia całkowita | 8,19 kWh | 25,6V × 320Ah |
| Energia użyteczna (DoD 80%) | 6,55 kWh | 8,19 × 0,8 |
| Waga pakietu (same ogniwa) | 43,6 kg | 8 × 5,45 kg |
| Wymiary pakietu Bjock 8S (same ogniwa) | 286 × 349 × 207 mm | 4×71,5 mm / 2×174 mm / wys. ogniwa |
| Wymiary pakietu Bjock 8S (z szynami + BMS) | 286 × 349 × 237 mm | +~30 mm na szyny i BMS |
| Min. wymiary wewnętrzne obudowy | 306 × 369 × 257 mm | +10 mm margines z każdej strony (×2) |

---

*Wygenerowano: 11.03.2026 | Wersja: 4.1*
