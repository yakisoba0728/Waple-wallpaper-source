// Function: FUN_1404b912c
// Addr: 1404b912c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b912c(longlong param_1)

{
  uint unaff_EBX;
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI | unaff_EBX;
  *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

