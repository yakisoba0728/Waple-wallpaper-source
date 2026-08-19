// Function: FUN_1404a682c
// Addr: 1404a682c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a683e) overlaps instruction at (ram,0x0001404a683d)
    */

void FUN_1404a682c(uint *param_1,byte *param_2)

{
  byte *pbVar1;
  char cVar2;
  undefined3 uVar3;
  int *piVar4;
  byte bVar5;
  char cVar6;
  int in_EAX;
  uint uVar7;
  uint uVar8;
  char *pcVar11;
  char cVar12;
  char cVar13;
  undefined6 uVar14;
  int unaff_EBX;
  char *unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  byte in_CF;
  uint *puVar9;
  char *pcVar10;
  
  uVar14 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar13 = (char)((ulonglong)param_2 >> 8);
  cVar12 = (char)param_2;
  uVar7 = in_EAX + 0x21000030 + (uint)in_CF;
  puVar9 = (uint *)(ulonglong)uVar7;
  bVar5 = (byte)uVar7;
  *param_2 = *param_2 | bVar5;
  *(byte *)puVar9 = (byte)*puVar9 + (char)param_1;
  cVar6 = (char)(uVar7 >> 8);
  if ((byte)*puVar9 == 0) {
    *puVar9 = *puVar9 | uVar7;
    *(char *)(longlong)(int)param_1 = *(char *)(longlong)(int)param_1 + -8;
  }
  else {
    *(byte *)puVar9 = (byte)*puVar9 | bVar5;
    uVar8 = *param_1;
    *unaff_RSI = *unaff_RSI + (char)(uVar8 >> 8);
    param_1 = (uint *)(ulonglong)*(uint *)(ulonglong)uVar8;
    *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) + cVar12;
    *(char *)param_1 = (char)*param_1 + cVar6;
  }
  *(byte *)puVar9 = (byte)*puVar9 + bVar5;
  *(byte *)puVar9 = (byte)*puVar9 + bVar5;
  uVar8 = *param_1;
  *unaff_RSI = *unaff_RSI + (char)(uVar8 >> 8);
  uVar8 = *(uint *)(ulonglong)uVar8;
  pcVar11 = (char *)(ulonglong)uVar8;
  *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) + cVar12;
  *pcVar11 = *pcVar11 + bVar5;
  cVar2 = *pcVar11;
  *param_2 = *param_2 + bVar5 + cVar2;
  *pcVar11 = *pcVar11 + cVar6;
  uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5 + cVar2) + 0x34050002;
  uVar3 = (undefined3)(uVar7 >> 8);
  cVar6 = (char)uVar7 + *(char *)(ulonglong)uVar7;
  pcVar10 = (char *)(ulonglong)CONCAT31(uVar3,cVar6);
  pbVar1 = (byte *)((longlong)pcVar11 * 2 + 0x98c6400);
  bVar5 = (byte)uVar8;
  *pbVar1 = *pbVar1 ^ bVar5;
  *(char *)(unaff_RDI + 0x21004a) = *(char *)(unaff_RDI + 0x21004a) + cVar6;
  *pcVar10 = *pcVar10 + cVar6;
  pbVar1 = (byte *)((longlong)pcVar11 * 2 + 0x98c6400);
  *pbVar1 = *pbVar1 ^ bVar5;
  *(char *)(unaff_RDI + 0x521004a) = *(char *)(unaff_RDI + 0x521004a) + cVar6;
  uVar8 = CONCAT31(uVar3,cVar6 + *pcVar10) + 0xb0000434;
  pcVar10 = (char *)(ulonglong)uVar8;
  cVar6 = (char)uVar8;
  pcVar10[0x210049e1] = pcVar10[0x210049e1] + cVar6;
  *pcVar10 = *pcVar10 + cVar6;
  pcVar10[-0xefff673] = pcVar10[-0xefff673] + cVar13;
  pcVar10[0x10049e1] = pcVar10[0x10049e1] + cVar6;
  *param_2 = *param_2 + (char)unaff_EBX;
  uVar7 = *(uint *)(pcVar10 + in_FS_OFFSET);
  cVar13 = cVar13 - *param_2;
  *(char *)CONCAT62(uVar14,CONCAT11(cVar13,cVar12)) =
       *(char *)CONCAT62(uVar14,CONCAT11(cVar13,cVar12)) + (char)unaff_EBX;
  piVar4 = (int *)((ulonglong)(uVar8 & uVar7) * 2);
  *piVar4 = *piVar4 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

