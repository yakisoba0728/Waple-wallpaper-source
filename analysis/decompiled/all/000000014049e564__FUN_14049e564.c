// Function: FUN_14049e564
// Addr: 14049e564
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049e596) overlaps instruction at (ram,0x00014049e595)
    */

void FUN_14049e564(char *param_1,longlong param_2,ulonglong *param_3,char *param_4)

{
  undefined2 uVar1;
  uint uVar2;
  undefined3 uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  char cVar10;
  longlong in_RAX;
  char cVar11;
  char cVar12;
  char unaff_BH;
  char cVar13;
  longlong unaff_RDI;
  char *pcVar7;
  uint *puVar8;
  ulonglong *puVar9;
  
  cVar12 = (char)((ulonglong)param_1 >> 8);
  cVar11 = (char)param_1;
  uVar2 = *(uint *)(in_RAX + param_2);
  bVar4 = (char)in_RAX + 0x54;
  pcVar7 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar4);
  uVar1 = TaskRegister();
  *(undefined2 *)(pcVar7 + -0x2f) = uVar1;
  *pcVar7 = *pcVar7 + bVar4;
  *param_3 = *param_3 << 1 | (ulonglong)((longlong)*param_3 < 0);
  pcVar7[-0x1c] = pcVar7[-0x1c] + unaff_BH;
  cVar13 = (char)uVar2;
  *param_4 = *param_4 + cVar13;
  puVar8 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8),
                                     bVar4 | *(byte *)((longlong)pcVar7 * 2)));
  *puVar8 = *puVar8 | (uint)puVar8;
  uVar6 = (uint)puVar8 + 0x4f000ad4;
  puVar8 = (uint *)(ulonglong)uVar6;
  *puVar8 = *puVar8 << 1 | (uint)((int)*puVar8 < 0);
  *(char *)(unaff_RDI + -0x73ffff2f) = *(char *)(unaff_RDI + -0x73ffff2f) + cVar12;
  uVar3 = (undefined3)(uVar6 >> 8);
  cVar5 = in(0x49);
  puVar9 = (ulonglong *)(ulonglong)CONCAT31(uVar3,cVar5);
  cVar10 = (char)(uVar6 >> 8);
  *param_1 = *param_1 + cVar10;
  *(char *)puVar9 = (char)*puVar9 + cVar5;
  *(char *)(unaff_RDI + -0x2f) = *(char *)(unaff_RDI + -0x2f) + cVar11;
  *(char *)puVar9 = (char)*puVar9 + cVar5;
  *(uint *)puVar9 = (uint)*puVar9 << 1 | (uint)((int)(uint)*puVar9 < 0);
  pcVar7 = (char *)((ulonglong)((uint)&stack0x00000000 | uVar2) + 0x210049);
  *pcVar7 = *pcVar7 + cVar11;
  *(char *)puVar9 = (char)*puVar9 + cVar5;
  *puVar9 = *puVar9 << 1 | (ulonglong)((longlong)*puVar9 < 0);
  *(char *)(unaff_RDI + -0x2b) = *(char *)(unaff_RDI + -0x2b) + cVar11;
  *(char *)puVar9 = (char)*puVar9 + cVar5;
  if ((char)*puVar9 < '\0') {
    *(char *)puVar9 = (char)*puVar9 + cVar5;
    *param_3 = *param_3 << 1 | (ulonglong)((longlong)*param_3 < 0);
    *(char *)(unaff_RDI + -0x73ffff2b) = *(char *)(unaff_RDI + -0x73ffff2b) + cVar12;
    cVar5 = in(0x49);
    puVar9 = (ulonglong *)(ulonglong)CONCAT31(uVar3,cVar5);
    *param_1 = *param_1 + cVar10;
    *(char *)puVar9 = (char)*puVar9 + cVar5;
    *(char *)((longlong)puVar9 + -0x2f) = *(char *)((longlong)puVar9 + -0x2f) + cVar11;
    *(char *)puVar9 = (char)*puVar9 + cVar5;
    *param_3 = *param_3 << 1 | (ulonglong)((longlong)*param_3 < 0);
    *(char *)((longlong)puVar9 + -0x1c) = *(char *)((longlong)puVar9 + -0x1c) + unaff_BH;
  }
  *param_4 = *param_4 + cVar13;
  cVar5 = (char)puVar9;
  *(char *)puVar9 = (char)*puVar9 + cVar5;
  *(char *)((longlong)puVar9 + -0x2f) = *(char *)((longlong)puVar9 + -0x2f) + cVar5;
  *(char *)puVar9 = (char)*puVar9 + cVar5;
  *puVar9 = *puVar9 << 1 | (ulonglong)((longlong)*puVar9 < 0);
  *(char *)((longlong)puVar9 + -0x1c) =
       *(char *)((longlong)puVar9 + -0x1c) + (char)((ulonglong)param_2 >> 8);
  *param_4 = *param_4 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

