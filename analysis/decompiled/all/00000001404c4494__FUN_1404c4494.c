// Function: FUN_1404c4494
// Addr: 1404c4494
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c4495) overlaps instruction at (ram,0x0001404c4494)
    */

void FUN_1404c4494(byte *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  byte *pbVar6;
  undefined3 uVar7;
  undefined1 uVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  ulonglong in_RAX;
  byte *pbVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  undefined4 uVar16;
  byte bVar17;
  char cVar18;
  undefined6 uVar19;
  byte unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  int unaff_EBP;
  uint unaff_ESI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  byte in_CF;
  undefined1 in_XMM1 [16];
  undefined1 auVar20 [16];
  
  uVar19 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar18 = (char)((ulonglong)param_2 >> 8);
  bVar17 = (byte)param_2;
  uVar16 = (undefined4)((ulonglong)param_1 >> 0x20);
  iVar15 = (int)param_1;
  do {
    puVar1 = (uint *)((longlong)param_2 + (longlong)param_1);
    uVar11 = *puVar1;
    uVar3 = *puVar1;
    *puVar1 = (uVar3 - unaff_ESI) - (uint)in_CF;
    puVar1 = (uint *)((longlong)param_1 * 2);
    uVar3 = (uint)(uVar11 < unaff_ESI || uVar3 - unaff_ESI < (uint)in_CF);
    uVar11 = *puVar1;
    uVar4 = *puVar1 - (uint)register0x00000020;
    *puVar1 = uVar4 - uVar3;
    *(uint *)(param_1 + in_RAX) =
         (*(int *)(param_1 + in_RAX) - unaff_ESI) -
         (uint)(uVar11 < (uint)register0x00000020 || uVar4 < uVar3);
    bVar10 = *param_1;
    *param_1 = *param_1 + unaff_BL;
    pcVar14 = (char *)register0x00000020;
    do {
      register0x00000020 = (BADSPACEBASE *)(pcVar14 + -8);
      *(int **)(pcVar14 + -8) = param_2;
      uVar11 = (int)in_RAX + 0x2bb760f0 + (uint)CARRY1(bVar10,unaff_BL);
      cVar9 = (char)uVar11;
      *param_1 = *param_1 + cVar9;
      *(char *)(ulonglong)uVar11 = *(char *)(ulonglong)uVar11 + cVar9;
      *(char *)(unaff_RDI + -0x34) = *(char *)(unaff_RDI + -0x34) + unaff_BL;
      uVar7 = (undefined3)(uVar11 >> 8);
      if (-1 < cVar9) {
        pbVar6 = *(byte **)(pcVar14 + -8);
        pbVar12 = (byte *)(ulonglong)(uVar11 ^ 0x42);
        bVar10 = (byte)(uVar11 ^ 0x42);
        *pbVar12 = *pbVar12 + bVar10;
        *(int *)param_1 = *(int *)param_1 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
        bVar10 = bVar10 | *pbVar12;
        *(uint *)(pcVar14 + (longlong)param_1) = *(int *)(pcVar14 + (longlong)param_1) - unaff_ESI;
        *param_1 = *param_1 + unaff_BL;
        bVar17 = bVar17 ^ bRam00000001522c58bb;
        *pbVar6 = *pbVar6 >> 1 | *pbVar6 << 7;
        *(uint *)pbVar6 = *(int *)pbVar6 + iVar15 + (uint)(cRam000000014bac5144 < '\0');
        sysenter();
        bVar10 = bVar10 | *(byte *)(ulonglong)CONCAT31(uVar7,bVar10);
        auVar20 = rsqrtps(in_XMM1,*(undefined1 (*) [16])
                                   CONCAT44(unaff_0000001c,
                                            CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))));
        *(byte *)CONCAT62(uVar19,CONCAT11(cVar18,bVar17)) =
             *(char *)CONCAT62(uVar19,CONCAT11(cVar18,bVar17)) + bVar10;
        *(char *)(ulonglong)CONCAT31(uVar7,bVar10) =
             *(char *)(ulonglong)CONCAT31(uVar7,bVar10) + bVar10;
        pcVar13 = (char *)((longlong)param_1 * 8 + -0x3241ffd4);
        *pcVar13 = *pcVar13 + (char)param_1;
        pcVar13 = (char *)(ulonglong)CONCAT31(uVar7,bVar10);
        if (bVar10 != 0) {
          *pcVar13 = *pcVar13 + bVar10;
          *pcVar13 = *pcVar13 + bVar10;
          bVar2 = *param_1;
          *param_1 = *param_1 + bVar17;
          *pcVar14 = *pcVar14 + bVar17;
          bVar10 = bVar10 + CARRY1(bVar2,bVar17) + 0x3a;
          bVar10 = bVar10 | *(byte *)(ulonglong)CONCAT31(uVar7,bVar10);
          cVar9 = bVar10 + 0x72;
          pcVar14 = (char *)(ulonglong)CONCAT31(uVar7,cVar9);
          pcVar14[0x60] = pcVar14[0x60] + cVar18 + (0x8d < bVar10);
          *(char *)CONCAT62(uVar19,CONCAT11(cVar18,bVar17)) =
               *(char *)CONCAT62(uVar19,CONCAT11(cVar18,bVar17)) + cVar9;
          *pcVar14 = *pcVar14 + cVar9;
          pbVar6[(longlong)param_1 * 8 + -0x2f7effd4] =
               pbVar6[(longlong)param_1 * 8 + -0x2f7effd4] + 0x2b;
          *pcVar14 = *pcVar14 + cVar9;
          param_1[-0x52ffd330] = param_1[-0x52ffd330] + (char)param_1;
          *(byte *)((longlong)pcVar14 * 2) = *(byte *)((longlong)pcVar14 * 2) >> 1;
          *pcVar14 = *pcVar14 + cVar9;
          *param_1 = *param_1 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *pcVar13 = *pcVar13;
        *pcVar13 = *pcVar13;
        pcVar5 = (code *)swi(0x2c);
        (*pcVar5)(iVar15,auVar20._0_8_);
        pcVar5 = (code *)swi(0x2c);
        pcVar14 = (char *)(*pcVar5)();
        pbVar6[0x35] = pbVar6[0x35] + cVar18;
        *pcVar14 = *pcVar14 + (char)pcVar14;
        *pcVar14 = *pcVar14 + (char)pcVar14;
        *(byte *)CONCAT44(uVar16,iVar15) = *(char *)CONCAT44(uVar16,iVar15) + bVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar11 = unaff_EBP * 0x34d9002c;
      pcVar13 = (char *)(ulonglong)uVar11;
      *pcVar13 = *pcVar13 + (char)uVar11;
      *pcVar13 = *pcVar13 + (char)uVar11;
      bVar10 = *param_1;
      *param_1 = *param_1 + bVar17;
      *param_2 = (*param_2 - iVar15) - (uint)CARRY1(bVar10,bVar17);
      *param_1 = *param_1 + unaff_BL;
      uVar8 = in(0xb);
      uVar11 = CONCAT31((int3)(uVar11 >> 8),uVar8);
      in_RAX = (ulonglong)uVar11;
      bVar10 = *param_1;
      *param_1 = *param_1 + unaff_BL;
      pcVar14 = pcVar14 + -8;
    } while (*param_1 == 0);
    *param_1 = *param_1 + unaff_BL;
    in_CF = 0;
    *(uint *)(in_FS_OFFSET + in_RAX) = *(uint *)(in_FS_OFFSET + in_RAX) | uVar11;
  } while( true );
}

