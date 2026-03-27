# Offsets+Decrypts

Auto-generated offsets, decryptions, and signatures for Rust — updated every patch.

> **Live offsets:** [offsets.win](https://offsets.win)

---

## Output Files

| File | Description |
|---|---|
| `offsets.h` | C++ header with all class field offsets |
| `decryptions.h` | C++ decryption & encryption routines (BaseNetworkable, ActiveItem, PlayerInventory, Convar_Graphics) |
| `signatures.txt` | IDA-style byte signatures for TypeInfo pointers |

## Namespaces

### Offsets

`BasePlayer` · `BaseEntity` · `BaseCombatEntity` · `PlayerModel` · `PlayerInventory` · `Item` · `HeldEntity` · `BaseViewModel` · `ItemDefinition` · `BaseProjectile` · `Projectile` · `HitTest` · `RecoilProperties` · `BuildingPrivlidge` · `ModelState` · `Camera` · `GameManager` · `TodSky` · `ItemIcon` · and more

### Decryptions

- **BaseNetworkable** — ClientEntities / EntityList decryption
- **ActiveItem** — clActiveItem, UserID, PlayerInventory, clothingAccuracyBonus
- **PlayerInventory** — container pointer decryption
- **Convar_Graphics** — int, float, and FOV encrypt/decrypt

### Signatures

BaseNetworkable_C · ListComponent_Projectile_C · TodSky_C · MainCamera_C · ItemIcon_C · Climate_C · Convar TypeInfos

## Usage

### C++ (offsets.h + decryptions.h)

```cpp
#include "offsets.h"
#include "decryptions.h"

// read encrypted entity list
auto encrypted = read<uintptr_t>(base_networkable + Offsets::BaseNetworkable::static_fields);
auto entity_list = Decryptions::BaseNetworkable_Decryption::base_networkable_two(encrypted);

// read player name
auto names = read<uintptr_t>(player + Offsets::BasePlayer::playerNames);

// decrypt active item
auto encrypted_item = read<uintptr_t>(player + Offsets::BasePlayer::clActiveItem);
auto active_item = Decryptions::ActiveItem_Decryption::decrypt_active_item(encrypted_item);
```

### JSON API (offsets.json)

```json
{
  "offsets": {
    "BasePlayer": {
      "playerNames": "0x2c8",
      "PlayerEyes": "0x5c0",
      "PlayerInventory": "0x688"
    }
  }
}
```

Fetch from your site for auto-updating:

```cpp
// pseudo
auto offset = http_get("https://offsets.win/api/v1/offset?class=BasePlayer&property=PlayerEyes");
```

### Signature Scanning

```cpp
auto bn_c = pattern_scan(game_assembly,
    "8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 "
    "48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? F0 83 0C 24 00 "
    "C6 05 C8 2B E1 0C 01 48 8B 15 ?? ?? ?? ??");
```

---

## API

Full API documentation for auto-updating offsets, decryptions, and signatures in your project:

**[offsets.win/api-docs](https://offsets.win/api-docs)**

---

## Notes

This repo provides **offsets, decryptions, and signatures only** — the dumper itself is not distributed. if u wish to purchase inquire me on discord @decamped 

## Contact

For issues, questions, or incorrect offsets/signatures — reach out on **Discord: @decamped**
