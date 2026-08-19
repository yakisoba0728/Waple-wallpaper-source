// Function: FUN_1404c3698
// Addr: 1404c3698
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3698(byte *param_1,char param_2)

{
  byte *pbVar1;
  int iVar2;
  uint in_EAX;
  uint uVar3;
  char *pcVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  uVar3 = in_EAX ^ 0x21004c;
  pcVar4 = (char *)(ulonglong)uVar3;
  *pcVar4 = *pcVar4 + (char)uVar3;
  pbVar1 = (byte *)(unaff_RBX + 0x2bac6a00 + unaff_RBP);
  *pbVar1 = *pbVar1 ^ (byte)((ulonglong)param_1 >> 8);
  unaff_RSI[unaff_RBP + 0x1c19004d] = unaff_RSI[unaff_RBP + 0x1c19004d] + (char)(in_EAX >> 8);
  iVar2 = CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + *pcVar4 | *param_1) + -0x2ed02000;
  param_2 = (char)iVar2 + param_2;
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),param_2);
  *pcVar4 = *pcVar4 + param_2;
  *param_1 = *param_1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

