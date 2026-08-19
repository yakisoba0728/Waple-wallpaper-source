// Function: FUN_140129510
// Addr: 140129510
// Size: 98 bytes


void FUN_140129510(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_140426af0)(param_1[0x2b]);
  if (iVar1 != 0) {
    (*DAT_140426968)(param_1[0x2b],0xffffffeb,0);
    (*DAT_140426808)(param_1[0x2b]);
  }
  param_1[0x2b] = 0;
  func_0x00014010b940(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014012956f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}

