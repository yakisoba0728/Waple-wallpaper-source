// Function: FUN_1404d5634
// Addr: 1404d5634
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5634(int *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  byte *in_RAX;
  char unaff_BH;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  
  uRam000000017452563c = uRam000000017452563c & (uint)in_RAX;
  bVar4 = (byte)in_RAX;
  *in_RAX = *in_RAX | bVar4;
  *(int *)(in_RAX + 0x3f) = *(int *)(in_RAX + 0x3f) + 1;
  cVar6 = (char)((ulonglong)in_RAX >> 8);
  *param_2 = *param_2 + cVar6;
  if (*param_2 < '\0') {
    in_RAX[0x55] = in_RAX[0x55] + (char)param_2;
    *param_4 = *param_4 + unaff_R12B;
    *in_RAX = *in_RAX + bVar4;
    cVar3 = unaff_BH * '\x02';
    if (cVar3 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_2 = *param_2 + cVar6;
    if (*param_2 < '\0') {
      in_RAX[0x55] = in_RAX[0x55] + (char)param_2;
      *param_4 = *param_4 + unaff_R12B;
      *in_RAX = *in_RAX + bVar4;
      pbVar1 = in_RAX + -0xffc088;
      *pbVar1 = *pbVar1 + (char)((ulonglong)param_2 >> 8);
      if (-1 < (char)*pbVar1) {
        in_RAX[0x55] = in_RAX[0x55] + bVar4;
        *param_4 = *param_4 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar5 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar4 + *in_RAX) + 0x80000cf4;
      pcVar2 = (char *)(unaff_RSI + 0x3e + unaff_RDI);
      *pcVar2 = *pcVar2 + (char)(uVar5 >> 8);
      pcVar2 = (char *)(unaff_RBP + 0x21004d + (longlong)param_2 * 2);
      *pcVar2 = *pcVar2 + cVar3;
      *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
      pcVar2 = (char *)(unaff_RBP + 0x1601004d + (longlong)param_2 * 2);
      *pcVar2 = *pcVar2 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *param_1 = *param_1 + -1;
    iRam00000001825a5699 = iRam00000001825a5699 + (int)param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

