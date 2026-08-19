// Function: FUN_140292d40
// Addr: 140292d40
// Size: 15 bytes


void FUN_140292d40(undefined8 *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  *param_1 = &PTR_UNWIND_INFO_14029347f_SizeOfProlog_14042b1b0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 2) = *param_2;
  uVar1 = param_2[1];
  param_1[3] = 0;
  *(uint *)((longlong)param_1 + 0x14) = uVar1 | 1;
  param_1[4] = 0;
  uVar1 = param_2[6];
  *(uint *)(param_1 + 5) = uVar1;
  if (0xf < uVar1) {
    uVar1 = 0xf;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(param_1 + 6,param_2 + 8,(ulonglong)uVar1 * 8);
}

