// Function: FUN_1404c8cb4
// Addr: 1404c8cb4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8cb4(longlong param_1,uint *param_2)

{
  char *pcVar1;
  byte bVar2;
  byte *pbVar3;
  int in_EAX;
  uint uVar4;
  byte bVar6;
  longlong unaff_RBP;
  uint *puVar5;
  
  *param_2 = *param_2 & (uint)param_1;
  bVar6 = (byte)((ulonglong)param_2 >> 8) | *(byte *)(param_1 * 2);
  uVar4 = in_EAX + 0x10000834;
  puVar5 = (uint *)(ulonglong)uVar4;
  *(char *)(unaff_RBP + 0x6a) = *(char *)(unaff_RBP + 0x6a) + (char)param_1;
  *puVar5 = *puVar5 ^ uVar4;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + (char)*puVar5);
  pbVar3 = (byte *)(param_1 * 2);
  bVar2 = *pbVar3;
  *pbVar3 = *pbVar3 + bVar6;
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar6,(char)param_2)) +
                   0x31);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8) + CARRY1(bVar2,bVar6);
  *(char *)(unaff_RBP + 0x6a) = *(char *)(unaff_RBP + 0x6a) + (char)param_1;
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 ^ uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

