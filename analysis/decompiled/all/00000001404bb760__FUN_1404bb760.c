// Function: FUN_1404bb760
// Addr: 1404bb760
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bb7dd) overlaps instruction at (ram,0x0001404bb7dc)
    */

void FUN_1404bb760(byte *param_1,int param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte bVar10;
  longlong in_RAX;
  uint *puVar6;
  char *pcVar7;
  uint *puVar8;
  byte *pbVar9;
  char cVar13;
  char cVar14;
  uint uVar12;
  byte unaff_BL;
  byte unaff_BH;
  undefined1 *puVar15;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_8 [8];
  byte bVar11;
  
  uVar12 = param_2 + *(int *)(in_RAX + 2);
  pbVar9 = (byte *)(ulonglong)uVar12;
  *param_1 = *param_1 ^ (byte)((ulonglong)in_RAX >> 8);
  uVar4 = (int)in_RAX + 0x64050002;
  puVar6 = (uint *)(ulonglong)uVar4;
  *param_1 = (char)*param_1 >> 0x13;
  cVar2 = (char)((ulonglong)param_1 >> 8);
  if ((char)*param_1 < '\0') {
    bVar11 = *param_1;
    *param_1 = *param_1 + 1;
    puVar15 = auStack_8;
    register0x00000020 = (BADSPACEBASE *)auStack_8;
    if (SCARRY1(bVar11,'\x01') != (char)*param_1 < '\0') {
      *(char *)((longlong)puVar6 + 0x21004bb6) = *(char *)((longlong)puVar6 + 0x21004bb6) + cVar2;
code_r0x0001404bb7a1:
      *(char *)puVar6 = (char)*puVar6 + (char)puVar6;
      cVar13 = (char)((ulonglong)pbVar9 >> 8);
      cVar2 = (char)pbVar9;
      cVar14 = cVar13 + unaff_BH;
      pbVar9 = (byte *)CONCAT62((int6)((ulonglong)pbVar9 >> 0x10),CONCAT11(cVar14,cVar2));
      bVar16 = cVar14 == '\0';
      if (SCARRY1(cVar13,unaff_BH) != cVar14 < '\0') {
        if (SCARRY1(cVar13,unaff_BH) == cVar14 < '\0') goto code_r0x0001404bb7cb;
        goto code_r0x0001404bb7ec;
      }
      param_1[0x7d] = param_1[0x7d] + cVar2;
      *puVar6 = *puVar6 & (uint)puVar6;
      *param_4 = *param_4 + (char)register0x00000020;
      goto code_r0x0001404bb7b1;
    }
code_r0x0001404bb7bc:
    pcVar7 = (char *)((ulonglong)puVar15 & 0xffffffff);
    pbVar9 = (byte *)CONCAT62((int6)((ulonglong)pbVar9 >> 0x10),CONCAT11(0x4b,(char)pbVar9));
    *param_1 = *param_1 + (char)((ulonglong)pcVar7 >> 8);
    cVar2 = (char)pcVar7;
    *pcVar7 = *pcVar7 + cVar2;
    puVar8 = (uint *)CONCAT71((int7)((ulonglong)pcVar7 >> 8),cVar2 * '\x02');
    register0x00000020 = (BADSPACEBASE *)puVar6;
    if (SCARRY1(cVar2,cVar2) == (char)(cVar2 * '\x02') < '\0') {
      bVar17 = SCARRY1(unaff_BL,'K');
      bVar11 = unaff_BL + 0x4b;
      bVar16 = unaff_BL == 0xb5;
      goto code_r0x0001404bb7c9;
    }
  }
  else {
    pcVar7 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x521004b +
                     CONCAT44(unaff_00000034,unaff_ESI) * 4);
    *pcVar7 = *pcVar7 + (char)uVar4;
    iVar1 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + (char)*puVar6);
    uVar4 = iVar1 + 0xf3000d74;
    puVar6 = (uint *)(ulonglong)uVar4;
    if (iVar1 < 0xcfff28c) {
      bVar17 = SCARRY1(*param_1,'\x01');
      *param_1 = *param_1 + 1;
      bVar16 = (char)*param_1 < '\0';
    }
    else {
      cVar13 = (char)(uVar12 >> 8);
      bVar17 = SCARRY1(cVar13,unaff_BH);
      cVar14 = (char)uVar12;
      cVar13 = cVar13 + unaff_BH;
      pbVar9 = (byte *)(ulonglong)CONCAT22((short)(uVar12 >> 0x10),CONCAT11(cVar13,cVar14));
      bVar16 = cVar13 < '\0';
      if (bVar17 == bVar16) {
        pcVar7 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x521004b +
                         CONCAT44(unaff_00000034,unaff_ESI) * 4);
        *pcVar7 = *pcVar7 + cVar14;
        iVar1 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + (char)*puVar6);
        uVar4 = iVar1 + 0xfe000fd4;
        puVar6 = (uint *)(ulonglong)uVar4;
        if (iVar1 < 0x1fff02c) {
          *param_1 = *param_1 + 1;
          puVar15 = (undefined1 *)register0x00000020;
          goto code_r0x0001404bb7bc;
        }
        param_1[0x7d] = param_1[0x7d] + cVar14;
        *puVar6 = *puVar6 & uVar4;
        *param_4 = *param_4;
        goto code_r0x0001404bb7a1;
      }
    }
    register0x00000020 = (BADSPACEBASE *)auStack_8;
    if (bVar17 == bVar16) goto code_r0x0001404bb7cb;
    *(char *)((longlong)puVar6 + 0x21004bb6) = *(char *)((longlong)puVar6 + 0x21004bb6) + cVar2;
code_r0x0001404bb7b1:
    cVar2 = (char)puVar6;
    *(char *)puVar6 = (char)*puVar6 + cVar2;
    bVar11 = (byte)((ulonglong)pbVar9 >> 8);
    cVar14 = (char)pbVar9;
    if (SCARRY1(unaff_BL,bVar11) == (char)(unaff_BL + bVar11) < '\0') {
      pbVar9 = (byte *)CONCAT62((int6)((ulonglong)pbVar9 >> 0x10),CONCAT11(bVar11 + unaff_BH,cVar14)
                               );
      if (SCARRY1(bVar11,unaff_BH) == (char)(bVar11 + unaff_BH) < '\0') {
        pcVar7 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x21004b +
                         CONCAT44(unaff_00000034,unaff_ESI) * 4);
        *pcVar7 = *pcVar7 + cVar14;
        bVar17 = SCARRY1((char)*puVar6,cVar2);
        *(char *)puVar6 = (char)*puVar6 + cVar2;
        *param_1 = (char)*param_1 >> 0x13;
        bVar11 = *param_1;
        bVar16 = *param_1 == 0;
        puVar8 = puVar6;
code_r0x0001404bb7c9:
        puVar6 = puVar8;
        if (bVar17 == (char)bVar11 < '\0') {
code_r0x0001404bb7cb:
          pcVar7 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x2101004b +
                           CONCAT44(unaff_00000034,unaff_ESI) * 4);
          *pcVar7 = *pcVar7 + (char)puVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto code_r0x0001404bb7ec;
      }
      puVar6[4] = puVar6[4] + unaff_ESI + (uint)CARRY1(bVar11,unaff_BH);
    }
    else {
      iVar5 = (int)puVar6;
      iVar1 = iVar5 + 0x11e013f0;
      uVar4 = iVar1 + (uint)CARRY1(unaff_BL,bVar11);
      puVar6 = (uint *)(ulonglong)uVar4;
      if (SCARRY4(iVar5,0x11e013f0) != SCARRY4(iVar1,(uint)CARRY1(unaff_BL,bVar11))) {
        cVar2 = *(char *)CONCAT44(unaff_00000034,unaff_ESI);
        *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
             *(char *)CONCAT44(unaff_00000034,unaff_ESI) + cVar14;
        if (*(char *)CONCAT44(unaff_00000034,unaff_ESI) == '\0' ||
            SCARRY1(cVar2,cVar14) != *(char *)CONCAT44(unaff_00000034,unaff_ESI) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        bVar3 = (byte)uVar4;
        *(byte *)puVar6 = (char)*puVar6 + bVar3;
        bVar11 = *param_1;
        bVar10 = (byte)(uVar4 >> 8);
        *param_1 = *param_1 + bVar10;
        pbVar9 = (byte *)((longlong)puVar6 * 2);
        bVar16 = CARRY1(*pbVar9,bVar3) || CARRY1(*pbVar9 + bVar3,CARRY1(bVar11,bVar10));
        *pbVar9 = *pbVar9 + bVar3 + CARRY1(bVar11,bVar10);
        bVar11 = bVar10 + bVar3 + bVar16;
        uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(bVar11,bVar3));
        pbVar9 = (byte *)(ulonglong)uVar4;
        *(uint *)pbVar9 =
             (*(int *)pbVar9 - uVar4) -
             (uint)(CARRY1(bVar10,bVar3) || CARRY1(bVar10 + bVar3,bVar16));
        *pbVar9 = *pbVar9 | bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *unaff_RDI = *unaff_RDI ^ (byte)param_1;
    *(uint **)((longlong)register0x00000020 + -8) = puVar6;
    *(char *)puVar6 = (char)*puVar6 + (char)puVar6;
    *puVar6 = *puVar6 & (uint)param_1;
    puVar8 = (uint *)CONCAT71((int7)((ulonglong)puVar6 >> 8),(char)puVar6 + (char)*puVar6);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
  }
  puVar6 = (uint *)CONCAT62((int6)((ulonglong)puVar8 >> 0x10),
                            CONCAT11((byte)((ulonglong)puVar8 >> 8) | (byte)pbVar9,(char)puVar8));
  *(char *)puVar6 = (char)*puVar6 - (char)puVar8;
  bVar16 = (char)*puVar6 == '\0';
code_r0x0001404bb7ec:
  if (param_1 + -1 != (byte *)0x0 && !bVar16) {
    *(char *)((longlong)puVar6 + -0x49) =
         *(char *)((longlong)puVar6 + -0x49) + (char)((ulonglong)puVar6 >> 8);
    *param_4 = *param_4 + (char)register0x00000020;
    *pbVar9 = *pbVar9 | (byte)puVar6;
    *(char *)puVar6 = (char)*puVar6 + (char)(param_1 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar6 = *puVar6 & (uint)puVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

