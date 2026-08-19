// Function: FUN_1404a619c
// Addr: 1404a619c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a619c(undefined8 param_1,longlong param_2)

{
  int unaff_ESI;
  byte in_CF;
  
  *(int *)(param_2 + 0x15921900) = (*(int *)(param_2 + 0x15921900) - unaff_ESI) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

