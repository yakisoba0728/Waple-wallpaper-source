// Function: FUN_140316c80
// Addr: 140316c80
// Size: 201 bytes


undefined8 FUN_140316c80(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 local_28 [4];
  
  lVar6 = *(longlong *)(param_1 + 0x2e0);
  if (lVar6 != 0) {
    uVar4 = *(uint *)(lVar6 + 4);
    FUN_14031a8f0(*(undefined8 *)(lVar6 + 0x108),local_28);
    uVar3 = param_2;
    if (uVar4 < param_2) {
      uVar3 = uVar4;
    }
    uVar5 = 0;
    if (uVar3 != 0) {
      do {
        lVar1 = uVar5 * 4;
        uVar2 = FUN_14031a850(lVar6 + 0xa8 + uVar5 * 0x18,local_28[uVar5]);
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        *(undefined4 *)(lVar1 + param_3) = uVar2;
      } while (uVar4 < uVar3);
    }
    if ((uint)uVar5 < param_2) {
      FUN_1404217a0(param_3 + uVar5 * 4,0,(ulonglong)(param_2 - (uint)uVar5) << 2);
    }
    return 0;
  }
  return 6;
}

