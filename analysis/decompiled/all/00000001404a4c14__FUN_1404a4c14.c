// Function: FUN_1404a4c14
// Addr: 1404a4c14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4c14(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  longlong unaff_RDI;
  
  cVar2 = (char)((ulonglong)param_1 >> 8);
  pcVar1 = (code *)swi(7);
  (*pcVar1)();
  *(char *)(unaff_RDI + -0x33) = *(char *)(unaff_RDI + -0x33) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

