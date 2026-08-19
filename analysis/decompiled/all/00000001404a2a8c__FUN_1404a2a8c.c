// Function: FUN_1404a2a8c
// Addr: 1404a2a8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a2b33) overlaps instruction at (ram,0x0001404a2b32)
    */
/* WARNING: Removing unreachable block (ram,0x0001404a2c12) */

void FUN_1404a2a8c(undefined1 *param_1,byte *param_2,longlong param_3)

{
  byte *pbVar1;
  undefined3 uVar2;
  char cVar3;
  char cVar4;
  byte bVar10;
  uint in_EAX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  byte bVar11;
  char cVar12;
  char *pcVar13;
  int *piVar14;
  byte *pbVar15;
  undefined7 uVar17;
  char cVar18;
  byte bVar19;
  undefined2 uVar20;
  undefined4 uVar21;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  undefined1 *puVar22;
  undefined8 *puVar23;
  longlong unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  ulonglong unaff_RDI;
  longlong in_R10;
  longlong in_FS_OFFSET;
  longlong lVar16;
  
  uVar21 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar20 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar19 = (byte)((ulonglong)param_2 >> 8);
  cVar18 = (char)param_2;
  puVar9 = (uint *)((ulonglong)&stack0x00000000 & 0xffffffff);
  puVar22 = (undefined1 *)(ulonglong)in_EAX;
  *(int *)param_2 = *(int *)param_2 - (int)param_1;
  *puVar9 = *puVar9 & (uint)&stack0x00000000;
  *(char *)puVar9 = (char)*puVar9;
  *param_2 = *param_2 + bVar19;
  iVar5 = (uint)&stack0x00000000 + 0x4a299400;
  *param_1 = *param_1;
  bVar11 = bRam0000000146ec34a7;
  uVar2 = (undefined3)((uint)iVar5 >> 8);
  puVar9 = (uint *)(ulonglong)CONCAT31(uVar2,bRam0000000146ec34a7);
  pcVar13 = param_1 + -1;
  bVar10 = (byte)((uint)iVar5 >> 8);
  if (pcVar13 == (char *)0x0 || bRam0000000146ec34a7 == 0) {
    puVar23 = (undefined8 *)(puVar22 + -8);
    puVar22 = puVar22 + -8;
    *puVar23 = puVar9;
    bVar19 = bVar19 + (byte)*puVar9;
  }
  else {
    *(byte *)puVar9 = (byte)*puVar9 ^ bRam0000000146ec34a7;
    *pcVar13 = *pcVar13 + bVar10;
    *param_2 = *param_2 | bVar11;
    uVar8 = *puVar9;
    *(byte *)puVar9 = (byte)*puVar9 + (byte)pcVar13;
    *(byte *)(in_FS_OFFSET + (longlong)puVar9) =
         *(byte *)(in_FS_OFFSET + (longlong)puVar9) + bVar11 + CARRY1((byte)uVar8,(byte)pcVar13);
  }
  *(byte *)puVar9 = (byte)*puVar9 + bVar11;
  *puVar9 = *puVar9 & (uint)pcVar13;
  uVar8 = CONCAT31(uVar2,bVar11 + (byte)*puVar9);
  pbVar15 = (byte *)((ulonglong)uVar8 + CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))));
  *pbVar15 = *pbVar15 | bVar10;
  if (param_1 + -2 != (undefined1 *)0x0 && *pbVar15 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar5 = uVar8 + 0x5448e00;
  cVar3 = (char)iVar5 + cVar18;
  uVar8 = CONCAT31((int3)((uint)iVar5 >> 8),cVar3);
  puVar9 = (uint *)(ulonglong)uVar8;
  *(int *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) =
       *(int *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) - (int)(param_1 + -2);
  *puVar9 = *puVar9 & uVar8;
  *(char *)puVar9 = (char)*puVar9 + cVar3;
  pcVar13 = param_1 + -3;
  cVar4 = (char)unaff_EBX;
  if (pcVar13 == (char *)0x0 || (char)*puVar9 == '\0') {
    iVar5 = uVar8 + 0x5448e00;
    uVar2 = (undefined3)((uint)iVar5 >> 8);
    cVar3 = (char)iVar5 + cVar18;
    uVar8 = CONCAT31(uVar2,cVar3);
    puVar9 = (uint *)(ulonglong)uVar8;
    *(uint *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) =
         *(int *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) - (uint)pcVar13;
    *puVar9 = *puVar9 & uVar8;
    pcVar13 = (char *)((ulonglong)CONCAT31(uVar2,cVar3 + (char)*puVar9) +
                      CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))));
    *pcVar13 = *pcVar13 + (char)((uint)iVar5 >> 8);
    piVar14 = (int *)(param_1 + -4);
    if (piVar14 != (int *)0x0 && *pcVar13 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) =
         *(int *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) - (int)piVar14;
    *piVar14 = *piVar14 + unaff_EBX;
    *(int *)(puVar22 + CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18)))) =
         *(int *)(puVar22 + CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18)))) - unaff_ESI;
    *(char *)piVar14 = (char)*piVar14 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar18 = cVar18 + (char)*puVar9;
  *pcVar13 = *pcVar13 + cVar3;
  *puVar9 = *puVar9 & (uint)pcVar13;
  cVar12 = (char)((uint)iVar5 >> 8);
  *pcVar13 = *pcVar13 + cVar12;
  piVar14 = (int *)(param_1 + 0x10f011fd);
  *piVar14 = *piVar14 + unaff_EBX;
  pbVar15 = param_1 + -4;
  if (pbVar15 != (byte *)0x0 && *piVar14 != 0) {
    pcVar13 = (char *)((longlong)puVar9 + unaff_RBP * 2);
    *pcVar13 = *pcVar13 + cVar4;
  }
  pbVar1 = (byte *)((longlong)puVar9 + CONCAT44(unaff_00000034,unaff_ESI) * 2);
  *pbVar1 = *pbVar1 >> 3 | *pbVar1 << 5;
  bVar11 = (byte)pbVar15;
  *(byte *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) =
       *(byte *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) ^ bVar11;
  *(uint **)(puVar22 + -8) = puVar9;
  *(uint *)((longlong)puVar9 + (longlong)pbVar15) =
       *(uint *)((longlong)puVar9 + (longlong)pbVar15) & (uint)(puVar22 + -8);
  pcVar13 = (char *)((longlong)puVar9 + unaff_RDI * 2);
  *pcVar13 = *pcVar13 + cVar12;
  pcVar13 = (char *)(param_3 + unaff_RBP * 2);
  *pcVar13 = *pcVar13 + cVar4;
  puVar22[in_R10 * 8 + -8] = puVar22[in_R10 * 8 + -8] + cVar18;
  pcVar13 = (char *)(unaff_RDI & 0xffffffff);
  *pcVar13 = *pcVar13 + bVar11;
  uVar6 = (uint)(short)pcVar13;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)((ulonglong)pcVar13 >> 8);
  *(ulonglong *)(puVar22 + -0x10) = CONCAT44(unaff_0000001c,unaff_EBX);
  uVar7 = uVar6 + 0x553ff00;
  pcVar13 = (char *)(ulonglong)uVar7;
  pcVar13[0x2a] = pcVar13[0x2a] + bVar11;
  *pbVar15 = *pbVar15 + (char)(puVar22 + -0x10);
  *pcVar13 = *pcVar13 + (char)uVar7;
  *pcVar13 = *pcVar13 + (char)(uVar7 >> 8);
  *(ulonglong *)(puVar22 + -0x18) = CONCAT44(unaff_0000001c,unaff_EBX);
  pcVar13 = (char *)(ulonglong)(uVar6 + 0xaa7fe00);
  pcVar13[0x2a] = pcVar13[0x2a] + bVar11;
  *pbVar15 = *pbVar15 + (char)(puVar22 + -0x18);
  *pcVar13 = *pcVar13 + bVar11;
  cVar4 = (char)(uVar6 + 0xaa7fe00);
  *pcVar13 = *pcVar13 + cVar4;
  if (*pcVar13 < '\0') {
    iVar5 = uVar6 + 0xc0100d64;
    cVar3 = (char)((uint)iVar5 >> 8) + (char)iVar5;
    uVar8 = CONCAT22((short)((uint)iVar5 >> 0x10),CONCAT11(cVar3,(char)iVar5));
    uVar17 = (undefined7)((ulonglong)pbVar15 >> 8);
    cVar12 = bVar11 - *(char *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18)));
    lVar16 = CONCAT71(uVar17,cVar12);
    *(uint *)(ulonglong)uVar8 = *(uint *)(ulonglong)uVar8 & uVar8;
    pcVar13 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) + lVar16);
    *pcVar13 = *pcVar13 + bVar19;
    pcVar13 = (char *)(CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) + lVar16);
    *pcVar13 = *pcVar13 + cVar3;
    iVar5 = (int)CONCAT71((uint7)(uint3)(uVar8 >> 8),0x67) + 0x5680500;
    cVar4 = (char)iVar5;
    uVar8 = CONCAT22((short)((uint)iVar5 >> 0x10),CONCAT11((char)((uint)iVar5 >> 8) + cVar4,cVar4));
    puVar9 = (uint *)(ulonglong)uVar8;
    cVar3 = *(char *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18)));
    *puVar9 = *puVar9 & uVar8;
    *(char *)puVar9 = (char)*puVar9 + cVar4;
    cVar3 = (cVar12 - cVar3) - *(char *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18)));
    lVar16 = CONCAT71(uVar17,cVar3);
    *(int *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) =
         *(int *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) + (int)lVar16;
    bVar19 = bVar19 | *(byte *)(lVar16 * 2);
    *(char *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) =
         *(char *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar13 = *pcVar13 + cVar4;
  *(undefined8 *)(puVar22 + -0x20) = 0xffffffffd400004a;
  *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + cVar3;
  uVar6 = (uint)(short)uVar8;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + cVar12;
  *(ulonglong *)(puVar22 + -0x28) = CONCAT44(unaff_0000001c,unaff_EBX);
  uVar7 = uVar6 + 0x553ff00;
  *(char *)((ulonglong)uVar7 + 0x2a) = *(char *)((ulonglong)uVar7 + 0x2a) + bVar11;
  bVar11 = *pbVar15;
  *pbVar15 = *pbVar15 + (byte)uVar7;
  uVar8 = (uint)CARRY1(bVar11,(byte)uVar7);
  uVar8 = ((uVar6 + 0x436fef6) - uVar8) + 0xff01100 +
          (uint)(uVar7 < 0x11d000a || uVar6 + 0x436fef6 < uVar8);
  piVar14 = (int *)(ulonglong)uVar8;
  param_1 = param_1 + -5;
  if (param_1 == (undefined1 *)0x0 || uVar8 == 0) {
    *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) =
         *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) >> 1 |
         *(char *)CONCAT44(unaff_0000001c,unaff_EBX) << 7;
    *param_1 = *param_1;
    *(byte *)((longlong)piVar14 + 7) = *(byte *)((longlong)piVar14 + 7) | (byte)(uVar8 >> 8);
    *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(byte *)CONCAT44(unaff_00000034,unaff_ESI) ^ (byte)uVar8;
    *(int **)(puVar22 + -0x30) = piVar14;
    *piVar14 = *piVar14 + CONCAT22(uVar20,CONCAT11(bVar19,cVar18));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

