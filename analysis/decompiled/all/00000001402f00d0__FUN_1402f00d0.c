// Function: FUN_1402f00d0
// Addr: 1402f00d0
// Size: 61 bytes


ulonglong FUN_1402f00d0(longlong param_1,uint param_2,longlong param_3,longlong param_4,
                       longlong param_5)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((((param_1 != 0) && (param_3 != 0)) && (param_4 != 0)) &&
     (((param_5 != 0 && (param_2 < *(uint *)(param_1 + 0x10))) &&
      ((*(byte *)(param_1 + 8) & 8) != 0)))) {
    in_RAX = *(ulonglong *)(param_1 + 0x2d0);
    if (*(code **)(in_RAX + 0x118) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001402f0107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(in_RAX + 0x118))();
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

