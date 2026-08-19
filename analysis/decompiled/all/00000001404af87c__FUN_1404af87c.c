// Function: FUN_1404af87c
// Addr: 1404af87c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404af8ec) overlaps instruction at (ram,0x0001404af8eb)
    */

void FUN_1404af87c(byte *param_1,char *param_2,undefined8 param_3,undefined1 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  uint *in_RAX;
  char *pcVar10;
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
  char *unaff_RSI;
  char *unaff_RDI;
  bool bVar23;
  bool bVar24;
  undefined1 auStack_74 [100];
  undefined8 uStack_10;
  int *piVar9;
  byte *pbVar11;
  undefined7 uVar12;
  
  bVar18 = (byte)((ulonglong)param_2 >> 8);
  cVar17 = (char)param_2;
  uVar16 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar15 = (undefined2)((ulonglong)param_1 >> 0x10);
  cVar14 = (char)((ulonglong)param_1 >> 8);
  bVar13 = (byte)param_1;
  uVar8 = (uint)in_RAX;
  *(uint *)(param_2 + (longlong)in_RAX) = *(uint *)(param_2 + (longlong)in_RAX) & uVar8;
  bVar7 = (byte)in_RAX;
  *unaff_RDI = *unaff_RDI + bVar7;
  cVar6 = (char)((ulonglong)in_RAX >> 8);
  if (*unaff_RDI == '\0') {
    *(char *)((longlong)in_RAX + 0x21004af7) = *(char *)((longlong)in_RAX + 0x21004af7) + unaff_BL;
    *(byte *)in_RAX = (char)*in_RAX + bVar7;
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + bVar7;
    if (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) == '\0') {
      *unaff_RDI = *unaff_RDI + bVar7;
      if (*unaff_RDI == '\0') goto code_r0x0001404af89b;
      *param_1 = *param_1 + cVar6;
    }
code_r0x0001404af8ab:
    *(char *)((longlong)in_RAX + -9) = *(char *)((longlong)in_RAX + -9) + cVar14;
    *param_1 = *param_1;
    bVar13 = bVar13 ^ (byte)*in_RAX;
    *param_2 = *param_2 + bVar18;
    uVar2 = *in_RAX;
    *in_RAX = *in_RAX + uVar8;
    uVar3 = (uint)unaff_RBP - uVar8;
    bVar23 = (uint)unaff_RBP < uVar8 || uVar3 < CARRY4(uVar2,uVar8);
    puVar21 = (undefined1 *)(ulonglong)(uVar3 - CARRY4(uVar2,uVar8));
    bVar5 = bVar7 + (char)*in_RAX;
    bVar24 = CARRY1(bVar7,(byte)*in_RAX) || CARRY1(bVar5,bVar23);
    bVar5 = bVar5 + bVar23;
    piVar9 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5);
    bVar23 = CARRY1(unaff_BL,bVar5);
    bVar5 = unaff_BL + bVar5;
    unaff_BL = bVar5 + bVar24;
    uVar8 = (int)piVar9 + *piVar9 + (uint)(bVar23 || CARRY1(bVar5,bVar24)) |
            CONCAT22(uVar15,CONCAT11(cVar14,bVar13));
    in_RAX = (uint *)(ulonglong)uVar8;
    puVar20 = (undefined1 *)register0x00000020;
    puVar22 = puVar21;
    if ((char)uVar8 != '\0') {
code_r0x0001404af8db:
      pbVar11 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + cVar17);
      goto code_r0x0001404af8e4;
    }
  }
  else {
    *param_1 = *param_1 + cVar6;
code_r0x0001404af89b:
    *(char *)((longlong)in_RAX + 0x21004af7) = *(char *)((longlong)in_RAX + 0x21004af7) + unaff_BL;
    *(byte *)in_RAX = (char)*in_RAX + bVar7;
    puVar1 = in_RAX + 0xc0051d;
    *(byte *)puVar1 = (char)*puVar1 + bVar18;
    if ((char)*puVar1 == '\0') goto code_r0x0001404af8ab;
    bVar7 = *param_1;
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
    puVar20 = auStack_74;
    register0x00000020 = (BADSPACEBASE *)auStack_74;
    if (!CARRY1(bVar7,bVar13) && bVar5 != 0) goto code_r0x0001404af8db;
  }
  pbVar11 = (byte *)(unaff_RDI + -0x7c);
  bVar7 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar18;
  uVar12 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar5 = (char)in_RAX + CARRY1(bVar7,bVar18);
  pcVar10 = (char *)CONCAT71(uVar12,bVar5);
  *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar14,bVar13))) =
       *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar14,bVar13))) + (char)puVar20;
  *pcVar10 = *pcVar10 + bVar5;
  pbVar11 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH << 1,unaff_BL)) + 0x77);
  bVar7 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar13;
  bVar23 = CARRY1(bVar5,CARRY1(bVar7,bVar13));
  cVar6 = bVar5 + CARRY1(bVar7,bVar13);
  if (!bVar23 && cVar6 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar7 = cVar6 + bVar23;
  pbVar11 = (byte *)CONCAT71(uVar12,bVar7);
  unaff_BH = unaff_BH << 2;
  *(byte *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar14,bVar13))) =
       *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar14,bVar13))) + bVar7;
  *pbVar11 = *pbVar11 | bVar7;
  register0x00000020 = (BADSPACEBASE *)puVar20;
  puVar21 = puVar22;
code_r0x0001404af8e4:
  *pbVar11 = (byte)pbVar11;
  *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar14,bVar13))) =
       *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar14,bVar13))) + cVar14;
  if (-1 < *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar14,bVar13)))) {
    *unaff_RSI = *unaff_RSI + cVar17;
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x52060002;
    bVar7 = *pbVar11;
    *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
         CONCAT22(uVar15,CONCAT11(cVar14,bVar13));
    iVar4 = ((uint)pbVar11 | *(uint *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar14,bVar13)))) +
            0xfd0ffc00;
    *(byte *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar14,bVar13))) =
         *(byte *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar14,bVar13))) ^
         (byte)((uint)iVar4 >> 8);
    *(undefined1 *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar18 + bVar7,cVar17)) =
         param_4;
    puVar21[0x78] = puVar21[0x78] + (char)iVar4;
    in(0x1a);
    cRam00000001654b14ed = cRam00000001654b14ed + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

