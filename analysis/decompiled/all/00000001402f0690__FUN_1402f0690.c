// Function: FUN_1402f0690
// Addr: 1402f0690
// Size: 67 bytes


ulonglong FUN_1402f0690(longlong param_1,undefined4 *param_2,longlong param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (((param_1 != 0) && (param_3 != 0)) && ((*(byte *)(param_1 + 8) & 8) != 0)) {
    in_RAX = *(ulonglong *)(param_1 + 0x2d0);
    if (*(code **)(in_RAX + 0x140) != (code *)0x0) {
      local_18 = *param_2;
      uStack_14 = param_2[1];
      uStack_10 = param_2[2];
      uStack_c = param_2[3];
      uVar1 = (**(code **)(in_RAX + 0x140))(local_18,&local_18);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

