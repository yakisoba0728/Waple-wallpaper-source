// Function: FUN_140316a10
// Addr: 140316a10
// Size: 182 bytes


undefined8 FUN_140316a10(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined1 local_18 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  if (lVar1 != 0) {
    uVar4 = *(uint *)(lVar1 + 4);
    FUN_14031a8f0(*(undefined8 *)(lVar1 + 0x108),local_18);
    uVar3 = param_2;
    if (uVar4 < param_2) {
      uVar3 = uVar4;
    }
    uVar5 = 0;
    if (uVar3 != 0) {
      if (uVar3 < 4) {
        FUN_1404210f0(param_3,local_18,(ulonglong)uVar3 << 2);
        do {
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < uVar3);
      }
      else {
        FUN_1404210f0(param_3,local_18,(ulonglong)uVar3 << 2);
        do {
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < uVar3);
      }
    }
    if ((uint)uVar5 < param_2) {
      puVar6 = (undefined4 *)(param_3 + uVar5 * 4);
      for (uVar2 = (ulonglong)(param_2 - (uint)uVar5); uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar6 = 0x8000;
        puVar6 = puVar6 + 1;
      }
    }
    return 0;
  }
  return 6;
}

