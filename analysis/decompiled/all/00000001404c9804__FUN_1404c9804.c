// Function: FUN_1404c9804
// Addr: 1404c9804
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9804(undefined8 param_1,char param_2)

{
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + 0x1f01004c) = *(char *)(unaff_RDI + 0x1f01004c) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

