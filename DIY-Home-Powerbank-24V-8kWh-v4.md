# DIY Home Powerbank 24V 8kWh — Dokumentacja projektu v4

---

## 1. Założenia systemu

| Parametr | Wartość |
|---|---|
| Konfiguracja | 8S (8 ogniw szeregowo) |
| Napięcie nominalne | 24V (8 × 3,2V) |
| Pojemność | 8 × 320Ah = 320Ah |
| Energia | ~7,68 kWh (użyteczna ~6,14 kWh przy DoD 80%) |
| Topologia | AC-coupled (panele na mikroinwerterze EcoFlow Stream) |
| Inwerter akumulatorowy | ECGSOLAX MIN-3K 24V + WiFi |
| BMS | JK BMS B1A8S10PHC (8S, 100A, BT+RS485) |
| Integracja | Home Assistant via MQTT |

---

## 2. BOM — Pełna lista zakupów

### 2.1 Zamówione z AliExpress

| # | Komponent | Wariant | Cena | Link | Status |
|---|---|---|---|---|---|
| 1 | Ogniwa LiFePO4 OOZING 320Ah | 8 szt. | 1952 zł | [AliExpress](https://pl.aliexpress.com/item/1005007612738588.html) | ✅ Kupione wcześniej |
| 2 | JK BMS B1A8S10PHC | 8S 100A BT+RS485 | 127,50 zł | [AliExpress](https://pl.aliexpress.com/item/1005007612738588.html) | ✅ Zamówione |
| 3 | ECGSOLAX MIN-3K | 3KW 24V + WiFi | 604 zł | [AliExpress](https://pl.aliexpress.com/item/1005005524045001.html) | ✅ Zamówione |
| 4 | ESP32-WROOM-32U DevKit | 1Set-Type-C (z anteną) | 26,69 zł | [AliExpress](https://pl.aliexpress.com/item/1005006285069274.html) | ✅ Zamówione |
| 5 | Wemos D1 Mini TYPE-C | D1 Mini TYPE-C | 8,01 zł + 4,44 zł | [AliExpress](https://pl.aliexpress.com/item/1005003145192517.html) | ✅ Zamówione |
| 6 | MAX3232 RS232→TTL | 1PCS | 5,29 zł | [AliExpress](https://pl.aliexpress.com/item/1005004685043134.html) | ✅ Zamówione |
| 7 | LM2596 DC-DC Buck | 1PCS | 4,64 zł | [AliExpress](https://pl.aliexpress.com/item/1005009823447391.html) | ✅ Zamówione — do innych zastosowań 5V w przyszłości |
| 8 | ANL fuse 200A + holder | 1Set/200A | 44,75 zł | [AliExpress](https://pl.aliexpress.com/item/1005004324587585.html) | ✅ Zamówione |
| 9 | ANL holder osobny | Gniazdo/200A | 29,99 zł | [AliExpress](https://pl.aliexpress.com/item/1005003942847123.html) | ✅ Zamówione |
| 10 | DC switch 1P 150A | 150A/1 | 54,99 zł | [AliExpress](https://pl.aliexpress.com/item/1005005041392302.html) | ✅ Zamówione |
| 11 | Kabel DC 25mm² z końcówkami | ~2m | ~38 zł | [AliExpress](https://pl.aliexpress.com/item/1005003521415226.html) | ✅ Zamówione |
| 12 | Dual TYPE-C DC-DC 6V-36V→5V 3A | 1PCS | 5,40 zł | [AliExpress](https://pl.aliexpress.com/item/1005007422356449.html) | ✅ Zamówione |
| 13 | Kabel USB-C do USB-C 60W 25cm | czarny/0,25m × 2 | 2,68 zł | [AliExpress](https://pl.aliexpress.com/item/1005006350363185.html) | ✅ Zamówione |

**Łączny koszt AliExpress: ~2 908 zł**

### 2.2 Do kupienia lokalnie

| # | Komponent | Ilość | Cena szac. |
|---|---|---|---|
| 1 | Śruby M6×12mm | 25 szt. | ~10 zł |
| 2 | Podkładki M6 | 50 szt. | ~8 zł |
| 3 | Nakrętki M6 | 25 szt. | ~8 zł |
| 4 | Kabel RJ45 ~1m | 1 szt. | ~5 zł |
| 5 | Obudowa metalowa na ogniwa | 1 szt. | ~200 zł |
| 6 | Gaśnica CO₂ 2kg | 1 szt. | ~100 zł |
| 7 | Czujnik dymu/temperatury WiFi | 1 szt. | ~50 zł |
| 8 | Kabel uziemiający 6mm² żółto-zielony | ~2m | ~15 zł |
| 9 | Pręt uziemiający | 1 szt. | ~30 zł |
| 10 | Materiały instalacyjne (opaski, koszulki, taśma) | — | ~30 zł |

**Łączny koszt lokalnie: ~456 zł**

**ŁĄCZNY KOSZT CAŁOŚCI: ~3 364 zł**

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
   [Akumulator 24V 320Ah 8S]
        │
   [JK BMS B1A8S10PHC]
        │
   [8× Ogniwo OOZING LiFePO4 320Ah]
```

### 3.2 Schemat akumulatora (8S)

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
              ├─ USB-C ──[kabel 25cm 60W]──► Wemos D1 Mini TYPE-C
              │                              (Solar2MQTT / RS485 / WiFi)
              │
              └─ USB-C ──[kabel 25cm 60W]──► ESP32-WROOM-32U TYPE-C
                                             (ESPHome / JK BMS Bluetooth)

Zasilanie BMS — samodzielne:
    Ogniwa ──[sampling line 9-żyłowa]──► JK BMS (brak zewnętrznego zasilacza)
```

### 3.5 Schemat komunikacji

```
[JK BMS]
    ├─ Bluetooth ────────────────────────────────────► [ESP32]
    │                                                  │ WiFi → MQTT
    └─ RS485 A/B ──► [MAX3232 TTL] ──► UART ──► [D1 Mini]
                                                       │ WiFi → MQTT
                                                       │
                                               [Mosquitto MQTT Broker]
                                                       │
                                               [Home Assistant]
                                                       │
                                        [Automatyzacje zero-export]
                                        [Monitoring SoC / temperatury]
```

### 3.6 Schemat RS485 — szczegóły okablowania

```
ECGSOLAX MIN-3K          MAX3232 moduł          Wemos D1 Mini
RS485-A ─────────────── A                              │
RS485-B ─────────────── B                              │
GND ─────────────────── GND ──────────────────── GND   │
                         TX ───────────────────── RX (D7/GPIO13)
                         RX ───────────────────── TX (D8/GPIO15)
                        VCC ──────────────────── 5V

```

---

## 4. Kolejność montażu

### ETAP 0 — Przygotowanie IT (przed dostawą sprzętu)
- [ ] Zainstaluj Proxmox VE na Minisforum AI X470
- [ ] Utwórz VM: Home Assistant OS
- [ ] Zainstaluj dodatki HA: Mosquitto MQTT, ESPHome, File Editor
- [ ] Skonfiguruj sieć WiFi w HA, sprawdź adres IP brokera MQTT
- [ ] Przygotuj obudowę metalową (otwory wentylacyjne Ø8mm, otwory kablowe, śruby uziemienia)

### ETAP 1 — Przygotowanie ogniw
- [ ] Sprawdź napięcie każdego ogniwa multimetrem — powinno być ~3,2–3,3V
- [ ] Wyrównaj napięcia (top-balance): ładuj każde ogniwo do 3,65V i rozładuj do 3,2V
- [ ] Oczyść zaciski z tlenków (papier ścierny 400, alkohol izopropylowy)
- [ ] Ułóż ogniwa w konfiguracji 8S w obudowie (bieguny na zmianę +/-)

### ETAP 2 — Połączenia szyn prądowych
- [ ] Podłącz szyny międzyogniwowe M6 (śruba + 2 podkładki + nakrętka)
- [ ] Moment dokręcenia: 4–6 Nm
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
- [ ] Moment dokręcenia: 8–10 Nm
- [ ] Włącz wyłącznik DC
- [ ] Konfiguracja inwertera (menu LCD):
  - Battery type: Lithium (LiFePO4)
  - Bulk voltage: 29,2V
  - Float voltage: 27,2V
  - Low DC cutoff: 22,4V
  - Charge current: 40A
  - Output mode: SBU (Solar → Battery → Utility)

### ETAP 6 — Komunikacja RS485 (Wemos D1 Mini)
- [ ] Lutuj/podłącz MAX3232: VCC=3.3V, GND, TX→RX(D7), RX→TX(D8) na D1 Mini
- [ ] RS485-A i RS485-B z MAX3232 → kabel RJ45 → port COM inwertera
- [ ] Podłącz D1 Mini USB-C do komputera
- [ ] Flash firmware Solar2MQTT: https://flash.solar2mqtt.de
- [ ] Skonfiguruj: WiFi SSID/hasło, MQTT broker IP, port 1883, device=ECGSOLAX
- [ ] Sprawdź w MQTT Explorer czy dane inwertera się pojawiają

### ETAP 7 — BMS Bluetooth (ESP32)
- [ ] Podłącz ESP32 USB-C do komputera
- [ ] Wejdź na https://web.esphome.io → wgraj YAML z sekcji 5.1
- [ ] Zeskanuj Bluetooth w apce JIKONG → zanotuj MAC adres BMS
- [ ] Uzupełnij MAC w YAML i wgraj ponownie
- [ ] Sprawdź w HA: sensor.jk_bms_state_of_charge i inne encje

### ETAP 8 — Zasilanie elektroniki (Dual TYPE-C)
- [ ] Podłącz moduł Dual TYPE-C DC-DC: B+ i B- akumulatora (wejście 24V)
- [ ] **Najpierw sprawdź multimetrem napięcie na wyjściu USB-C: powinno być 5,0V**
- [ ] Podłącz kabel USB-C 25cm → USB-C port 1 → Wemos D1 Mini
- [ ] Podłącz kabel USB-C 25cm → USB-C port 2 → ESP32
- [ ] Odłącz kable USB od komputera — od teraz ESP zasilane z akumulatora
- [ ] Sprawdź w HA: obydwa urządzenia online

### ETAP 9 — Bezpieczeństwo
- [ ] Zamontuj czujnik dymu/temperatury WiFi nad akumulatorem
- [ ] Skonfiguruj alert w HA przy temp > 45°C (sekcja 5.2)
- [ ] Umieść gaśnicę CO₂ 2kg w pobliżu i oznacz
- [ ] Podłącz uziemienie: obudowa metalowa → kabel 6mm² → pręt uziemiający
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
        entity_id: sensor.solar2mqtt_pv_power
        above: 500
    condition:
      - condition: numeric_state
        entity_id: sensor.jk_bms_state_of_charge
        below: 90
    action:
      - service: mqtt.publish
        data:
          topic: "solar2mqtt/set/output_source_priority"
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
          topic: "solar2mqtt/set/output_source_priority"
          payload: "SUB"
```

---

## 6. Zasoby i dokumentacja

### GitHub — repozytoria do obserwowania

| Repozytorium | Opis | Link |
|---|---|---|
| softwarecrash/Solar2MQTT | Firmware D1 Mini, integracja inwerterów | https://github.com/softwarecrash/Solar2MQTT |
| syssi/esphome-jk-bms | ESPHome component dla JK BMS | https://github.com/syssi/esphome-jk-bms |
| home-assistant/core | Home Assistant | https://github.com/home-assistant/core |
| esphome/esphome | ESPHome platforma | https://github.com/esphome/esphome |

### Narzędzia online

| Narzędzie | Link |
|---|---|
| Solar2MQTT Flash (online) | https://flash.solar2mqtt.de |
| ESPHome Web Flash | https://web.esphome.io |
| Solar2MQTT Wiki | https://github.com/softwarecrash/Solar2MQTT/wiki |
| ECGSOLAX — potwierdzenie działania | https://github.com/softwarecrash/Solar2MQTT/issues/136 |

---

## 7. Parametry LiFePO4 — tabela referencyjna

| Parametr | Wartość | Obliczenie |
|---|---|---|
| Napięcie nominalne pakietu | 25,6V | 8 × 3,2V |
| Napięcie pełnego ładowania | 29,2V | 8 × 3,65V |
| Napięcie odcięcia rozładowania | 22,4V | 8 × 2,8V |
| Prąd ładowania max | 40A | ~0,125C (320Ah) |
| Prąd rozładowania ciągły max | 100A | limit BMS |
| Energia całkowita | 7,68 kWh | 25,6V × 300Ah |
| Energia użyteczna (DoD 80%) | 6,14 kWh | 7,68 × 0,8 |
| Żywotność | >4000 cykli | przy DoD 80% |
| Temperatura ładowania | 0–45°C | — |
| Temperatura rozładowania | -20–60°C | — |

---

*Wygenerowano: 10.03.2026 | Wersja: 4.0*
