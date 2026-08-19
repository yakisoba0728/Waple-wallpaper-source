// Function: FUN_14010a1b0
// Addr: 14010a1b0
// Size: 123 bytes


void FUN_14010a1b0(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = &PTR_UNWIND_INFO_1400fdd5e_CountOfUnwindCodes_140488b10;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xfffffeff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffeff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = *param_2;
  param_1[0xd] = param_2[1];
  param_1[0xe] = param_2[2];
                    /* WARNING: Subroutine does not return */
  FUN_1400166d0(param_1 + 0xf,param_2 + 3);
}

