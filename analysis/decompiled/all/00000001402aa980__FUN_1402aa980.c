// Function: FUN_1402aa980
// Addr: 1402aa980
// Size: 347 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1402aa980(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong param_5,uint *param_6,undefined4 *param_7)

{
  undefined2 uVar1;
  undefined4 uVar2;
  longlong lVar3;
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
  uVar1 = FUN_14029ac00(local_50,param_3,param_4,*(undefined4 *)(param_5 + 0x18));
  if ((local_58 != 0) && (lVar3 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(), lVar3 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar3,1);
  }
  if ((char)uVar1 < '\0') {
    *param_6 = 2;
    *param_7 = 0;
  }
  else {
    uVar2 = FUN_140292860(local_50,&local_60,(int)(char)uVar1,local_68);
    *param_7 = uVar2;
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
    if (*param_4 != 0) goto LAB_1402aaab0;
  }
  else if (*param_4 == 0) goto LAB_1402aaab0;
  *param_6 = *param_6 | 1;
LAB_1402aaab0:
  lVar3 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar3;
  return param_2;
}

