// Function: FUN_1404b8094
// Addr: 1404b8094
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8094(char *param_1)

{
  char cVar1;
  undefined8 in_RAX;
  longlong unaff_RSI;
  
  cVar1 = (char)((ulonglong)in_RAX >> 8);
  *(char *)(unaff_RSI + -0x23ffe232) = *(char *)(unaff_RSI + -0x23ffe232) + cVar1;
  *param_1 = *param_1 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

