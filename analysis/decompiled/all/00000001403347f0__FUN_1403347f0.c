// Function: FUN_1403347f0
// Addr: 1403347f0
// Size: 834 bytes


void FUN_1403347f0(longlong param_1,int *param_2,int *param_3,undefined8 param_4,longlong param_5,
                  char param_6)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a0;
  int local_98;
  int local_88 [10];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_1404dc110 ^ (ulonglong)auStack_c8;
  uVar11 = 0;
  local_88[0] = *param_2;
  local_88[1] = *param_3;
  cVar1 = *(char *)(param_5 + 9);
  iVar12 = 0;
  do {
    lVar8 = *(longlong *)(param_1 + 0x10);
    lVar6 = (longlong)iVar12;
    piVar4 = local_88 + lVar6 + 2;
    cVar2 = *(char *)(lVar6 + param_5);
    iVar5 = local_88[lVar6];
    *piVar4 = iVar5;
    if (cVar2 != '\0') {
      uVar10 = (uint)uVar11;
      if (uVar10 < (uint)(*(longlong *)(param_1 + 0x18) - lVar8 >> 3)) {
        iVar9 = *(int *)(lVar8 + 4 + uVar11 * 8);
        piVar3 = (int *)(lVar8 + uVar11 * 8);
        if (iVar9 == 1) {
          iVar9 = *piVar3;
          iVar7 = iVar9 + (iVar9 >> 0x1f) + 0x2000 >> 0xe;
        }
        else {
          iVar7 = *piVar3;
          if (iVar9 == 2) {
            uVar11 = (ulonglong)(uVar10 + 1);
            *piVar4 = iVar5 + iVar7 * 0x10000;
            goto LAB_1403348f5;
          }
        }
        uVar11 = (ulonglong)(uVar10 + 1);
        *piVar4 = iVar5 + iVar7;
      }
      else {
        piVar3 = *(int **)(param_1 + 8);
        if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
          *piVar3 = 0x82;
        }
        lVar8 = *(longlong *)(param_1 + 0x10);
        uVar11 = (ulonglong)(uVar10 + 1);
        *piVar4 = iVar5;
      }
    }
LAB_1403348f5:
    iVar12 = iVar12 + 1;
  } while (iVar12 < (int)((cVar1 != '\0') + 9));
  if (cVar1 == '\0') {
    local_5c = *param_3;
  }
  uVar10 = (uint)uVar11;
  if (param_6 == '\0') {
    if (*(char *)(param_5 + 10) == '\0') {
      local_60 = *param_2;
    }
    else if (uVar10 < (uint)(*(longlong *)(param_1 + 0x18) - lVar8 >> 3)) {
      iVar12 = *(int *)(lVar8 + 4 + uVar11 * 8);
      iVar5 = *(int *)(lVar8 + uVar11 * 8);
      if (iVar12 == 1) {
        iVar5 = iVar5 + (iVar5 >> 0x1f) + 0x2000 >> 0xe;
      }
      else if (iVar12 == 2) {
        local_60 = local_60 + iVar5 * 0x10000;
        uVar11 = (ulonglong)(uVar10 + 1);
        goto LAB_140334ac9;
      }
      local_60 = local_60 + iVar5;
      uVar11 = (ulonglong)(uVar10 + 1);
    }
    else {
      piVar4 = *(int **)(param_1 + 8);
      if ((piVar4 != (int *)0x0) && (*piVar4 == 0)) {
        *piVar4 = 0x82;
        lVar8 = *(longlong *)(param_1 + 0x10);
      }
      uVar11 = (ulonglong)(uVar10 + 1);
    }
LAB_140334ac9:
    local_58 = local_60;
    if (*(char *)(param_5 + 0xb) != '\0') {
      if ((uint)uVar11 < (uint)(*(longlong *)(param_1 + 0x18) - lVar8 >> 3)) {
        iVar12 = *(int *)(lVar8 + 4 + uVar11 * 8);
        iVar5 = *(int *)(lVar8 + uVar11 * 8);
        if (iVar12 == 1) {
          iVar5 = iVar5 + (iVar5 >> 0x1f) + 0x2000 >> 0xe;
        }
        else if (iVar12 == 2) {
          iVar12 = local_5c + iVar5 * 0x10000;
          goto LAB_1403349b4;
        }
        iVar12 = local_5c + iVar5;
      }
      else {
        piVar4 = *(int **)(param_1 + 8);
        iVar12 = local_5c;
        if ((piVar4 != (int *)0x0) && (*piVar4 == 0)) {
          *piVar4 = 0x82;
        }
      }
      goto LAB_1403349b4;
    }
  }
  else {
    iVar12 = local_60 - *param_2;
    if (iVar12 < 0) {
      iVar12 = *param_2 - local_60;
    }
    iVar5 = local_5c - *param_3;
    if (iVar5 < 0) {
      iVar5 = *param_3 - local_5c;
    }
    if (uVar10 < (uint)(*(longlong *)(param_1 + 0x18) - lVar8 >> 3)) {
      iVar9 = *(int *)(lVar8 + 4 + uVar11 * 8);
      iVar7 = *(int *)(lVar8 + uVar11 * 8);
      if (iVar9 == 1) {
        iVar7 = iVar7 + (iVar7 >> 0x1f) + 0x2000 >> 0xe;
      }
      else if (iVar9 == 2) {
        iVar7 = iVar7 << 0x10;
      }
    }
    else {
      piVar4 = *(int **)(param_1 + 8);
      if ((piVar4 != (int *)0x0) && (*piVar4 == 0)) {
        *piVar4 = 0x82;
      }
      iVar7 = 0;
    }
    if (iVar12 <= iVar5) {
      local_58 = *param_2;
      iVar12 = local_5c + iVar7;
      goto LAB_1403349b4;
    }
    local_60 = local_60 + iVar7;
    local_58 = local_60;
  }
  iVar12 = *param_3;
  local_58 = local_60;
LAB_1403349b4:
  iVar5 = local_58;
  iVar9 = 0;
  local_54 = iVar12;
  lVar8 = 0;
  do {
    local_98 = local_88[lVar8 + 7];
    local_a0 = local_88[lVar8 + 6];
    local_a8 = local_88[lVar8 + 5];
    FUN_1403357b0(param_4,local_88[lVar8 + 2],local_88[lVar8 + 3],local_88[lVar8 + 4]);
    iVar9 = iVar9 + 6;
    lVar8 = lVar8 + 6;
  } while (iVar9 != 0xc);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  *param_2 = iVar5;
  *param_3 = iVar12;
  func_0x0001402ed2f0(local_50 ^ (ulonglong)auStack_c8);
  return;
}

