// Function: FUN_1404b0fd8
// Addr: 1404b0fd8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0fd8(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar5;
  char *in_RAX;
  char unaff_BL;
  char unaff_BH;
  char unaff_SPL;
  longlong unaff_RBP;
  char *unaff_RSI;
  char *pcVar4;
  
  *param_4 = *param_4 + unaff_SPL;
  *in_RAX = *in_RAX + (char)in_RAX;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  pbVar1 = (byte *)(param_2 + -0x58);
  bVar2 = *pbVar1;
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  *pbVar1 = *pbVar1 + bVar5;
  uVar3 = (int)in_RAX + 0x4b0edc00 + (uint)CARRY1(bVar2,bVar5);
  pcVar4 = (char *)(ulonglong)uVar3;
  *param_1 = *param_1 + (char)(uVar3 >> 8);
  *pcVar4 = *pcVar4 + (char)uVar3;
  pcVar4[unaff_RBP * 4] = pcVar4[unaff_RBP * 4] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

