// Function: FUN_1404b7774
// Addr: 1404b7774
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b7836) overlaps instruction at (ram,0x0001404b782d)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b7836) */

void FUN_1404b7774(char *param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined3 uVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  byte *in_RAX;
  char *pcVar13;
  int *piVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined6 uVar19;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  byte *pbVar12;
  uint *puVar14;
  
  uVar19 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar18 = (byte)((ulonglong)param_2 >> 8);
  bVar17 = (byte)param_2;
  bVar16 = (byte)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + (char)in_RAX;
  bVar7 = *in_RAX;
  bVar9 = *in_RAX;
  *in_RAX = *in_RAX + bVar18;
  if (SCARRY1(bVar9,bVar18) == (char)*in_RAX < '\0') {
    cVar8 = -CARRY1(bVar7,bVar18);
    puVar14 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar8,(char)in_RAX));
    uVar4 = (uint)CARRY1(bVar7,bVar18);
    uVar10 = *puVar14;
    uVar5 = *puVar14 + (uint)puVar14;
    *puVar14 = uVar5 + uVar4;
    *(byte *)((longlong)puVar14 + param_2) =
         *(byte *)((longlong)puVar14 + param_2) + cVar8 +
         (CARRY4(uVar10,(uint)puVar14) || CARRY4(uVar5,uVar4));
  }
  else {
    pbVar12 = in_RAX + 0x7d;
    bVar7 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar16;
    uVar10 = ((int)in_RAX + -0x4b768400) - (uint)CARRY1(bVar7,bVar16);
    *param_1 = *param_1 + (byte)uVar10;
    uVar6 = (undefined3)(uVar10 >> 8);
    bVar7 = (byte)uVar10 | *(byte *)((ulonglong)uVar10 * 2);
    pbVar12 = (byte *)(ulonglong)CONCAT31(uVar6,bVar7);
    bVar17 = bVar17 | *(byte *)(param_2 + -0x3ffb0ffa);
    bVar18 = bVar18 + pbVar12[0x21];
    *pbVar12 = *pbVar12 | bVar7;
    pcVar13 = (char *)((ulonglong)CONCAT31(uVar6,bVar7) ^ 0xe);
    *pcVar13 = *pcVar13 + unaff_BL;
    cVar8 = in(0x11);
    puVar14 = (uint *)(ulonglong)CONCAT31(uVar6,cVar8);
    uVar10 = *puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + bVar17;
    *(byte *)(in_FS_OFFSET + (longlong)puVar14) =
         *(byte *)(in_FS_OFFSET + (longlong)puVar14) + cVar8 + CARRY1((byte)uVar10,bVar17);
  }
  uVar10 = (int)puVar14 + 0x80000f54;
  pcVar13 = (char *)(ulonglong)uVar10;
  cVar8 = (char)uVar10;
  bVar7 = (byte)(uVar10 >> 8);
  if (uVar10 == 0 || (int)puVar14 < 0x7ffff0ac) {
    uVar10 = CONCAT22((short)(uVar10 >> 0x10),CONCAT11(bVar7 * '\x02',cVar8));
    piVar15 = (int *)(ulonglong)uVar10;
    *piVar15 = *piVar15 + uVar10 + (uint)CARRY1(bVar7,bVar7);
    pcVar13 = (char *)((longlong)piVar15 + CONCAT62(uVar19,CONCAT11(bVar18,bVar17)));
    *pcVar13 = *pcVar13 + bVar7 * '\x02';
  }
  else {
    pbVar12 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x47ffe282);
    bVar9 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar18;
    if (CARRY1(bVar9,bVar18) || *pbVar12 == 0) {
      *param_1 = *param_1 + (cVar8 - CARRY1(bVar9,bVar18));
      *unaff_RDI = *unaff_RDI + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = *param_1 + bVar7;
    *pcVar13 = *pcVar13 + cVar8;
    pcVar1 = pcVar13 + -0x4cffe282;
    cVar3 = *pcVar1;
    *pcVar1 = *pcVar1 + cVar8;
    if (*pcVar1 == '\0' || SCARRY1(cVar3,cVar8) != *pcVar1 < '\0') {
      iVar11 = 0x21004b76;
      goto code_r0x0001404b77e1;
    }
    pcVar13[0x21004b76] = pcVar13[0x21004b76] + unaff_BH;
    *unaff_RSI = *unaff_RSI + cVar8;
    *pcVar13 = *pcVar13 + cVar8;
    bVar9 = in(0x11);
    uVar10 = CONCAT31((int3)(uVar10 >> 8),bVar9);
    pbVar12 = (byte *)(ulonglong)uVar10;
    bVar7 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar9;
    pbVar12[in_FS_OFFSET] = pbVar12[in_FS_OFFSET] + bVar9 + CARRY1(bVar7,bVar9);
  }
  unaff_RDI[(longlong)param_1] = unaff_RDI[(longlong)param_1] + bVar17;
  iVar11 = uVar10 + 0xb4894800;
  *param_1 = *param_1 + (char)((uint)iVar11 >> 8);
code_r0x0001404b77e1:
  puVar2 = (undefined1 *)(CONCAT62(uVar19,CONCAT11(bVar18,bVar17)) + 0x2100 + (longlong)param_1 * 2)
  ;
  *puVar2 = *puVar2;
  puVar2 = (undefined1 *)
           (CONCAT62(uVar19,CONCAT11(bVar18,bVar17)) + 0x60f0100 + (longlong)param_1 * 2);
  *puVar2 = *puVar2;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  param_1[-0x7ea6ffe3] = param_1[-0x7ea6ffe3] & (char)(iVar11 + 0x34050002U) + 2U;
  uVar10 = (iVar11 + 0x34050002U | 0xb920f00) + 0xe88dcc02;
  pbVar12 = (byte *)(ulonglong)uVar10;
  bVar9 = (byte)(uVar10 >> 8);
  *param_1 = *param_1 + bVar9;
  *pbVar12 = *pbVar12 + (char)uVar10;
  bVar7 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar9;
  iRam000000015dccd137 = (iRam000000015dccd137 + -0x4b773400) - (uint)CARRY1(bVar7,bVar9);
  *param_1 = *param_1 + (char)uVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

