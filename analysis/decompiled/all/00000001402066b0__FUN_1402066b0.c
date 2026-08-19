// Function: FUN_1402066b0
// Addr: 1402066b0
// Size: 1 bytes


void FUN_1402066b0(longlong *param_1)

{
  longlong lVar1;
  
  if ((char)param_1[0x65] != '\0') {
    return;
  }
  if (*(longlong *)(param_1[0x93] + 0xd0) != 0) {
    func_0x000140209610();
    FUN_140209430(param_1,*(undefined8 *)(param_1[0x93] + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x0001402066fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xc0))(param_1);
    return;
  }
  lVar1 = (longlong)*(float *)((longlong)param_1 + 0x2f4);
  (**(code **)(*param_1 + 0xb0))
            (param_1,lVar1,DAT_1404927d4,(longlong)*(float *)(param_1 + 0x5e),(int)lVar1,
             (int)*(float *)(param_1 + 0x5e),(int)*(float *)((longlong)param_1 + 0x2f4));
  (**(code **)(*param_1 + 0xb8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140206761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc0))(param_1);
  return;
}

