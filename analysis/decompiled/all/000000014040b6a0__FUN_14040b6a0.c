// Function: FUN_14040b6a0
// Addr: 14040b6a0
// Size: 280 bytes


ulonglong FUN_14040b6a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  *(byte *)(param_3 + 0xd0) = *(byte *)(param_3 + 0xd0) | 8;
  uVar4 = FUN_1403c0ca0(param_3);
  uVar1 = *(uint *)(param_3 + 0x60);
  if (uVar1 == 0) {
    return uVar4 & 0xffffffffffffff00;
  }
  uVar8 = 0;
  uVar6 = 0;
  do {
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
    if (uVar1 <= uVar5) break;
  } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf) ==
           *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar6 * 0x14));
  if (uVar1 != 0) {
    do {
      uVar7 = uVar6;
      uVar5 = (uint)uVar7;
      if ((uVar5 == 0xffffffff) ||
         (uVar2 = uVar5 - (int)uVar8, uVar4 = (ulonglong)uVar2, uVar2 < 0x100)) {
        uVar6 = (ulonglong)*(uint *)(param_3 + 0x60);
        if (uVar5 <= *(uint *)(param_3 + 0x60)) {
          uVar6 = uVar7;
        }
        uVar2 = (int)uVar6 - (int)uVar8;
        uVar4 = (ulonglong)uVar2;
        if (1 < uVar2) {
          uVar3 = FUN_1403a1a20(param_3,*(undefined8 *)(param_3 + 0x70),uVar8,uVar6,0xffffffff);
          uVar4 = FUN_1403a1bc0(param_3,*(undefined8 *)(param_3 + 0x70),uVar8,uVar6,uVar3,3);
        }
      }
      uVar6 = uVar7;
      do {
        uVar2 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar2;
        if (*(uint *)(param_3 + 0x60) <= uVar2) break;
      } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar7 * 0x14) ==
               *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar6 * 0x14));
      uVar8 = uVar7;
    } while (uVar5 < uVar1);
  }
  return uVar4 & 0xffffffffffffff00;
}

