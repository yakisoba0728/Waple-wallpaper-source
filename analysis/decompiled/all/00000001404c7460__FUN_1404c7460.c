// Function: FUN_1404c7460
// Addr: 1404c7460
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7460(uint *param_1,int param_2,char param_3)

{
  char *pcVar1;
  int iVar2;
  char cVar5;
  uint in_EAX;
  uint uVar3;
  char unaff_SPL;
  undefined7 unaff_00000021;
  char unaff_BPL;
  byte *unaff_RSI;
  char *unaff_RDI;
  char in_R10B;
  undefined7 in_register_00000091;
  longlong unaff_R12;
  byte *pbVar4;
  
  uVar3 = in_EAX | *param_1;
  pbVar4 = (byte *)(ulonglong)uVar3;
  pbVar4[unaff_R12 * 2] = pbVar4[unaff_R12 * 2] + param_3;
  iVar2 = *(int *)(pbVar4 + 2);
  *pbVar4 = *pbVar4 ^ (byte)uVar3;
  cVar5 = (char)(uVar3 >> 8);
  *pbVar4 = *pbVar4 + cVar5;
  *unaff_RSI = *unaff_RSI >> 1;
  *pbVar4 = *pbVar4 + (byte)uVar3;
  *(char *)param_1 = (char)*param_1 + cVar5;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + (longlong)unaff_RSI * 8);
  *pcVar1 = *pcVar1 + (char)((uint)(param_2 + iVar2) >> 8);
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_R12 * 8);
  *pcVar1 = *pcVar1 + unaff_BPL;
  pcVar1 = (char *)(unaff_R12 + CONCAT71(in_register_00000091,in_R10B) * 8);
  *pcVar1 = *pcVar1 + unaff_SPL;
  *unaff_RDI = *unaff_RDI + in_R10B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

