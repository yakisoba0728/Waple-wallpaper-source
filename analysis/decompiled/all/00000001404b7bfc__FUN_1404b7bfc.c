// Function: FUN_1404b7bfc
// Addr: 1404b7bfc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7bfc(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  int in_EAX;
  uint uVar3;
  byte bVar5;
  char unaff_BH;
  char unaff_SPL;
  uint *unaff_RDI;
  char *pcVar4;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  uVar3 = (in_EAX + 0x524fa4f4) - (uint)(in_EAX + 0x700008f4U < *unaff_RDI);
  pcVar4 = (char *)(ulonglong)uVar3;
  pcVar4[-0x30] = pcVar4[-0x30] + unaff_BH;
  *param_1 = *param_1 + unaff_SPL;
  *pcVar4 = *pcVar4 + (char)uVar3;
  pbVar1 = (byte *)(pcVar4 + -0x51);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar5;
  uVar3 = (uVar3 + 0xe24f9c00) - (uint)CARRY1(bVar2,bVar5);
  pcVar4 = (char *)((ulonglong)uVar3 - 0x30);
  *pcVar4 = *pcVar4 + unaff_BH;
  *param_1 = *param_1 + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

