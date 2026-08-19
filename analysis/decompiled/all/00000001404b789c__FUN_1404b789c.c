// Function: FUN_1404b789c
// Addr: 1404b789c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b789c(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  ulonglong in_RAX;
  char *pcVar1;
  char unaff_SPL;
  char *unaff_RSI;
  
  pcVar1 = (char *)(in_RAX ^ 0xe6);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar1 = *pcVar1 + (byte)pcVar1;
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_2 >> 8);
  *param_4 = *param_4 + (param_1 - CARRY1((byte)pcVar1,(byte)param_2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

