// Function: FUN_1404b5724
// Addr: 1404b5724
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b5768) overlaps instruction at (ram,0x0001404b5763)
    */

void FUN_1404b5724(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  undefined3 uVar4;
  undefined2 uVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  char cVar13;
  byte bVar14;
  byte *in_RAX;
  char cVar15;
  char cVar18;
  char *pcVar16;
  byte unaff_BL;
  char cVar19;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  uint *unaff_RDI;
  bool bVar20;
  char in_AF;
  bool bVar21;
  ulonglong uVar22;
  undefined1 auStack_8 [8];
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar17;
  
  bVar21 = false;
  puVar1 = (uint *)(param_2 + 5);
  *puVar1 = *puVar1 | unaff_ESI;
  pcVar16 = (char *)(param_1 + -1);
  if (pcVar16 == (char *)0x0 || *puVar1 == 0) {
    register0x00000020 = (BADSPACEBASE *)auStack_8;
    param_2 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                               CONCAT11((char)((ulonglong)param_2 >> 8) + *in_RAX,(char)param_2));
  }
  uRam0000000134505734 = uRam0000000134505734 & (uint)in_RAX;
  verr();
  bVar6 = *in_RAX;
  *(char *)((longlong)unaff_RDI + 0x5650001a) =
       (*(char *)((longlong)unaff_RDI + 0x5650001a) + -0x4b) - ((byte)in_RAX < *in_RAX);
  *pcVar16 = *pcVar16 + (char)((ulonglong)in_RAX >> 8);
  uVar10 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX - bVar6) + 0x78050002;
  uVar4 = (undefined3)(uVar10 >> 8);
  bVar6 = (byte)uVar10 + *(byte *)(ulonglong)uVar10;
  *(char *)((longlong)unaff_RDI + -0x6062ffe6) =
       (*(char *)((longlong)unaff_RDI + -0x6062ffe6) + -0x1a) -
       CARRY1((byte)uVar10,*(byte *)(ulonglong)uVar10);
  pcVar17 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x4b + (longlong)param_2 * 2);
  *pcVar17 = *pcVar17 + unaff_BL;
  cVar13 = (char)(uVar10 >> 8);
  *pcVar16 = *pcVar16 + cVar13;
  cVar15 = (char)pcVar16 - *(char *)(ulonglong)CONCAT31(uVar4,bVar6);
  pcVar17 = (char *)CONCAT71((int7)((ulonglong)pcVar16 >> 8),cVar15);
  cVar18 = (char)((ulonglong)pcVar16 >> 8);
  *param_2 = *param_2 + cVar18;
  if (*param_2 == '\0') {
    uVar22 = *(ulonglong *)register0x00000020;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + 8);
    bVar21 = (uVar22 & 0x400) != 0;
    in_AF = (uVar22 & 0x10) != 0;
  }
  *param_2 = *param_2 + cVar13;
  piVar2 = (int *)((ulonglong)CONCAT31(uVar4,bVar6) + 3);
  *piVar2 = *piVar2 + unaff_EBP;
  bVar20 = CARRY1(bRam00000000dd4b662d,bVar6);
  bRam00000000dd4b662d = bRam00000000dd4b662d + bVar6;
  uVar5 = (undefined2)(uVar10 >> 0x10);
  uVar10 = CONCAT22(uVar5,CONCAT11(((char)bRam00000000dd4b662d < '\0') << 7 |
                                   (bRam00000000dd4b662d == '\0') << 6 | in_AF << 4 |
                                   ((POPCOUNT(bRam00000000dd4b662d) & 1U) == 0) << 2 | 2U | bVar20,
                                   bVar6));
  cVar7 = (bVar6 - *(char *)(ulonglong)uVar10) - bVar20;
  uVar10 = CONCAT31((int3)(uVar10 >> 8),cVar7);
  bVar20 = uVar10 < *unaff_RDI;
  uVar10 = uVar10 - *unaff_RDI;
  uVar10 = CONCAT22(uVar5,CONCAT11(((int)uVar10 < 0) << 7 | (uVar10 == 0) << 6 | in_AF << 4 |
                                   ((POPCOUNT(uVar10 & 0xff) & 1U) == 0) << 2 | 2U | bVar20,cVar7));
  cVar13 = cVar7 - *(char *)(ulonglong)uVar10;
  uVar4 = (undefined3)(uVar10 >> 8);
  bVar6 = cVar13 - bVar20;
  pcVar16 = (char *)(ulonglong)CONCAT31(uVar4,bVar6);
  cVar19 = (char)register0x00000020;
  if (SBORROW1(cVar7,*(char *)(ulonglong)uVar10) == SBORROW1(cVar13,bVar20)) {
    *param_4 = *param_4 + cVar19;
    *pcVar16 = *pcVar16 + bVar6;
    pbVar11 = (byte *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x50ffe561);
    bVar20 = CARRY1(*pbVar11,unaff_BL);
    *pbVar11 = *pbVar11 + unaff_BL;
    uVar10 = CONCAT22(uVar5,CONCAT11(((char)*pbVar11 < '\0') << 7 | (*pbVar11 == 0) << 6 |
                                     in_AF << 4 | ((POPCOUNT(*pbVar11) & 1U) == 0) << 2 | 2U |
                                     bVar20,bVar6));
    cVar13 = bVar6 - *(char *)(ulonglong)uVar10;
    bVar8 = cVar13 - bVar20;
    pbVar11 = (byte *)(ulonglong)CONCAT31((int3)(uVar10 >> 8),bVar8);
    if (SBORROW1(bVar6,*(char *)(ulonglong)uVar10) == SBORROW1(cVar13,bVar20)) {
      *param_4 = *param_4 + cVar19;
      *pbVar11 = *pbVar11 + bVar8;
      pbVar11 = pbVar11 + -0x62ffe561;
      bVar6 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar8;
      bVar14 = ((char)*pbVar11 < '\0') << 7 | (*pbVar11 == 0) << 6 | in_AF << 4 |
               ((POPCOUNT(*pbVar11) & 1U) == 0) << 2 | 2U | CARRY1(bVar6,bVar8);
      uVar10 = CONCAT22(uVar5,CONCAT11(bVar14,bVar8));
      bVar9 = (bVar8 - *(char *)(ulonglong)uVar10) - CARRY1(bVar6,bVar8);
      pbVar12 = (byte *)(ulonglong)CONCAT31((int3)(uVar10 >> 8),bVar9);
      lVar3 = *(longlong *)register0x00000020;
      *(ulonglong *)(lVar3 + -8) = CONCAT44(unaff_00000034,unaff_ESI);
      *param_4 = *param_4 + (char)lVar3 + -8;
      *pbVar12 = *pbVar12 + bVar9;
      pbVar11 = pbVar12 + -0x61;
      bVar6 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar14;
      bVar8 = *pbVar12;
      pcVar16 = (char *)((longlong)unaff_RDI + (ulonglong)bVar21 * -8 + 0x5650001e);
      *pcVar16 = (*pcVar16 + -0x4b) -
                 (bVar9 < *pbVar12 || (byte)(bVar9 - bVar8) < CARRY1(bVar6,bVar14));
      *pcVar17 = *pcVar17 + ((bVar9 - bVar8) - CARRY1(bVar6,bVar14));
      pcVar16 = (char *)(lVar3 + -8 + CONCAT44(unaff_00000034,unaff_ESI));
      *pcVar16 = *pcVar16 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *pcVar17 = *pcVar17 + cVar19;
    *pcVar16 = *pcVar16 + bVar6;
    pbVar11 = (byte *)(pcVar16 + -0x57);
    bVar8 = *pbVar11;
    *pbVar11 = *pbVar11 + bVar6;
    pbVar11 = (byte *)(ulonglong)CONCAT31(uVar4,(bVar6 - *pcVar16) - CARRY1(bVar8,bVar6));
  }
  *pcVar17 = *pcVar17 + cVar19;
  bVar6 = (byte)pbVar11;
  *param_2 = *param_2 + bVar6;
  *pbVar11 = *pbVar11 + bVar6;
  *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
  *pbVar11 = *pbVar11 | bVar6;
  in((short)param_2);
  *pcVar17 = *pcVar17 + 'J';
  pbVar12 = (byte *)(CONCAT71((int7)((ulonglong)pbVar11 >> 8),bRam00000001468d61fb) | 0x4a);
  *pbVar12 = *pbVar12 << 1 | (char)*pbVar12 < '\0';
  *pbVar12 = *pbVar12 ^ (bRam00000001468d61fb | 0x4a);
  *pcVar17 = *pcVar17 + (char)((ulonglong)pbVar11 >> 8);
  *pbVar12 = *pbVar12 - cVar15;
  *pbVar12 = *pbVar12 + cVar18;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

