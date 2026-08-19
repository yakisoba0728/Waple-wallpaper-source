// Function: FUN_1404b1278
// Addr: 1404b1278
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1278(longlong param_1,longlong param_2)

{
  longlong in_RAX;
  char cVar1;
  longlong unaff_RSI;
  
  cVar1 = (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RSI + param_1) = *(char *)(unaff_RSI + param_1) + cVar1;
  *(char *)(in_RAX + -0x26ffea4d) = *(char *)(in_RAX + -0x26ffea4d) + cVar1;
  (&stack0x2521004a)[param_2] = (&stack0x2521004a)[param_2] + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

