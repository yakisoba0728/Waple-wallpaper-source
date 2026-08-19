// Function: FUN_1404d5640
// Addr: 1404d5640
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5640(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  char *in_RAX;
  byte unaff_BH;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  
  bVar2 = *(byte *)(param_1 + 0x3f);
  in_RAX[0x55] = in_RAX[0x55] + (char)param_2;
  *param_4 = *param_4 + unaff_R12B;
  cVar4 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar4;
  cVar3 = (unaff_BH & bVar2) * '\x02';
  if (cVar3 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 + (char)((ulonglong)in_RAX >> 8);
  if (*param_2 < '\0') {
    in_RAX[0x55] = in_RAX[0x55] + (char)param_2;
    *param_4 = *param_4 + unaff_R12B;
    *in_RAX = *in_RAX + cVar4;
    pcVar1 = in_RAX + -0xffc088;
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
    if (-1 < *pcVar1) {
      in_RAX[0x55] = in_RAX[0x55] + cVar4;
      *param_4 = *param_4 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar5 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4 + *in_RAX) + 0x80000cf4;
    pcVar1 = (char *)(unaff_RSI + 0x3e + unaff_RDI);
    *pcVar1 = *pcVar1 + (char)(uVar5 >> 8);
    pcVar1 = (char *)(unaff_RBP + 0x21004d + (longlong)param_2 * 2);
    *pcVar1 = *pcVar1 + cVar3;
    *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
    pcVar1 = (char *)(unaff_RBP + 0x1601004d + (longlong)param_2 * 2);
    *pcVar1 = *pcVar1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

