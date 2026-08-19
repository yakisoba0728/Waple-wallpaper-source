// Function: FUN_1404c63b0
// Addr: 1404c63b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c63b0(uint *param_1,char *param_2)

{
  uint unaff_EBX;
  
  *param_1 = *param_1 & unaff_EBX;
  *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

