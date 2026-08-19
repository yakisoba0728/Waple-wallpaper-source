// Function: FUN_1404b28a0
// Addr: 1404b28a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b28a0(undefined8 param_1,undefined8 param_2)

{
  char in_AL;
  longlong unaff_RDI;
  
  cRam0000000017283000 = cRam0000000017283000 + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RDI + 0x78001728) = *(char *)(unaff_RDI + 0x78001728) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

