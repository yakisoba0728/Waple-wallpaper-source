// Function: FUN_1404a8ccc
// Addr: 1404a8ccc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8ccc(longlong param_1,longlong param_2)

{
  uint unaff_EBP;
  
  *(uint *)(param_2 + param_1) = *(uint *)(param_2 + param_1) & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

