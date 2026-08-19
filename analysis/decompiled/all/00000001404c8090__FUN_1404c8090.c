// Function: FUN_1404c8090
// Addr: 1404c8090
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8090(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  uint *in_RAX;
  char unaff_SPL;
  longlong unaff_RSI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pcVar1 = (char *)((longlong)in_RAX + unaff_RSI + 0x308cb300);
  *pcVar1 = *pcVar1;
  *param_1 = *param_1 + unaff_SPL;
  *param_1 = *param_1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

