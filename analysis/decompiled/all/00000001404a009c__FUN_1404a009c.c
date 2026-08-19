// Function: FUN_1404a009c
// Addr: 1404a009c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a009c(longlong param_1,undefined2 param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  char in_AL;
  byte bVar3;
  uint uVar4;
  byte bVar6;
  char *unaff_RBX;
  char unaff_SPL;
  char *unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  char in_CF;
  char in_ZF;
  char *pcVar5;
  
  if (param_1 == 1 || in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RBX = (*unaff_RBX - in_AL) - in_CF;
  uVar4 = in(param_2);
  pcVar5 = (char *)(ulonglong)uVar4;
  *param_4 = *param_4 + unaff_SPL;
  *pcVar5 = *pcVar5 + (char)uVar4;
  pbVar1 = (byte *)(pcVar5 + -0x56fffce8);
  bVar2 = *pbVar1;
  bVar6 = (byte)param_2;
  *pbVar1 = *pbVar1 + bVar6;
  *unaff_RBX = (*unaff_RBX - (char)uVar4) - CARRY1(bVar2,bVar6);
  uVar4 = in(param_2);
  pcVar5 = (char *)(ulonglong)uVar4;
  bVar2 = *param_4;
  bVar3 = (byte)uVar4;
  *param_4 = *param_4 + bVar3;
  *unaff_RSI = *unaff_RSI + bVar3 + CARRY1(bVar2,bVar3);
  *pcVar5 = *pcVar5 + bVar6;
  pcVar5[in_FS_OFFSET] = pcVar5[in_FS_OFFSET] | bVar3;
  pcVar5[unaff_RDI] = pcVar5[unaff_RDI] + (char)((ushort)param_2 >> 8);
  *pcVar5 = *pcVar5 + bVar6;
  uRam00000001b44f00e4 = uRam00000001b44f00e4 & uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

