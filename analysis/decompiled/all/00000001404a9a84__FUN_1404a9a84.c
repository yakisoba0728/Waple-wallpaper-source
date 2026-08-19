// Function: FUN_1404a9a84
// Addr: 1404a9a84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9a84(uint *param_1)

{
  uint in_EAX;
  
  *param_1 = *param_1 & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

