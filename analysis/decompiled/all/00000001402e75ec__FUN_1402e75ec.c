// Function: FUN_1402e75ec
// Addr: 1402e75ec
// Size: 455 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1402e75ec(undefined8 param_1,int param_2,undefined8 param_3,uint param_4,
                      longlong *param_5)

{
  int iVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStackY_108 [32];
  undefined4 local_d8 [4];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStackY_108;
  lVar3 = 0;
  *param_5 = 0;
  if (param_2 == 1) {
    iVar1 = FUN_1402e7470(param_1,param_3,param_4,local_c8);
    if (iVar1 != 0) {
      lVar3 = _calloc_base((longlong)iVar1,1);
      *param_5 = lVar3;
      FUN_1402d9040(0);
      if (*param_5 == 0) {
        return 0xffffffff;
      }
      iVar1 = FUN_1402d9c70();
      if (iVar1 == 0) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    DVar2 = GetLastError();
    if (DVar2 != 0x7a) {
      return 0xffffffff;
    }
    iVar1 = FUN_1402e7470(param_1,param_3,param_4,0);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    lVar4 = _calloc_base((longlong)iVar1,1);
    if (lVar4 != 0) {
      iVar1 = FUN_1402e7470(param_1,param_3,param_4,lVar4);
LAB_1402e76eb:
      if (iVar1 != 0) {
        *param_5 = lVar4;
        lVar4 = lVar3;
        goto LAB_1402e76fd;
      }
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 0) {
        return 0xffffffff;
      }
      local_d8[0] = 0;
      iVar1 = FUN_1402dc1dc(param_3,param_4 | 0x20000000,local_d8,2);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      *(undefined1 *)param_5 = (undefined1)local_d8[0];
      return 0;
    }
    iVar1 = FUN_1402dc1dc(param_3,param_4,0,0);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    lVar4 = _calloc_base((longlong)iVar1,2);
    if (lVar4 != 0) {
      iVar1 = FUN_1402dc1dc(param_3,param_4,lVar4,iVar1);
      goto LAB_1402e76eb;
    }
  }
  lVar3 = 0xffffffff;
LAB_1402e76fd:
  FUN_1402d9040(lVar4);
  return lVar3;
}

