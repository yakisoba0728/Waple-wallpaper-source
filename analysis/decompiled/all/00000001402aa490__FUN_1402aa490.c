// Function: FUN_1402aa490
// Addr: 1402aa490
// Size: 429 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1402aa490(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong param_5,uint *param_6,short *param_7)

{
  undefined2 uVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  int local_88 [2];
  longlong *local_80;
  char *local_78;
  longlong local_70;
  char local_68;
  char local_67 [31];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_b8;
  local_70 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  local_80 = param_2;
  (*(code *)PTR__guard_dispatch_icall_140426ae8)();
  local_98 = &local_78;
  uVar1 = FUN_14029ac00(&local_68,param_3,param_4,*(undefined4 *)(param_5 + 0x18));
  if ((local_70 != 0) && (lVar3 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(), lVar3 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar3,1);
  }
  if ((char)uVar1 < '\0') {
    *param_6 = 2;
    *param_7 = 0;
  }
  else {
    pcVar4 = &local_68;
    if (local_68 == '-') {
      pcVar4 = local_67;
    }
    uVar2 = FUN_140292860(pcVar4,&local_78,(int)(char)uVar1,local_88);
    *param_7 = (short)uVar2;
    if (((local_78 == pcVar4) || (local_88[0] != 0)) || (0xffff < uVar2)) {
      *param_6 = 2;
      *param_7 = -1;
    }
    else if (local_68 == '-') {
      *param_7 = -(short)uVar2;
    }
    param_2 = local_80;
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
    if (*param_4 != 0) goto LAB_1402aa60b;
  }
  else if (*param_4 == 0) goto LAB_1402aa60b;
  *param_6 = *param_6 | 1;
LAB_1402aa60b:
  lVar3 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar3;
  return param_2;
}

