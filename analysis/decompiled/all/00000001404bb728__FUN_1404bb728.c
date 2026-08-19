// Function: FUN_1404bb728
// Addr: 1404bb728
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bb7dd) overlaps instruction at (ram,0x0001404bb7dc)
    */

void FUN_1404bb728(byte *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar6;
  byte bVar11;
  uint *in_RAX;
  undefined7 uVar12;
  uint *puVar9;
  byte *pbVar10;
  char cVar13;
  char cVar14;
  byte unaff_BL;
  byte unaff_BH;
  undefined1 *puVar15;
  undefined8 *puVar16;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_8 [8];
  int iVar5;
  char *pcVar7;
  longlong lVar8;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar12 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar1 = in((short)param_2);
  pcVar7 = (char *)CONCAT71(uVar12,cVar1);
  if ((char)*in_RAX == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) + cVar1;
  if (*(char *)CONCAT44(unaff_00000034,unaff_ESI) != '\0') {
code_r0x0001404bb754:
    iRam000000019258b760 = iRam000000019258b760 + (uint)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar14 = (char)((ulonglong)param_1 >> 8);
  *pcVar7 = *pcVar7 + cVar14;
  pbVar10 = (byte *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x4b,(char)param_2));
  bVar3 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar3;
  *pcVar7 = *pcVar7 + cVar1;
  bVar2 = cVar1 + (char)param_2;
  lVar8 = CONCAT71(uVar12,bVar2);
  if (bVar2 == 0) {
    pbVar10 = (byte *)(ulonglong)(uint)((int)pbVar10 + *(int *)(lVar8 + 2));
    *param_1 = *param_1 ^ bVar3;
    puVar9 = (uint *)(ulonglong)((int)lVar8 + 0x64050002);
  }
  else {
    puVar9 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar3 + cVar14,bVar2));
    if ((byte)(bVar3 + cVar14) != '\0') {
      pcVar7 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + CONCAT44(unaff_00000034,unaff_ESI) * 4)
      ;
      *pcVar7 = *pcVar7 + unaff_BL;
      *param_4 = *param_4 + bVar2;
      *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
           *(char *)CONCAT44(unaff_00000034,unaff_ESI) +
           (bVar2 | (byte)*(undefined4 *)((longlong)puVar9 * 2));
      goto code_r0x0001404bb754;
    }
  }
  uRam00000001a450b76c = uRam00000001a450b76c & (uint)puVar9;
  *param_1 = (char)*param_1 >> 0x13;
  if ((char)*param_1 < '\0') {
    bVar2 = *param_1;
    *param_1 = *param_1 + 1;
    puVar15 = auStack_8;
    register0x00000020 = (BADSPACEBASE *)auStack_8;
    if (SCARRY1(bVar2,'\x01') != (char)*param_1 < '\0') {
      *(char *)((longlong)puVar9 + 0x21004bb6) = *(char *)((longlong)puVar9 + 0x21004bb6) + cVar14;
code_r0x0001404bb7a1:
      *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
      cVar13 = (char)((ulonglong)pbVar10 >> 8);
      cVar1 = (char)pbVar10;
      cVar14 = cVar13 + unaff_BH;
      pbVar10 = (byte *)CONCAT62((int6)((ulonglong)pbVar10 >> 0x10),CONCAT11(cVar14,cVar1));
      bVar17 = cVar14 == '\0';
      if (SCARRY1(cVar13,unaff_BH) != cVar14 < '\0') {
        if (SCARRY1(cVar13,unaff_BH) == cVar14 < '\0') goto code_r0x0001404bb7cb;
        goto code_r0x0001404bb7ec;
      }
      param_1[0x7d] = param_1[0x7d] + cVar1;
      *puVar9 = *puVar9 & (uint)puVar9;
      *param_4 = *param_4 + (char)register0x00000020;
      goto code_r0x0001404bb7b1;
    }
code_r0x0001404bb7bc:
    pcVar7 = (char *)((ulonglong)puVar15 & 0xffffffff);
    register0x00000020 = (BADSPACEBASE *)((ulonglong)puVar9 & 0xffffffff);
    pbVar10 = (byte *)CONCAT62((int6)((ulonglong)pbVar10 >> 0x10),CONCAT11(0x4b,(char)pbVar10));
    *param_1 = *param_1 + (char)((ulonglong)pcVar7 >> 8);
    cVar1 = (char)pcVar7;
    *pcVar7 = *pcVar7 + cVar1;
    puVar9 = (uint *)CONCAT71((int7)((ulonglong)pcVar7 >> 8),cVar1 * '\x02');
    if (SCARRY1(cVar1,cVar1) == (char)(cVar1 * '\x02') < '\0') {
      bVar18 = SCARRY1(unaff_BL,'K');
      bVar2 = unaff_BL + 0x4b;
      bVar17 = unaff_BL == 0xb5;
      goto code_r0x0001404bb7c9;
    }
  }
  else {
    pcVar7 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x521004b +
                     CONCAT44(unaff_00000034,unaff_ESI) * 4);
    *pcVar7 = *pcVar7 + (char)puVar9;
    iVar5 = (int)CONCAT71((int7)((ulonglong)puVar9 >> 8),(char)puVar9 + (char)*puVar9);
    uVar4 = iVar5 + 0xf3000d74;
    puVar9 = (uint *)(ulonglong)uVar4;
    if (iVar5 < 0xcfff28c) {
      bVar18 = SCARRY1(*param_1,'\x01');
      *param_1 = *param_1 + 1;
      bVar17 = (char)*param_1 < '\0';
    }
    else {
      cVar13 = (char)((ulonglong)pbVar10 >> 8);
      bVar18 = SCARRY1(cVar13,unaff_BH);
      cVar1 = (char)pbVar10;
      cVar13 = cVar13 + unaff_BH;
      pbVar10 = (byte *)CONCAT62((int6)((ulonglong)pbVar10 >> 0x10),CONCAT11(cVar13,cVar1));
      bVar17 = cVar13 < '\0';
      if (bVar18 == bVar17) {
        pcVar7 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x521004b +
                         CONCAT44(unaff_00000034,unaff_ESI) * 4);
        *pcVar7 = *pcVar7 + cVar1;
        iVar5 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + (char)*puVar9);
        uVar4 = iVar5 + 0xfe000fd4;
        puVar9 = (uint *)(ulonglong)uVar4;
        if (iVar5 < 0x1fff02c) {
          *param_1 = *param_1 + 1;
          puVar15 = (undefined1 *)register0x00000020;
          goto code_r0x0001404bb7bc;
        }
        param_1[0x7d] = param_1[0x7d] + cVar1;
        *puVar9 = *puVar9 & uVar4;
        *param_4 = *param_4;
        goto code_r0x0001404bb7a1;
      }
    }
    register0x00000020 = (BADSPACEBASE *)auStack_8;
    if (bVar18 == bVar17) goto code_r0x0001404bb7cb;
    *(char *)((longlong)puVar9 + 0x21004bb6) = *(char *)((longlong)puVar9 + 0x21004bb6) + cVar14;
code_r0x0001404bb7b1:
    cVar1 = (char)puVar9;
    *(char *)puVar9 = (char)*puVar9 + cVar1;
    bVar2 = (byte)((ulonglong)pbVar10 >> 8);
    cVar14 = (char)pbVar10;
    if (SCARRY1(unaff_BL,bVar2) == (char)(unaff_BL + bVar2) < '\0') {
      pbVar10 = (byte *)CONCAT62((int6)((ulonglong)pbVar10 >> 0x10),
                                 CONCAT11(bVar2 + unaff_BH,cVar14));
      if (SCARRY1(bVar2,unaff_BH) == (char)(bVar2 + unaff_BH) < '\0') {
        pcVar7 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x21004b +
                         CONCAT44(unaff_00000034,unaff_ESI) * 4);
        *pcVar7 = *pcVar7 + cVar14;
        bVar18 = SCARRY1((char)*puVar9,cVar1);
        *(char *)puVar9 = (char)*puVar9 + cVar1;
        *param_1 = (char)*param_1 >> 0x13;
        bVar2 = *param_1;
        bVar17 = *param_1 == 0;
code_r0x0001404bb7c9:
        if (bVar18 == (char)bVar2 < '\0') {
code_r0x0001404bb7cb:
          pcVar7 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x2101004b +
                           CONCAT44(unaff_00000034,unaff_ESI) * 4);
          *pcVar7 = *pcVar7 + (char)puVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto code_r0x0001404bb7ec;
      }
      puVar9[4] = puVar9[4] + unaff_ESI + (uint)CARRY1(bVar2,unaff_BH);
    }
    else {
      iVar6 = (int)puVar9;
      iVar5 = iVar6 + 0x11e013f0;
      uVar4 = iVar5 + (uint)CARRY1(unaff_BL,bVar2);
      puVar9 = (uint *)(ulonglong)uVar4;
      if (SCARRY4(iVar6,0x11e013f0) != SCARRY4(iVar5,(uint)CARRY1(unaff_BL,bVar2))) {
        cVar1 = *(char *)CONCAT44(unaff_00000034,unaff_ESI);
        *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
             *(char *)CONCAT44(unaff_00000034,unaff_ESI) + cVar14;
        if (*(char *)CONCAT44(unaff_00000034,unaff_ESI) == '\0' ||
            SCARRY1(cVar1,cVar14) != *(char *)CONCAT44(unaff_00000034,unaff_ESI) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        bVar3 = (byte)uVar4;
        *(byte *)puVar9 = (char)*puVar9 + bVar3;
        bVar2 = *param_1;
        bVar11 = (byte)(uVar4 >> 8);
        *param_1 = *param_1 + bVar11;
        pbVar10 = (byte *)((longlong)puVar9 * 2);
        bVar17 = CARRY1(*pbVar10,bVar3) || CARRY1(*pbVar10 + bVar3,CARRY1(bVar2,bVar11));
        *pbVar10 = *pbVar10 + bVar3 + CARRY1(bVar2,bVar11);
        bVar2 = bVar11 + bVar3 + bVar17;
        uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(bVar2,bVar3));
        pbVar10 = (byte *)(ulonglong)uVar4;
        *(uint *)pbVar10 =
             (*(int *)pbVar10 - uVar4) -
             (uint)(CARRY1(bVar11,bVar3) || CARRY1(bVar11 + bVar3,bVar17));
        *pbVar10 = *pbVar10 | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *unaff_RDI = *unaff_RDI ^ (byte)param_1;
    puVar16 = (undefined8 *)((longlong)register0x00000020 + -8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *puVar16 = puVar9;
    *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
    *puVar9 = *puVar9 & (uint)param_1;
    puVar9 = (uint *)CONCAT71((int7)((ulonglong)puVar9 >> 8),(char)puVar9 + (char)*puVar9);
  }
  cVar1 = (char)puVar9;
  puVar9 = (uint *)CONCAT62((int6)((ulonglong)puVar9 >> 0x10),
                            CONCAT11((byte)((ulonglong)puVar9 >> 8) | (byte)pbVar10,cVar1));
  *(char *)puVar9 = (char)*puVar9 - cVar1;
  bVar17 = (char)*puVar9 == '\0';
code_r0x0001404bb7ec:
  if (param_1 + -1 != (byte *)0x0 && !bVar17) {
    *(char *)((longlong)puVar9 + -0x49) =
         *(char *)((longlong)puVar9 + -0x49) + (char)((ulonglong)puVar9 >> 8);
    *param_4 = *param_4 + (char)register0x00000020;
    *pbVar10 = *pbVar10 | (byte)puVar9;
    *(char *)puVar9 = (char)*puVar9 + (char)(param_1 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar9 = *puVar9 & (uint)puVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

