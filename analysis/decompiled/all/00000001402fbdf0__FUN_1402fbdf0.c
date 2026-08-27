// Function: FUN_1402fbdf0
// Addr: 1402fbdf0
// Size: 747 bytes


int FUN_1402fbdf0(longlong param_1,char *param_2,byte *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  ulonglong uVar12;
  byte *local_48;
  byte local_40 [28];
  undefined4 local_24;
  
  iVar9 = strcmp(param_2,"fallback-script");
  if (iVar9 != 0) {
    iVar9 = strcmp(param_2,"default-script");
    if (iVar9 == 0) {
      if (param_4 != '\0') {
        return 6;
      }
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)param_3;
      return 0;
    }
    iVar9 = strcmp(param_2,"increase-x-height");
    if (iVar9 == 0) {
      if (param_4 != '\0') {
        return 6;
      }
      lVar8 = *(longlong *)param_3;
      if (lVar8 != 0) {
        local_48 = *(byte **)(lVar8 + 0xb8);
        if (local_48 == (byte *)0x0) {
          iVar9 = FUN_1402ff090(lVar8,&local_48,param_1);
          if (iVar9 != 0) {
            return iVar9;
          }
          *(byte **)(lVar8 + 0xb8) = local_48;
          *(code **)(lVar8 + 0xc0) = FUN_1402fefb0;
        }
        *(undefined4 *)(local_48 + 0x40) = *(undefined4 *)(param_3 + 8);
        return 0;
      }
      return 0x23;
    }
    iVar9 = strcmp(param_2,"darkening-parameters");
    if (iVar9 != 0) {
      iVar9 = strcmp(param_2,"no-stem-darkening");
      if (iVar9 != 0) {
        return 0xc;
      }
      if (param_4 != '\0') {
        iVar9 = FUN_1402c0f34(param_3,0,10);
        *(bool *)(param_1 + 0x20) = iVar9 != 0;
        return 0;
      }
      *(byte *)(param_1 + 0x20) = *param_3;
      return 0;
    }
    if (param_4 != '\0') {
      uVar12 = 0;
      do {
        uVar10 = FUN_1402c0f34(param_3,&local_48,10);
        *(undefined4 *)(local_40 + uVar12 * 4) = uVar10;
        if (*local_48 != 0x2c) {
          return 6;
        }
        if (param_3 == local_48) {
          return 6;
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
        param_3 = local_48 + 1;
      } while ((int)uVar11 < 7);
      local_24 = FUN_1402c0f34(param_3,&local_48,10);
      if ((*local_48 & 0xdf) != 0) {
        return 6;
      }
      if (param_3 == local_48) {
        return 6;
      }
      param_3 = local_40;
    }
    iVar9 = *(int *)param_3;
    if (iVar9 < 0) {
      return 6;
    }
    iVar1 = *(int *)(param_3 + 8);
    if (iVar1 < 0) {
      return 6;
    }
    iVar2 = *(int *)(param_3 + 0x10);
    if (iVar2 < 0) {
      return 6;
    }
    iVar3 = *(int *)(param_3 + 0x18);
    if (iVar3 < 0) {
      return 6;
    }
    iVar4 = *(int *)(param_3 + 4);
    if (iVar4 < 0) {
      return 6;
    }
    iVar5 = *(int *)(param_3 + 0xc);
    if (iVar5 < 0) {
      return 6;
    }
    iVar6 = *(int *)(param_3 + 0x14);
    if (iVar6 < 0) {
      return 6;
    }
    iVar7 = *(int *)(param_3 + 0x1c);
    if (iVar7 < 0) {
      return 6;
    }
    if (iVar1 < iVar9) {
      return 6;
    }
    if (iVar2 < iVar1) {
      return 6;
    }
    if (iVar3 < iVar2) {
      return 6;
    }
    if (500 < iVar4) {
      return 6;
    }
    if (500 < iVar5) {
      return 6;
    }
    if (500 < iVar6) {
      return 6;
    }
    if (500 < iVar7) {
      return 6;
    }
    *(int *)(param_1 + 0x2c) = iVar1;
    *(int *)(param_1 + 0x24) = iVar9;
    *(int *)(param_1 + 0x28) = iVar4;
    *(int *)(param_1 + 0x30) = iVar5;
    *(int *)(param_1 + 0x34) = iVar2;
    *(int *)(param_1 + 0x38) = iVar6;
    *(int *)(param_1 + 0x3c) = iVar3;
    *(int *)(param_1 + 0x40) = iVar7;
    return 0;
  }
  if (param_4 == '\0') {
    uVar12 = 0;
    if (PTR_DAT_140439e60 != (undefined *)0x0) {
      do {
        if ((*(int *)((&PTR_DAT_140439e60)[uVar12] + 8) == *(int *)param_3) &&
           (*(int *)((&PTR_DAT_140439e60)[uVar12] + 0x10) == 10)) {
          *(int *)(param_1 + 0x18) = (int)uVar12;
          break;
        }
        uVar12 = (ulonglong)((int)uVar12 + 1);
      } while ((&PTR_DAT_140439e60)[uVar12] != (undefined *)0x0);
    }
    if ((&PTR_DAT_140439e60)[uVar12] != (undefined *)0x0) {
      return 0;
    }
  }
  return 6;
}

