// Function: FUN_1402f01e0
// Addr: 1402f01e0
// Size: 41 bytes


ulonglong FUN_1402f01e0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (((param_1 != 0) && (param_4 != 0)) && ((*(byte *)(param_1 + 8) & 8) != 0)) {
    in_RAX = *(ulonglong *)(param_1 + 0x2d0);
    if (*(code **)(in_RAX + 0x120) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001402f0203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(in_RAX + 0x120))();
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

