// Function: FUN_1404a6810
// Addr: 1404a6810
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a683e) overlaps instruction at (ram,0x0001404a683d)
    */

void FUN_1404a6810(uint *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined3 uVar3;
  int *piVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  byte bVar10;
  uint *in_RAX;
  undefined7 uVar11;
  int iVar12;
  char *pcVar13;
  byte bVar14;
  char cVar15;
  undefined6 uVar16;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  byte abStackX_8 [32];
  uint *puVar8;
  char *pcVar9;
  
  uVar16 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar15 = (char)((ulonglong)param_2 >> 8);
  bVar14 = (byte)param_2;
  abStackX_8[(longlong)param_2] = abStackX_8[(longlong)param_2] + cVar15;
  bVar10 = (byte)((ulonglong)in_RAX >> 8);
  param_2[unaff_RBP + 8] = param_2[unaff_RBP + 8] + bVar10;
  *(byte *)((longlong)param_1 + -0x76a3fff7) =
       *(byte *)((longlong)param_1 + -0x76a3fff7) ^ (byte)param_1;
  *in_RAX = *in_RAX | (uint)in_RAX;
  *(byte *)(unaff_RDI + 0x4a) = *(byte *)(unaff_RDI + 0x4a) | bVar10;
  *(byte *)param_1 = (char)*param_1 + (byte)in_RAX;
  uVar11 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar5 = (byte)in_RAX & *(byte *)CONCAT44(unaff_0000001c,unaff_EBX);
  puVar8 = (uint *)CONCAT71(uVar11,bVar5);
  *param_2 = *param_2 + bVar10;
  iVar12 = (int)param_1;
  *puVar8 = *puVar8 + iVar12;
  bRam00000001614a6861 = bRam00000001614a6861 | bVar14;
  *param_2 = *param_2 | bVar5;
  *(byte *)puVar8 = (byte)*puVar8 + (byte)param_1;
  if ((byte)*puVar8 == 0) {
    *puVar8 = *puVar8 | (uint)puVar8;
    *(char *)(longlong)iVar12 = *(char *)(longlong)iVar12 + (char)&stack0xfffffffffffffff8;
  }
  else {
    *(byte *)puVar8 = (byte)*puVar8 | bVar5;
    uVar2 = *param_1;
    *unaff_RSI = *unaff_RSI + (char)(uVar2 >> 8);
    param_1 = (uint *)(ulonglong)*(uint *)(ulonglong)uVar2;
    *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) + bVar14;
    *(byte *)param_1 = (char)*param_1 + bVar10;
  }
  *(byte *)puVar8 = (byte)*puVar8 + bVar5;
  *(byte *)puVar8 = (byte)*puVar8 + bVar5;
  uVar2 = *param_1;
  *unaff_RSI = *unaff_RSI + (char)(uVar2 >> 8);
  uVar2 = *(uint *)(ulonglong)uVar2;
  pcVar13 = (char *)(ulonglong)uVar2;
  *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) + bVar14;
  *pcVar13 = *pcVar13 + bVar5;
  cVar6 = *pcVar13;
  *param_2 = *param_2 + bVar5 + cVar6;
  *pcVar13 = *pcVar13 + bVar10;
  uVar7 = (int)CONCAT71(uVar11,bVar5 + cVar6) + 0x34050002;
  uVar3 = (undefined3)(uVar7 >> 8);
  cVar6 = (char)uVar7 + *(char *)(ulonglong)uVar7;
  pcVar9 = (char *)(ulonglong)CONCAT31(uVar3,cVar6);
  pbVar1 = (byte *)((longlong)pcVar13 * 2 + 0x98c6400);
  bVar5 = (byte)uVar2;
  *pbVar1 = *pbVar1 ^ bVar5;
  *(char *)(unaff_RDI + 0x21004a) = *(char *)(unaff_RDI + 0x21004a) + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  pbVar1 = (byte *)((longlong)pcVar13 * 2 + 0x98c6400);
  *pbVar1 = *pbVar1 ^ bVar5;
  *(char *)(unaff_RDI + 0x521004a) = *(char *)(unaff_RDI + 0x521004a) + cVar6;
  uVar7 = CONCAT31(uVar3,cVar6 + *pcVar9) + 0xb0000434;
  pcVar9 = (char *)(ulonglong)uVar7;
  cVar6 = (char)uVar7;
  pcVar9[0x210049e1] = pcVar9[0x210049e1] + cVar6;
  *pcVar9 = *pcVar9 + cVar6;
  pcVar9[-0xefff673] = pcVar9[-0xefff673] + cVar15;
  pcVar9[0x10049e1] = pcVar9[0x10049e1] + cVar6;
  *param_2 = *param_2 + (char)unaff_EBX;
  uVar2 = *(uint *)(pcVar9 + in_FS_OFFSET);
  *(char *)CONCAT62(uVar16,CONCAT11(cVar15 - *param_2,bVar14)) =
       *(char *)CONCAT62(uVar16,CONCAT11(cVar15 - *param_2,bVar14)) + (char)unaff_EBX;
  piVar4 = (int *)((ulonglong)(uVar7 & uVar2) * 2);
  *piVar4 = *piVar4 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

