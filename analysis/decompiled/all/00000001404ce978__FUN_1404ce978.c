// Function: FUN_1404ce978
// Addr: 1404ce978
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce978(char param_1)

{
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + -0x38) = *(char *)(unaff_RDI + -0x38) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

