// Function: FUN_1404a57a0
// Addr: 1404a57a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a57a0(ulonglong param_1)

{
  char in_AL;
  
  *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

