// Function: FUN_1404ac430
// Addr: 1404ac430
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac430(undefined8 param_1,byte param_2)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(byte *)(unaff_RBP + unaff_RBX) = *(byte *)(unaff_RBP + unaff_RBX) | param_2;
  verw();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

