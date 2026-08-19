// Function: FUN_1404c9c80
// Addr: 1404c9c80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404c9c39) */

void FUN_1404c9c80(char *param_1)

{
  char cVar1;
  char *in_RAX;
  char unaff_BL;
  char unaff_BH;
  longlong unaff_RSI;
  char unaff_R12B;
  
  cVar1 = (char)((ulonglong)in_RAX >> 8);
  (&stack0x00000000)[(longlong)param_1] = (&stack0x00000000)[(longlong)param_1] + cVar1;
  param_1[0x32] = param_1[0x32] & (byte)param_1;
  param_1[0x70003249] = param_1[0x70003249] + unaff_BL;
  *param_1 = *param_1 + unaff_R12B;
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + cVar1;
  *param_1 = *param_1 + unaff_R12B;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

