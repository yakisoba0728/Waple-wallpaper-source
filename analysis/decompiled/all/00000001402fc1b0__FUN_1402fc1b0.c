// Function: FUN_1402fc1b0
// Addr: 1402fc1b0
// Size: 517 bytes


int FUN_1402fc1b0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong local_res8;
  
  iVar2 = FUN_140421e50(param_2,"glyph-to-script-map");
  if (iVar2 == 0) {
    lVar1 = *param_3;
    if (lVar1 == 0) {
      return 0x23;
    }
    local_res8 = *(longlong *)(lVar1 + 0xb8);
    if (local_res8 == 0) {
      iVar2 = func_0x0001402ff160(lVar1,&local_res8,param_1);
      if (iVar2 != 0) {
        return iVar2;
      }
      *(longlong *)(lVar1 + 0xb8) = local_res8;
      *(undefined8 *)(lVar1 + 0xc0) = 0x1402ff080;
    }
    param_3[1] = *(longlong *)(local_res8 + 0x10);
    return 0;
  }
  iVar2 = FUN_140421e50(param_2,"fallback-script");
  if (iVar2 == 0) {
    *(undefined4 *)param_3 = *(undefined4 *)((&PTR_PTR_140439f30)[*(uint *)(param_1 + 0x18)] + 8);
    return 0;
  }
  iVar2 = FUN_140421e50(param_2,"default-script");
  if (iVar2 != 0) {
    iVar2 = FUN_140421e50(param_2,"increase-x-height");
    if (iVar2 == 0) {
      lVar1 = *param_3;
      if (lVar1 == 0) {
        return 0x23;
      }
      local_res8 = *(longlong *)(lVar1 + 0xb8);
      if (local_res8 == 0) {
        iVar2 = func_0x0001402ff160(lVar1,&local_res8,param_1);
        if (iVar2 != 0) {
          return iVar2;
        }
        *(longlong *)(lVar1 + 0xb8) = local_res8;
        *(undefined8 *)(lVar1 + 0xc0) = 0x1402ff080;
      }
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(local_res8 + 0x40);
      return 0;
    }
    iVar2 = FUN_140421e50(param_2,"darkening-parameters");
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
    iVar2 = FUN_140421e50(param_2,"no-stem-darkening");
    if (iVar2 != 0) {
      return 0xc;
    }
    *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x20);
    return 0;
  }
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x1c);
  return 0;
}

