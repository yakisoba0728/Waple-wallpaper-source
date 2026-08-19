// Function: FUN_1404cd630
// Addr: 1404cd630
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd630(void)

{
  char *pcVar1;
  longlong in_R11;
  longlong unaff_GS_OFFSET;
  char in_CF;
  
  pcVar1 = (char *)(unaff_GS_OFFSET + in_R11 + 0x44004165);
  *pcVar1 = *pcVar1 + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

