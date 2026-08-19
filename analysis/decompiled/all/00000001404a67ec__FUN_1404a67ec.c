// Function: FUN_1404a67ec
// Addr: 1404a67ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a683e) overlaps instruction at (ram,0x0001404a683d)
    */

void FUN_1404a67ec(uint *param_1,byte *param_2)

{
  byte *pbVar1;
  undefined3 uVar2;
  int *piVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  byte bVar9;
  uint *in_RAX;
  undefined7 uVar10;
  byte bVar11;
  uint uVar12;
  char *pcVar13;
  byte bVar14;
  char cVar15;
  undefined6 uVar16;
  char cVar17;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  byte abStackX_8 [32];
  uint *puVar7;
  char *pcVar8;
  
  uVar16 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar15 = (char)((ulonglong)param_2 >> 8);
  bVar14 = (byte)param_2;
  bVar9 = (byte)((ulonglong)in_RAX >> 8);
  param_2[unaff_RBP + 8] = param_2[unaff_RBP + 8] | bVar9;
  bVar11 = (byte)param_1;
  *(byte *)((longlong)param_1 + -0x76a3fff7) = *(byte *)((longlong)param_1 + -0x76a3fff7) ^ bVar11;
  *in_RAX = *in_RAX | (uint)in_RAX;
  *(byte *)(unaff_RDI + 0x4a) = *(byte *)(unaff_RDI + 0x4a) | bVar9;
  *(byte *)param_1 = (char)*param_1 + bVar9;
  bVar4 = (byte)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + bVar4;
  *(char *)in_RAX = (char)*in_RAX + cVar15;
  uVar12 = (uint)param_1;
  *param_1 = uVar12;
  pcVar8 = (char *)((longlong)param_1 * 5 + 9);
  cVar17 = (char)unaff_EBX;
  *pcVar8 = *pcVar8 + cVar17;
  *(byte *)in_RAX = (char)*in_RAX + bVar11;
  *(undefined1 *)(longlong)(int)uVar12 = *(undefined1 *)(longlong)(int)uVar12;
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + bVar4;
  abStackX_8[(longlong)param_2] = abStackX_8[(longlong)param_2] + cVar15;
  param_2[unaff_RBP + 8] = param_2[unaff_RBP + 8] + bVar9;
  *(byte *)((longlong)param_1 + -0x76a3fff7) = *(byte *)((longlong)param_1 + -0x76a3fff7) ^ bVar11;
  *in_RAX = *in_RAX | (uint)in_RAX;
  *(byte *)(unaff_RDI + 0x4a) = *(byte *)(unaff_RDI + 0x4a) | bVar9;
  *(byte *)param_1 = (char)*param_1 + bVar4;
  uVar10 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar4 = bVar4 & *(byte *)CONCAT44(unaff_0000001c,unaff_EBX);
  puVar7 = (uint *)CONCAT71(uVar10,bVar4);
  *param_2 = *param_2 + bVar9;
  *puVar7 = *puVar7 + uVar12;
  bRam00000001614a6861 = bRam00000001614a6861 | bVar14;
  *param_2 = *param_2 | bVar4;
  *(byte *)puVar7 = (byte)*puVar7 + bVar11;
  if ((byte)*puVar7 == 0) {
    *puVar7 = *puVar7 | (uint)puVar7;
    *(char *)(longlong)(int)uVar12 = *(char *)(longlong)(int)uVar12 + (char)&stack0xfffffffffffffff8
    ;
  }
  else {
    *(byte *)puVar7 = (byte)*puVar7 | bVar4;
    uVar12 = *param_1;
    *unaff_RSI = *unaff_RSI + (char)(uVar12 >> 8);
    param_1 = (uint *)(ulonglong)*(uint *)(ulonglong)uVar12;
    *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) + bVar14;
    *(byte *)param_1 = (char)*param_1 + bVar9;
  }
  *(byte *)puVar7 = (byte)*puVar7 + bVar4;
  *(byte *)puVar7 = (byte)*puVar7 + bVar4;
  uVar12 = *param_1;
  *unaff_RSI = *unaff_RSI + (char)(uVar12 >> 8);
  uVar12 = *(uint *)(ulonglong)uVar12;
  pcVar13 = (char *)(ulonglong)uVar12;
  *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) + bVar14;
  *pcVar13 = *pcVar13 + bVar4;
  cVar5 = *pcVar13;
  *param_2 = *param_2 + bVar4 + cVar5;
  *pcVar13 = *pcVar13 + bVar9;
  uVar6 = (int)CONCAT71(uVar10,bVar4 + cVar5) + 0x34050002;
  uVar2 = (undefined3)(uVar6 >> 8);
  cVar5 = (char)uVar6 + *(char *)(ulonglong)uVar6;
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar2,cVar5);
  pbVar1 = (byte *)((longlong)pcVar13 * 2 + 0x98c6400);
  bVar4 = (byte)uVar12;
  *pbVar1 = *pbVar1 ^ bVar4;
  *(char *)(unaff_RDI + 0x21004a) = *(char *)(unaff_RDI + 0x21004a) + cVar5;
  *pcVar8 = *pcVar8 + cVar5;
  pbVar1 = (byte *)((longlong)pcVar13 * 2 + 0x98c6400);
  *pbVar1 = *pbVar1 ^ bVar4;
  *(char *)(unaff_RDI + 0x521004a) = *(char *)(unaff_RDI + 0x521004a) + cVar5;
  uVar6 = CONCAT31(uVar2,cVar5 + *pcVar8) + 0xb0000434;
  pcVar8 = (char *)(ulonglong)uVar6;
  cVar5 = (char)uVar6;
  pcVar8[0x210049e1] = pcVar8[0x210049e1] + cVar5;
  *pcVar8 = *pcVar8 + cVar5;
  pcVar8[-0xefff673] = pcVar8[-0xefff673] + cVar15;
  pcVar8[0x10049e1] = pcVar8[0x10049e1] + cVar5;
  *param_2 = *param_2 + cVar17;
  uVar12 = *(uint *)(pcVar8 + in_FS_OFFSET);
  *(char *)CONCAT62(uVar16,CONCAT11(cVar15 - *param_2,bVar14)) =
       *(char *)CONCAT62(uVar16,CONCAT11(cVar15 - *param_2,bVar14)) + cVar17;
  piVar3 = (int *)((ulonglong)(uVar6 & uVar12) * 2);
  *piVar3 = *piVar3 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

