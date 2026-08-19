// Function: FUN_1404bfee8
// Addr: 1404bfee8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bfee8(longlong param_1)

{
  char in_AL;
  char *pcVar1;
  longlong unaff_RDI;
  char in_CF;
  
  pcVar1 = (char *)(param_1 + -1);
  *pcVar1 = *pcVar1 + in_AL + 'h' + in_CF;
  func_0x000118d3ff09();
  *(char *)(unaff_RDI + -0x48) = *(char *)(unaff_RDI + -0x48) + (char)((ulonglong)pcVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

