// Function: FUN_1404af538
// Addr: 1404af538
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af538(char *param_1,longlong param_2)

{
  byte in_AL;
  char *unaff_RDI;
  byte in_CF;
  
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + (uint)in_CF;
  *param_1 = *param_1 + (in_AL ^ 0xf4);
  *unaff_RDI = *unaff_RDI + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

