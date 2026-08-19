// Function: FUN_1404b5700
// Addr: 1404b5700
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b5768) overlaps instruction at (ram,0x0001404b5763)
    */

void FUN_1404b5700(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  undefined3 uVar4;
  undefined2 uVar5;
  undefined7 uVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  char cVar14;
  byte bVar15;
  undefined8 in_RAX;
  char cVar16;
  char cVar19;
  char *pcVar17;
  byte unaff_BL;
  undefined7 unaff_00000019;
  char cVar20;
  byte **ppbVar21;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  uint *unaff_RDI;
  bool bVar22;
  char in_AF;
  bool bVar23;
  ulonglong uVar24;
  longlong lStack_20;
  byte *pbStack_18;
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [8];
  byte *pbVar12;
  byte *pbVar13;
  char *pcVar18;
  
  bVar23 = false;
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  pcVar17 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x63dbffe6);
  *pcVar17 = *pcVar17 << 1;
  cVar14 = ((byte)((ulonglong)in_RAX >> 8) | bVar9) + (char)((ulonglong)param_1 >> 8);
  pcVar17 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar14,(char)in_RAX));
  *param_4 = *param_4 + (char)auStack_8;
  *pcVar17 = *pcVar17 + (char)in_RAX;
  uVar6 = (undefined7)((ulonglong)pcVar17 >> 8);
  bVar7 = in((short)param_2);
  pbStack_18 = (byte *)CONCAT71(uVar6,bVar7);
  ppbVar21 = (byte **)auStack_10;
  *param_4 = *param_4 + bVar7;
  *(uint *)((longlong)pbStack_18 * 2) = *(uint *)((longlong)pbStack_18 * 2) | (uint)pbStack_18;
  puVar1 = (uint *)(param_2 + 5);
  *puVar1 = *puVar1 | unaff_ESI;
  pcVar17 = (char *)(param_1 + -1);
  if (pcVar17 == (char *)0x0 || *puVar1 == 0) {
    ppbVar21 = &pbStack_18;
    param_2 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                               CONCAT11(bVar9 + *pbStack_18,(char)param_2));
  }
  uRam0000000134505734 = uRam0000000134505734 & (uint)pbStack_18;
  verr();
  bVar9 = *pbStack_18;
  *(char *)((longlong)unaff_RDI + 0x5650001a) =
       (*(char *)((longlong)unaff_RDI + 0x5650001a) + -0x4b) - (bVar7 < *pbStack_18);
  *pcVar17 = *pcVar17 + cVar14;
  uVar11 = (int)CONCAT71(uVar6,bVar7 - bVar9) + 0x78050002;
  uVar4 = (undefined3)(uVar11 >> 8);
  bVar7 = (byte)uVar11 + *(byte *)(ulonglong)uVar11;
  *(char *)((longlong)unaff_RDI + -0x6062ffe6) =
       (*(char *)((longlong)unaff_RDI + -0x6062ffe6) + -0x1a) -
       CARRY1((byte)uVar11,*(byte *)(ulonglong)uVar11);
  pcVar18 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x4b + (longlong)param_2 * 2);
  *pcVar18 = *pcVar18 + unaff_BL;
  cVar14 = (char)(uVar11 >> 8);
  *pcVar17 = *pcVar17 + cVar14;
  cVar16 = (char)pcVar17 - *(char *)(ulonglong)CONCAT31(uVar4,bVar7);
  pcVar18 = (char *)CONCAT71((int7)((ulonglong)pcVar17 >> 8),cVar16);
  cVar19 = (char)((ulonglong)pcVar17 >> 8);
  *param_2 = *param_2 + cVar19;
  if (*param_2 == '\0') {
    uVar24 = (ulonglong)*ppbVar21;
    ppbVar21 = ppbVar21 + 1;
    bVar23 = (uVar24 & 0x400) != 0;
    in_AF = (uVar24 & 0x10) != 0;
  }
  *param_2 = *param_2 + cVar14;
  piVar2 = (int *)((ulonglong)CONCAT31(uVar4,bVar7) + 3);
  *piVar2 = *piVar2 + unaff_EBP;
  bVar22 = CARRY1(bRam00000000dd4b662d,bVar7);
  bRam00000000dd4b662d = bRam00000000dd4b662d + bVar7;
  uVar5 = (undefined2)(uVar11 >> 0x10);
  uVar11 = CONCAT22(uVar5,CONCAT11(((char)bRam00000000dd4b662d < '\0') << 7 |
                                   (bRam00000000dd4b662d == '\0') << 6 | in_AF << 4 |
                                   ((POPCOUNT(bRam00000000dd4b662d) & 1U) == 0) << 2 | 2U | bVar22,
                                   bVar7));
  cVar8 = (bVar7 - *(char *)(ulonglong)uVar11) - bVar22;
  uVar11 = CONCAT31((int3)(uVar11 >> 8),cVar8);
  bVar22 = uVar11 < *unaff_RDI;
  uVar11 = uVar11 - *unaff_RDI;
  uVar11 = CONCAT22(uVar5,CONCAT11(((int)uVar11 < 0) << 7 | (uVar11 == 0) << 6 | in_AF << 4 |
                                   ((POPCOUNT(uVar11 & 0xff) & 1U) == 0) << 2 | 2U | bVar22,cVar8));
  cVar14 = cVar8 - *(char *)(ulonglong)uVar11;
  uVar4 = (undefined3)(uVar11 >> 8);
  bVar7 = cVar14 - bVar22;
  pcVar17 = (char *)(ulonglong)CONCAT31(uVar4,bVar7);
  cVar20 = (char)ppbVar21;
  if (SBORROW1(cVar8,*(char *)(ulonglong)uVar11) == SBORROW1(cVar14,bVar22)) {
    *param_4 = *param_4 + cVar20;
    *pcVar17 = *pcVar17 + bVar7;
    pbVar12 = (byte *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x50ffe561);
    bVar22 = CARRY1(*pbVar12,unaff_BL);
    *pbVar12 = *pbVar12 + unaff_BL;
    uVar11 = CONCAT22(uVar5,CONCAT11(((char)*pbVar12 < '\0') << 7 | (*pbVar12 == 0) << 6 |
                                     in_AF << 4 | ((POPCOUNT(*pbVar12) & 1U) == 0) << 2 | 2U |
                                     bVar22,bVar7));
    cVar14 = bVar7 - *(char *)(ulonglong)uVar11;
    bVar9 = cVar14 - bVar22;
    pbVar12 = (byte *)(ulonglong)CONCAT31((int3)(uVar11 >> 8),bVar9);
    if (SBORROW1(bVar7,*(char *)(ulonglong)uVar11) == SBORROW1(cVar14,bVar22)) {
      *param_4 = *param_4 + cVar20;
      *pbVar12 = *pbVar12 + bVar9;
      pbVar12 = pbVar12 + -0x62ffe561;
      bVar7 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar9;
      bVar15 = ((char)*pbVar12 < '\0') << 7 | (*pbVar12 == 0) << 6 | in_AF << 4 |
               ((POPCOUNT(*pbVar12) & 1U) == 0) << 2 | 2U | CARRY1(bVar7,bVar9);
      uVar11 = CONCAT22(uVar5,CONCAT11(bVar15,bVar9));
      bVar10 = (bVar9 - *(char *)(ulonglong)uVar11) - CARRY1(bVar7,bVar9);
      pbVar13 = (byte *)(ulonglong)CONCAT31((int3)(uVar11 >> 8),bVar10);
      lVar3 = (longlong)*ppbVar21;
      *(ulonglong *)(lVar3 + -8) = CONCAT44(unaff_00000034,unaff_ESI);
      *param_4 = *param_4 + (char)lVar3 + -8;
      *pbVar13 = *pbVar13 + bVar10;
      pbVar12 = pbVar13 + -0x61;
      bVar7 = *pbVar12;
      *pbVar12 = *pbVar12 + bVar15;
      bVar9 = *pbVar13;
      pcVar17 = (char *)((longlong)unaff_RDI + (ulonglong)bVar23 * -8 + 0x5650001e);
      *pcVar17 = (*pcVar17 + -0x4b) -
                 (bVar10 < *pbVar13 || (byte)(bVar10 - bVar9) < CARRY1(bVar7,bVar15));
      *pcVar18 = *pcVar18 + ((bVar10 - bVar9) - CARRY1(bVar7,bVar15));
      pcVar17 = (char *)(lVar3 + -8 + CONCAT44(unaff_00000034,unaff_ESI));
      *pcVar17 = *pcVar17 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *pcVar18 = *pcVar18 + cVar20;
    *pcVar17 = *pcVar17 + bVar7;
    pbVar12 = (byte *)(pcVar17 + -0x57);
    bVar9 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar7;
    pbVar12 = (byte *)(ulonglong)CONCAT31(uVar4,(bVar7 - *pcVar17) - CARRY1(bVar9,bVar7));
  }
  *pcVar18 = *pcVar18 + cVar20;
  bVar7 = (byte)pbVar12;
  *param_2 = *param_2 + bVar7;
  *pbVar12 = *pbVar12 + bVar7;
  ppbVar21[-1] = (byte *)ppbVar21;
  *pbVar12 = *pbVar12 | bVar7;
  in((short)param_2);
  *pcVar18 = *pcVar18 + 'J';
  pbVar13 = (byte *)(CONCAT71((int7)((ulonglong)pbVar12 >> 8),bRam00000001468d61fb) | 0x4a);
  *pbVar13 = *pbVar13 << 1 | (char)*pbVar13 < '\0';
  *pbVar13 = *pbVar13 ^ (bRam00000001468d61fb | 0x4a);
  *pcVar18 = *pcVar18 + (char)((ulonglong)pbVar12 >> 8);
  *pbVar13 = *pbVar13 - cVar16;
  *pbVar13 = *pbVar13 + cVar19;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

