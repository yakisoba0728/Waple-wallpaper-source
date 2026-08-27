// Function: FUN_1402fc0e0
// Addr: 1402fc0e0
// Size: 554 bytes


int FUN_1402fc0e0(longlong param_1,char *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong local_res8;
  
  iVar2 = strcmp(param_2,"glyph-to-script-map");
  if (iVar2 == 0) {
    lVar1 = *param_3;
    if (lVar1 == 0) {
      return 0x23;
    }
    local_res8 = *(longlong *)(lVar1 + 0xb8);
    if (local_res8 == 0) {
      iVar2 = FUN_1402ff090(lVar1,&local_res8,param_1);
      if (iVar2 != 0) {
        return iVar2;
      }
      *(longlong *)(lVar1 + 0xb8) = local_res8;
      *(code **)(lVar1 + 0xc0) = FUN_1402fefb0;
    }
    param_3[1] = *(longlong *)(local_res8 + 0x10);
    return 0;
  }
  iVar2 = strcmp(param_2,"fallback-script");
  if (iVar2 == 0) {
    *(undefined4 *)param_3 = *(undefined4 *)((&PTR_DAT_140439e60)[*(uint *)(param_1 + 0x18)] + 8);
    return 0;
  }
  iVar2 = strcmp(param_2,"default-script");
  if (iVar2 != 0) {
    iVar2 = strcmp(param_2,"increase-x-height");
    if (iVar2 == 0) {
      lVar1 = *param_3;
      if (lVar1 == 0) {
        return 0x23;
      }
      local_res8 = *(longlong *)(lVar1 + 0xb8);
      if (local_res8 == 0) {
        iVar2 = FUN_1402ff090(lVar1,&local_res8,param_1);
        if (iVar2 != 0) {
          return iVar2;
        }
        *(longlong *)(lVar1 + 0xb8) = local_res8;
        *(code **)(lVar1 + 0xc0) = FUN_1402fefb0;
      }
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(local_res8 + 0x40);
      return 0;
    }
    iVar2 = strcmp(param_2,"darkening-parameters");
    if (iVar2 == 0) {
      *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)((longlong)param_3 + 4) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)((longlong)param_3 + 0x14) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 0x3c);
      *(undefined4 *)((longlong)param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x40);
      return 0;
    }
    iVar2 = strcmp(param_2,"no-stem-darkening");
    if (iVar2 != 0) {
      return 0xc;
    }
    *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x20);
    return 0;
  }
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x1c);
  return 0;
}

