// Function: FUN_1404baf30
// Addr: 1404baf30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404baf30(uint *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  byte bVar5;
  int in_EAX;
  uint uVar3;
  byte *pbVar6;
  char *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [8];
  uint *puVar4;
  
  *param_4 = *param_4;
  uVar3 = in_EAX + 0x54050002;
  puVar4 = (uint *)(ulonglong)uVar3;
  *puVar4 = *puVar4 | uVar3;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + (char)uVar3;
  *puVar4 = *puVar4 & uVar3;
  *param_4 = *param_4 + (char)auStack_8;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),
                   (byte)(byte *)((ulonglong)uVar3 | 4) | *(byte *)((ulonglong)uVar3 | 4)) +
          0x4000834;
  puVar4 = (uint *)(ulonglong)uVar3;
  *param_1 = *param_1 | (uint)auStack_8;
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 | (uint)auStack_8;
  pcVar1 = (char *)(unaff_RSI + 0x4b + unaff_RBP * 4);
  bVar5 = (byte)(uVar3 >> 8);
  *pcVar1 = *pcVar1 + bVar5;
  *(byte *)param_1 = (char)*param_1 + bVar5;
  cVar2 = (char)uVar3;
  *(char *)puVar4 = (char)*puVar4 + cVar2;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + cVar2;
  *puVar4 = *puVar4 & uVar3;
  pbVar6 = (byte *)(ulonglong)((int)param_1 - *param_1);
  *puVar4 = *puVar4 & uVar3;
  *param_4 = *param_4 + (char)auStack_8;
  *(char *)puVar4 = (char)*puVar4 + cVar2;
  *pbVar6 = *pbVar6 | bVar5;
  *(char *)((longlong)pbVar6 * 2) = *(char *)((longlong)pbVar6 * 2) + cVar2;
  *puVar4 = *puVar4 & uVar3;
  *param_4 = *param_4 + (char)auStack_10;
  *(char *)puVar4 = (char)*puVar4 + cVar2;
  *(byte *)(puVar4 + 2) = (char)puVar4[2] + bVar5;
  *puVar4 = *puVar4 & uVar3;
  pcVar1 = (char *)(unaff_RSI + 0x4b + unaff_RBP * 4);
  *pcVar1 = *pcVar1 + cVar2;
  *pbVar6 = *pbVar6 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

