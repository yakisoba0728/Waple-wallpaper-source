// Function: FUN_1404d5060
// Addr: 1404d5060
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5060(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *in_RAX;
  longlong unaff_RBX;
  longlong unaff_RSI;
  char in_R11B;
  
  *(char *)(unaff_RSI + unaff_RBX) =
       *(char *)(unaff_RSI + unaff_RBX) + (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX + (char)((ulonglong)in_RAX >> 8);
  *param_4 = *param_4 + in_R11B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

