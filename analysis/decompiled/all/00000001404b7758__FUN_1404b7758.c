// Function: FUN_1404b7758
// Addr: 1404b7758
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b7836) overlaps instruction at (ram,0x0001404b782d)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b7836) */

void FUN_1404b7758(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  byte bVar12;
  longlong in_RAX;
  undefined7 uVar13;
  char *pcVar10;
  int *piVar11;
  char cVar14;
  char cVar15;
  undefined6 uVar16;
  byte bVar17;
  char cVar18;
  byte bVar19;
  undefined6 uVar20;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  char in_CF;
  byte *pbVar9;
  
  uVar20 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar18 = (char)((ulonglong)param_2 >> 8);
  uVar16 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar14 = (char)param_1;
  cVar15 = (char)((ulonglong)param_1 >> 8) + *(char *)(in_RAX + 5) + in_CF;
  cVar5 = *param_2;
  *param_2 = *param_2 + cVar14;
  uVar3 = TaskRegister();
  *(undefined2 *)(param_2 + in_FS_OFFSET) = uVar3;
  if (!SCARRY1(cVar5,cVar14)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + (byte)in_RAX;
  uVar13 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar4 = (byte)in_RAX | *(byte *)(in_RAX * 2);
  pbVar9 = (byte *)CONCAT71(uVar13,bVar4);
  bVar12 = *(byte *)(CONCAT62(uVar20,CONCAT11(cVar18,6)) + -0x3ffb0ffa);
  bVar17 = bVar12 | 6;
  bVar19 = cVar18 + pbVar9[0x21];
  *pbVar9 = *pbVar9 | bVar4;
  pcVar10 = (char *)(CONCAT71(uVar13,bVar4) ^ 0xe);
  *pcVar10 = *pcVar10 + unaff_BL;
  cVar5 = in(0x11);
  pbVar9 = (byte *)CONCAT71(uVar13,cVar5);
  bVar4 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar17;
  pbVar9[in_FS_OFFSET] = pbVar9[in_FS_OFFSET] + cVar5 + CARRY1(bVar4,bVar17);
  uVar7 = (int)pbVar9 + 0x80000f54;
  pcVar10 = (char *)(ulonglong)uVar7;
  cVar5 = (char)uVar7;
  bVar4 = (byte)(uVar7 >> 8);
  if (uVar7 == 0 || (int)pbVar9 < 0x7ffff0ac) {
    uVar7 = CONCAT22((short)(uVar7 >> 0x10),CONCAT11(bVar4 * '\x02',cVar5));
    piVar11 = (int *)(ulonglong)uVar7;
    *piVar11 = *piVar11 + uVar7 + (uint)CARRY1(bVar4,bVar4);
    pcVar10 = (char *)((longlong)piVar11 + (CONCAT62(uVar20,CONCAT11(bVar19,bVar12)) | 6));
    *pcVar10 = *pcVar10 + bVar4 * '\x02';
  }
  else {
    pbVar9 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x47ffe282);
    bVar6 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar19;
    if (CARRY1(bVar6,bVar19) || *pbVar9 == 0) {
      *(char *)CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) =
           *(char *)CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) + (cVar5 - CARRY1(bVar6,bVar19));
      *unaff_RDI = *unaff_RDI + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) =
         *(char *)CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) + bVar4;
    *pcVar10 = *pcVar10 + cVar5;
    pcVar1 = pcVar10 + -0x4cffe282;
    cVar18 = *pcVar1;
    *pcVar1 = *pcVar1 + cVar5;
    if (*pcVar1 == '\0' || SCARRY1(cVar18,cVar5) != *pcVar1 < '\0') {
      iVar8 = 0x21004b76;
      goto code_r0x0001404b77e1;
    }
    pcVar10[0x21004b76] = pcVar10[0x21004b76] + unaff_BH;
    *unaff_RSI = *unaff_RSI + cVar5;
    *pcVar10 = *pcVar10 + cVar5;
    bVar6 = in(0x11);
    uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar6);
    pbVar9 = (byte *)(ulonglong)uVar7;
    bVar4 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar6;
    pbVar9[in_FS_OFFSET] = pbVar9[in_FS_OFFSET] + bVar6 + CARRY1(bVar4,bVar6);
  }
  unaff_RDI[CONCAT62(uVar16,CONCAT11(cVar15,cVar14))] =
       unaff_RDI[CONCAT62(uVar16,CONCAT11(cVar15,cVar14))] + bVar17;
  iVar8 = uVar7 + 0xb4894800;
  *(char *)CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) =
       *(char *)CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) + (char)((uint)iVar8 >> 8);
code_r0x0001404b77e1:
  puVar2 = (undefined1 *)
           ((CONCAT62(uVar20,CONCAT11(bVar19,bVar12)) | 6) + 0x2100 +
           CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) * 2);
  *puVar2 = *puVar2;
  puVar2 = (undefined1 *)
           ((CONCAT62(uVar20,CONCAT11(bVar19,bVar12)) | 6) + 0x60f0100 +
           CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) * 2);
  *puVar2 = *puVar2;
  *unaff_RDI = *unaff_RDI + cVar14;
  pbVar9 = (byte *)(CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) + -0x7ea6ffe3);
  *pbVar9 = *pbVar9 & (char)(iVar8 + 0x34050002U) + 2U;
  uVar7 = (iVar8 + 0x34050002U | 0xb920f00) + 0xe88dcc02;
  pbVar9 = (byte *)(ulonglong)uVar7;
  bVar12 = (byte)(uVar7 >> 8);
  *(byte *)CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) =
       *(char *)CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) + bVar12;
  *pbVar9 = *pbVar9 + (char)uVar7;
  bVar4 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar12;
  iRam000000015dccd137 = (iRam000000015dccd137 + -0x4b773400) - (uint)CARRY1(bVar4,bVar12);
  *(char *)CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) =
       *(char *)CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) + (char)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

