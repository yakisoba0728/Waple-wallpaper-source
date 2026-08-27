// Function: FUN_1402abe50
// Addr: 1402abe50
// Size: 386 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1402abe50(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong param_5,uint *param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 auStack_3a8 [32];
  undefined1 **local_388;
  undefined1 *local_378;
  longlong local_370;
  undefined1 local_368 [800];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_3a8;
  local_370 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  (*(code *)PTR__guard_dispatch_icall_140426ae8)();
  local_388 = &local_378;
  uVar3 = FUN_140298e60(local_368,0x300,param_3,param_4);
  if ((local_370 != 0) && (lVar4 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(), lVar4 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar4,1);
  }
  if ((char)uVar3 == '\0') {
    *param_6 = 2;
    *param_7 = 0;
  }
  else {
    piVar5 = (int *)FUN_1402caf34();
    iVar1 = *piVar5;
    *piVar5 = 0;
    uVar6 = FUN_1402d3d68(local_368,&local_378);
    iVar2 = *piVar5;
    *piVar5 = iVar1;
    *param_7 = uVar6;
    if (((local_378 == local_368) || (iVar2 != 0)) || ((char)((ushort)uVar3 >> 8) != '\0')) {
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
    if (*param_4 != 0) goto LAB_1402abf9b;
  }
  else if (*param_4 == 0) goto LAB_1402abf9b;
  *param_6 = *param_6 | 1;
LAB_1402abf9b:
  lVar4 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar4;
  return param_2;
}

