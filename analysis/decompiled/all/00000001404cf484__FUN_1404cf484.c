// Function: FUN_1404cf484
// Addr: 1404cf484
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf484(longlong param_1,byte param_2)

{
  longlong unaff_RDI;
  
  *(byte *)(unaff_RDI + param_1) = *(byte *)(unaff_RDI + param_1) | param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

