// Function: FUN_14032d570
// Addr: 14032d570
// Size: 822 bytes


int FUN_14032d570(longlong param_1,undefined8 param_2,char *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  int local_res8 [2];
  int local_res20 [2];
  
  uVar8 = *(undefined8 *)(param_1 + 0x80);
  local_res20[0] = 0;
  plVar7 = (longlong *)FUN_1402f7910(param_2,*(undefined8 *)(param_1 + 0x70));
  if (plVar7 == (longlong *)0x0) {
    puVar9 = (ulonglong *)FUN_1402f7910(param_2,param_1 + 0x98);
    if (puVar9 == (ulonglong *)0x0) {
      uVar12 = *(undefined8 *)(param_1 + 0x80);
      local_res8[0] = 0;
      lVar10 = FUN_1402f7910(param_2,param_1 + 0x98);
      iVar6 = local_res8[0];
      if (lVar10 == 0) {
        lVar10 = FUN_1402f7ff0(uVar12,0x18,*(int *)(param_1 + 0x90),*(int *)(param_1 + 0x90) + 1,
                               *(undefined8 *)(param_1 + 0x88),local_res8);
        *(longlong *)(param_1 + 0x88) = lVar10;
        iVar6 = local_res8[0];
        if (local_res8[0] == 0) {
          puVar1 = (undefined8 *)(lVar10 + (ulonglong)*(uint *)(param_1 + 0x90) * 0x18);
          uVar11 = FUN_1402f8160(uVar12,param_2,local_res8);
          *puVar1 = uVar11;
          iVar6 = local_res8[0];
          if (local_res8[0] == 0) {
            puVar1[1] = 1;
            puVar1[2] = 0;
            iVar6 = FUN_1402f78f0(uVar11,*(int *)(param_1 + 0x90) + 0x52,param_1 + 0x98,uVar12);
            if (iVar6 == 0) {
              *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
            }
          }
        }
      }
      if (iVar6 != 0) {
        return iVar6;
      }
      local_res20[0] = iVar6;
      puVar9 = (ulonglong *)FUN_1402f7910(param_2,param_1 + 0x98);
    }
    uVar2 = *(uint *)(param_1 + 0x50);
    uVar3 = *(uint *)(param_1 + 0x54);
    if (uVar3 == uVar2) {
      uVar12 = FUN_1402f7ff0(uVar8,0x18,uVar2,uVar2 + 1,*(undefined8 *)(param_1 + 0x58),local_res20)
      ;
      *(undefined8 *)(param_1 + 0x58) = uVar12;
      if (local_res20[0] != 0) {
        return local_res20[0];
      }
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      uVar3 = *(uint *)(param_1 + 0x54);
    }
    uVar4 = *puVar9;
    if (uVar4 < 0x52) {
      ppuVar13 = &PTR_s_ADD_STYLE_NAME_14043fff0 + uVar4 * 3;
    }
    else {
      ppuVar13 = (undefined **)(*(longlong *)(param_1 + 0x88) + (uVar4 - 0x52) * 0x18);
    }
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar3 * 0x18);
    *puVar1 = *ppuVar13;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(ppuVar13 + 1);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)((longlong)ppuVar13 + 0xc);
    iVar6 = *(int *)(ppuVar13 + 1);
    if (iVar6 == 1) {
      puVar1[2] = 0;
      if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
        uVar12 = FUN_1402f8160(uVar8,param_3,local_res20);
        puVar1[2] = uVar12;
        if (local_res20[0] != 0) {
          return local_res20[0];
        }
      }
    }
    else if (iVar6 == 2) {
      uVar5 = FUN_14032d8b0(param_3);
      *(undefined4 *)(puVar1 + 2) = uVar5;
    }
    else if (iVar6 == 3) {
      uVar5 = FUN_14032da10(param_3);
      *(undefined4 *)(puVar1 + 2) = uVar5;
    }
    local_res20[0] =
         FUN_1402f78f0(*puVar1,*(undefined4 *)(param_1 + 0x54),*(undefined8 *)(param_1 + 0x70),uVar8
                      );
    if (local_res20[0] == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x58) + *plVar7 * 0x18;
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x58) + 8 + *plVar7 * 0x18);
    if (iVar6 == 1) {
      FUN_1402f7f90(uVar8,*(undefined8 *)(lVar10 + 0x10));
      *(undefined8 *)(lVar10 + 0x10) = 0;
      if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
        uVar8 = FUN_1402f8160(uVar8,param_3,local_res20);
        *(undefined8 *)(lVar10 + 0x10) = uVar8;
        return local_res20[0];
      }
    }
    else {
      if (iVar6 == 2) {
        uVar5 = FUN_14032d8b0(param_3);
        *(undefined4 *)(lVar10 + 0x10) = uVar5;
        return local_res20[0];
      }
      if (iVar6 == 3) {
        uVar5 = FUN_14032da10(param_3);
        *(undefined4 *)(lVar10 + 0x10) = uVar5;
        return local_res20[0];
      }
    }
  }
  return local_res20[0];
}

