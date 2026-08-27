// Function: FUN_1402f0140
// Addr: 1402f0140
// Size: 46 bytes


ulonglong FUN_1402f0140(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && ((*(byte *)(param_1 + 8) & 8) != 0))
  {
    in_RAX = *(ulonglong *)(param_1 + 0x2d0);
    if (*(code **)(in_RAX + 0x138) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001402f0168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(in_RAX + 0x138))();
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

