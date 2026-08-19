// Function: FUN_1404beb7c
// Addr: 1404beb7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404beb7c(uint *param_1)

{
  uint unaff_EBX;
  
  *param_1 = *param_1 & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

