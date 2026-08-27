// Function: FUN_140367e30
// Addr: 140367e30
// Size: 433 bytes


void FUN_140367e30(longlong param_1,longlong param_2,ulonglong param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = (longlong)(param_3 - 1) >> 1;
  lVar6 = param_2;
  while (lVar6 < lVar9) {
    lVar3 = lVar6 * 2 + 2;
    iVar4 = *(int *)(param_1 + -0x10 + lVar3 * 0x10);
    piVar8 = (int *)(param_1 + lVar3 * 0x10);
    if (*piVar8 == iVar4) {
      if ((char)piVar8[2] == '\0') {
        if (((piVar8[-3] ^ piVar8[1]) & 0xfffffffeU) != 0) {
          uVar7 = 1;
          if (piVar8[1] < piVar8[-3]) {
            uVar7 = 0xffffffff;
          }
          goto LAB_140367edc;
        }
      }
      if ((uint)piVar8[3] < (uint)piVar8[-1]) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = (uint)((uint)piVar8[-1] < (uint)piVar8[3]);
      }
    }
    else {
      uVar7 = 1;
      if (*piVar8 < iVar4) {
        uVar7 = 0xffffffff;
      }
    }
LAB_140367edc:
    lVar10 = lVar6 * 2 + 1;
    if (-1 < (int)uVar7) {
      lVar10 = lVar3;
    }
    puVar1 = (undefined8 *)(param_1 + lVar10 * 0x10);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(param_1 + lVar6 * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    lVar6 = lVar10;
  }
  if ((lVar6 == lVar9) && ((param_3 & 1) == 0)) {
    puVar2 = (undefined8 *)(param_1 + -0x10 + param_3 * 0x10);
    uVar5 = puVar2[1];
    puVar1 = (undefined8 *)(param_1 + lVar6 * 0x10);
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    lVar6 = param_3 - 1;
  }
  while (param_2 < lVar6) {
    lVar9 = lVar6 + -1 >> 1;
    piVar8 = (int *)(lVar9 * 0x10 + param_1);
    if (*piVar8 == *param_4) {
      if ((char)piVar8[2] == '\0') {
        if (((piVar8[1] ^ param_4[1]) & 0xfffffffeU) != 0) {
          uVar7 = 1;
          if (piVar8[1] < param_4[1]) {
            uVar7 = 0xffffffff;
          }
          goto LAB_140367fb0;
        }
      }
      if ((uint)piVar8[3] < (uint)param_4[3]) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = (uint)((uint)param_4[3] < (uint)piVar8[3]);
      }
    }
    else {
      uVar7 = 1;
      if (*piVar8 < *param_4) {
        uVar7 = 0xffffffff;
      }
    }
LAB_140367fb0:
    if (-1 < (int)uVar7) break;
    uVar5 = *(undefined8 *)(piVar8 + 2);
    puVar1 = (undefined8 *)(param_1 + lVar6 * 0x10);
    *puVar1 = *(undefined8 *)piVar8;
    puVar1[1] = uVar5;
    lVar6 = lVar9;
  }
  uVar5 = *(undefined8 *)(param_4 + 2);
  puVar1 = (undefined8 *)(param_1 + lVar6 * 0x10);
  *puVar1 = *(undefined8 *)param_4;
  puVar1[1] = uVar5;
  return;
}

