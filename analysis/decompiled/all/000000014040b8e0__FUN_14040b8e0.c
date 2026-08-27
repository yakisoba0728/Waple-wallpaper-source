// Function: FUN_14040b8e0
// Addr: 14040b8e0
// Size: 483 bytes


ulonglong FUN_14040b8e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  *(byte *)(param_3 + 0xd0) = *(byte *)(param_3 + 0xd0) | 8;
  FUN_1403c13f0(param_3);
  uVar2 = *(uint *)(param_3 + 0x60);
  if (uVar2 != 0) {
    uVar6 = 0;
    uVar5 = 0;
    do {
      uVar8 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar8;
      if (uVar2 <= uVar8) break;
    } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf) ==
             *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar5 * 0x14));
    if (uVar2 != 0) {
      do {
        uVar7 = uVar5;
        uVar8 = (uint)uVar7;
        if ((uVar8 == 0xffffffff) || (uVar8 - (int)uVar6 < 0x100)) {
          uVar5 = (ulonglong)*(uint *)(param_3 + 0x60);
          if (uVar8 <= *(uint *)(param_3 + 0x60)) {
            uVar5 = uVar7;
          }
          if (1 < (uint)((int)uVar5 - (int)uVar6)) {
            uVar4 = FUN_1403a1a20(param_3,*(undefined8 *)(param_3 + 0x70),uVar6,uVar5,0xffffffff);
            FUN_1403a1bc0(param_3,*(undefined8 *)(param_3 + 0x70),uVar6,uVar5,uVar4,3);
          }
        }
        uVar5 = uVar7;
        do {
          uVar9 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar9;
          if (*(uint *)(param_3 + 0x60) <= uVar9) break;
        } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar7 * 0x14) ==
                 *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar5 * 0x14));
        uVar6 = uVar7;
      } while (uVar8 < uVar2);
    }
  }
  uVar2 = **(uint **)(param_1 + 0x98);
  if ((uVar2 != 0) && (uVar8 = *(uint *)(param_3 + 0x60), uVar8 != 0)) {
    lVar3 = *(longlong *)(param_3 + 0x70);
    uVar5 = 0;
    uVar6 = 0;
    do {
      uVar9 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar9;
      if (uVar8 <= uVar9) break;
    } while (*(char *)(lVar3 + 0xf) == *(char *)(lVar3 + 0xf + uVar6 * 0x14));
    if (uVar8 != 0) {
      do {
        uVar7 = uVar6;
        uVar9 = (uint)uVar5;
        if (*(char *)(lVar3 + 0x12 + uVar5 * 0x14) == '\x12') {
          uVar10 = 1;
        }
        else {
          uVar10 = (uint)uVar7 - uVar9;
          if (2 < uVar10) {
            uVar10 = 3;
          }
        }
        uVar10 = uVar10 + uVar9;
        while (uVar9 < uVar10) {
          uVar9 = (int)uVar5 + 1;
          puVar1 = (uint *)(lVar3 + 4 + uVar5 * 0x14);
          *puVar1 = *puVar1 | uVar2;
          uVar5 = (ulonglong)uVar9;
        }
        uVar6 = uVar7;
        do {
          uVar9 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar9;
          if (*(uint *)(param_3 + 0x60) <= uVar9) break;
        } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar7 * 0x14) ==
                 *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar6 * 0x14));
        uVar5 = uVar7;
      } while ((uint)uVar7 < uVar8);
    }
  }
  uVar5 = FUN_14040bad0(param_1,param_3);
  return uVar5 & 0xffffffffffffff00;
}

