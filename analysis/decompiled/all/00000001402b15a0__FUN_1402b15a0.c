// Function: FUN_1402b15a0
// Addr: 1402b15a0
// Size: 179 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
FUN_1402b15a0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined2 param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  undefined2 local_98;
  undefined1 *local_90;
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1404dc040 ^ (ulonglong)auStack_b8;
  iVar1 = FUN_1400162a0(local_68,0x40,&DAT_140473fb8,param_6);
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  if (iVar1 < 0) {
    *param_2 = local_78;
    param_2[1] = uStack_74;
    param_2[2] = uStack_70;
    param_2[3] = uStack_6c;
  }
  else {
    local_88 = (longlong)iVar1;
    local_90 = local_68;
    local_98 = param_5;
    FUN_1402a4c50(param_1,param_2,&local_78,param_4);
  }
  return param_2;
}

