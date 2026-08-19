// Function: FUN_1404d16f4
// Addr: 1404d16f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d16f4(char param_1,byte param_2,char param_3,char *param_4)

{
  undefined2 uVar1;
  undefined3 uVar2;
  char cVar3;
  int in_EAX;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  longlong unaff_RSI;
  int unaff_EDI;
  char unaff_R12B;
  
  *(byte *)(unaff_RSI + 1) = *(byte *)(unaff_RSI + 1) | param_2;
  *param_4 = *param_4 + unaff_R12B;
  uVar4 = in_EAX + 0xe4050002;
  uVar1 = TaskRegister();
  *(undefined2 *)((ulonglong)uVar4 - 0x5a) = uVar1;
  *(char *)(unaff_RSI + 2) =
       (*(char *)(unaff_RSI + 2) - param_2) -
       (*(byte *)(ulonglong)(unaff_EDI + 1U) < (byte)(unaff_EDI + 1U));
  *param_4 = *param_4 + unaff_R12B;
  uVar2 = (undefined3)((uint)(unaff_EDI + 0x64050003) >> 8);
  cVar3 = (char)(unaff_EDI + 0x64050003);
  param_2 = param_2 + cVar3;
  pcVar5 = (char *)(ulonglong)(CONCAT31(uVar2,cVar3 + -0x16) | 0x38a69700);
  *param_4 = *param_4 + unaff_R12B;
  *pcVar5 = *pcVar5 + cVar3 + -0x16;
  pcVar5 = (char *)((ulonglong)uVar4 - 0x3dffc758);
  *pcVar5 = *pcVar5 + param_2;
  pcVar5 = (char *)(ulonglong)(CONCAT31(uVar2,cVar3 + -0x2c) | 0x38a69700);
  *param_4 = *param_4 + unaff_R12B;
  *pcVar5 = *pcVar5 + cVar3 + -0x2c;
  pcVar5[-0x5a] = pcVar5[-0x5a] + param_1;
  pbVar6 = (byte *)((ulonglong)uVar4 + 3 & 0xffffffff);
  *(char *)(unaff_RSI + 5) = (*(char *)(unaff_RSI + 5) - param_2) - (*pbVar6 < (byte)pbVar6);
  *param_4 = *param_4 + unaff_R12B;
  *pbVar6 = *pbVar6 + (byte)pbVar6;
  *pbVar6 = *pbVar6 + (char)((ulonglong)pbVar6 >> 8);
  *(byte *)(unaff_RSI + 7) = *(byte *)(unaff_RSI + 7) | param_2;
  *param_4 = *param_4 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

