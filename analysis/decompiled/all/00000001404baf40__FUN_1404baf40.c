// Function: FUN_1404baf40
// Addr: 1404baf40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404baf40(uint *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  byte bVar6;
  undefined8 in_RAX;
  undefined7 uVar7;
  byte *pbVar5;
  char *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [8];
  uint *puVar4;
  
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar2 = (char)in_RAX + '\t';
  puVar4 = (uint *)CONCAT71(uVar7,cVar2);
  *puVar4 = *puVar4 & (uint)puVar4;
  *param_4 = *param_4 + (char)auStack_8;
  pbVar5 = (byte *)(CONCAT71(uVar7,cVar2) | 4);
  uVar3 = (int)CONCAT71(uVar7,(byte)pbVar5 | *pbVar5) + 0x4000834;
  puVar4 = (uint *)(ulonglong)uVar3;
  *param_1 = *param_1 | (uint)auStack_8;
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 | (uint)auStack_8;
  pcVar1 = (char *)(unaff_RSI + 0x4b + unaff_RBP * 4);
  bVar6 = (byte)(uVar3 >> 8);
  *pcVar1 = *pcVar1 + bVar6;
  *(byte *)param_1 = (char)*param_1 + bVar6;
  cVar2 = (char)uVar3;
  *(char *)puVar4 = (char)*puVar4 + cVar2;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + cVar2;
  *puVar4 = *puVar4 & uVar3;
  pbVar5 = (byte *)(ulonglong)((int)param_1 - *param_1);
  *puVar4 = *puVar4 & uVar3;
  *param_4 = *param_4 + (char)auStack_8;
  *(char *)puVar4 = (char)*puVar4 + cVar2;
  *pbVar5 = *pbVar5 | bVar6;
  *(char *)((longlong)pbVar5 * 2) = *(char *)((longlong)pbVar5 * 2) + cVar2;
  *puVar4 = *puVar4 & uVar3;
  *param_4 = *param_4 + (char)auStack_10;
  *(char *)puVar4 = (char)*puVar4 + cVar2;
  *(byte *)(puVar4 + 2) = (char)puVar4[2] + bVar6;
  *puVar4 = *puVar4 & uVar3;
  pcVar1 = (char *)(unaff_RSI + 0x4b + unaff_RBP * 4);
  *pcVar1 = *pcVar1 + cVar2;
  *pbVar5 = *pbVar5 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

