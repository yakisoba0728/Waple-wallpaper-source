// Function: FUN_1402f9da0
// Addr: 1402f9da0
// Size: 697 bytes


undefined8 FUN_1402f9da0(longlong param_1,char *param_2,byte *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  byte *local_48;
  byte local_40 [28];
  undefined4 local_24;
  
  iVar7 = strcmp(param_2,"darkening-parameters");
  if (iVar7 != 0) {
    iVar7 = strcmp(param_2,"hinting-engine");
    if (iVar7 == 0) {
      lVar10 = 0;
      if (param_4 == '\0') {
        if (*(int *)param_3 != 1) {
          return 7;
        }
      }
      else {
        do {
          lVar11 = lVar10 + 1;
          if (param_3[lVar10] != (&DAT_1404368c0)[lVar10]) {
            return 6;
          }
          lVar10 = lVar11;
        } while (lVar11 != 6);
      }
      *(undefined4 *)(param_1 + 0x38) = 1;
      return 0;
    }
    iVar7 = strcmp(param_2,"no-stem-darkening");
    if (iVar7 == 0) {
      if (param_4 != '\0') {
        iVar7 = FUN_1402c0f34(param_3,0,10);
        *(bool *)(param_1 + 0x3c) = iVar7 != 0;
        return 0;
      }
      *(byte *)(param_1 + 0x3c) = *param_3;
      return 0;
    }
    iVar7 = strcmp(param_2,"random-seed");
    if (iVar7 != 0) {
      return 0xc;
    }
    if (param_4 != '\0') {
      iVar9 = FUN_1402c0f34(param_3,0,10);
      iVar7 = 0;
      if (-1 < iVar9) {
        iVar7 = iVar9;
      }
      *(int *)(param_1 + 0x60) = iVar7;
      return 0;
    }
    iVar7 = 0;
    if (-1 < *(int *)param_3) {
      iVar7 = *(int *)param_3;
    }
    *(int *)(param_1 + 0x60) = iVar7;
    return 0;
  }
  if (param_4 != '\0') {
    uVar13 = 0;
    do {
      uVar8 = FUN_1402c0f34(param_3,&local_48,10);
      *(undefined4 *)(local_40 + uVar13 * 4) = uVar8;
      if (*local_48 != 0x2c) {
        return 6;
      }
      if (param_3 == local_48) {
        return 6;
      }
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      param_3 = local_48 + 1;
    } while ((int)uVar12 < 7);
    local_24 = FUN_1402c0f34(param_3,&local_48,10);
    if ((*local_48 & 0xdf) != 0) {
      return 6;
    }
    if (param_3 == local_48) {
      return 6;
    }
    param_3 = local_40;
  }
  iVar7 = *(int *)param_3;
  if (((((-1 < iVar7) && (iVar9 = *(int *)(param_3 + 8), -1 < iVar9)) &&
       (iVar1 = *(int *)(param_3 + 0x10), -1 < iVar1)) &&
      (((iVar2 = *(int *)(param_3 + 0x18), -1 < iVar2 && (iVar3 = *(int *)(param_3 + 4), -1 < iVar3)
        ) && ((iVar4 = *(int *)(param_3 + 0xc), -1 < iVar4 &&
              ((iVar5 = *(int *)(param_3 + 0x14), -1 < iVar5 &&
               (iVar6 = *(int *)(param_3 + 0x1c), -1 < iVar6)))))))) &&
     ((iVar7 <= iVar9 &&
      (((((iVar9 <= iVar1 && (iVar1 <= iVar2)) && (iVar3 < 0x1f5)) &&
        ((iVar4 < 0x1f5 && (iVar5 < 0x1f5)))) && (iVar6 < 0x1f5)))))) {
    *(int *)(param_1 + 0x48) = iVar9;
    *(int *)(param_1 + 0x40) = iVar7;
    *(int *)(param_1 + 0x44) = iVar3;
    *(int *)(param_1 + 0x4c) = iVar4;
    *(int *)(param_1 + 0x50) = iVar1;
    *(int *)(param_1 + 0x54) = iVar5;
    *(int *)(param_1 + 0x58) = iVar2;
    *(int *)(param_1 + 0x5c) = iVar6;
    return 0;
  }
  return 6;
}

