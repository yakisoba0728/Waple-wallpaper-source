// Function: FUN_1404a5694
// Addr: 1404a5694
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5694(char *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  char cVar5;
  int in_EAX;
  uint uVar3;
  byte *pbVar4;
  char unaff_BL;
  undefined8 unaff_RBP;
  
  uVar3 = in_EAX + 0x99000b54;
  pbVar4 = (byte *)(ulonglong)uVar3;
  bVar2 = (byte)uVar3;
  *pbVar4 = *pbVar4 | bVar2;
  iVar1 = *(int *)(param_1 + 8);
  cVar5 = (char)(uVar3 >> 8);
  pbVar4[0x21004a55] = pbVar4[0x21004a55] + cVar5;
  *(char *)(ulonglong)(uint)(param_2 - iVar1) = *(char *)(ulonglong)(uint)(param_2 - iVar1) + bVar2;
  *pbVar4 = *pbVar4 + bVar2;
  pbVar4 = (byte *)(ulonglong)uVar3;
  *pbVar4 = *pbVar4 | bVar2;
  pbVar4[0x21004a55] = pbVar4[0x21004a55] + cVar5;
  *pbVar4 = *pbVar4 + bVar2;
  param_1[0x1b000850] = param_1[0x1b000850] + unaff_BL;
  *pbVar4 = *pbVar4 | bVar2;
  bVar2 = bRam9000000021004a55;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),bRam9000000021004a55);
  pbVar4 = (byte *)(ulonglong)uVar3;
  *pbVar4 = *pbVar4 | bRam9000000021004a55;
  *pbVar4 = *pbVar4 | bVar2;
  *(undefined8 *)((ulonglong)uVar3 - 8) = unaff_RBP;
  *param_1 = *param_1 + (char)((ulonglong)uVar3 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

