// Function: FUN_1404c0ac4
// Addr: 1404c0ac4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0ac4(int param_1,longlong param_2)

{
  char unaff_BH;
  char *unaff_RDI;
  
  *(int *)(param_2 + 0x13) = *(int *)(param_2 + 0x13) + param_1;
  *(char *)(param_2 + -0x48) = *(char *)(param_2 + -0x48) + (char)param_1;
  *unaff_RDI = *unaff_RDI + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

