// Function: FUN_1404b36a8
// Addr: 1404b36a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b36a8(undefined8 param_1,char param_2)

{
  char *pcVar1;
  char *in_RAX;
  longlong unaff_RSI;
  
  *in_RAX = *in_RAX - (char)in_RAX;
  pcVar1 = (char *)((ulonglong)((int)in_RAX + 0xd9ffd688) + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

