// Function: FUN_1404a6860
// Addr: 1404a6860
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6860(undefined2 *param_1,char *param_2)

{
  byte *pbVar1;
  int *piVar2;
  char cVar3;
  int in_EAX;
  uint uVar4;
  uint uVar5;
  char cVar7;
  undefined6 uVar8;
  int unaff_EBX;
  longlong unaff_RDI;
  undefined2 in_CS;
  longlong in_FS_OFFSET;
  char acStackX_9 [31];
  char *pcVar6;
  
  uVar8 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar7 = (char)((ulonglong)param_2 >> 8);
  uVar4 = in_EAX + 0x30000234;
  pcVar6 = (char *)(ulonglong)uVar4;
  *param_1 = in_CS;
  acStackX_9[(longlong)param_1 * 4] = acStackX_9[(longlong)param_1 * 4] + (char)(uVar4 >> 8);
  cVar3 = (char)uVar4;
  *(char *)(unaff_RDI + 0x21004a) = *(char *)(unaff_RDI + 0x21004a) + cVar3;
  *pcVar6 = *pcVar6 + cVar3;
  pbVar1 = (byte *)((longlong)param_1 * 2 + 0x98c6400);
  *pbVar1 = *pbVar1 ^ (byte)param_1;
  *(char *)(unaff_RDI + 0x521004a) = *(char *)(unaff_RDI + 0x521004a) + cVar3;
  uVar5 = CONCAT31((int3)(uVar4 >> 8),cVar3 + *pcVar6) + 0xb0000434;
  pcVar6 = (char *)(ulonglong)uVar5;
  cVar3 = (char)uVar5;
  pcVar6[0x210049e1] = pcVar6[0x210049e1] + cVar3;
  *pcVar6 = *pcVar6 + cVar3;
  pcVar6[-0xefff673] = pcVar6[-0xefff673] + cVar7;
  pcVar6[0x10049e1] = pcVar6[0x10049e1] + cVar3;
  *param_2 = *param_2 + (char)unaff_EBX;
  uVar4 = *(uint *)(pcVar6 + in_FS_OFFSET);
  cVar7 = cVar7 - *param_2;
  *(char *)CONCAT62(uVar8,CONCAT11(cVar7,(char)param_2)) =
       *(char *)CONCAT62(uVar8,CONCAT11(cVar7,(char)param_2)) + (char)unaff_EBX;
  piVar2 = (int *)((ulonglong)(uVar5 & uVar4) * 2);
  *piVar2 = *piVar2 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

