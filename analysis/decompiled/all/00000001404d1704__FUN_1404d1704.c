// Function: FUN_1404d1704
// Addr: 1404d1704
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1704(char param_1,char param_2,char param_3,char *param_4)

{
  undefined3 uVar1;
  char cVar2;
  uint in_EAX;
  char *pcVar3;
  byte *pbVar4;
  byte bVar5;
  longlong unaff_RSI;
  int unaff_EDI;
  char unaff_R12B;
  
  *(char *)(unaff_RSI + 2) =
       (*(char *)(unaff_RSI + 2) - param_2) -
       (*(byte *)(ulonglong)(unaff_EDI + 1U) < (byte)(unaff_EDI + 1U));
  *param_4 = *param_4 + unaff_R12B;
  uVar1 = (undefined3)((uint)(unaff_EDI + 0x64050003) >> 8);
  cVar2 = (char)(unaff_EDI + 0x64050003);
  bVar5 = param_2 + cVar2;
  pcVar3 = (char *)(ulonglong)(CONCAT31(uVar1,cVar2 + -0x16) | 0x38a69700);
  *param_4 = *param_4 + unaff_R12B;
  *pcVar3 = *pcVar3 + cVar2 + -0x16;
  pcVar3 = (char *)((ulonglong)in_EAX - 0x3dffc758);
  *pcVar3 = *pcVar3 + bVar5;
  pcVar3 = (char *)(ulonglong)(CONCAT31(uVar1,cVar2 + -0x2c) | 0x38a69700);
  *param_4 = *param_4 + unaff_R12B;
  *pcVar3 = *pcVar3 + cVar2 + -0x2c;
  pcVar3[-0x5a] = pcVar3[-0x5a] + param_1;
  pbVar4 = (byte *)((ulonglong)in_EAX + 3 & 0xffffffff);
  *(char *)(unaff_RSI + 5) = (*(char *)(unaff_RSI + 5) - bVar5) - (*pbVar4 < (byte)pbVar4);
  *param_4 = *param_4 + unaff_R12B;
  *pbVar4 = *pbVar4 + (byte)pbVar4;
  *pbVar4 = *pbVar4 + (char)((ulonglong)pbVar4 >> 8);
  *(byte *)(unaff_RSI + 7) = *(byte *)(unaff_RSI + 7) | bVar5;
  *param_4 = *param_4 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

