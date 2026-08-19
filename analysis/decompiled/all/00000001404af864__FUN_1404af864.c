// Function: FUN_1404af864
// Addr: 1404af864
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404af8ec) overlaps instruction at (ram,0x0001404af8eb)
    */

void FUN_1404af864(byte *param_1,char *param_2,undefined8 param_3,undefined1 param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  byte *in_RAX;
  undefined7 uVar12;
  uint *puVar9;
  byte *pbVar11;
  byte bVar13;
  char cVar14;
  undefined2 uVar15;
  undefined4 uVar16;
  char cVar17;
  byte bVar18;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 *puVar19;
  undefined1 *puVar20;
  undefined8 *unaff_RBP;
  undefined1 *puVar21;
  undefined1 *puVar22;
  int unaff_ESI;
  char *pcVar23;
  char *unaff_RDI;
  bool bVar24;
  bool bVar25;
  undefined1 auStack_74 [20];
  undefined1 *puStack_60;
  undefined8 uStack_10;
  char *pcVar10;
  
  bVar18 = (byte)((ulonglong)param_2 >> 8);
  cVar17 = (char)param_2;
  uVar16 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar15 = (undefined2)((ulonglong)param_1 >> 0x10);
  cVar14 = (char)((ulonglong)param_1 >> 8);
  bVar13 = (byte)param_1;
  *in_RAX = *in_RAX | bVar18;
  cVar6 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar6;
  uVar12 = (undefined7)((ulonglong)in_RAX >> 8);
  (&stack0x00000000)[(longlong)param_2 * 2] =
       (&stack0x00000000)[(longlong)param_2 * 2] + (char)in_RAX + '\x02';
  pcVar23 = (char *)(ulonglong)(uint)(unaff_ESI + *(int *)((longlong)unaff_RBP + 0x14));
  pcVar10 = (char *)(CONCAT71(uVar12,0x74) + -9);
  *pcVar10 = *pcVar10 + cVar14;
  *param_1 = *param_1;
  puVar9 = (uint *)CONCAT71(uVar12,0x76);
  *unaff_RDI = *unaff_RDI + 'v';
  if (*unaff_RDI == '\0') {
    *(char *)((longlong)puVar9 + 0x21004af7) = *(char *)((longlong)puVar9 + 0x21004af7) + unaff_BL;
    *(char *)puVar9 = (char)*puVar9 + 'v';
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 'v';
    if (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) == '\0') {
      *unaff_RDI = *unaff_RDI + 'v';
      if (*unaff_RDI == '\0') goto code_r0x0001404af89b;
      *param_1 = *param_1 + cVar6;
    }
code_r0x0001404af8ab:
    *(char *)((longlong)puVar9 + -9) = *(char *)((longlong)puVar9 + -9) + cVar14;
    *param_1 = *param_1;
    bVar13 = bVar13 ^ (byte)*puVar9;
    *param_2 = *param_2 + bVar18;
    uVar8 = *puVar9;
    uVar7 = (uint)puVar9;
    *puVar9 = *puVar9 + uVar7;
    uVar2 = (uint)unaff_RBP - uVar7;
    bVar24 = (uint)unaff_RBP < uVar7 || uVar2 < CARRY4(uVar8,uVar7);
    puVar21 = (undefined1 *)(ulonglong)(uVar2 - CARRY4(uVar8,uVar7));
    bVar4 = (char)*puVar9 + 0x76;
    bVar25 = 0x89 < (byte)*puVar9 || CARRY1(bVar4,bVar24);
    bVar4 = bVar4 + bVar24;
    bVar24 = CARRY1(unaff_BL,bVar4);
    bVar5 = unaff_BL + bVar4;
    unaff_BL = bVar5 + bVar25;
    uVar8 = (int)(int *)CONCAT71(uVar12,bVar4) + *(int *)CONCAT71(uVar12,bVar4) +
            (uint)(bVar24 || CARRY1(bVar5,bVar25)) | CONCAT22(uVar15,CONCAT11(cVar14,bVar13));
    puVar9 = (uint *)(ulonglong)uVar8;
    puVar20 = (undefined1 *)register0x00000020;
    puVar22 = puVar21;
    if ((char)uVar8 != '\0') {
code_r0x0001404af8db:
      pbVar11 = (byte *)CONCAT71((int7)((ulonglong)puVar9 >> 8),(char)puVar9 + cVar17);
      goto code_r0x0001404af8e4;
    }
  }
  else {
    *param_1 = *param_1 + cVar6;
code_r0x0001404af89b:
    *(char *)((longlong)puVar9 + 0x21004af7) = *(char *)((longlong)puVar9 + 0x21004af7) + unaff_BL;
    *(char *)puVar9 = (char)*puVar9 + 'v';
    puVar1 = puVar9 + 0xc0051d;
    *(byte *)puVar1 = (char)*puVar1 + bVar18;
    if ((char)*puVar1 == '\0') goto code_r0x0001404af8ab;
    bVar4 = *param_1;
    *param_1 = *param_1 + bVar13;
    bVar5 = *param_1;
    puVar19 = (undefined8 *)&stack0xfffffffffffffff8;
    puVar22 = &stack0xfffffffffffffff8;
    puVar21 = &stack0xfffffffffffffff8;
    cVar6 = '\n';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar19 = puVar19 + -1;
      *puVar19 = *unaff_RBP;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    puStack_60 = &stack0xfffffffffffffff8;
    puVar20 = auStack_74;
    register0x00000020 = (BADSPACEBASE *)auStack_74;
    if (!CARRY1(bVar4,bVar13) && bVar5 != 0) goto code_r0x0001404af8db;
  }
  pbVar11 = (byte *)(unaff_RDI + -0x7c);
  bVar4 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar18;
  uVar12 = (undefined7)((ulonglong)puVar9 >> 8);
  bVar5 = (char)puVar9 + CARRY1(bVar4,bVar18);
  pcVar10 = (char *)CONCAT71(uVar12,bVar5);
  *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar14,bVar13))) =
       *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar14,bVar13))) + (char)puVar20;
  *pcVar10 = *pcVar10 + bVar5;
  pbVar11 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH << 1,unaff_BL)) + 0x77);
  bVar4 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar13;
  bVar24 = CARRY1(bVar5,CARRY1(bVar4,bVar13));
  cVar6 = bVar5 + CARRY1(bVar4,bVar13);
  if (!bVar24 && cVar6 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar4 = cVar6 + bVar24;
  pbVar11 = (byte *)CONCAT71(uVar12,bVar4);
  unaff_BH = unaff_BH << 2;
  *(byte *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar14,bVar13))) =
       *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar14,bVar13))) + bVar4;
  *pbVar11 = *pbVar11 | bVar4;
  register0x00000020 = (BADSPACEBASE *)puVar20;
  puVar21 = puVar22;
code_r0x0001404af8e4:
  *pbVar11 = (byte)pbVar11;
  *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar14,bVar13))) =
       *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar14,bVar13))) + cVar14;
  if (-1 < *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar14,bVar13)))) {
    *pcVar23 = *pcVar23 + cVar17;
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x52060002;
    bVar4 = *pbVar11;
    *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
         CONCAT22(uVar15,CONCAT11(cVar14,bVar13));
    iVar3 = ((uint)pbVar11 | *(uint *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar14,bVar13)))) +
            0xfd0ffc00;
    *(byte *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar14,bVar13))) =
         *(byte *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar14,bVar13))) ^
         (byte)((uint)iVar3 >> 8);
    *(undefined1 *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar18 + bVar4,cVar17)) =
         param_4;
    puVar21[0x78] = puVar21[0x78] + (char)iVar3;
    in(0x1a);
    cRam00000001654b14ed = cRam00000001654b14ed + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

