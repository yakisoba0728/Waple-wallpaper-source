// Function: FUN_1404a3440
// Addr: 1404a3440
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3440(undefined8 param_1,longlong param_2)

{
  char in_AL;
  longlong unaff_RSI;
  uint *unaff_RDI;
  longlong unaff_GS_OFFSET;
  
  *(char *)(param_2 + 0x4c000602) =
       *(char *)(param_2 + 0x4c000602) + in_AL + *(char *)(unaff_GS_OFFSET + unaff_RSI);
  *unaff_RDI = *unaff_RDI & (uint)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

