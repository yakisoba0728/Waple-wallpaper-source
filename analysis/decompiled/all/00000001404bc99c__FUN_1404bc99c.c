// Function: FUN_1404bc99c
// Addr: 1404bc99c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc99c(uint *param_1)

{
  uint unaff_EBX;
  
  *param_1 = *param_1 & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

