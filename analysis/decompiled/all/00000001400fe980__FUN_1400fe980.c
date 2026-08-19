// Function: FUN_1400fe980
// Addr: 1400fe980
// Size: 76 bytes


void FUN_1400fe980(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_140426af0)(param_1[0x2d]);
  if (iVar1 != 0) {
    (*DAT_140426838)(param_1[0x2d],100);
    (*DAT_140426838)(param_1[0x2d],0x65);
    (*DAT_140426838)(param_1[0x2d],0x69);
    (*DAT_140426838)(param_1[0x2d],0x66);
    (*DAT_140426838)(param_1[0x2d],0x67);
    (*DAT_140426968)(param_1[0x2d],0xffffffeb,0);
    (*DAT_140426808)(param_1[0x2d]);
  }
  param_1[0x2d] = 0;
  func_0x00014010b940(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001400fea39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}

