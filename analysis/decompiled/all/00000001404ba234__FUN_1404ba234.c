// Function: FUN_1404ba234
// Addr: 1404ba234
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba234(longlong param_1)

{
  char in_AH;
  
  *(char *)(param_1 + 0x5521004b) = *(char *)(param_1 + 0x5521004b) - in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

