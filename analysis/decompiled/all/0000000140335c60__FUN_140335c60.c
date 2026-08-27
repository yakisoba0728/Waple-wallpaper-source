// Function: FUN_140335c60
// Addr: 140335c60
// Size: 175 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140335c60(longlong param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  undefined8 local_40 [3];
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1404dc040 ^ (ulonglong)auStack_78;
  local_48 = *(undefined8 *)(param_1 + 0x4928);
  local_28 = 1;
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_140335bc0(param_1,*(undefined4 *)(param_1 + 0x4930),*(undefined4 *)(param_1 + 0x4934));
  }
  uVar1 = (undefined4)(param_2 >> 0x20);
  local_58 = uVar1;
  FUN_140335900(param_1,param_1 + 0x10,local_40,param_2 & 0xffffffff);
  (*(code *)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),&local_48);
  *(undefined8 *)(param_1 + 0x4928) = local_40[0];
  *(int *)(param_1 + 0x4910) = (int)param_2;
  *(undefined4 *)(param_1 + 0x4914) = uVar1;
  return;
}

