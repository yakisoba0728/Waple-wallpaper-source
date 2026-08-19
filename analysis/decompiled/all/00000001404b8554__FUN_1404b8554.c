// Function: FUN_1404b8554
// Addr: 1404b8554
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8554(char param_1)

{
  int unaff_EBX;
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI - unaff_EBX;
  *(char *)((longlong)unaff_RSI + 0x2a) = *(char *)((longlong)unaff_RSI + 0x2a) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

