// Function: FUN_1404b05a0
// Addr: 1404b05a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b05a0(uint param_1)

{
  longlong unaff_RDI;
  
  *(uint *)(unaff_RDI + 0xc) = *(uint *)(unaff_RDI + 0xc) & param_1;
  *(char *)(unaff_RDI + 0x68) = *(char *)(unaff_RDI + 0x68) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

