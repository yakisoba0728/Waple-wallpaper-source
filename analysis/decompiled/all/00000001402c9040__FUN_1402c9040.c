// Function: FUN_1402c9040
// Addr: 1402c9040
// Size: 364 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined2 * FUN_1402c9040(int param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  short sVar5;
  undefined1 auStack_98 [32];
  short *local_78;
  undefined2 *local_70;
  longlong local_68;
  undefined2 *local_60;
  longlong local_58;
  undefined8 local_50;
  char local_48;
  short local_40 [4];
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_98;
  lVar4 = (longlong)param_3;
  sVar5 = (short)param_1;
  if (-1 < param_3) {
    if (param_1 == 0) {
      iVar1 = _getdrive();
      sVar5 = (short)iVar1;
      if (iVar1 != 0) goto LAB_1402c90b2;
      local_40[0] = 0x2e;
      local_40[1] = 0;
    }
    else {
      iVar1 = FUN_1402c9290();
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)FUN_1402caf10();
        *puVar2 = 0xf;
        puVar2 = (undefined4 *)FUN_1402caf34();
        *puVar2 = 0xd;
        goto LAB_1402c9076;
      }
LAB_1402c90b2:
      local_40[0] = sVar5 + 0x40;
      local_40[1] = 0x3a;
      local_40[2] = 0x2e;
      local_40[3] = 0;
    }
    local_58 = lVar4;
    if (param_2 == (undefined2 *)0x0) {
      local_70 = (undefined2 *)0x0;
      local_68 = 0;
      local_50 = 0;
      local_60 = (undefined2 *)_malloc_base(lVar4 * 2);
      local_48 = local_60 != (undefined2 *)0x0;
      if (!(bool)local_48) {
        local_58 = 0;
      }
      local_78 = local_40;
      iVar1 = FUN_1402c8f54(&local_70,&local_78);
      if (iVar1 != 0) {
        if (local_48 == '\0') {
          return (undefined2 *)0x0;
        }
        thunk_FUN_1402d9040(local_60);
        return (undefined2 *)0x0;
      }
      puVar3 = (undefined2 *)FUN_1402c91ac(&local_70);
      if (local_48 != '\0') {
        thunk_FUN_1402d9040(local_60);
        return puVar3;
      }
      return puVar3;
    }
    if (0 < param_3) {
      *param_2 = 0;
      local_78 = local_40;
      local_50 = 0;
      local_48 = 0;
      local_70 = param_2;
      local_68 = lVar4;
      local_60 = param_2;
      iVar1 = FUN_1402c8ee0(&local_70,&local_78);
      if (iVar1 == 0) {
        return param_2;
      }
      return (undefined2 *)0x0;
    }
  }
  puVar2 = (undefined4 *)FUN_1402caf34();
  *puVar2 = 0x16;
LAB_1402c9076:
  FUN_1402cad8c();
  return (undefined2 *)0x0;
}

