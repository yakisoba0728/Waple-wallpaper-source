// Function: FUN_140070690
// Addr: 140070690
// Size: 1852 bytes


void FUN_140070690(undefined8 param_1,byte param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  int iVar6;
  size_t sVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined8 ****ppppuVar14;
  ulonglong uVar15;
  longlong *plVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  int *piVar20;
  longlong *unaff_R12;
  longlong *plVar21;
  longlong *plVar22;
  longlong *unaff_R15;
  undefined8 local_res8;
  undefined4 local_res18 [2];
  int local_res20 [2];
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [56];
  undefined8 ***local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  ulonglong local_1b0;
  int local_1a8 [4];
  undefined4 local_198 [2];
  longlong local_190;
  longlong *local_188;
  undefined8 ***local_180 [3];
  ulonglong local_168;
  int iStack_15c;
  longlong local_158;
  undefined1 local_150 [8];
  uint auStack_148 [14];
  longlong alStack_110 [8];
  longlong local_d0;
  undefined **local_b0 [15];
  
  puVar5 = PTR_s_wallpaperconfig_1404df5a0;
  puVar18 = auStack_208;
  puVar19 = auStack_208;
  plVar21 = (longlong *)0x0;
  plVar22 = (longlong *)(ulonglong)param_2;
  local_1b8 = 0;
  local_1c8 = (undefined8 ****)0x0;
  uStack_1c0 = 0;
  local_1b0 = 0;
  local_res8 = param_1;
  sVar7 = strlen(PTR_s_wallpaperconfig_1404df5a0);
  FUN_140017480(&local_1c8,puVar5,sVar7);
  plVar8 = (longlong *)FUN_140079be0(&DAT_1404e6470,&local_1c8);
  if (0xf < local_1b0) {
    uVar15 = local_1b0 + 1;
    ppppuVar14 = (undefined8 ****)local_1c8;
    if (0xfff < uVar15) {
      ppppuVar14 = (undefined8 ****)local_1c8[-1];
      if (0x1f < (ulonglong)((longlong)local_1c8 + (-8 - (longlong)ppppuVar14))) goto LAB_1400709e1;
      uVar15 = local_1b0 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar14,uVar15);
  }
  puVar3 = DAT_1404e5330;
  local_1b8 = 0;
  local_1b0 = 0xf;
  local_1c8 = (undefined8 ***)((ulonglong)local_1c8 & 0xffffffffffffff00);
  for (puVar2 = (undefined8 *)*DAT_1404e5330; puVar2 != puVar3; puVar2 = (undefined8 *)*puVar2) {
    uVar13 = *(undefined4 *)((longlong)puVar2 + 0x7c);
    puVar9 = (undefined4 *)FUN_14007a1d0(plVar8,puVar2 + 2);
    *puVar9 = uVar13;
  }
  if (param_2 != 0) {
    uVar10 = FUN_140005ee0(&local_1c8);
    uVar10 = FUN_140005d20(uVar10,"bin/playliststatetime.bin");
    FUN_140016600(local_180,uVar10);
    FUN_140016770(&local_1c8);
    FUN_14007aca0(&local_158);
    ppppuVar14 = local_180;
    if (7 < local_168) {
      ppppuVar14 = (undefined8 ****)local_180[0];
    }
    lVar11 = FUN_14004c4c0(local_150,ppppuVar14,0x22);
    piVar20 = (int *)(local_158 + 4);
    if (lVar11 == 0) {
      uVar17 = 6;
      if (*(longlong *)((longlong)alStack_110 + (longlong)*piVar20) != 0) {
        uVar17 = 2;
      }
      plVar16 = (longlong *)
                (ulonglong)(uVar17 | *(uint *)((longlong)auStack_148 + (longlong)*piVar20));
    }
    else {
      plVar16 = (longlong *)&DAT_00000004;
      if (*(longlong *)((longlong)alStack_110 + (longlong)*piVar20) != 0) {
        plVar16 = plVar21;
      }
    }
    FUN_140013b50(local_150 + (longlong)*piVar20 + -8,plVar16,0);
    if (local_d0 != 0) {
      lVar11 = _Xtime_get_ticks();
      local_1b8 = 8;
      local_1c8 = (undefined8 ***)s_PLPV0005_1404780b8._0_8_;
      local_1b0 = 0xf;
      uStack_1c0 = 0;
      local_1a8[0] = 8;
      FUN_14007ada0(&local_158,local_1a8,4);
      ppppuVar14 = &local_1c8;
      if (0xf < local_1b0) {
        ppppuVar14 = (undefined8 ****)local_1c8;
      }
      FUN_14007ada0(&local_158,ppppuVar14,(longlong)local_1a8[0]);
      if (0xf < local_1b0) {
        uVar15 = local_1b0 + 1;
        ppppuVar14 = (undefined8 ****)local_1c8;
        if (0xfff < uVar15) {
          ppppuVar14 = (undefined8 ****)local_1c8[-1];
          if (0x1f < (ulonglong)((longlong)local_1c8 + (-8 - (longlong)ppppuVar14))) {
LAB_1400709e1:
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar18 = auStack_200;
            plVar16 = plVar21;
            goto LAB_1400709e8;
          }
          uVar15 = local_1b0 + 0x28;
        }
        thunk_FUN_14028af80(ppppuVar14,uVar15);
      }
      local_1b8 = 0;
      lVar11 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar11),8) + lVar11;
      local_1b0 = 0xf;
      local_1c8 = (undefined8 ***)((ulonglong)local_1c8 & 0xffffffffffffff00);
      local_190 = (lVar11 >> 0x17) - (lVar11 >> 0x3f);
      FUN_14007ada0(&local_158,&local_190,8);
      local_198[0] = DAT_1404e6480;
      FUN_14007ada0(&local_158,local_198,4);
      local_188 = DAT_1404e6478;
      plVar8 = (longlong *)*DAT_1404e6478;
      puVar19 = auStack_208;
      plVar22 = plVar21;
      plVar12 = plVar21;
      if (plVar8 != DAT_1404e6478) {
        do {
          plVar16 = plVar8 + 2;
          local_res8 = CONCAT44(local_res8._4_4_,(int)plVar8[4]);
          unaff_R12 = plVar21;
          unaff_R15 = plVar12;
          if (plVar12 == (longlong *)0x0) {
LAB_1400709e8:
            *(undefined8 *)(puVar18 + -8) = 0x1400709fe;
            FUN_14007ada0(&local_158,&local_res8,4);
          }
          else {
            uVar17 = (int)plVar21 + 4;
            uVar13 = (int)plVar8[4];
            if ((uint)plVar22 < uVar17) {
              *(uint *)(puVar18 + 0x20) = (uint)plVar22;
              do {
                uVar1 = (int)plVar22 * 2;
                plVar22 = (longlong *)(ulonglong)uVar1;
              } while (uVar1 < uVar17);
              *(undefined8 *)(puVar18 + -8) = 0x1400709b4;
              unaff_R15 = (longlong *)thunk_FUN_14028af20(uVar1);
              *(undefined8 *)(puVar18 + -8) = 0x1400709c7;
              FUN_1404210f0(unaff_R15,plVar12,*(undefined4 *)(puVar18 + 0x20));
              *(undefined8 *)(puVar18 + -8) = 0x1400709cf;
              thunk_FUN_14028af80(plVar12);
              uVar13 = (int)local_res8;
            }
            unaff_R12 = (longlong *)(ulonglong)uVar17;
            *(undefined4 *)(((ulonglong)plVar21 & 0xffffffff) + (longlong)unaff_R15) = uVar13;
          }
          iVar6 = (int)local_res8;
          lVar11 = (longlong)(int)local_res8;
          if (0xf < (ulonglong)plVar8[5]) {
            plVar16 = (longlong *)*plVar16;
          }
          if (unaff_R15 == (longlong *)0x0) {
            *(undefined8 *)(puVar18 + -8) = 0x140070adf;
            FUN_14007ada0(&local_158,plVar16,lVar11);
            local_res18[0] = (undefined4)plVar8[8];
            plVar16 = plVar22;
            plVar12 = unaff_R15;
LAB_140070ae8:
            *(undefined8 *)(puVar18 + -8) = 0x140070afe;
            FUN_14007ada0(&local_158,local_res18,4);
          }
          else {
            uVar17 = (int)unaff_R12 + (int)local_res8;
            if ((uint)plVar22 < uVar17) {
              *(longlong **)(puVar18 + 0x38) = unaff_R15;
              *(uint *)(puVar18 + 0x20) = (uint)plVar22;
              do {
                uVar1 = (int)plVar22 * 2;
                plVar22 = (longlong *)(ulonglong)uVar1;
              } while (uVar1 < uVar17);
              *(undefined8 *)(puVar18 + -8) = 0x140070a40;
              unaff_R15 = (longlong *)thunk_FUN_14028af20(uVar1);
              *(undefined8 *)(puVar18 + -8) = 0x140070a55;
              FUN_1404210f0(unaff_R15,*(undefined8 *)(puVar18 + 0x38),
                            *(undefined4 *)(puVar18 + 0x20));
              *(undefined8 *)(puVar18 + -8) = 0x140070a5f;
              thunk_FUN_14028af80(*(undefined8 *)(puVar18 + 0x38));
            }
            if (0 < iVar6) {
              *(undefined8 *)(puVar18 + -8) = 0x140070a74;
              FUN_1404210f0((undefined1 *)
                            (((ulonglong)unaff_R12 & 0xffffffff) + (longlong)unaff_R15),plVar16,
                            lVar11);
              unaff_R12 = (longlong *)(ulonglong)uVar17;
            }
            local_res18[0] = (undefined4)plVar8[8];
            plVar16 = plVar22;
            plVar12 = unaff_R15;
            if (unaff_R15 == (longlong *)0x0) goto LAB_140070ae8;
            uVar17 = (int)unaff_R12 + 4;
            if ((uint)plVar22 < uVar17) {
              do {
                uVar1 = (int)plVar16 * 2;
                plVar16 = (longlong *)(ulonglong)uVar1;
              } while (uVar1 < uVar17);
              *(undefined8 *)(puVar18 + -8) = 0x140070aa5;
              plVar12 = (longlong *)thunk_FUN_14028af20(uVar1);
              *(undefined8 *)(puVar18 + -8) = 0x140070ab6;
              FUN_1404210f0(plVar12,unaff_R15,plVar22);
              *(undefined8 *)(puVar18 + -8) = 0x140070abe;
              thunk_FUN_14028af80(unaff_R15);
            }
            uVar15 = (ulonglong)unaff_R12 & 0xffffffff;
            unaff_R12 = (longlong *)(ulonglong)uVar17;
            *(undefined4 *)(uVar15 + (longlong)plVar12) = local_res18[0];
          }
          puVar2 = (undefined8 *)plVar8[7];
          plVar21 = unaff_R12;
          plVar22 = plVar16;
          for (puVar3 = (undefined8 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined8 *)*puVar3) {
            local_res20[0] = *(int *)(puVar3 + 4);
            plVar16 = puVar3 + 2;
            *(longlong **)(puVar18 + 0x38) = plVar16;
            if (plVar12 == (longlong *)0x0) {
              *(undefined8 *)(puVar18 + -8) = 0x140070b9c;
              FUN_14007ada0(&local_158,local_res20,4);
            }
            else {
              uVar17 = (int)plVar21 + 4;
              if ((uint)plVar22 < uVar17) {
                *(longlong **)(puVar18 + 0x30) = plVar12;
                *(uint *)(puVar18 + 0x20) = (uint)plVar22;
                do {
                  uVar1 = (int)plVar22 * 2;
                  plVar22 = (longlong *)(ulonglong)uVar1;
                } while (uVar1 < uVar17);
                *(undefined8 *)(puVar18 + -8) = 0x140070b50;
                plVar12 = (longlong *)thunk_FUN_14028af20(uVar1);
                *(undefined8 *)(puVar18 + -8) = 0x140070b65;
                FUN_1404210f0(plVar12,*(undefined8 *)(puVar18 + 0x30),
                              *(undefined4 *)(puVar18 + 0x20));
                *(undefined8 *)(puVar18 + -8) = 0x140070b6f;
                thunk_FUN_14028af80(*(undefined8 *)(puVar18 + 0x30));
              }
              uVar15 = (ulonglong)plVar21 & 0xffffffff;
              plVar21 = (longlong *)(ulonglong)uVar17;
              plVar16 = *(longlong **)(puVar18 + 0x38);
              *(int *)(uVar15 + (longlong)plVar12) = local_res20[0];
            }
            uVar15 = puVar3[5];
            *(int *)(puVar18 + 0x30) = local_res20[0];
            if (0xf < uVar15) {
              plVar16 = (longlong *)*plVar16;
              *(longlong **)(puVar18 + 0x38) = plVar16;
            }
            if (plVar12 == (longlong *)0x0) {
              *(undefined8 *)(puVar18 + -8) = 0x140070c9e;
              FUN_14007ada0(&local_158,plVar16,(longlong)local_res20[0]);
              *(undefined4 *)(puVar18 + 0x28) = *(undefined4 *)(puVar3 + 6);
LAB_140070ca9:
              *(undefined8 *)(puVar18 + -8) = 0x140070cbd;
              FUN_14007ada0(&local_158,puVar18 + 0x28,4);
            }
            else {
              uVar17 = (int)plVar21 + local_res20[0];
              iVar6 = local_res20[0];
              if ((uint)plVar22 < uVar17) {
                *(longlong **)(puVar18 + 0x68) = plVar12;
                *(uint *)(puVar18 + 0x20) = (uint)plVar22;
                do {
                  uVar1 = (int)plVar22 * 2;
                  plVar22 = (longlong *)(ulonglong)uVar1;
                } while (uVar1 < uVar17);
                *(undefined8 *)(puVar18 + -8) = 0x140070be3;
                plVar12 = (longlong *)thunk_FUN_14028af20(uVar1);
                *(undefined8 *)(puVar18 + -8) = 0x140070bf8;
                FUN_1404210f0(plVar12,*(undefined8 *)(puVar18 + 0x68),
                              *(undefined4 *)(puVar18 + 0x20));
                *(undefined8 *)(puVar18 + -8) = 0x140070c02;
                thunk_FUN_14028af80(*(undefined8 *)(puVar18 + 0x68));
                iVar6 = *(int *)(puVar18 + 0x30);
              }
              plVar16 = plVar21;
              if (0 < iVar6) {
                *(undefined8 *)(puVar18 + -8) = 0x140070c1d;
                FUN_1404210f0((undefined1 *)(((ulonglong)plVar21 & 0xffffffff) + (longlong)plVar12),
                              *(undefined8 *)(puVar18 + 0x38),(longlong)iVar6);
                plVar16 = (longlong *)(ulonglong)uVar17;
              }
              *(undefined4 *)(puVar18 + 0x28) = *(undefined4 *)(puVar3 + 6);
              plVar21 = (longlong *)((ulonglong)plVar16 & 0xffffffff);
              if (plVar12 == (longlong *)0x0) goto LAB_140070ca9;
              uVar17 = (int)plVar16 + 4;
              if ((uint)plVar22 < uVar17) {
                *(longlong **)(puVar18 + 0x68) = plVar12;
                *(uint *)(puVar18 + 0x30) = (uint)plVar22;
                do {
                  uVar1 = (int)plVar22 * 2;
                  plVar22 = (longlong *)(ulonglong)uVar1;
                } while (uVar1 < uVar17);
                *(undefined8 *)(puVar18 + -8) = 0x140070c60;
                plVar12 = (longlong *)thunk_FUN_14028af20(uVar1);
                *(undefined8 *)(puVar18 + -8) = 0x140070c75;
                FUN_1404210f0(plVar12,*(undefined8 *)(puVar18 + 0x68),
                              *(undefined4 *)(puVar18 + 0x30));
                *(undefined8 *)(puVar18 + -8) = 0x140070c7f;
                thunk_FUN_14028af80(*(undefined8 *)(puVar18 + 0x68));
              }
              *(undefined4 *)((longlong)plVar21 + (longlong)plVar12) =
                   *(undefined4 *)(puVar18 + 0x28);
              plVar21 = (longlong *)(ulonglong)uVar17;
            }
          }
          plVar8 = (longlong *)*plVar8;
        } while (plVar8 != local_188);
        puVar19 = puVar18;
        if ((plVar12 != (longlong *)0x0) && ((int)plVar21 != 0)) {
          *(undefined8 *)(puVar18 + -8) = 0x140070cef;
          FUN_14007ada0(&local_158,plVar12,(ulonglong)plVar21 & 0xffffffff);
        }
      }
      *(undefined8 *)(puVar19 + -8) = 0x140070cfd;
      lVar11 = FUN_14004c3c0(local_150);
      if (lVar11 == 0) {
        lVar11 = (longlong)*(int *)(local_158 + 4);
        uVar17 = 6;
        if (*(longlong *)((longlong)alStack_110 + lVar11) != 0) {
          uVar17 = 2;
        }
        uVar1 = *(uint *)((longlong)auStack_148 + lVar11);
        *(undefined8 *)(puVar19 + -8) = 0x140070d36;
        FUN_140013b50(local_150 + lVar11 + -8,uVar17 | uVar1,0);
      }
      *(undefined8 *)(puVar19 + -8) = 0x140070d3e;
      thunk_FUN_14028af80(plVar12);
      *(undefined8 *)(puVar19 + -8) = 0x140070d45;
      thunk_FUN_14028af80(0);
    }
    *(undefined ***)(local_150 + (longlong)*(int *)(local_158 + 4) + -8) = &PTR_LAB_140475e08;
    *(int *)((longlong)&iStack_15c + (longlong)*(int *)(local_158 + 4)) =
         *(int *)(local_158 + 4) + -0xa8;
    *(undefined8 *)(puVar19 + -8) = 0x140070d7c;
    FUN_14004a790(local_150);
    *(undefined ***)(local_150 + (longlong)*(int *)(local_158 + 4) + -8) =
         std::basic_ostream<char,std::char_traits<char>_>::vftable;
    *(int *)((longlong)&iStack_15c + (longlong)*(int *)(local_158 + 4)) =
         *(int *)(local_158 + 4) + -0x10;
    local_b0[0] = std::ios_base::vftable;
    *(undefined8 *)(puVar19 + -8) = 0x140070db3;
    FUN_14028c430(local_b0);
    *(undefined8 *)(puVar19 + -8) = 0x140070dbc;
    FUN_140016770(local_180);
  }
  return;
}

