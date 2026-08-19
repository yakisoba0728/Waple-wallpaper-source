// Function: FUN_1404b7724
// Addr: 1404b7724
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b7836) overlaps instruction at (ram,0x0001404b782d)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b7836) */

void FUN_1404b7724(longlong param_1,uint param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined3 uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  uint in_EAX;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  int *piVar17;
  byte bVar19;
  char *pcVar18;
  byte bVar21;
  char *pcVar20;
  char unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *puVar22;
  undefined8 *puVar23;
  longlong unaff_RBP;
  char *unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  byte *pbVar15;
  uint *puVar16;
  
  *unaff_RDI = *unaff_RDI + (char)param_1;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  pcVar20 = (char *)(ulonglong)(in_EAX ^ 0xd);
  uVar11 = *(uint *)((ulonglong)param_2 + 0x21);
  puVar22 = (undefined1 *)(ulonglong)((uint)&stack0x00000000 | uVar11);
  uVar10 = param_2 + 0x74050002;
  pcVar18 = (char *)(param_1 + -1);
  if (pcVar18 == (char *)0x0 || (char)uVar10 == '\0') {
    param_2 = param_2 + 0x5688e802;
    pcVar14 = (char *)(ulonglong)param_2;
    cVar7 = (char)(in_EAX ^ 0xd);
    pcVar14[0x76] = pcVar14[0x76] + cVar7;
    *param_4 = *param_4 + (char)uVar11;
    *pcVar14 = *pcVar14 + (char)param_2;
    uVar4 = (undefined3)(param_2 >> 8);
    bVar6 = (char)param_2 + (char)(param_2 >> 8);
    uVar11 = CONCAT31(uVar4,bVar6);
    pbVar15 = (byte *)(ulonglong)uVar11;
    if ((POPCOUNT(bVar6) & 1U) == 0) {
      bVar9 = *pbVar15;
      *pbVar15 = *pbVar15 + unaff_BL;
      if (SCARRY1(bVar9,unaff_BL) == (char)*pbVar15 < '\0') {
        pbVar15[0x76] = pbVar15[0x76] + cVar7;
        bVar9 = *param_4;
        *param_4 = *param_4 + bVar6;
        uVar11 = CONCAT31(uVar4,bVar6 + *unaff_RSI + CARRY1(bVar9,bVar6));
        cVar8 = *pcVar20;
        *pcVar20 = *pcVar20 + cVar7;
        puVar23 = (undefined8 *)(puVar22 + -8);
        puVar22 = puVar22 + -8;
        *puVar23 = 0x640a0005;
        uVar2 = TaskRegister();
        *(undefined2 *)pcVar20 = uVar2;
        pcVar20 = (char *)CONCAT71((uint7)(uint3)(in_EAX >> 8),6);
        if (!SCARRY1(cVar8,cVar7)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
code_r0x0001404b7786:
        *param_4 = *param_4 + (byte)uVar11;
        pbVar15 = (byte *)(ulonglong)
                          CONCAT31((int3)(uVar11 >> 8),
                                   (byte)uVar11 | *(byte *)((ulonglong)uVar11 * 2));
        goto code_r0x0001404b778c;
      }
      *(byte *)(unaff_RBP + 0x1d) = *(byte *)(unaff_RBP + 0x1d) ^ unaff_BH;
code_r0x0001404b776f:
      pbVar1 = pbVar15 + 0x7d;
      bVar6 = *pbVar1;
      bVar19 = (byte)((ulonglong)pcVar18 >> 8);
      *pbVar1 = *pbVar1 + bVar19;
      uVar11 = ((int)pbVar15 + -0x4b768400) - (uint)CARRY1(bVar6,bVar19);
      pbVar15 = (byte *)(ulonglong)uVar11;
      *pcVar18 = *pcVar18 + (char)(uVar11 >> 8);
      *pbVar15 = *pbVar15 + (char)uVar11;
      bVar6 = *pbVar15;
      bVar21 = (byte)(in_EAX >> 8);
      bVar9 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar21;
      if (SCARRY1(bVar9,bVar21) != (char)*pbVar15 < '\0') {
        pbVar15 = pbVar15 + 0x7d;
        bVar6 = *pbVar15;
        *pbVar15 = *pbVar15 + bVar19;
        uVar11 = (uVar11 + 0xb4897c00) - (uint)CARRY1(bVar6,bVar19);
        *pcVar18 = *pcVar18 + (char)uVar11;
        goto code_r0x0001404b7786;
      }
      cVar7 = -CARRY1(bVar6,bVar21);
      uVar5 = CONCAT22((short)(uVar11 >> 0x10),CONCAT11(cVar7,(char)uVar11));
      puVar16 = (uint *)(ulonglong)uVar5;
      uVar3 = (uint)CARRY1(bVar6,bVar21);
      uVar11 = *puVar16;
      uVar10 = *puVar16;
      *puVar16 = uVar10 + uVar5 + uVar3;
      *(byte *)((longlong)puVar16 + (longlong)pcVar20) =
           *(byte *)((longlong)puVar16 + (longlong)pcVar20) + cVar7 +
           (CARRY4(uVar11,uVar5) || CARRY4(uVar10 + uVar5,uVar3));
    }
    else {
      pbVar15 = (byte *)(ulonglong)(uVar11 + 0x30000e34);
      if ((int)uVar11 < -0x30000e34) goto code_r0x0001404b776f;
code_r0x0001404b778c:
      bVar6 = (byte)pcVar20 | pcVar20[-0x3ffb0ffa];
      pcVar20 = (char *)CONCAT62((int6)((ulonglong)pcVar20 >> 0x10),
                                 CONCAT11((char)((ulonglong)pcVar20 >> 8) + pbVar15[0x21],bVar6));
      *pbVar15 = *pbVar15 | (byte)pbVar15;
      *(char *)((ulonglong)pbVar15 ^ 0xe) = *(char *)((ulonglong)pbVar15 ^ 0xe) + unaff_BL;
      cVar7 = in(0x11);
      puVar16 = (uint *)CONCAT71((int7)((ulonglong)pbVar15 >> 8),cVar7);
      uVar11 = *puVar16;
      *(byte *)puVar16 = (byte)*puVar16 + bVar6;
      *(byte *)(in_FS_OFFSET + (longlong)puVar16) =
           *(byte *)(in_FS_OFFSET + (longlong)puVar16) + cVar7 + CARRY1((byte)uVar11,bVar6);
    }
    uVar10 = (int)puVar16 + 0x80000f54;
    bVar6 = (byte)(uVar10 >> 8);
    if (uVar10 != 0 && 0x7ffff0ab < (int)puVar16) {
      pbVar15 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x47ffe282);
      bVar9 = *pbVar15;
      bVar19 = (byte)((ulonglong)pcVar20 >> 8);
      *pbVar15 = *pbVar15 + bVar19;
      if (CARRY1(bVar9,bVar19) || *pbVar15 == 0) {
        *pcVar18 = *pcVar18 + ((char)uVar10 - CARRY1(bVar9,bVar19));
        *unaff_RDI = *unaff_RDI + (char)pcVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *pcVar18 = *pcVar18 + bVar6;
      goto code_r0x0001404b77b5;
    }
    uVar11 = CONCAT22((short)(uVar10 >> 0x10),CONCAT11(bVar6 * '\x02',(char)uVar10));
    piVar17 = (int *)(ulonglong)uVar11;
    *piVar17 = *piVar17 + uVar11 + (uint)CARRY1(bVar6,bVar6);
    *(char *)((longlong)piVar17 + (longlong)pcVar20) =
         *(char *)((longlong)piVar17 + (longlong)pcVar20) + bVar6 * '\x02';
  }
  else {
code_r0x0001404b77b5:
    pcVar13 = (char *)(ulonglong)uVar10;
    cVar8 = (char)uVar10;
    *pcVar13 = *pcVar13 + cVar8;
    pcVar14 = pcVar13 + -0x4cffe282;
    cVar7 = *pcVar14;
    *pcVar14 = *pcVar14 + cVar8;
    if (*pcVar14 == '\0' || SCARRY1(cVar7,cVar8) != *pcVar14 < '\0') {
      iVar12 = 0x21004b76;
      goto code_r0x0001404b77e1;
    }
    pcVar13[0x21004b76] = pcVar13[0x21004b76] + unaff_BH;
    *unaff_RSI = *unaff_RSI + cVar8;
    *pcVar13 = *pcVar13 + cVar8;
    bVar9 = in(0x11);
    uVar11 = CONCAT31((int3)(uVar10 >> 8),bVar9);
    pbVar15 = (byte *)(ulonglong)uVar11;
    bVar6 = *pbVar15;
    *pbVar15 = *pbVar15 + bVar9;
    pbVar15[in_FS_OFFSET] = pbVar15[in_FS_OFFSET] + bVar9 + CARRY1(bVar6,bVar9);
  }
  unaff_RDI[(longlong)pcVar18] = unaff_RDI[(longlong)pcVar18] + (char)pcVar20;
  iVar12 = uVar11 + 0xb4894800;
  *pcVar18 = *pcVar18 + (char)((uint)iVar12 >> 8);
code_r0x0001404b77e1:
  pcVar20[(longlong)pcVar18 * 2 + 0x2100] = pcVar20[(longlong)pcVar18 * 2 + 0x2100];
  pcVar20[(longlong)pcVar18 * 2 + 0x60f0100] = pcVar20[(longlong)pcVar18 * 2 + 0x60f0100];
  *unaff_RDI = *unaff_RDI + (char)pcVar18;
  *(undefined1 **)(puVar22 + -8) = puVar22;
  *(byte *)(param_1 + -0x7ea6ffe4) =
       *(byte *)(param_1 + -0x7ea6ffe4) & (char)(iVar12 + 0x34050002U) + 2U;
  uVar11 = (iVar12 + 0x34050002U | 0xb920f00) + 0xe88dcc02;
  pbVar15 = (byte *)(ulonglong)uVar11;
  bVar9 = (byte)(uVar11 >> 8);
  *pcVar18 = *pcVar18 + bVar9;
  *pbVar15 = *pbVar15 + (char)uVar11;
  bVar6 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar9;
  iRam000000015dccd137 = (iRam000000015dccd137 + -0x4b773400) - (uint)CARRY1(bVar6,bVar9);
  *pcVar18 = *pcVar18 + (char)uVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

