// Function: FUN_1403ec560
// Addr: 1403ec560
// Size: 156 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1403ec560(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_d8;
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
  puVar2 = (ulonglong *)FUN_140016300();
  local_b8 = 0;
  local_b0 = param_4;
  FUN_1402c7b38(*puVar2 | 2,local_a8,100,param_3);
  iVar1 = (**(code **)(param_1 + 0xe8))(param_1,param_2,local_a8,*(undefined8 *)(param_1 + 0xf0));
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + -1;
  return iVar1 != 0;
}

