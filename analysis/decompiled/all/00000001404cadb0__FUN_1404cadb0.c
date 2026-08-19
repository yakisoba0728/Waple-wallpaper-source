// Function: FUN_1404cadb0
// Addr: 1404cadb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cadb0(uint *param_1)

{
  uint unaff_EBX;
  
  *param_1 = *param_1 & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

