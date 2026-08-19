// Function: FUN_1404baf60
// Addr: 1404baf60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404baf60(int *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  byte bVar5;
  uint *in_RAX;
  byte *pbVar6;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint *puVar4;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  cVar2 = (char)in_RAX + '\t';
  puVar4 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  uVar3 = (uint)puVar4;
  *puVar4 = *puVar4 & uVar3;
  pbVar6 = (byte *)(ulonglong)(uint)((int)param_1 - *param_1);
  *puVar4 = *puVar4 & uVar3;
  *param_4 = *param_4;
  *(char *)puVar4 = (char)*puVar4 + cVar2;
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  *pbVar6 = *pbVar6 | bVar5;
  *(char *)((longlong)pbVar6 * 2) = *(char *)((longlong)pbVar6 * 2) + cVar2;
  *puVar4 = *puVar4 & uVar3;
  *param_4 = *param_4 + -8;
  *(char *)puVar4 = (char)*puVar4 + cVar2;
  *(byte *)(puVar4 + 2) = (char)puVar4[2] + bVar5;
  *puVar4 = *puVar4 & uVar3;
  pcVar1 = (char *)(unaff_RSI + 0x4b + unaff_RBP * 4);
  *pcVar1 = *pcVar1 + cVar2;
  *pbVar6 = *pbVar6 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

