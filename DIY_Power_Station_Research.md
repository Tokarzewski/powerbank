# DIY Power Station Build - Research Summary

## Current Situation

### What You Have
- **8 × LiFePO4 320Ah cells** @ $500 total (~$62.50/cell — excellent deal)
- **JK BMS 100A** (8S model for 8 cells in series)
- Goal: ~8.2kWh home backup power station for flat

### System Specifications (24V Configuration)
- **Voltage:** 8S × 3.2V = 25.6V nominal (~24V)
- **Capacity:** 320Ah @ 25.6V = **8,192Wh (8.2kWh)**
- **Lifespan:** 6000+ cycles with LiFePO4
- **Use Case:** Flat/apartment home backup (typical need: 8-12kWh)

---

## Architecture Comparison

### EcoFlow DELTA Pro 3 (All-in-One)
- **Price:** €14,199 PLN (~$2,500 USD)
- **Capacity:** 4,096Wh (expandable to 12kWh)
- **Includes:**
  - LiFePO4 battery cells
  - X-Guard BMS (40 safety parameters)
  - Integrated inverter (4000W continuous, 6000W surge)
  - Temperature management (X-Cooling 3.0)
  - UPS function (<10ms switchover)
  - Bluetooth/WiFi smart control
  - IP65 protection, fireproof shell
  - 5-year warranty
- **Advantage:** Plug-and-play, compact, integrated, warranted
- **Disadvantage:** Limited capacity, expensive

### Your DIY 24V System
```
LiFePO4 Cells (8 × 320Ah)
         ↓
    JK BMS 100A (8S)
    [You already have]
         ↓
   Enclosure/Case
   [Need to buy/build]
         ↓
  24V Hybrid Inverter
   [Need to buy]
         ↓
  Home AC loads (230V)
```

---

## What You Still Need to Buy

### 1. **Enclosure/Case** (~$50–300)
**Options:**
- **Generic metal electrical box** (~$50–150)
  - DIY approach: install BMS yourself
  - Pros: cheap, customizable
  - Cons: requires assembly knowledge
  
- **Pre-made DIY battery case** (8S variant, hard to find)
  - Pros: engineered, organized
  - Cons: limited 8S options, may need to buy 16S kit

**Typical components in case:**
- Enclosure/housing
- Copper busbars
- Fuses/breakers
- Display screen (optional)
- Connectors and terminals
- Wheels (optional, for mobility)

### 2. **24V Hybrid Inverter** (~$400–2,500)
⚠️ **Challenge:** 24V inverters are rare and expensive compared to 48V

**Budget Options (~$400–800):**
- AliExpress/Alibaba: "24V 3000W hybrid inverter"
- Pros: cheap
- Cons: unknown reliability, minimal support, potential shipping delays

**Quality/Reliable Options (~$1,500–2,500):**
- **Victron Energy MultiPlus 24/3000/70** (~€2,000+)
  - Professional grade, excellent support
  - Works perfectly with JK BMS (CAN communication)
  
- **Growatt SPH (24V variants)**
  - Good middle ground on price/quality
  
- **Deye 24V models**
  - Growing reputation, better pricing than Victron

**Inverter must support:**
- 24V DC input
- LiFePO4 battery management
- Grid-tie or hybrid mode (if you want solar later)
- CAN/RS485 communication with JK BMS (optional but recommended)

---

## Cost Breakdown

### Your DIY Build (24V, 8.2kWh)

| Component | Cost | Notes |
|-----------|------|-------|
| LiFePO4 cells (8 × 320Ah) | $500 | ✅ Already purchased |
| JK BMS 100A (8S) | $0 | ✅ Already have |
| Enclosure/case | $50–300 | Metal box or pre-made case |
| 24V Hybrid Inverter | $400–2,500 | Biggest variable cost |
| Busbars, fuses, connectors | $50–150 | Usually included in cases |
| Assembly labor | Your time | YouTube tutorials available |
| **TOTAL** | **$1,000–3,450** | Depends on inverter choice |

### Comparison: EcoFlow DELTA Pro 3
- Official EcoFlow store: **€14,199 PLN** (~$2,500 USD)
- Capacity: 4.1kWh (you get 8.2kWh for similar/less cost)
- Expandable to 12kWh (costs extra)

---

## DIY Kit Options Found

### BetterESS 48V Kit (Not suitable for you)
- **URL:** https://better-ess.com/products/48v-16s-280ah-314ah-diy-vertical-jk-box-battery-kits-with-jk-inverter-200a-bms-and-wheels
- **Specs:** 48V (16S), 280–314Ah, JK 200A BMS
- **Price:** $698 + batteries + inverter
- **Why not suitable:** You need 8S for your 8 cells, this is 16S

### Other 24V-Compatible Vendors
- **[EEL Battery](https://www.eelbattery.com)** — Has 12V kits, may have 24V
- **[Gobel Power](https://www.gobelpower.com/)** — Primarily 48V
- **[Tewaycell](https://tewaycell.com/)** — Primarily 48V
- **[Docan Power](https://www.docanpower.com/)** — May have 24V options

---

## AliExpress Red Flag Example

**Fake DELTA Pro 3 Listing:** https://pl.aliexpress.com/item/1005012079381988.html
- **Price:** 1,476 PLN (~$390 USD) — 90% cheaper than official
- **Reality:** Almost certainly counterfeit or scam
- **Red flags:**
  - 0.0% positive reviews
  - 0 units sold despite "+100k similar sold" claim
  - Generic seller with no reputation
  - 1/10th official price = 100% fraud indicator

**Lesson:** Always buy from official stores or verified retailers.

---

## Next Steps

### Immediate Actions
1. **Confirm BMS specs:** Verify your JK BMS is 8S (8 cells in series)
2. **Check for display/Bluetooth:** Does it have monitoring capability?
3. **Decide enclosure approach:** DIY box vs. pre-made case
4. **Budget for inverter:** Determine your budget ($400 budget vs. $2,000 quality)

### Recommended Path (Budget: ~$1,500 total)
```
1. Get metal electrical enclosure (~$100)
2. Install BMS + busbars + fuses inside (~$150 additional parts)
3. Buy cheapest 24V hybrid inverter from AliExpress (~$400-600)
   - Risk: quality/reliability unknown
   - Benefit: gets you operational quickly
4. Test system and monitor for issues
5. Later: upgrade to Victron/Growatt if budget allows
```

### Recommended Path (Quality: ~$2,500 total)
```
1. Buy pre-made 8S case kit or quality enclosure (~$200-300)
2. Use your JK BMS + cells
3. Buy Victron or Growatt 24V inverter (~$1,500-2,000)
   - Benefit: professional support, integrates perfectly with JK BMS
   - Professional reliability
4. Have working home backup with warranty/support
```

---

## Key Learnings

### DIY vs. EcoFlow
| Aspect | DIY | EcoFlow |
|--------|-----|---------|
| **Capacity** | 8.2kWh for you | 4.1kWh (expandable) |
| **Cost** | $1,000–3,500 | $2,500+ (with warranty) |
| **Setup** | Requires assembly | Plug-and-play |
| **Customization** | High | Limited |
| **Support** | Self-supported | Professional warranty |
| **Learning curve** | Steep | None |
| **Scalability** | Easy to expand | Limited/expensive |

### Why EcoFlow is Expensive
- Integrated inverter + BMS + battery in one sealed unit
- Engineering, testing, certification
- Compact design for portability
- 5-year warranty
- Professional support
- Mass-production economies don't apply to home backup market

### Why DIY Can Be Cheaper
- Buying components separately (less markup)
- Larger capacities possible
- No premium for integration engineering
- You provide the labor

---

## Resources & Vendors

### Enclosure/Case
- **BetterESS:** https://better-ess.com/ (EU shipping, but primarily 48V)
- **EEL Battery:** https://www.eelbattery.com (Poland warehouse)
- **Tewaycell:** https://tewaycell.com/
- **AliExpress:** Search "24V battery box" or "8S enclosure"

### 24V Inverters
- **Victron Energy:** Professional grade, expensive
- **Growatt:** Mid-range, good support
- **Deye:** Growing option, competitive pricing
- **AliExpress:** Budget option, high risk

### BMS Communication
- Your JK BMS supports CAN/RS485 communication
- Best inverters integrate with this (Victron, Growatt, Deye)
- Allows monitoring and optimization

---

## Questions to Answer Before Buying

1. **What's your inverter budget?** ($400 vs. $2,000+ drastically changes options)
2. **Do you want grid-tie capability?** (Sell excess solar back to grid)
3. **Will you add solar panels later?** (Affects inverter choice)
4. **How critical is reliability?** (DIY risk vs. commercial reliability)
5. **Do you have assembly skills?** (Or prefer pre-made)
6. **Space constraints?** (24V system will be larger than EcoFlow)
7. **Is your JK BMS the 8S model?** (Confirm compatibility)

---

## Document Status

**Date Created:** 2026-04-16  
**System:** 24V LiFePO4 DIY Power Station  
**Capacity:** 8.2kWh (~8 cells, 320Ah)  
**Status:** Waiting on inverter selection and enclosure decision
