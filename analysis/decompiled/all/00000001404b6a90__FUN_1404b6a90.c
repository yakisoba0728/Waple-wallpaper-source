// Function: FUN_1404b6a90
// Addr: 1404b6a90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6a90(longlong param_1,undefined8 param_2)

{
  longlong in_RAX;
  char cVar1;
  longlong unaff_RSI;
  
  cVar1 = (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RSI + param_1) = *(char *)(unaff_RSI + param_1) + cVar1;
  *(char *)(in_RAX + -0x62) = *(char *)(in_RAX + -0x62) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

