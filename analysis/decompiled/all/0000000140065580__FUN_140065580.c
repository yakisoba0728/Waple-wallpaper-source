// Function: FUN_140065580
// Addr: 140065580
// Size: 1575 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140065580(longlong *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  int iVar31;
  int iVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  int iVar35;
  int iVar36;
  longlong *local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [24];
  undefined8 ***local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  ulonglong local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 ***local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  undefined4 local_d0;
  undefined8 **local_c8;
  longlong *local_b8;
  undefined1 local_b0 [112];
  
  lVar15 = DAT_1404e5380;
  plVar3 = DAT_1404e5370;
  local_res8 = param_1;
  if (DAT_1404e5378 != 0) {
    if (DAT_1404e5378 < DAT_1404e53a0 >> 3) {
      local_res20 = *DAT_1404e5370;
      if ((longlong *)local_res20 != DAT_1404e5370) {
        puVar8 = (undefined8 *)(local_res20 + 0x10);
        local_res8 = *(longlong **)(local_res20 + 8);
        local_res10 = DAT_1404e5380;
        if (0xf < *(ulonglong *)(local_res20 + 0x28)) {
          puVar8 = (undefined8 *)*puVar8;
        }
        uVar7 = 0;
        uVar20 = 0xcbf29ce484222325;
        if (*(ulonglong *)(local_res20 + 0x20) != 0) {
          do {
            pbVar1 = (byte *)((longlong)puVar8 + uVar7);
            uVar7 = uVar7 + 1;
            uVar20 = (uVar20 ^ *pbVar1) * 0x100000001b3;
          } while (uVar7 < *(ulonglong *)(local_res20 + 0x20));
        }
        uVar20 = uVar20 & _DAT_1404e5398;
        local_res18 = *(longlong *)(DAT_1404e5380 + uVar20 * 0x10);
        local_b8 = *(longlong **)(DAT_1404e5380 + 8 + uVar20 * 0x10);
        plVar5 = (longlong *)local_res20;
        while( true ) {
          plVar16 = (longlong *)*plVar5;
          FUN_140017240(plVar5 + 0x13);
          FUN_140017240(plVar5 + 6);
          FUN_140017240(plVar5 + 2);
          thunk_FUN_14028af80(plVar5,200);
          DAT_1404e5378 = DAT_1404e5378 - 1;
          if (plVar5 == local_b8) break;
          plVar5 = plVar16;
          if (plVar16 == plVar3) goto code_r0x0001400656ab;
        }
        plVar5 = local_res8;
        if (local_res18 == local_res20) {
          *(longlong **)(lVar15 + uVar20 * 0x10) = plVar3;
          plVar5 = plVar3;
        }
        *(longlong **)(lVar15 + 8 + uVar20 * 0x10) = plVar5;
        if (plVar16 == plVar3) goto LAB_1400656c0;
        do {
          plVar5 = plVar16 + 2;
          if (0xf < (ulonglong)plVar16[5]) {
            plVar5 = (longlong *)*plVar5;
          }
          uVar7 = 0;
          uVar20 = 0xcbf29ce484222325;
          if (plVar16[4] != 0) {
            do {
              pbVar1 = (byte *)((longlong)plVar5 + uVar7);
              uVar7 = uVar7 + 1;
              uVar20 = (uVar20 ^ *pbVar1) * 0x100000001b3;
              lVar15 = local_res10;
            } while (uVar7 < (ulonglong)plVar16[4]);
          }
          uVar20 = uVar20 & _DAT_1404e5398;
          plVar5 = *(longlong **)(lVar15 + 8 + uVar20 * 0x10);
          plVar17 = plVar16;
          while( true ) {
            plVar16 = (longlong *)*plVar17;
            FUN_140017240(plVar17 + 0x13);
            FUN_140017240(plVar17 + 6);
            FUN_140017240(plVar17 + 2);
            thunk_FUN_14028af80(plVar17,200);
            DAT_1404e5378 = DAT_1404e5378 - 1;
            if (plVar17 == plVar5) break;
            plVar17 = plVar16;
            if (plVar16 == plVar3) {
              *(longlong **)(local_res10 + uVar20 * 0x10) = plVar16;
              *local_res8 = (longlong)plVar16;
              plVar16[1] = (longlong)local_res8;
              goto LAB_140065841;
            }
          }
          *(longlong **)(local_res10 + uVar20 * 0x10) = plVar3;
          *(longlong **)(local_res10 + 8 + uVar20 * 0x10) = plVar3;
          lVar15 = local_res10;
        } while (plVar16 != plVar3);
        *local_res8 = (longlong)plVar16;
        plVar16[1] = (longlong)local_res8;
      }
    }
    else {
      FUN_140035580(DAT_1404e5378,DAT_1404e5370);
      *DAT_1404e5370 = (longlong)DAT_1404e5370;
      DAT_1404e5370[1] = (longlong)DAT_1404e5370;
      local_res8 = DAT_1404e5370;
      DAT_1404e5378 = 0;
      FUN_14000f7d0(DAT_1404e5380,DAT_1404e5388,&local_res8);
    }
  }
LAB_140065841:
  uVar7 = 0;
  iVar14 = (int)(DAT_1404e8ed0 - DAT_1404e8ec8 >> 3) * -0xf0f0f0f;
  puVar13 = auStack_178;
  if (0 < iVar14) {
    do {
      lVar15 = DAT_1404e8ec8;
      lVar18 = uVar7 * 0x88;
      uStack_150 = 0;
      uStack_e8 = 0;
      local_148 = 0;
      local_140 = 0xf;
      ppppuVar9 = (undefined8 ****)(DAT_1404e8ec8 + 0x58 + lVar18);
      local_158 = (undefined8 ****)0x0;
      local_138 = 0;
      local_e0 = 0;
      local_d8 = 0xf;
      local_f0 = (undefined8 ****)0x0;
      local_d0 = 0;
      local_c8 = (undefined8 **)0x0;
      local_130 = 0;
      uStack_128 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      if (&local_158 != ppppuVar9) {
        if (0xf < *(ulonglong *)(lVar18 + 0x70 + DAT_1404e8ec8)) {
          ppppuVar9 = (undefined8 ****)*ppppuVar9;
        }
        FUN_14000f880(&local_158,ppppuVar9,*(undefined8 *)(lVar18 + 0x68 + DAT_1404e8ec8));
      }
      uVar12 = local_d8;
      uVar20 = local_140;
      uVar4 = local_148;
      uVar25 = *(undefined4 *)(lVar18 + lVar15);
      uVar6 = *(undefined8 *)(lVar18 + 8 + lVar15);
      iVar21 = (int)uVar6;
      iVar22 = (int)((ulonglong)uVar6 >> 0x20);
      iVar23 = iVar21 + (int)*(undefined8 *)(lVar18 + lVar15);
      iVar24 = iVar22 + (int)((ulonglong)*(undefined8 *)(lVar18 + lVar15) >> 0x20);
      uVar26 = *(undefined4 *)(lVar18 + 4 + lVar15);
      uVar6 = *(undefined8 *)(lVar18 + 0x10 + lVar15);
      iVar21 = (int)uVar6 + iVar21;
      iVar22 = (int)((ulonglong)uVar6 >> 0x20) + iVar22;
      uVar27 = *(undefined4 *)(lVar18 + 0x10 + lVar15);
      uVar28 = *(undefined4 *)(lVar18 + 0x14 + lVar15);
      local_c8 = *(undefined8 ***)(lVar18 + 0x78 + lVar15);
      local_d0 = *(undefined4 *)(lVar18 + 0x80 + lVar15);
      local_134 = 0;
      local_138 = CONCAT31(CONCAT21(local_138._2_2_,(char)uVar7),0xff);
      local_130 = CONCAT44(uVar26,uVar25);
      uStack_128 = CONCAT44(iVar24,iVar23);
      local_110 = CONCAT44(uVar26,uVar25);
      uStack_108 = CONCAT44(iVar24,iVar23);
      local_120 = CONCAT44(uVar28,uVar27);
      uStack_118 = CONCAT44(iVar22,iVar21);
      local_100 = CONCAT44(uVar28,uVar27);
      uStack_f8 = CONCAT44(iVar22,iVar21);
      ppppuVar9 = (undefined8 ****)FUN_1400790b0(&DAT_1404e5368,lVar15 + 0x18 + lVar18);
      uVar29 = uVar25;
      uVar30 = uVar26;
      iVar31 = iVar23;
      iVar32 = iVar24;
      uVar33 = uVar27;
      uVar34 = uVar28;
      iVar35 = iVar21;
      iVar36 = iVar22;
      if (ppppuVar9 != &local_158) {
        ppppuVar10 = &local_158;
        if (0xf < uVar20) {
          ppppuVar10 = (undefined8 ****)local_158;
        }
        FUN_14000f880(ppppuVar9,ppppuVar10,uVar4);
        uVar20 = local_140;
        uVar12 = local_d8;
        uVar25 = (undefined4)local_130;
        uVar26 = local_130._4_4_;
        iVar23 = (int)uStack_128;
        iVar24 = uStack_128._4_4_;
        uVar27 = (undefined4)local_120;
        uVar28 = local_120._4_4_;
        iVar21 = (int)uStack_118;
        iVar22 = uStack_118._4_4_;
        uVar29 = (undefined4)local_110;
        uVar30 = local_110._4_4_;
        iVar31 = (int)uStack_108;
        iVar32 = uStack_108._4_4_;
        uVar33 = (undefined4)local_100;
        uVar34 = local_100._4_4_;
        iVar35 = (int)uStack_f8;
        iVar36 = uStack_f8._4_4_;
      }
      *(undefined1 *)(ppppuVar9 + 4) = (undefined1)local_138;
      *(undefined1 *)((longlong)ppppuVar9 + 0x21) = local_138._1_1_;
      *(undefined1 *)((longlong)ppppuVar9 + 0x22) = local_138._2_1_;
      *(undefined1 *)((longlong)ppppuVar9 + 0x23) = local_138._3_1_;
      *(undefined4 *)((longlong)ppppuVar9 + 0x24) = local_134;
      *(undefined4 *)(ppppuVar9 + 5) = uVar25;
      *(undefined4 *)((longlong)ppppuVar9 + 0x2c) = uVar26;
      *(int *)(ppppuVar9 + 6) = iVar23;
      *(int *)((longlong)ppppuVar9 + 0x34) = iVar24;
      *(undefined4 *)(ppppuVar9 + 7) = uVar27;
      *(undefined4 *)((longlong)ppppuVar9 + 0x3c) = uVar28;
      *(int *)(ppppuVar9 + 8) = iVar21;
      *(int *)((longlong)ppppuVar9 + 0x44) = iVar22;
      *(undefined4 *)(ppppuVar9 + 9) = uVar29;
      *(undefined4 *)((longlong)ppppuVar9 + 0x4c) = uVar30;
      *(int *)(ppppuVar9 + 10) = iVar31;
      *(int *)((longlong)ppppuVar9 + 0x54) = iVar32;
      *(undefined4 *)(ppppuVar9 + 0xb) = uVar33;
      *(undefined4 *)((longlong)ppppuVar9 + 0x5c) = uVar34;
      *(int *)(ppppuVar9 + 0xc) = iVar35;
      *(int *)((longlong)ppppuVar9 + 100) = iVar36;
      if (ppppuVar9 + 0xd != &local_f0) {
        ppppuVar10 = &local_f0;
        if (0xf < uVar12) {
          ppppuVar10 = (undefined8 ****)local_f0;
        }
        FUN_14000f880(ppppuVar9 + 0xd,ppppuVar10,local_e0);
        uVar20 = local_140;
        uVar12 = local_d8;
      }
      *(undefined4 *)(ppppuVar9 + 0x11) = local_d0;
      ppppuVar9[0x12] = (undefined8 ***)local_c8;
      if (0xf < uVar12) {
        uVar11 = uVar12 + 1;
        ppppuVar9 = (undefined8 ****)local_f0;
        if (uVar11 < 0x1000) {
LAB_140065adb:
          thunk_FUN_14028af80(ppppuVar9,uVar11);
          goto LAB_140065ae0;
        }
        ppppuVar9 = (undefined8 ****)local_f0[-1];
        if ((ulonglong)((longlong)local_f0 + (-8 - (longlong)ppppuVar9)) < 0x20) {
          uVar11 = uVar12 + 0x28;
          goto LAB_140065adb;
        }
LAB_140065b2b:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar13 = auStack_170;
        break;
      }
LAB_140065ae0:
      if (0xf < uVar20) {
        uVar12 = uVar20 + 1;
        ppppuVar9 = (undefined8 ****)local_158;
        if (0xfff < uVar12) {
          ppppuVar9 = (undefined8 ****)local_158[-1];
          if (0x1f < (ulonglong)((longlong)local_158 + (-8 - (longlong)ppppuVar9)))
          goto LAB_140065b2b;
          uVar12 = uVar20 + 0x28;
        }
        thunk_FUN_14028af80(ppppuVar9,uVar12);
      }
      uVar19 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar19;
      puVar13 = auStack_178;
    } while ((int)uVar19 < iVar14);
  }
  *(undefined8 *)(puVar13 + -8) = 0x140065b4c;
  uVar6 = FUN_140086de0(&DAT_1404e6378,"profile","");
  *(undefined8 *)(puVar13 + -8) = 0x140065b58;
  FUN_140085090(local_b0,uVar6);
  *(undefined8 *)(puVar13 + -8) = 0x140065b68;
  FUN_1400740d0(&DAT_1404e52e0,local_b0);
  *(undefined8 *)(puVar13 + -8) = 0x140065b71;
  FUN_140085440(local_b0);
  return;
code_r0x0001400656ab:
  if (local_res18 == local_res20) {
    *(longlong **)(lVar15 + uVar20 * 0x10) = plVar16;
  }
LAB_1400656c0:
  *local_res8 = (longlong)plVar16;
  plVar16[1] = (longlong)local_res8;
  goto LAB_140065841;
}

