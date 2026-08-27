// Function: FUN_1403509a0
// Addr: 1403509a0
// Size: 537 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403509a0(longlong param_1)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_b8 [32];
  short local_98 [48];
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_b8;
  iVar6 = *(int *)(param_1 + 0x18);
  uVar10 = *(uint *)(param_1 + 0x70) & 2;
  uVar11 = 0x80000000;
  if (uVar10 != 0) {
    uVar11 = 0x100;
  }
  iVar9 = 0;
  if (iVar6 < *(int *)(param_1 + 0x1c)) {
    do {
      iVar8 = *(int *)(param_1 + 0x10);
      iVar7 = 0;
      piVar5 = *(int **)(*(longlong *)(param_1 + 0x40) +
                        (longlong)(iVar6 - *(int *)(param_1 + 0x18)) * 8);
      if (piVar5 != *(int **)(param_1 + 0x38)) {
        do {
          if ((iVar7 != 0) && (iVar8 < *piVar5)) {
            uVar2 = iVar7 >> 9;
            uVar4 = ~uVar2;
            if ((uVar11 & uVar2) == 0) {
              uVar4 = uVar2;
            }
            if ((0xff < (int)uVar4) && (uVar10 == 0)) {
              uVar4 = 0xff;
            }
            lVar3 = (longlong)iVar9;
            *(char *)(local_98 + lVar3 * 3 + 2) = (char)uVar4;
            local_98[lVar3 * 3] = (short)iVar8;
            iVar9 = iVar9 + 1;
            local_98[lVar3 * 3 + 1] = (short)*piVar5 - (short)iVar8;
            if (iVar9 == 0x10) {
              (**(code **)(param_1 + 0x88))(iVar6,0x10,local_98,*(undefined8 *)(param_1 + 0x90));
              iVar9 = 0;
            }
          }
          iVar7 = iVar7 + piVar5[1] * 0x200;
          if ((iVar7 - piVar5[2] != 0) && (*(int *)(param_1 + 0x10) <= *piVar5)) {
            uVar2 = iVar7 - piVar5[2] >> 9;
            uVar4 = ~uVar2;
            if ((uVar11 & uVar2) == 0) {
              uVar4 = uVar2;
            }
            if ((0xff < (int)uVar4) && (uVar10 == 0)) {
              uVar4 = 0xff;
            }
            lVar3 = (longlong)iVar9;
            iVar9 = iVar9 + 1;
            *(char *)(local_98 + lVar3 * 3 + 2) = (char)uVar4;
            local_98[lVar3 * 3] = (short)*piVar5;
            local_98[lVar3 * 3 + 1] = 1;
            if (iVar9 == 0x10) {
              (**(code **)(param_1 + 0x88))(iVar6,0x10,local_98,*(undefined8 *)(param_1 + 0x90));
              iVar9 = 0;
            }
          }
          iVar8 = *piVar5;
          piVar5 = *(int **)(piVar5 + 4);
          iVar8 = iVar8 + 1;
        } while (piVar5 != *(int **)(param_1 + 0x38));
        if (iVar7 != 0) {
          uVar2 = iVar7 >> 9;
          uVar4 = ~uVar2;
          if ((uVar11 & uVar2) == 0) {
            uVar4 = uVar2;
          }
          if ((0xff < (int)uVar4) && (uVar10 == 0)) {
            uVar4 = 0xff;
          }
          lVar3 = (longlong)iVar9;
          sVar1 = *(short *)(param_1 + 0x14);
          *(char *)(local_98 + lVar3 * 3 + 2) = (char)uVar4;
          local_98[lVar3 * 3 + 1] = sVar1 - (short)iVar8;
          iVar9 = iVar9 + 1;
          local_98[lVar3 * 3] = (short)iVar8;
        }
      }
      if (iVar9 != 0) {
        (**(code **)(param_1 + 0x88))(iVar6,iVar9,local_98,*(undefined8 *)(param_1 + 0x90));
        iVar9 = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x1c));
  }
  return;
}

