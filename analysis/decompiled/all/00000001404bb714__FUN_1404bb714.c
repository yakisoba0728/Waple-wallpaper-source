// Function: FUN_1404bb714
// Addr: 1404bb714
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bb7dd) overlaps instruction at (ram,0x0001404bb7dc)
    */

void FUN_1404bb714(byte *param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar12;
  undefined8 in_RAX;
  uint *puVar9;
  uint *puVar10;
  byte bVar13;
  byte *pbVar11;
  char cVar14;
  byte unaff_BL;
  byte unaff_BH;
  undefined1 *puVar15;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_8 [8];
  char *pcVar7;
  ulonglong uVar8;
  
  uVar4 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((byte)((ulonglong)in_RAX >> 8) |
                                 param_1[(longlong)&stack0x00000000],(char)in_RAX)) + 0xec000b34;
  pcVar7 = (char *)(ulonglong)uVar4;
  cVar3 = (char)((ulonglong)param_1 >> 8);
  if (uVar4 == 0) {
    bVar12 = in((short)param_2);
    uVar8 = (ulonglong)bVar12;
code_r0x0001404bb73f:
    cVar2 = (char)(uVar8 >> 8) + cVar3;
    puVar9 = (uint *)CONCAT62((int6)(uVar8 >> 0x10),CONCAT11(cVar2,(char)uVar8));
    if (cVar2 == '\0') {
code_r0x0001404bb764:
      uRam00000001a450b76c = uRam00000001a450b76c & (uint)puVar9;
      *param_1 = (char)*param_1 >> 0x13;
      if ((char)*param_1 < '\0') {
        bVar12 = *param_1;
        *param_1 = *param_1 + 1;
        puVar15 = auStack_8;
        register0x00000020 = (BADSPACEBASE *)auStack_8;
        if (SCARRY1(bVar12,'\x01') != (char)*param_1 < '\0') {
          *(char *)((longlong)puVar9 + 0x21004bb6) =
               *(char *)((longlong)puVar9 + 0x21004bb6) + cVar3;
code_r0x0001404bb7a1:
          *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
          cVar14 = (char)((ulonglong)param_2 >> 8);
          cVar3 = (char)param_2;
          cVar2 = cVar14 + unaff_BH;
          param_2 = (byte *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar2,cVar3));
          bVar16 = cVar2 == '\0';
          if (SCARRY1(cVar14,unaff_BH) != cVar2 < '\0') {
            if (SCARRY1(cVar14,unaff_BH) == cVar2 < '\0') goto code_r0x0001404bb7cb;
            goto code_r0x0001404bb7ec;
          }
          param_1[0x7d] = param_1[0x7d] + cVar3;
          *puVar9 = *puVar9 & (uint)puVar9;
          *param_4 = *param_4 + (char)register0x00000020;
          goto code_r0x0001404bb7b1;
        }
code_r0x0001404bb7bc:
        pcVar7 = (char *)((ulonglong)puVar15 & 0xffffffff);
        param_2 = (byte *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x4b,(char)param_2));
        *param_1 = *param_1 + (char)((ulonglong)pcVar7 >> 8);
        cVar3 = (char)pcVar7;
        *pcVar7 = *pcVar7 + cVar3;
        puVar10 = (uint *)CONCAT71((int7)((ulonglong)pcVar7 >> 8),cVar3 * '\x02');
        register0x00000020 = (BADSPACEBASE *)puVar9;
        if (SCARRY1(cVar3,cVar3) == (char)(cVar3 * '\x02') < '\0') {
          bVar17 = SCARRY1(unaff_BL,'K');
          bVar12 = unaff_BL + 0x4b;
          bVar16 = unaff_BL == 0xb5;
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
          bVar17 = SCARRY1(*param_1,'\x01');
          *param_1 = *param_1 + 1;
          bVar16 = (char)*param_1 < '\0';
        }
        else {
          cVar14 = (char)((ulonglong)param_2 >> 8);
          bVar17 = SCARRY1(cVar14,unaff_BH);
          cVar2 = (char)param_2;
          cVar14 = cVar14 + unaff_BH;
          param_2 = (byte *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar14,cVar2));
          bVar16 = cVar14 < '\0';
          if (bVar17 == bVar16) {
            pcVar7 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x521004b +
                             CONCAT44(unaff_00000034,unaff_ESI) * 4);
            *pcVar7 = *pcVar7 + cVar2;
            iVar5 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + (char)*puVar9);
            uVar4 = iVar5 + 0xfe000fd4;
            puVar9 = (uint *)(ulonglong)uVar4;
            if (iVar5 < 0x1fff02c) {
              *param_1 = *param_1 + 1;
              puVar15 = (undefined1 *)register0x00000020;
              goto code_r0x0001404bb7bc;
            }
            param_1[0x7d] = param_1[0x7d] + cVar2;
            *puVar9 = *puVar9 & uVar4;
            *param_4 = *param_4;
            goto code_r0x0001404bb7a1;
          }
        }
        register0x00000020 = (BADSPACEBASE *)auStack_8;
        if (bVar17 == bVar16) goto code_r0x0001404bb7cb;
        *(char *)((longlong)puVar9 + 0x21004bb6) = *(char *)((longlong)puVar9 + 0x21004bb6) + cVar3;
code_r0x0001404bb7b1:
        cVar3 = (char)puVar9;
        *(char *)puVar9 = (char)*puVar9 + cVar3;
        bVar12 = (byte)((ulonglong)param_2 >> 8);
        cVar2 = (char)param_2;
        if (SCARRY1(unaff_BL,bVar12) == (char)(unaff_BL + bVar12) < '\0') {
          param_2 = (byte *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                                     CONCAT11(bVar12 + unaff_BH,cVar2));
          if (SCARRY1(bVar12,unaff_BH) == (char)(bVar12 + unaff_BH) < '\0') {
            pcVar7 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x21004b +
                             CONCAT44(unaff_00000034,unaff_ESI) * 4);
            *pcVar7 = *pcVar7 + cVar2;
            bVar17 = SCARRY1((char)*puVar9,cVar3);
            *(char *)puVar9 = (char)*puVar9 + cVar3;
            *param_1 = (char)*param_1 >> 0x13;
            bVar12 = *param_1;
            bVar16 = *param_1 == 0;
            puVar10 = puVar9;
code_r0x0001404bb7c9:
            puVar9 = puVar10;
            if (bVar17 == (char)bVar12 < '\0') {
code_r0x0001404bb7cb:
              pcVar7 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x2101004b +
                               CONCAT44(unaff_00000034,unaff_ESI) * 4);
              *pcVar7 = *pcVar7 + (char)puVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            goto code_r0x0001404bb7ec;
          }
          puVar9[4] = puVar9[4] + unaff_ESI + (uint)CARRY1(bVar12,unaff_BH);
        }
        else {
          iVar6 = (int)puVar9;
          iVar5 = iVar6 + 0x11e013f0;
          uVar4 = iVar5 + (uint)CARRY1(unaff_BL,bVar12);
          puVar9 = (uint *)(ulonglong)uVar4;
          if (SCARRY4(iVar6,0x11e013f0) != SCARRY4(iVar5,(uint)CARRY1(unaff_BL,bVar12))) {
            cVar3 = *(char *)CONCAT44(unaff_00000034,unaff_ESI);
            *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
                 *(char *)CONCAT44(unaff_00000034,unaff_ESI) + cVar2;
            if (*(char *)CONCAT44(unaff_00000034,unaff_ESI) == '\0' ||
                SCARRY1(cVar3,cVar2) != *(char *)CONCAT44(unaff_00000034,unaff_ESI) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            bVar1 = (byte)uVar4;
            *(byte *)puVar9 = (char)*puVar9 + bVar1;
            bVar12 = *param_1;
            bVar13 = (byte)(uVar4 >> 8);
            *param_1 = *param_1 + bVar13;
            pbVar11 = (byte *)((longlong)puVar9 * 2);
            bVar16 = CARRY1(*pbVar11,bVar1) || CARRY1(*pbVar11 + bVar1,CARRY1(bVar12,bVar13));
            *pbVar11 = *pbVar11 + bVar1 + CARRY1(bVar12,bVar13);
            bVar12 = bVar13 + bVar1 + bVar16;
            uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(bVar12,bVar1));
            pbVar11 = (byte *)(ulonglong)uVar4;
            *(uint *)pbVar11 =
                 (*(int *)pbVar11 - uVar4) -
                 (uint)(CARRY1(bVar13,bVar1) || CARRY1(bVar13 + bVar1,bVar16));
            *pbVar11 = *pbVar11 | bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        *unaff_RDI = *unaff_RDI ^ (byte)param_1;
        *(uint **)((longlong)register0x00000020 + -8) = puVar9;
        *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
        *puVar9 = *puVar9 & (uint)param_1;
        puVar10 = (uint *)CONCAT71((int7)((ulonglong)puVar9 >> 8),(char)puVar9 + (char)*puVar9);
        register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
      }
      puVar9 = (uint *)CONCAT62((int6)((ulonglong)puVar10 >> 0x10),
                                CONCAT11((byte)((ulonglong)puVar10 >> 8) | (byte)param_2,
                                         (char)puVar10));
      *(char *)puVar9 = (char)*puVar9 - (char)puVar10;
      bVar16 = (char)*puVar9 == '\0';
code_r0x0001404bb7ec:
      if (param_1 + -1 != (byte *)0x0 && !bVar16) {
        *(char *)((longlong)puVar9 + -0x49) =
             *(char *)((longlong)puVar9 + -0x49) + (char)((ulonglong)puVar9 >> 8);
        *param_4 = *param_4 + (char)register0x00000020;
        *param_2 = *param_2 | (byte)puVar9;
        *(char *)puVar9 = (char)*puVar9 + (char)(param_1 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *puVar9 = *puVar9 & (uint)puVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    bVar12 = *(byte *)CONCAT44(unaff_00000034,unaff_ESI);
    bVar1 = (byte)uVar4;
    *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(char *)CONCAT44(unaff_00000034,unaff_ESI) + bVar1;
    if (*(char *)CONCAT44(unaff_00000034,unaff_ESI) == '\0') {
      *pcVar7 = *pcVar7 + cVar3;
      cVar2 = (char)param_2;
      cVar14 = (char)(uVar4 >> 8);
      *param_1 = *param_1 + cVar14;
      *pcVar7 = *pcVar7 + bVar1;
      bVar12 = cVar14 + cVar3;
      uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(bVar12,bVar1));
      pcVar7 = (char *)(ulonglong)uVar4;
      if (bVar12 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
           *(char *)CONCAT44(unaff_00000034,unaff_ESI) + bVar1;
      if (*(char *)CONCAT44(unaff_00000034,unaff_ESI) != '\0') goto code_r0x0001404bb754;
      *pcVar7 = *pcVar7 + cVar3;
      param_2 = (byte *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x4b,cVar2));
      *param_1 = *param_1 + bVar12;
      *pcVar7 = *pcVar7 + bVar1;
      cVar2 = bVar1 + cVar2;
      uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar2);
      uVar8 = (ulonglong)uVar4;
      if (cVar2 != '\0') goto code_r0x0001404bb73f;
      param_2 = (byte *)(ulonglong)(uint)((int)param_2 + *(int *)(uVar8 + 2));
      *param_1 = *param_1 ^ bVar12;
      puVar9 = (uint *)(ulonglong)(uVar4 + 0x64050002);
      goto code_r0x0001404bb764;
    }
    puVar9 = (uint *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),(bVar1 + 0x4a) - CARRY1(bVar12,bVar1));
  }
  pcVar7 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + CONCAT44(unaff_00000034,unaff_ESI) * 4);
  *pcVar7 = *pcVar7 + unaff_BL;
  *param_4 = *param_4 + (byte)puVar9;
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) +
       ((byte)puVar9 | (byte)*(undefined4 *)((longlong)puVar9 * 2));
code_r0x0001404bb754:
  iRam000000019258b760 = iRam000000019258b760 + (uint)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

