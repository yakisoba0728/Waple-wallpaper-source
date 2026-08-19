// Function: FUN_1401dd700
// Addr: 1401dd700
// Size: 105 bytes


void FUN_1401dd700(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0x140) = *param_2;
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 1);
  uVar1 = *(undefined4 *)(param_2 + 1);
  FUN_14041a3b0(uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_14041aa90(uVar1);
}

