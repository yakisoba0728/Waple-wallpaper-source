// Function: FUN_14014e440
// Addr: 14014e440
// Size: 25 bytes


undefined4 * FUN_14014e440(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(longlong *)(param_2 + 6) - *(longlong *)(param_2 + 4) == 0) {
    return param_1;
  }
  if ((ulonglong)(*(longlong *)(param_2 + 6) - *(longlong *)(param_2 + 4) >> 5) < 0x800000000000000)
  {
    func_0x00014014fc10(param_1 + 4);
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(*(undefined8 *)(param_1 + 4),*(longlong *)(param_2 + 4),
                  *(longlong *)(param_2 + 6) - *(longlong *)(param_2 + 4));
  }
                    /* WARNING: Subroutine does not return */
  FUN_140013120();
}

