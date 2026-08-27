// Function: FUN_140360150
// Addr: 140360150
// Size: 565 bytes


bool FUN_140360150(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  uint param_5,int *param_6,uint param_7,int *param_8,uint param_9)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  int *piVar10;
  ulonglong uVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  bool bVar15;
  
  uVar11 = 0;
  uVar12 = (uint)param_3;
  if (*(undefined **)(*(longlong *)(param_1 + 0x90) + 0x70) != PTR_FUN_1404df498) {
    bVar15 = true;
    uVar8 = uVar11;
    if (uVar12 == 0) {
      return true;
    }
    do {
      uVar1 = *param_4;
      *param_8 = 0;
      *param_6 = 0;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
      uVar7 = uVar11;
      if (lVar3 != 0) {
        uVar7 = *(ulonglong *)(lVar3 + 0x50);
      }
      iVar6 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x70))
                        (param_1,*(undefined8 *)(param_1 + 0x98),uVar1,param_6,param_8,uVar7);
      bVar9 = false;
      if (iVar6 != 0) {
        bVar9 = bVar15;
      }
      param_4 = (undefined4 *)((longlong)param_4 + (ulonglong)param_5);
      uVar14 = (int)uVar8 + 1;
      param_6 = (int *)((longlong)param_6 + (ulonglong)param_7);
      param_8 = (int *)((longlong)param_8 + (ulonglong)param_9);
      uVar8 = (ulonglong)uVar14;
      bVar15 = bVar9;
    } while (uVar14 < uVar12);
    return bVar9;
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x90) + 0x10);
  uVar8 = uVar11;
  if (lVar4 != 0) {
    uVar8 = *(ulonglong *)(lVar4 + 0x60);
  }
  iVar6 = (**(code **)(*(longlong *)(lVar3 + 0x90) + 0x80))
                    (lVar3,*(undefined8 *)(lVar3 + 0x98),param_3,param_4,param_5,param_6,param_7,
                     param_8,param_9,uVar8);
  if ((*(char *)(lVar3 + 0x30) != '\0') && (iVar6 != 0)) {
    iVar2 = -*(int *)(lVar3 + 0x40);
    if (-1 < *(int *)(lVar3 + 0x28)) {
      iVar2 = *(int *)(lVar3 + 0x40);
    }
    iVar5 = -*(int *)(lVar3 + 0x44);
    if (-1 < *(int *)(lVar3 + 0x2c)) {
      iVar5 = *(int *)(lVar3 + 0x44);
    }
    if (uVar12 != 0) {
      uVar8 = uVar11;
      piVar10 = param_8;
      piVar13 = param_6;
      do {
        if (*(char *)(lVar3 + 0x3c) == '\0') {
          *piVar13 = *piVar13 + iVar2;
          *piVar10 = *piVar10 + iVar5;
        }
        piVar13 = (int *)((longlong)piVar13 + (ulonglong)param_7);
        piVar10 = (int *)((longlong)piVar10 + (ulonglong)param_9);
        uVar14 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar14;
      } while (uVar14 < uVar12);
      bVar15 = true;
      goto LAB_140360301;
    }
  }
  bVar15 = iVar6 != 0;
  if (iVar6 == 0) {
    return false;
  }
  if (uVar12 == 0) {
    return bVar15;
  }
LAB_140360301:
  do {
    iVar6 = *param_6;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x28);
      if ((iVar2 != 0) && (iVar2 != *(int *)(param_1 + 0x28))) {
        iVar6 = (int)(((longlong)iVar6 * (longlong)*(int *)(param_1 + 0x28)) / (longlong)iVar2);
      }
    }
    *param_6 = iVar6;
    iVar6 = *param_8;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
      if ((iVar2 != 0) && (iVar2 != *(int *)(param_1 + 0x2c))) {
        iVar6 = (int)(((longlong)iVar6 * (longlong)*(int *)(param_1 + 0x2c)) / (longlong)iVar2);
      }
    }
    *param_8 = iVar6;
    param_6 = (int *)((longlong)param_6 + (ulonglong)param_7);
    param_8 = (int *)((longlong)param_8 + (ulonglong)param_9);
    uVar14 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar14;
  } while (uVar14 < uVar12);
  return bVar15;
}

