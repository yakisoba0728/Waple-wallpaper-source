// Function: FUN_1402afee0
// Addr: 1402afee0
// Size: 173 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined2 *
FUN_1402afee0(longlong param_1,undefined2 *param_2,undefined2 *param_3,undefined1 param_4,
             undefined1 *param_5)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_68;
  if (param_2 != param_3) {
    do {
      local_48 = 0;
      iVar1 = FUN_140291bd0(local_40,*param_2,&local_48,param_1 + 0x30);
      uVar2 = local_40[0];
      if (iVar1 != 1) {
        uVar2 = param_4;
      }
      param_2 = param_2 + 1;
      *param_5 = uVar2;
      param_5 = param_5 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

