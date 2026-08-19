// Function: FUN_140335d30
// Addr: 140335d30
// Size: 175 bytes


void FUN_140335d30(longlong param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  undefined8 local_40 [3];
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1404dc110 ^ (ulonglong)auStack_78;
  local_48 = *(undefined8 *)(param_1 + 0x4928);
  local_28 = 1;
  if (*(char *)(param_1 + 0x28) == '\0') {
    func_0x000140335c90(param_1,*(undefined4 *)(param_1 + 0x4930),*(undefined4 *)(param_1 + 0x4934))
    ;
  }
  uVar1 = (undefined4)(param_2 >> 0x20);
  local_58 = uVar1;
  FUN_1403359d0(param_1,param_1 + 0x10,local_40,param_2 & 0xffffffff);
  (*(code *)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),&local_48);
  *(undefined8 *)(param_1 + 0x4928) = local_40[0];
  *(int *)(param_1 + 0x4910) = (int)param_2;
  *(undefined4 *)(param_1 + 0x4914) = uVar1;
  func_0x0001402ed2f0(local_20 ^ (ulonglong)auStack_78);
  return;
}

