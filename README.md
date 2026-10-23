# powerbank

DIY 24 V / 8 kWh home power bank. The design notes are in [DIY-Home-Powerbank-24V-8kWh-v4.md](DIY-Home-Powerbank-24V-8kWh-v4.md) (Polish); the JK BMS ESPHome configuration is [jkbms.yaml](jkbms.yaml).

## Local secrets

`jkbms.yaml` reads its Wi-Fi, API and OTA credentials with `!secret`, which ESPHome resolves from a `secrets.yaml` in the same folder. That file is git-ignored and not in the repository. Create it from the example, then fill in your own values:

```sh
cp secrets.yaml.example secrets.yaml
```

Generate a fresh API encryption key (32 bytes, base64) with `openssl rand -base64 32`, and choose your own OTA password. Then build or flash as usual, for example `uv run esphome run jkbms.yaml`.

ESPHome writes generated build output to `.esphome/`; that folder is git-ignored too.
