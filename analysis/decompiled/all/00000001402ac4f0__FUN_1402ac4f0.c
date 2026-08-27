// Function: FUN_1402ac4f0
// Addr: 1402ac4f0
// Size: 347 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1402ac4f0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong param_5,uint *param_6,undefined8 *param_7)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  int local_68 [2];
  undefined1 *local_60;
  longlong local_58;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_1404dc040 ^ (ulonglong)auStack_98;
  local_58 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  (*(code *)PTR__guard_dispatch_icall_140426ae8)();
  local_78 = &local_60;
  uVar1 = FUN_14029ba50(local_50,param_3,param_4,*(undefined4 *)(param_5 + 0x18));
  if ((local_58 != 0) && (lVar2 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(), lVar2 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar2,1);
  }
  if ((char)uVar1 < '\0') {
    *param_6 = 2;
    *param_7 = 0;
  }
  else {
    uVar3 = FUN_140292670(local_50,&local_60,(int)(char)uVar1,local_68);
    *param_7 = uVar3;
    if (((local_60 == local_50) || (local_68[0] != 0)) || ((char)((ushort)uVar1 >> 8) != '\0')) {
      *param_6 = 2;
    }
  }
  if ((char)param_3[1] == '\0') {
    FUN_1402a7e60(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_1402a7e60(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_1402ac620;
  }
  else if (*param_4 == 0) goto LAB_1402ac620;
  *param_6 = *param_6 | 1;
LAB_1402ac620:
  lVar2 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar2;
  return param_2;
}

