// Function: FUN_1404ac25c
// Addr: 1404ac25c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac25c(undefined8 param_1,undefined8 param_2)

{
  int unaff_ESI;
  longlong unaff_RDI;
  
  *(int *)(unaff_RDI + 0x1e) = *(int *)(unaff_RDI + 0x1e) + unaff_ESI;
  *(char *)(unaff_RDI + -8) = *(char *)(unaff_RDI + -8) + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RDI + -0x28) = *(char *)(unaff_RDI + -0x28) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

