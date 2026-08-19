// Function: FUN_1404a2a7c
// Addr: 1404a2a7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a2b33) overlaps instruction at (ram,0x0001404a2b32)
    */
/* WARNING: Removing unreachable block (ram,0x0001404a2c12) */

void FUN_1404a2a7c(char *param_1,byte *param_2,longlong param_3)

{
  byte *pbVar1;
  undefined3 uVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  byte bVar11;
  int in_EAX;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
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
  longlong unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  ulonglong unaff_RDI;
  longlong in_R10;
  longlong in_FS_OFFSET;
  char in_CF;
  uint *puStack_8;
  uint *puVar10;
  longlong lVar16;
  
  uVar21 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar20 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar19 = (byte)((ulonglong)param_2 >> 8);
  cVar18 = (char)param_2;
  pcVar13 = (char *)(unaff_RBP + CONCAT44(unaff_0000001c,unaff_EBX));
  *pcVar13 = *pcVar13 + bVar19 + in_CF;
  (&stack0x00000000)[CONCAT44(unaff_0000001c,unaff_EBX)] =
       (&stack0x00000000)[CONCAT44(unaff_0000001c,unaff_EBX)] | (byte)((uint)in_EAX >> 8);
  *param_2 = *param_2 + bVar19;
  uVar6 = in_EAX + 0x4a299400;
  pcVar13 = (char *)(ulonglong)uVar6;
  *param_1 = *param_1 + (char)(uVar6 >> 8);
  *pcVar13 = *pcVar13 + (char)uVar6;
  pcVar13[0x3200053f] = pcVar13[0x3200053f] + (char)uVar6;
  iVar7 = in_EAX + -0x6bacd800;
  *param_1 = *param_1 + (byte)iVar7;
  uVar2 = (undefined3)((uint)iVar7 >> 8);
  bVar3 = (byte)iVar7 | bRam0000000146ec34a7;
  puStack_8 = (uint *)(ulonglong)CONCAT31(uVar2,bVar3);
  pcVar13 = param_1 + -1;
  bVar11 = (byte)((uint)iVar7 >> 8);
  if (pcVar13 == (char *)0x0 || bVar3 == 0) {
    register0x00000020 = (BADSPACEBASE *)&puStack_8;
    bVar19 = bVar19 + (byte)*puStack_8;
  }
  else {
    *(byte *)puStack_8 = (byte)*puStack_8 ^ bVar3;
    *pcVar13 = *pcVar13 + bVar11;
    *param_2 = *param_2 | bVar3;
    uVar6 = *puStack_8;
    *(byte *)puStack_8 = (byte)*puStack_8 + (byte)pcVar13;
    *(byte *)(in_FS_OFFSET + (longlong)puStack_8) =
         *(byte *)(in_FS_OFFSET + (longlong)puStack_8) + bVar3 + CARRY1((byte)uVar6,(byte)pcVar13);
  }
  *(byte *)puStack_8 = (byte)*puStack_8 + bVar3;
  *puStack_8 = *puStack_8 & (uint)pcVar13;
  uVar6 = CONCAT31(uVar2,bVar3 + (byte)*puStack_8);
  pbVar15 = (byte *)((ulonglong)uVar6 + CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))));
  *pbVar15 = *pbVar15 | bVar11;
  if (param_1 + -2 != (char *)0x0 && *pbVar15 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar7 = uVar6 + 0x5448e00;
  cVar4 = (char)iVar7 + cVar18;
  uVar6 = CONCAT31((int3)((uint)iVar7 >> 8),cVar4);
  puVar10 = (uint *)(ulonglong)uVar6;
  *(int *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) =
       *(int *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) - (int)(param_1 + -2);
  *puVar10 = *puVar10 & uVar6;
  *(char *)puVar10 = (char)*puVar10 + cVar4;
  pcVar13 = param_1 + -3;
  cVar5 = (char)unaff_EBX;
  if (pcVar13 == (char *)0x0 || (char)*puVar10 == '\0') {
    iVar7 = uVar6 + 0x5448e00;
    uVar2 = (undefined3)((uint)iVar7 >> 8);
    cVar4 = (char)iVar7 + cVar18;
    uVar6 = CONCAT31(uVar2,cVar4);
    puVar10 = (uint *)(ulonglong)uVar6;
    *(uint *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) =
         *(int *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) - (uint)pcVar13;
    *puVar10 = *puVar10 & uVar6;
    pcVar13 = (char *)((ulonglong)CONCAT31(uVar2,cVar4 + (char)*puVar10) +
                      CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))));
    *pcVar13 = *pcVar13 + (char)((uint)iVar7 >> 8);
    piVar14 = (int *)(param_1 + -4);
    if (piVar14 != (int *)0x0 && *pcVar13 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) =
         *(int *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) - (int)piVar14;
    *piVar14 = *piVar14 + unaff_EBX;
    *(int *)((longlong)register0x00000020 +
            CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18)))) =
         *(int *)((longlong)register0x00000020 +
                 CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18)))) - unaff_ESI;
    *(char *)piVar14 = (char)*piVar14 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar18 = cVar18 + (char)*puVar10;
  *pcVar13 = *pcVar13 + cVar4;
  *puVar10 = *puVar10 & (uint)pcVar13;
  cVar12 = (char)((uint)iVar7 >> 8);
  *pcVar13 = *pcVar13 + cVar12;
  piVar14 = (int *)(param_1 + 0x10f011fd);
  *piVar14 = *piVar14 + unaff_EBX;
  pbVar15 = (byte *)(param_1 + -4);
  if (pbVar15 != (byte *)0x0 && *piVar14 != 0) {
    pcVar13 = (char *)((longlong)puVar10 + unaff_RBP * 2);
    *pcVar13 = *pcVar13 + cVar5;
  }
  pbVar1 = (byte *)((longlong)puVar10 + CONCAT44(unaff_00000034,unaff_ESI) * 2);
  *pbVar1 = *pbVar1 >> 3 | *pbVar1 << 5;
  bVar3 = (byte)pbVar15;
  *(byte *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) =
       *(byte *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) ^ bVar3;
  *(uint **)((longlong)register0x00000020 + -8) = puVar10;
  *(uint *)((longlong)puVar10 + (longlong)pbVar15) =
       *(uint *)((longlong)puVar10 + (longlong)pbVar15) &
       (uint)(undefined1 *)((longlong)register0x00000020 + -8);
  pcVar13 = (char *)((longlong)puVar10 + unaff_RDI * 2);
  *pcVar13 = *pcVar13 + cVar12;
  pcVar13 = (char *)(param_3 + unaff_RBP * 2);
  *pcVar13 = *pcVar13 + cVar5;
  *(char *)((longlong)register0x00000020 + in_R10 * 8 + -8) =
       *(char *)((longlong)register0x00000020 + in_R10 * 8 + -8) + cVar18;
  pcVar13 = (char *)(unaff_RDI & 0xffffffff);
  *pcVar13 = *pcVar13 + bVar3;
  uVar8 = (uint)(short)pcVar13;
  *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + (char)((ulonglong)pcVar13 >> 8);
  *(ulonglong *)((longlong)register0x00000020 + -0x10) = CONCAT44(unaff_0000001c,unaff_EBX);
  uVar9 = uVar8 + 0x553ff00;
  pcVar13 = (char *)(ulonglong)uVar9;
  pcVar13[0x2a] = pcVar13[0x2a] + bVar3;
  *pbVar15 = *pbVar15 + (char)(undefined1 *)((longlong)register0x00000020 + -0x10);
  *pcVar13 = *pcVar13 + (char)uVar9;
  *pcVar13 = *pcVar13 + (char)(uVar9 >> 8);
  *(ulonglong *)((longlong)register0x00000020 + -0x18) = CONCAT44(unaff_0000001c,unaff_EBX);
  pcVar13 = (char *)(ulonglong)(uVar8 + 0xaa7fe00);
  pcVar13[0x2a] = pcVar13[0x2a] + bVar3;
  *pbVar15 = *pbVar15 + (char)(undefined1 *)((longlong)register0x00000020 + -0x18);
  *pcVar13 = *pcVar13 + bVar3;
  cVar5 = (char)(uVar8 + 0xaa7fe00);
  *pcVar13 = *pcVar13 + cVar5;
  if (*pcVar13 < '\0') {
    iVar7 = uVar8 + 0xc0100d64;
    cVar4 = (char)((uint)iVar7 >> 8) + (char)iVar7;
    uVar6 = CONCAT22((short)((uint)iVar7 >> 0x10),CONCAT11(cVar4,(char)iVar7));
    uVar17 = (undefined7)((ulonglong)pbVar15 >> 8);
    cVar12 = bVar3 - *(char *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18)));
    lVar16 = CONCAT71(uVar17,cVar12);
    *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 & uVar6;
    pcVar13 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) + lVar16);
    *pcVar13 = *pcVar13 + bVar19;
    pcVar13 = (char *)(CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) + lVar16);
    *pcVar13 = *pcVar13 + cVar4;
    iVar7 = (int)CONCAT71((uint7)(uint3)(uVar6 >> 8),0x67) + 0x5680500;
    cVar5 = (char)iVar7;
    uVar6 = CONCAT22((short)((uint)iVar7 >> 0x10),CONCAT11((char)((uint)iVar7 >> 8) + cVar5,cVar5));
    puVar10 = (uint *)(ulonglong)uVar6;
    cVar4 = *(char *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18)));
    *puVar10 = *puVar10 & uVar6;
    *(char *)puVar10 = (char)*puVar10 + cVar5;
    cVar4 = (cVar12 - cVar4) - *(char *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18)));
    lVar16 = CONCAT71(uVar17,cVar4);
    *(int *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) =
         *(int *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) + (int)lVar16;
    bVar19 = bVar19 | *(byte *)(lVar16 * 2);
    *(char *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) =
         *(char *)CONCAT44(uVar21,CONCAT22(uVar20,CONCAT11(bVar19,cVar18))) + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar13 = *pcVar13 + cVar5;
  *(undefined8 *)((longlong)register0x00000020 + -0x20) = 0xffffffffd400004a;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + cVar4;
  uVar8 = (uint)(short)uVar6;
  *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + cVar12;
  *(ulonglong *)((longlong)register0x00000020 + -0x28) = CONCAT44(unaff_0000001c,unaff_EBX);
  uVar9 = uVar8 + 0x553ff00;
  *(char *)((ulonglong)uVar9 + 0x2a) = *(char *)((ulonglong)uVar9 + 0x2a) + bVar3;
  bVar3 = *pbVar15;
  *pbVar15 = *pbVar15 + (byte)uVar9;
  uVar6 = (uint)CARRY1(bVar3,(byte)uVar9);
  uVar6 = ((uVar8 + 0x436fef6) - uVar6) + 0xff01100 +
          (uint)(uVar9 < 0x11d000a || uVar8 + 0x436fef6 < uVar6);
  piVar14 = (int *)(ulonglong)uVar6;
  param_1 = param_1 + -5;
  if (param_1 == (char *)0x0 || uVar6 == 0) {
    *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) =
         *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) >> 1 |
         *(char *)CONCAT44(unaff_0000001c,unaff_EBX) << 7;
    *param_1 = *param_1;
    *(byte *)((longlong)piVar14 + 7) = *(byte *)((longlong)piVar14 + 7) | (byte)(uVar6 >> 8);
    *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(byte *)CONCAT44(unaff_00000034,unaff_ESI) ^ (byte)uVar6;
    *(int **)((longlong)register0x00000020 + -0x30) = piVar14;
    *piVar14 = *piVar14 + CONCAT22(uVar20,CONCAT11(bVar19,cVar18));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

