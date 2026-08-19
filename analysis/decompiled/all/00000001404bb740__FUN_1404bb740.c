// Function: FUN_1404bb740
// Addr: 1404bb740
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bb7dd) overlaps instruction at (ram,0x0001404bb7dc)
    */

void FUN_1404bb740(byte *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar6;
  undefined8 in_RAX;
  undefined7 uVar10;
  uint *puVar7;
  char *pcVar8;
  byte *pbVar9;
  byte bVar11;
  undefined6 uVar12;
  byte unaff_BL;
  byte unaff_BH;
  undefined1 *puVar13;
  undefined8 *puVar14;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  bool in_ZF;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_8 [8];
  int iVar5;
  
  uVar12 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar11 = (byte)((ulonglong)param_2 >> 8);
  bVar3 = (byte)param_2;
  uVar10 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar1 = in((short)param_2);
  if (!in_ZF) {
    pcVar8 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + CONCAT44(unaff_00000034,unaff_ESI) * 4);
    *pcVar8 = *pcVar8 + unaff_BL;
    *param_4 = *param_4 + bVar1;
    *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(char *)CONCAT44(unaff_00000034,unaff_ESI) +
         (bVar1 | (byte)*(undefined4 *)(CONCAT71(uVar10,bVar1) * 2));
    iRam000000019258b760 = iRam000000019258b760 + (uint)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000001a450b76c = uRam00000001a450b76c & (uint)CONCAT71(uVar10,bVar1);
  puVar7 = (uint *)CONCAT71(uVar10,bVar1);
  *param_1 = (char)*param_1 >> 0x13;
  cVar2 = (char)((ulonglong)param_1 >> 8);
  if ((char)*param_1 < '\0') {
    bVar1 = *param_1;
    *param_1 = *param_1 + 1;
    puVar13 = auStack_8;
    register0x00000020 = (BADSPACEBASE *)auStack_8;
    if (SCARRY1(bVar1,'\x01') != (char)*param_1 < '\0') {
      *(char *)((longlong)puVar7 + 0x21004bb6) = *(char *)((longlong)puVar7 + 0x21004bb6) + cVar2;
code_r0x0001404bb7a1:
      *(char *)puVar7 = (char)*puVar7 + (char)puVar7;
      bVar16 = SCARRY1(bVar11,unaff_BH);
      bVar11 = bVar11 + unaff_BH;
      bVar15 = bVar11 == 0;
      if (bVar16 != (char)bVar11 < '\0') {
        if (bVar16 == (char)bVar11 < '\0') goto code_r0x0001404bb7cb;
        goto code_r0x0001404bb7ec;
      }
      param_1[0x7d] = param_1[0x7d] + bVar3;
      *puVar7 = *puVar7 & (uint)puVar7;
      *param_4 = *param_4 + (char)register0x00000020;
      goto code_r0x0001404bb7b1;
    }
code_r0x0001404bb7bc:
    pcVar8 = (char *)((ulonglong)puVar13 & 0xffffffff);
    register0x00000020 = (BADSPACEBASE *)((ulonglong)puVar7 & 0xffffffff);
    bVar11 = 0x4b;
    *param_1 = *param_1 + (char)((ulonglong)pcVar8 >> 8);
    cVar2 = (char)pcVar8;
    *pcVar8 = *pcVar8 + cVar2;
    puVar7 = (uint *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),cVar2 * '\x02');
    if (SCARRY1(cVar2,cVar2) == (char)(cVar2 * '\x02') < '\0') {
      bVar16 = SCARRY1(unaff_BL,'K');
      bVar1 = unaff_BL + 0x4b;
      bVar15 = unaff_BL == 0xb5;
      goto code_r0x0001404bb7c9;
    }
  }
  else {
    pcVar8 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x521004b +
                     CONCAT44(unaff_00000034,unaff_ESI) * 4);
    *pcVar8 = *pcVar8 + bVar1;
    iVar5 = (int)CONCAT71(uVar10,bVar1 + (char)*puVar7);
    uVar4 = iVar5 + 0xf3000d74;
    puVar7 = (uint *)(ulonglong)uVar4;
    if (iVar5 < 0xcfff28c) {
      bVar16 = SCARRY1(*param_1,'\x01');
      *param_1 = *param_1 + 1;
      bVar15 = (char)*param_1 < '\0';
    }
    else {
      bVar16 = SCARRY1(bVar11,unaff_BH);
      bVar11 = bVar11 + unaff_BH;
      bVar15 = (char)bVar11 < '\0';
      if (bVar16 == bVar15) {
        pcVar8 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x521004b +
                         CONCAT44(unaff_00000034,unaff_ESI) * 4);
        *pcVar8 = *pcVar8 + bVar3;
        iVar5 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + (char)*puVar7);
        uVar4 = iVar5 + 0xfe000fd4;
        puVar7 = (uint *)(ulonglong)uVar4;
        if (iVar5 < 0x1fff02c) {
          *param_1 = *param_1 + 1;
          puVar13 = (undefined1 *)register0x00000020;
          goto code_r0x0001404bb7bc;
        }
        param_1[0x7d] = param_1[0x7d] + bVar3;
        *puVar7 = *puVar7 & uVar4;
        *param_4 = *param_4;
        goto code_r0x0001404bb7a1;
      }
    }
    register0x00000020 = (BADSPACEBASE *)auStack_8;
    if (bVar16 == bVar15) goto code_r0x0001404bb7cb;
    *(char *)((longlong)puVar7 + 0x21004bb6) = *(char *)((longlong)puVar7 + 0x21004bb6) + cVar2;
code_r0x0001404bb7b1:
    cVar2 = (char)puVar7;
    *(char *)puVar7 = (char)*puVar7 + cVar2;
    if (SCARRY1(unaff_BL,bVar11) == (char)(unaff_BL + bVar11) < '\0') {
      bVar15 = CARRY1(bVar11,unaff_BH);
      bVar16 = SCARRY1(bVar11,unaff_BH);
      bVar11 = bVar11 + unaff_BH;
      if (bVar16 == (char)bVar11 < '\0') {
        pcVar8 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x21004b +
                         CONCAT44(unaff_00000034,unaff_ESI) * 4);
        *pcVar8 = *pcVar8 + bVar3;
        bVar16 = SCARRY1((char)*puVar7,cVar2);
        *(char *)puVar7 = (char)*puVar7 + cVar2;
        *param_1 = (char)*param_1 >> 0x13;
        bVar1 = *param_1;
        bVar15 = *param_1 == 0;
code_r0x0001404bb7c9:
        if (bVar16 == (char)bVar1 < '\0') {
code_r0x0001404bb7cb:
          pcVar8 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x2101004b +
                           CONCAT44(unaff_00000034,unaff_ESI) * 4);
          *pcVar8 = *pcVar8 + (char)puVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto code_r0x0001404bb7ec;
      }
      puVar7[4] = puVar7[4] + unaff_ESI + (uint)bVar15;
    }
    else {
      iVar6 = (int)puVar7;
      iVar5 = iVar6 + 0x11e013f0;
      uVar4 = iVar5 + (uint)CARRY1(unaff_BL,bVar11);
      puVar7 = (uint *)(ulonglong)uVar4;
      if (SCARRY4(iVar6,0x11e013f0) != SCARRY4(iVar5,(uint)CARRY1(unaff_BL,bVar11))) {
        cVar2 = *(char *)CONCAT44(unaff_00000034,unaff_ESI);
        *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
             *(char *)CONCAT44(unaff_00000034,unaff_ESI) + bVar3;
        if (*(char *)CONCAT44(unaff_00000034,unaff_ESI) == '\0' ||
            SCARRY1(cVar2,bVar3) != *(char *)CONCAT44(unaff_00000034,unaff_ESI) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        bVar3 = (byte)uVar4;
        *(byte *)puVar7 = (char)*puVar7 + bVar3;
        bVar1 = *param_1;
        bVar11 = (byte)(uVar4 >> 8);
        *param_1 = *param_1 + bVar11;
        pbVar9 = (byte *)((longlong)puVar7 * 2);
        bVar15 = CARRY1(*pbVar9,bVar3) || CARRY1(*pbVar9 + bVar3,CARRY1(bVar1,bVar11));
        *pbVar9 = *pbVar9 + bVar3 + CARRY1(bVar1,bVar11);
        bVar1 = bVar11 + bVar3 + bVar15;
        uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(bVar1,bVar3));
        pbVar9 = (byte *)(ulonglong)uVar4;
        *(uint *)pbVar9 =
             (*(int *)pbVar9 - uVar4) -
             (uint)(CARRY1(bVar11,bVar3) || CARRY1(bVar11 + bVar3,bVar15));
        *pbVar9 = *pbVar9 | bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *unaff_RDI = *unaff_RDI ^ (byte)param_1;
    puVar14 = (undefined8 *)((longlong)register0x00000020 + -8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *puVar14 = puVar7;
    *(char *)puVar7 = (char)*puVar7 + (char)puVar7;
    *puVar7 = *puVar7 & (uint)param_1;
    puVar7 = (uint *)CONCAT71((int7)((ulonglong)puVar7 >> 8),(char)puVar7 + (char)*puVar7);
  }
  cVar2 = (char)puVar7;
  puVar7 = (uint *)CONCAT62((int6)((ulonglong)puVar7 >> 0x10),
                            CONCAT11((byte)((ulonglong)puVar7 >> 8) | bVar3,cVar2));
  *(char *)puVar7 = (char)*puVar7 - cVar2;
  bVar15 = (char)*puVar7 == '\0';
code_r0x0001404bb7ec:
  if (param_1 + -1 != (byte *)0x0 && !bVar15) {
    *(char *)((longlong)puVar7 + -0x49) =
         *(char *)((longlong)puVar7 + -0x49) + (char)((ulonglong)puVar7 >> 8);
    *param_4 = *param_4 + (char)register0x00000020;
    *(byte *)CONCAT62(uVar12,CONCAT11(bVar11,bVar3)) =
         *(byte *)CONCAT62(uVar12,CONCAT11(bVar11,bVar3)) | (byte)puVar7;
    *(char *)puVar7 = (char)*puVar7 + (char)(param_1 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar7 = *puVar7 & (uint)puVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

