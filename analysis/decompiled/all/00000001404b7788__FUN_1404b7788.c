// Function: FUN_1404b7788
// Addr: 1404b7788
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b7836) overlaps instruction at (ram,0x0001404b782d)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b7836) */

void FUN_1404b7788(char *param_1,int *param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  byte bVar11;
  byte *in_RAX;
  int *piVar10;
  byte bVar12;
  byte bVar13;
  undefined6 uVar14;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  byte *pbVar8;
  char *pcVar9;
  
  uVar14 = (undefined6)((ulonglong)param_2 >> 0x10);
  *param_2 = *param_2 + (int)param_1;
  bVar12 = (byte)param_2 | *(byte *)((longlong)param_2 + -0x3ffb0ffa);
  bVar13 = (char)((ulonglong)param_2 >> 8) + in_RAX[0x21];
  *in_RAX = *in_RAX | (byte)in_RAX;
  *(char *)((ulonglong)in_RAX ^ 0xe) = *(char *)((ulonglong)in_RAX ^ 0xe) + unaff_BL;
  cVar4 = in(0x11);
  pbVar8 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4);
  bVar11 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar12;
  pbVar8[in_FS_OFFSET] = pbVar8[in_FS_OFFSET] + cVar4 + CARRY1(bVar11,bVar12);
  uVar6 = (int)pbVar8 + 0x80000f54;
  pcVar9 = (char *)(ulonglong)uVar6;
  cVar4 = (char)uVar6;
  bVar11 = (byte)(uVar6 >> 8);
  if (uVar6 == 0 || (int)pbVar8 < 0x7ffff0ac) {
    uVar6 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11(bVar11 * '\x02',cVar4));
    piVar10 = (int *)(ulonglong)uVar6;
    *piVar10 = *piVar10 + uVar6 + (uint)CARRY1(bVar11,bVar11);
    pcVar9 = (char *)((longlong)piVar10 + CONCAT62(uVar14,CONCAT11(bVar13,bVar12)));
    *pcVar9 = *pcVar9 + bVar11 * '\x02';
  }
  else {
    pbVar8 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x47ffe282);
    bVar5 = *pbVar8;
    *pbVar8 = *pbVar8 + bVar13;
    if (CARRY1(bVar5,bVar13) || *pbVar8 == 0) {
      *param_1 = *param_1 + (cVar4 - CARRY1(bVar5,bVar13));
      *unaff_RDI = *unaff_RDI + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = *param_1 + bVar11;
    *pcVar9 = *pcVar9 + cVar4;
    pcVar1 = pcVar9 + -0x4cffe282;
    cVar3 = *pcVar1;
    *pcVar1 = *pcVar1 + cVar4;
    if (*pcVar1 == '\0' || SCARRY1(cVar3,cVar4) != *pcVar1 < '\0') {
      iVar7 = 0x21004b76;
      goto code_r0x0001404b77e1;
    }
    pcVar9[0x21004b76] = pcVar9[0x21004b76] + unaff_BH;
    *unaff_RSI = *unaff_RSI + cVar4;
    *pcVar9 = *pcVar9 + cVar4;
    bVar5 = in(0x11);
    uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar5);
    pbVar8 = (byte *)(ulonglong)uVar6;
    bVar11 = *pbVar8;
    *pbVar8 = *pbVar8 + bVar5;
    pbVar8[in_FS_OFFSET] = pbVar8[in_FS_OFFSET] + bVar5 + CARRY1(bVar11,bVar5);
  }
  unaff_RDI[(longlong)param_1] = unaff_RDI[(longlong)param_1] + bVar12;
  iVar7 = uVar6 + 0xb4894800;
  *param_1 = *param_1 + (char)((uint)iVar7 >> 8);
code_r0x0001404b77e1:
  puVar2 = (undefined1 *)(CONCAT62(uVar14,CONCAT11(bVar13,bVar12)) + 0x2100 + (longlong)param_1 * 2)
  ;
  *puVar2 = *puVar2;
  puVar2 = (undefined1 *)
           (CONCAT62(uVar14,CONCAT11(bVar13,bVar12)) + 0x60f0100 + (longlong)param_1 * 2);
  *puVar2 = *puVar2;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  param_1[-0x7ea6ffe3] = param_1[-0x7ea6ffe3] & (char)(iVar7 + 0x34050002U) + 2U;
  uVar6 = (iVar7 + 0x34050002U | 0xb920f00) + 0xe88dcc02;
  pbVar8 = (byte *)(ulonglong)uVar6;
  bVar12 = (byte)(uVar6 >> 8);
  *param_1 = *param_1 + bVar12;
  *pbVar8 = *pbVar8 + (char)uVar6;
  bVar11 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar12;
  iRam000000015dccd137 = (iRam000000015dccd137 + -0x4b773400) - (uint)CARRY1(bVar11,bVar12);
  *param_1 = *param_1 + (char)uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

