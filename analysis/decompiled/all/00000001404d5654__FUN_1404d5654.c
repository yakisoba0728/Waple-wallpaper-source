// Function: FUN_1404d5654
// Addr: 1404d5654
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5654(undefined8 param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *in_RAX;
  char unaff_BH;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  
  *param_4 = *param_4 + unaff_R12B;
  cVar2 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar2;
  pcVar1 = in_RAX + -0xffc088;
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  if (-1 < *pcVar1) {
    in_RAX[0x55] = in_RAX[0x55] + cVar2;
    *param_4 = *param_4 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2 + *in_RAX) + 0x80000cf4;
  pcVar1 = (char *)(unaff_RSI + 0x3e + unaff_RDI);
  *pcVar1 = *pcVar1 + (char)(uVar3 >> 8);
  pcVar1 = (char *)(unaff_RBP + 0x21004d + param_2 * 2);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  pcVar1 = (char *)(unaff_RBP + 0x1601004d + param_2 * 2);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

