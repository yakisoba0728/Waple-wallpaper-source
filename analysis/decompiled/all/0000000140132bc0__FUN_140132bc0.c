// Function: FUN_140132bc0
// Addr: 140132bc0
// Size: 502 bytes


/* WARNING: Removing unreachable block (ram,0x000140132d5c) */
/* WARNING: Removing unreachable block (ram,0x000140132d65) */
/* WARNING: Removing unreachable block (ram,0x000140132d72) */
/* WARNING: Removing unreachable block (ram,0x000140132d79) */
/* WARNING: Removing unreachable block (ram,0x000140132d2c) */
/* WARNING: Removing unreachable block (ram,0x000140132d3b) */
/* WARNING: Removing unreachable block (ram,0x000140132d47) */
/* WARNING: Removing unreachable block (ram,0x000140132d4f) */
/* WARNING: Removing unreachable block (ram,0x000140132db1) */

void FUN_140132bc0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  lVar2 = DAT_1404e8ed0;
  lVar3 = DAT_1404e8ed0 - DAT_1404e8ec8 >> 3;
  if (1 < (ulonglong)(lVar3 * -0xf0f0f0f0f0f0f0f)) {
    lVar3 = DAT_1404e8ec8 + 0x88;
    for (lVar4 = lVar3; lVar4 != lVar2; lVar4 = lVar4 + 0x88) {
      FUN_140017240(lVar4 + 0x58);
      FUN_140017240(lVar4 + 0x38);
      FUN_140017240(lVar4 + 0x18);
    }
    DAT_1404e8ed0 = lVar3;
    return;
  }
  if (lVar3 * -0xf0f0f0f0f0f0f0f == 0) {
    if ((DAT_1404e8ed8 - DAT_1404e8ec8 >> 3) * -0xf0f0f0f0f0f0f0f == 0) {
      lVar1 = FUN_14028af20(0x88);
      local_28 = 1;
      local_20 = lVar3 * 8 + lVar1;
      puVar5 = &DAT_1404e8ec8;
      local_38 = &DAT_1404e8ec8;
      local_18 = FUN_1401338b0(local_20,lVar3 * 0xf0f0f0f0f0f0f0f + 1);
      lVar2 = DAT_1404e8ec8;
      lVar3 = DAT_1404e8ed0;
      lVar4 = lVar1;
      if (DAT_1404e8ec8 != DAT_1404e8ed0) {
        do {
          FUN_140133980(lVar1);
          lVar1 = lVar1 + 0x88;
          lVar2 = lVar2 + 0x88;
        } while (lVar2 != lVar3);
      }
      local_30 = 0;
      FUN_1401340e0(puVar5,lVar4,1,1);
      FUN_140134030(&local_38);
      return;
    }
    DAT_1404e8ed0 = FUN_1401338b0(DAT_1404e8ed0,lVar3 * 0xf0f0f0f0f0f0f0f + 1);
  }
  return;
}

