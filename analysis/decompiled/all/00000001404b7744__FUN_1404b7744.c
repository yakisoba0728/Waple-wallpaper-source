// Function: FUN_1404b7744
// Addr: 1404b7744
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b7836) overlaps instruction at (ram,0x0001404b782d)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b7836) */

void FUN_1404b7744(longlong param_1,char *param_2,undefined8 param_3,byte *param_4)

{
  undefined2 uVar1;
  undefined3 uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *in_RAX;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  byte bVar12;
  byte bVar13;
  undefined6 uVar14;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *puVar15;
  undefined1 *puVar16;
  char *unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  undefined1 auStack_8 [8];
  
  uVar14 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar13 = (byte)((ulonglong)param_2 >> 8);
  bVar12 = (byte)param_2;
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar6 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  pcVar11 = (char *)(param_1 + -1);
  if (pcVar11 == (char *)0x0 || (byte)*in_RAX == 0) {
    uVar6 = ((uint)in_RAX + 0xe283e800) - (uint)CARRY1((byte)uVar6,(byte)in_RAX);
    *(char *)((ulonglong)uVar6 + 0x76) = *(char *)((ulonglong)uVar6 + 0x76) + bVar12;
    bVar3 = *param_4;
    bVar5 = (byte)uVar6;
    *param_4 = *param_4 + bVar5;
    uVar2 = (undefined3)(uVar6 >> 8);
    bVar3 = bVar5 + *unaff_RSI + CARRY1(bVar3,bVar5);
    cVar4 = *param_2;
    *param_2 = *param_2 + bVar12;
    puVar15 = auStack_8;
    puVar16 = auStack_8;
    register0x00000020 = (BADSPACEBASE *)auStack_8;
    uVar1 = TaskRegister();
    *(undefined2 *)param_2 = uVar1;
    if (!SCARRY1(cVar4,bVar12)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_4 = *param_4 + bVar3;
    bVar3 = bVar3 | *(byte *)((ulonglong)CONCAT31(uVar2,bVar3) * 2);
    pbVar9 = (byte *)(ulonglong)CONCAT31(uVar2,bVar3);
    bVar5 = *(byte *)(CONCAT62(uVar14,CONCAT11(bVar13,6)) + -0x3ffb0ffa);
    bVar12 = bVar5 | 6;
    bVar13 = bVar13 + pbVar9[0x21];
    *pbVar9 = *pbVar9 | bVar3;
    pcVar10 = (char *)((ulonglong)CONCAT31(uVar2,bVar3) ^ 0xe);
    *pcVar10 = *pcVar10 + unaff_BL;
    cVar4 = in(0x11);
    uVar6 = CONCAT31(uVar2,cVar4);
    pbVar9 = (byte *)(ulonglong)uVar6;
    bVar3 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar12;
    pbVar9[in_FS_OFFSET] = pbVar9[in_FS_OFFSET] + cVar4 + CARRY1(bVar3,bVar12);
    uVar7 = uVar6 + 0x80000f54;
    in_RAX = (uint *)(ulonglong)uVar7;
    cVar4 = (char)uVar7;
    bVar3 = (byte)(uVar7 >> 8);
    if (uVar7 != 0 && 0x7ffff0ab < (int)uVar6) {
      pbVar9 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x47ffe282);
      bVar5 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar13;
      if (CARRY1(bVar5,bVar13) || *pbVar9 == 0) {
        *pcVar11 = *pcVar11 + (cVar4 - CARRY1(bVar5,bVar13));
        *unaff_RDI = *unaff_RDI + (char)pcVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *pcVar11 = *pcVar11 + bVar3;
      *(byte *)in_RAX = (byte)*in_RAX + cVar4;
      pbVar9 = (byte *)((longlong)in_RAX + -0x4cffe282);
      bVar3 = *pbVar9;
      *pbVar9 = *pbVar9 + cVar4;
      if (*pbVar9 == 0 || SCARRY1(bVar3,cVar4) != (char)*pbVar9 < '\0') {
        iVar8 = 0x21004b76;
        goto code_r0x0001404b77e1;
      }
      *(byte *)((longlong)in_RAX + 0x21004b76) = *(byte *)((longlong)in_RAX + 0x21004b76) + unaff_BH
      ;
      goto code_r0x0001404b77c5;
    }
    uVar6 = CONCAT22((short)(uVar7 >> 0x10),CONCAT11(bVar3 * '\x02',cVar4));
    pbVar9 = (byte *)(ulonglong)uVar6;
    *(uint *)pbVar9 = *(int *)pbVar9 + uVar6 + (uint)CARRY1(bVar3,bVar3);
    pbVar9[CONCAT62(uVar14,CONCAT11(bVar13,bVar5)) | 6] =
         pbVar9[CONCAT62(uVar14,CONCAT11(bVar13,bVar5)) | 6] + bVar3 * '\x02';
  }
  else {
code_r0x0001404b77c5:
    *unaff_RSI = *unaff_RSI + (char)in_RAX;
    *(byte *)in_RAX = (byte)*in_RAX + (char)in_RAX;
    bVar5 = in(0x11);
    pbVar9 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5);
    bVar3 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar5;
    pbVar9[in_FS_OFFSET] = pbVar9[in_FS_OFFSET] + bVar5 + CARRY1(bVar3,bVar5);
    puVar15 = (undefined1 *)register0x00000020;
  }
  unaff_RDI[(longlong)pcVar11] = unaff_RDI[(longlong)pcVar11] + bVar12;
  iVar8 = (int)pbVar9 + -0x4b76b800;
  *pcVar11 = *pcVar11 + (char)((uint)iVar8 >> 8);
  puVar16 = puVar15;
code_r0x0001404b77e1:
  puVar15 = (undefined1 *)
            (CONCAT62(uVar14,CONCAT11(bVar13,bVar12)) + 0x2100 + (longlong)pcVar11 * 2);
  *puVar15 = *puVar15;
  puVar15 = (undefined1 *)
            (CONCAT62(uVar14,CONCAT11(bVar13,bVar12)) + 0x60f0100 + (longlong)pcVar11 * 2);
  *puVar15 = *puVar15;
  *unaff_RDI = *unaff_RDI + (char)pcVar11;
  *(undefined1 **)(puVar16 + -8) = puVar16;
  *(byte *)(param_1 + -0x7ea6ffe4) =
       *(byte *)(param_1 + -0x7ea6ffe4) & (char)(iVar8 + 0x34050002U) + 2U;
  uVar6 = (iVar8 + 0x34050002U | 0xb920f00) + 0xe88dcc02;
  pbVar9 = (byte *)(ulonglong)uVar6;
  bVar13 = (byte)(uVar6 >> 8);
  *pcVar11 = *pcVar11 + bVar13;
  *pbVar9 = *pbVar9 + (char)uVar6;
  bVar12 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar13;
  iRam000000015dccd137 = (iRam000000015dccd137 + -0x4b773400) - (uint)CARRY1(bVar12,bVar13);
  *pcVar11 = *pcVar11 + (char)uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

