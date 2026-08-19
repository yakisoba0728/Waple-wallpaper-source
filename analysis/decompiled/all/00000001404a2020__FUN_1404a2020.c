// Function: FUN_1404a2020
// Addr: 1404a2020
// Size: 1 bytes


void FUN_1404a2020(uint *param_1)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  uint unaff_EBX;
  longlong unaff_RBP;
  int unaff_EDI;
  
  *param_1 = *param_1 & unaff_EBX;
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) - unaff_EDI;
  cRam00000000c04a2195 = cRam00000000c04a2195 + (char)in_EAX;
                    /* WARNING: Could not recover jumptable at 0x0001404a2030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulonglong)*(uint *)(unaff_RBP + -0x1e7ffffc))();
  return;
}

