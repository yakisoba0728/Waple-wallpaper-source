// Function: FUN_1402ab010
// Addr: 1402ab010
// Size: 361 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1402ab010(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong param_5,uint *param_6,undefined8 *param_7)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  int local_78 [2];
  undefined1 *local_70;
  longlong local_68;
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_a8;
  local_68 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  (*(code *)PTR__guard_dispatch_icall_140426ae8)();
  local_88 = &local_70;
  uVar1 = FUN_14029ac00(local_60,param_3,param_4,0x800);
  if ((local_68 != 0) && (lVar2 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(), lVar2 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar2,1);
  }
  if ((char)uVar1 < '\0') {
    *param_6 = 2;
    *param_7 = 0;
  }
  else {
    uVar3 = FUN_140292a60(local_60,&local_70,(int)(char)uVar1,local_78);
    *param_7 = uVar3;
    if ((local_70 == local_60) || (local_78[0] != 0)) {
      *param_6 = 2;
      *param_7 = 0;
    }
    if ((char)((ushort)uVar1 >> 8) != '\0') {
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
    if (*param_4 != 0) goto LAB_1402ab152;
  }
  else if (*param_4 == 0) goto LAB_1402ab152;
  *param_6 = *param_6 | 1;
LAB_1402ab152:
  lVar2 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar2;
  return param_2;
}

