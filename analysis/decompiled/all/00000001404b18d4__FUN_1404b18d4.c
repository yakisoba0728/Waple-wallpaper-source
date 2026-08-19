// Function: FUN_1404b18d4
// Addr: 1404b18d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b18d4(undefined8 param_1,int param_2)

{
  char unaff_BH;
  int *unaff_RSI;
  byte in_CF;
  
  *unaff_RSI = (*unaff_RSI - param_2) - (uint)in_CF;
  *(char *)((longlong)unaff_RSI + 0x19) = *(char *)((longlong)unaff_RSI + 0x19) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

