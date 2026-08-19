// Function: FUN_14049e56c
// Addr: 14049e56c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049e596) overlaps instruction at (ram,0x00014049e595)
    */

void FUN_14049e56c(char *param_1,undefined8 param_2,ulonglong *param_3,char *param_4)

{
  undefined2 uVar1;
  undefined3 uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  char cVar9;
  undefined8 in_RAX;
  char cVar10;
  char cVar11;
  char unaff_BH;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RDI;
  char *pcVar6;
  uint *puVar7;
  ulonglong *puVar8;
  
  cVar11 = (char)((ulonglong)param_1 >> 8);
  cVar10 = (char)param_1;
  bVar3 = (char)in_RAX + 0x54;
  pcVar6 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
  uVar1 = TaskRegister();
  *(undefined2 *)(pcVar6 + -0x2f) = uVar1;
  *pcVar6 = *pcVar6 + bVar3;
  *param_3 = *param_3 << 1 | (ulonglong)((longlong)*param_3 < 0);
  pcVar6[-0x1c] = pcVar6[-0x1c] + unaff_BH;
  *param_4 = *param_4 + unaff_SPL;
  puVar7 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8),
                                     bVar3 | *(byte *)((longlong)pcVar6 * 2)));
  *puVar7 = *puVar7 | (uint)puVar7;
  uVar5 = (uint)puVar7 + 0x4f000ad4;
  puVar7 = (uint *)(ulonglong)uVar5;
  *puVar7 = *puVar7 << 1 | (uint)((int)*puVar7 < 0);
  *(char *)(unaff_RDI + -0x73ffff2f) = *(char *)(unaff_RDI + -0x73ffff2f) + cVar11;
  uVar2 = (undefined3)(uVar5 >> 8);
  cVar4 = in(0x49);
  puVar8 = (ulonglong *)(ulonglong)CONCAT31(uVar2,cVar4);
  cVar9 = (char)(uVar5 >> 8);
  *param_1 = *param_1 + cVar9;
  *(char *)puVar8 = (char)*puVar8 + cVar4;
  *(char *)(unaff_RDI + -0x2f) = *(char *)(unaff_RDI + -0x2f) + cVar10;
  *(char *)puVar8 = (char)*puVar8 + cVar4;
  *(uint *)puVar8 = (uint)*puVar8 << 1 | (uint)((int)(uint)*puVar8 < 0);
  pcVar6 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + 0x210049);
  *pcVar6 = *pcVar6 + cVar10;
  *(char *)puVar8 = (char)*puVar8 + cVar4;
  *puVar8 = *puVar8 << 1 | (ulonglong)((longlong)*puVar8 < 0);
  *(char *)(unaff_RDI + -0x2b) = *(char *)(unaff_RDI + -0x2b) + cVar10;
  *(char *)puVar8 = (char)*puVar8 + cVar4;
  if ((char)*puVar8 < '\0') {
    *(char *)puVar8 = (char)*puVar8 + cVar4;
    *param_3 = *param_3 << 1 | (ulonglong)((longlong)*param_3 < 0);
    *(char *)(unaff_RDI + -0x73ffff2b) = *(char *)(unaff_RDI + -0x73ffff2b) + cVar11;
    cVar4 = in(0x49);
    puVar8 = (ulonglong *)(ulonglong)CONCAT31(uVar2,cVar4);
    *param_1 = *param_1 + cVar9;
    *(char *)puVar8 = (char)*puVar8 + cVar4;
    *(char *)((longlong)puVar8 + -0x2f) = *(char *)((longlong)puVar8 + -0x2f) + cVar10;
    *(char *)puVar8 = (char)*puVar8 + cVar4;
    *param_3 = *param_3 << 1 | (ulonglong)((longlong)*param_3 < 0);
    *(char *)((longlong)puVar8 + -0x1c) = *(char *)((longlong)puVar8 + -0x1c) + unaff_BH;
  }
  *param_4 = *param_4 + unaff_SPL;
  cVar4 = (char)puVar8;
  *(char *)puVar8 = (char)*puVar8 + cVar4;
  *(char *)((longlong)puVar8 + -0x2f) = *(char *)((longlong)puVar8 + -0x2f) + cVar4;
  *(char *)puVar8 = (char)*puVar8 + cVar4;
  *puVar8 = *puVar8 << 1 | (ulonglong)((longlong)*puVar8 < 0);
  *(char *)((longlong)puVar8 + -0x1c) =
       *(char *)((longlong)puVar8 + -0x1c) + (char)((ulonglong)param_2 >> 8);
  *param_4 = *param_4 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

