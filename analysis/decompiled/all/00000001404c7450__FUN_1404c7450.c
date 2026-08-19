// Function: FUN_1404c7450
// Addr: 1404c7450
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7450(byte *param_1,uint param_2,char param_3)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char cVar7;
  uint *in_RAX;
  byte unaff_BL;
  char unaff_SPL;
  undefined7 unaff_00000021;
  char unaff_BPL;
  byte *unaff_RSI;
  char *unaff_RDI;
  char in_R10B;
  undefined7 in_register_00000091;
  longlong unaff_R12;
  byte *pbVar6;
  
  uVar3 = *in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)((ulonglong)in_RAX >> 8);
  *unaff_RSI = *unaff_RSI >> 1;
  *(char *)in_RAX = (char)*in_RAX + (char)(param_2 | uVar3);
  *(char *)in_RAX = (char)*in_RAX - (char)in_RAX;
  bVar2 = *param_1;
  *param_1 = *param_1 + unaff_BL;
  uVar5 = ((int)in_RAX + -0x10b0005) - (uint)CARRY1(bVar2,unaff_BL);
  pbVar6 = (byte *)(ulonglong)uVar5;
  pbVar6[unaff_R12 * 2] = pbVar6[unaff_R12 * 2] + param_3;
  iVar4 = *(int *)(pbVar6 + 2);
  *pbVar6 = *pbVar6 ^ (byte)uVar5;
  cVar7 = (char)(uVar5 >> 8);
  *pbVar6 = *pbVar6 + cVar7;
  *unaff_RSI = *unaff_RSI >> 1;
  *pbVar6 = *pbVar6 + (byte)uVar5;
  *param_1 = *param_1 + cVar7;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + (longlong)unaff_RSI * 8);
  *pcVar1 = *pcVar1 + (char)((param_2 | uVar3) + iVar4 >> 8);
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_R12 * 8);
  *pcVar1 = *pcVar1 + unaff_BPL;
  pcVar1 = (char *)(unaff_R12 + CONCAT71(in_register_00000091,in_R10B) * 8);
  *pcVar1 = *pcVar1 + unaff_SPL;
  *unaff_RDI = *unaff_RDI + in_R10B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

