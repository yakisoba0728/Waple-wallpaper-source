// Function: FUN_1404b2680
// Addr: 1404b2680
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2680(char param_1)

{
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + 3) = *(char *)(unaff_RDI + 3) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

