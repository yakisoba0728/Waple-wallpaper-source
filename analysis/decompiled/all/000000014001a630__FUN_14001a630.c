// Function: FUN_14001a630
// Addr: 14001a630
// Size: 2634 bytes


/* WARNING: Removing unreachable block (ram,0x00014001a6df) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001a630(undefined8 param_1)

{
  byte *pbVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *******pppppppuVar12;
  ulonglong uVar13;
  undefined8 *******pppppppuVar14;
  ulonglong uVar15;
  undefined8 *_Buf2;
  undefined8 ******ppppppuVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  bool bVar22;
  undefined4 uVar23;
  int local_res20 [2];
  undefined8 ******local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  ulonglong local_2a0;
  undefined8 ******local_298;
  undefined8 *****pppppuStack_290;
  undefined8 *****local_288;
  undefined8 *****local_280;
  undefined8 ******local_278;
  undefined8 *****pppppuStack_270;
  undefined8 *****local_268;
  undefined8 *****local_260;
  undefined8 ******local_258 [2];
  ulonglong local_248;
  ulonglong local_240;
  longlong local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined4 local_208;
  ulonglong local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  ulonglong local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  char local_1b0 [8];
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  char local_188 [8];
  ulonglong uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  char local_160 [8];
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  char local_138 [8];
  char local_130 [4];
  char local_12c [2];
  undefined2 local_12a;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  char local_110 [8];
  char local_108 [4];
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  char local_e8 [8];
  char local_e0 [4];
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  char local_c0 [7];
  char acStack_b9 [4];
  undefined1 uStack_b5;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  char local_98 [7];
  char acStack_91 [4];
  undefined1 uStack_8d;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  
  if ((DAT_1404df540 & 0x1000) == 0) {
    FUN_14001a4f0();
    lVar9 = FUN_140087490(param_1,&DAT_140474668,&DAT_14047466f);
    if ((lVar9 != 0) &&
       (plVar10 = (longlong *)FUN_140086de0(param_1,&DAT_140474668,&DAT_14047466f),
       (*(uint *)(plVar10 + 1) & 0xff) == 6)) {
      plVar20 = (longlong *)0x0;
      local_res20[0] = 100;
      puVar3 = (undefined8 *)*plVar10;
      plVar18 = plVar20;
      if (puVar3 != (undefined8 *)0x0) {
        plVar18 = *(longlong **)*puVar3;
      }
      puVar4 = (undefined8 *)*plVar10;
      if (puVar4 != (undefined8 *)0x0) {
        plVar20 = (longlong *)*puVar4;
      }
      do {
        bVar22 = puVar4 == (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          bVar22 = plVar18 == plVar20;
        }
        if (bVar22) {
          return;
        }
        lVar9 = FUN_140086de0(plVar18 + 6,"action","");
        local_238 = FUN_140086de0(plVar18 + 6,&DAT_140474678,&DAT_14047467c);
        if ((*(char *)(lVar9 + 8) == '\x04') && (*(char *)(local_238 + 8) == '\x06')) {
          if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e90e0) &&
             (FUN_14028b140(&DAT_1404e90e0), DAT_1404e90e0 == -1)) {
            uStack_220 = 0;
            uStack_1f8 = 0;
            uStack_1d0 = 0;
            local_1b0[0] = s_nextwallpaper_140474680[0];
            local_1b0[1] = s_nextwallpaper_140474680[1];
            local_1b0[2] = s_nextwallpaper_140474680[2];
            local_1b0[3] = s_nextwallpaper_140474680[3];
            local_1b0[4] = s_nextwallpaper_140474680[4];
            local_1b0[5] = s_nextwallpaper_140474680[5];
            local_1b0[6] = s_nextwallpaper_140474680[6];
            local_1b0[7] = s_nextwallpaper_140474680[7];
            local_188[0] = s_screenshot_140474690[0];
            local_188[1] = s_screenshot_140474690[1];
            local_188[2] = s_screenshot_140474690[2];
            local_188[3] = s_screenshot_140474690[3];
            local_188[4] = s_screenshot_140474690[4];
            local_188[5] = s_screenshot_140474690[5];
            local_188[6] = s_screenshot_140474690[6];
            local_188[7] = s_screenshot_140474690[7];
            local_160[0] = s_windowbrowser_1404746a0[0];
            local_160[1] = s_windowbrowser_1404746a0[1];
            local_160[2] = s_windowbrowser_1404746a0[2];
            local_160[3] = s_windowbrowser_1404746a0[3];
            local_160[4] = s_windowbrowser_1404746a0[4];
            local_160[5] = s_windowbrowser_1404746a0[5];
            local_160[6] = s_windowbrowser_1404746a0[6];
            local_160[7] = s_windowbrowser_1404746a0[7];
            local_130[0] = s_windowsettings_1404746b0[8];
            local_130[1] = s_windowsettings_1404746b0[9];
            local_130[2] = s_windowsettings_1404746b0[10];
            local_130[3] = s_windowsettings_1404746b0[0xb];
            local_12c[0] = s_windowsettings_1404746b0[0xc];
            local_12c[1] = s_windowsettings_1404746b0[0xd];
            local_138[0] = s_windowsettings_1404746b0[0];
            local_138[1] = s_windowsettings_1404746b0[1];
            local_138[2] = s_windowsettings_1404746b0[2];
            local_138[3] = s_windowsettings_1404746b0[3];
            local_138[4] = s_windowsettings_1404746b0[4];
            local_138[5] = s_windowsettings_1404746b0[5];
            local_138[6] = s_windowsettings_1404746b0[6];
            local_138[7] = s_windowsettings_1404746b0[7];
            local_110[0] = s_windoweditor_1404746c0[0];
            local_110[1] = s_windoweditor_1404746c0[1];
            local_110[2] = s_windoweditor_1404746c0[2];
            local_110[3] = s_windoweditor_1404746c0[3];
            local_110[4] = s_windoweditor_1404746c0[4];
            local_110[5] = s_windoweditor_1404746c0[5];
            local_110[6] = s_windoweditor_1404746c0[6];
            local_110[7] = s_windoweditor_1404746c0[7];
            local_108[0] = s_windoweditor_1404746c0[8];
            local_108[1] = s_windoweditor_1404746c0[9];
            local_108[2] = s_windoweditor_1404746c0[10];
            local_108[3] = s_windoweditor_1404746c0[0xb];
            local_218 = 5;
            local_210 = 0xf;
            local_228 = (ulonglong)CONCAT14(s_pause_140473b2c[4],s_pause_140473b2c._0_4_);
            local_208 = 1;
            local_1f0 = 4;
            local_1e8 = 0xf;
            local_200 = (ulonglong)DAT_140473b34;
            local_1e0 = 2;
            local_1c8 = 4;
            local_1c0 = 0xf;
            local_1d8 = (ulonglong)DAT_140473b44;
            local_1b8 = 3;
            local_1a0 = 0xd;
            local_198 = 0xf;
            uStack_1a8 = (ulonglong)
                         CONCAT14(s_nextwallpaper_140474680[0xc],s_nextwallpaper_140474680._8_4_);
            local_190 = 4;
            local_178 = 10;
            local_170 = 0xf;
            uStack_180 = (ulonglong)(ushort)s_screenshot_140474690._8_2_;
            local_168 = 5;
            local_150 = 0xd;
            local_148 = 0xf;
            uStack_158 = (ulonglong)
                         CONCAT14(s_windowbrowser_1404746a0[0xc],s_windowbrowser_1404746a0._8_4_);
            local_140 = 8;
            local_128 = 0xe;
            local_120 = 0xf;
            local_12a = 0;
            local_118 = 9;
            local_100 = 0xc;
            local_f8 = 0xf;
            local_104 = 0;
            local_f0 = 10;
            local_d8 = 0xc;
            local_d0 = 0xf;
            local_e8[0] = s_togglerecord_1404746d0[0];
            local_e8[1] = s_togglerecord_1404746d0[1];
            local_e8[2] = s_togglerecord_1404746d0[2];
            local_e8[3] = s_togglerecord_1404746d0[3];
            local_e8[4] = s_togglerecord_1404746d0[4];
            local_e8[5] = s_togglerecord_1404746d0[5];
            local_e8[6] = s_togglerecord_1404746d0[6];
            local_e8[7] = s_togglerecord_1404746d0[7];
            uStack_b4 = 0;
            local_e0[0] = s_togglerecord_1404746d0[8];
            local_e0[1] = s_togglerecord_1404746d0[9];
            local_e0[2] = s_togglerecord_1404746d0[10];
            local_e0[3] = s_togglerecord_1404746d0[0xb];
            local_c0[0] = s_toggleicons_1404746e0[0];
            local_c0[1] = s_toggleicons_1404746e0[1];
            local_c0[2] = s_toggleicons_1404746e0[2];
            local_c0[3] = s_toggleicons_1404746e0[3];
            local_c0[4] = s_toggleicons_1404746e0[4];
            local_c0[5] = s_toggleicons_1404746e0[5];
            local_c0[6] = s_toggleicons_1404746e0[6];
            uStack_8c = 0;
            acStack_b9[0] = s_toggleicons_1404746e0[7];
            acStack_b9[1] = s_toggleicons_1404746e0[8];
            acStack_b9[2] = s_toggleicons_1404746e0[9];
            acStack_b9[3] = s_toggleicons_1404746e0[10];
            local_98[0] = s_screensaver_1404746f0[0];
            local_98[1] = s_screensaver_1404746f0[1];
            local_98[2] = s_screensaver_1404746f0[2];
            local_98[3] = s_screensaver_1404746f0[3];
            local_98[4] = s_screensaver_1404746f0[4];
            local_98[5] = s_screensaver_1404746f0[5];
            local_98[6] = s_screensaver_1404746f0[6];
            acStack_91[0] = s_screensaver_1404746f0[7];
            acStack_91[1] = s_screensaver_1404746f0[8];
            acStack_91[2] = s_screensaver_1404746f0[9];
            acStack_91[3] = s_screensaver_1404746f0[10];
            local_dc = 0;
            local_c8 = 6;
            local_b0 = 0xb;
            local_a8 = 0xf;
            uStack_b5 = 0;
            local_a0 = 7;
            local_88 = 0xb;
            local_80 = 0xf;
            uStack_8d = 0;
            local_78 = 0xb;
            DAT_1404e90f8 = FUN_14028af20(0x38);
            *(longlong *)DAT_1404e90f8 = DAT_1404e90f8;
            *(longlong *)(DAT_1404e90f8 + 8) = DAT_1404e90f8;
            DAT_1404e9108 = 0;
            _DAT_1404e9110 = 0;
            uRam00000001404e9118 = 0;
            DAT_1404e9120 = 7;
            DAT_1404e9128 = 8;
            _DAT_1404e90f0 = 0x3f800000;
            uVar23 = FUN_140011f50(&DAT_1404e9108,0x10,DAT_1404e90f8);
            FUN_1400352e0(uVar23,&local_228,local_70);
            lVar19 = 0xb;
            puVar21 = local_70;
            do {
              puVar21 = puVar21 + -0x28;
              FUN_140017240(puVar21);
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            FUN_14028b410(FUN_1404245b0);
            _Init_thread_footer(&DAT_1404e90e0);
          }
          FUN_140085cc0(lVar9);
          uVar17 = local_248;
          ppppppuVar16 = local_258[0];
          lVar9 = DAT_1404e90f8;
          uVar13 = 0xcbf29ce484222325;
          pppppppuVar12 = local_258;
          if (0xf < local_240) {
            pppppppuVar12 = (undefined8 *******)local_258[0];
          }
          uVar15 = 0;
          if (local_248 != 0) {
            do {
              pbVar1 = (byte *)((longlong)pppppppuVar12 + uVar15);
              uVar15 = uVar15 + 1;
              uVar13 = (uVar13 ^ *pbVar1) * 0x100000001b3;
            } while (uVar15 < local_248);
          }
          lVar19 = *(longlong *)(DAT_1404e9108 + 8 + (uVar13 & DAT_1404e9120) * 0x10);
          if (lVar19 != DAT_1404e90f8) {
            lVar5 = *(longlong *)(DAT_1404e9108 + (uVar13 & DAT_1404e9120) * 0x10);
            uVar13 = local_240;
            while( true ) {
              _Buf2 = (undefined8 *)(lVar19 + 0x10);
              if (0xf < *(ulonglong *)(lVar19 + 0x28)) {
                _Buf2 = (undefined8 *)*_Buf2;
              }
              pppppppuVar12 = local_258;
              if (0xf < uVar13) {
                pppppppuVar12 = (undefined8 *******)ppppppuVar16;
              }
              if ((uVar17 == *(ulonglong *)(lVar19 + 0x20)) &&
                 ((uVar17 == 0 ||
                  (iVar8 = memcmp(pppppppuVar12,_Buf2,uVar17), uVar13 = local_240, iVar8 == 0))))
              goto LAB_14001a874;
              if (lVar19 == lVar5) break;
              lVar19 = *(longlong *)(lVar19 + 8);
            }
          }
          lVar19 = 0;
LAB_14001a874:
          if ((lVar19 == 0) || (lVar19 == lVar9)) {
            lVar9 = FUN_140086de0(plVar18 + 6,"value","");
            uVar11 = FUN_140086de0(plVar18 + 6,"location","");
            if (*(char *)(lVar9 + 8) == '\x04') {
              pppppppuVar12 = local_258;
              if (0xf < local_240) {
                pppppppuVar12 = (undefined8 *******)local_258[0];
              }
              local_2a8 = 0;
              uStack_2b0 = 0;
              local_2b8 = (undefined8 *******)0x0;
              local_2a0 = 0xf;
              pppppuStack_290 = (undefined8 ******)0x0;
              local_288 = (undefined8 ******)0x0;
              local_280 = (undefined8 ******)0xf;
              local_298 = (undefined8 *******)0x0;
              pppppuStack_270 = (undefined8 ******)0x0;
              local_268 = (undefined8 ******)0x0;
              local_260 = (undefined8 ******)0xf;
              local_278 = (undefined8 *******)0x0;
              FUN_14000f880(&local_2b8,pppppppuVar12,local_248);
              pppppppuVar12 = (undefined8 *******)FUN_140085cc0(lVar9,local_68);
              if (&local_298 != pppppppuVar12) {
                if ((undefined8 ******)0xf < local_280) {
                  ppppppuVar16 = (undefined8 ******)((longlong)local_280 + 1);
                  pppppppuVar14 = (undefined8 *******)local_298;
                  if ((undefined8 ******)0xfff < ppppppuVar16) {
                    pppppppuVar14 = (undefined8 *******)local_298[-1];
                    if (0x1f < (ulonglong)((longlong)local_298 + (-8 - (longlong)pppppppuVar14)))
                    goto LAB_14001ac8f;
                    ppppppuVar16 = (undefined8 ******)(local_280 + 5);
                  }
                  thunk_FUN_14028af80(pppppppuVar14,ppppppuVar16);
                }
                local_298 = *pppppppuVar12;
                pppppuStack_290 = pppppppuVar12[1];
                local_288 = pppppppuVar12[2];
                local_280 = pppppppuVar12[3];
                pppppppuVar12[2] = (undefined8 ******)0x0;
                pppppppuVar12[3] = (undefined8 ******)0xf;
                *(undefined1 *)pppppppuVar12 = 0;
              }
              FUN_140017240(local_68);
              pppppppuVar12 = (undefined8 *******)FUN_140085cc0(uVar11,local_68);
              if (&local_278 != pppppppuVar12) {
                if ((undefined8 ******)0xf < local_260) {
                  ppppppuVar16 = (undefined8 ******)((longlong)local_260 + 1);
                  pppppppuVar14 = (undefined8 *******)local_278;
                  if ((undefined8 ******)0xfff < ppppppuVar16) {
                    pppppppuVar14 = (undefined8 *******)local_278[-1];
                    if (0x1f < (ulonglong)((longlong)local_278 + (-8 - (longlong)pppppppuVar14)))
                    goto LAB_14001ac8f;
                    ppppppuVar16 = (undefined8 ******)(local_260 + 5);
                  }
                  thunk_FUN_14028af80(pppppppuVar14,ppppppuVar16);
                }
                local_278 = *pppppppuVar12;
                pppppuStack_270 = pppppppuVar12[1];
                local_268 = pppppppuVar12[2];
                local_260 = pppppppuVar12[3];
                pppppppuVar12[2] = (undefined8 ******)0x0;
                pppppppuVar12[3] = (undefined8 ******)0xf;
                *(undefined1 *)pppppppuVar12 = 0;
              }
              uVar23 = FUN_140017240(local_68);
              iVar8 = local_res20[0];
              plVar10 = (longlong *)FUN_140032670(uVar23,local_48,local_res20);
              lVar9 = *plVar10;
              if ((undefined8 *******)(lVar9 + 0x18) != &local_2b8) {
                pppppppuVar12 = &local_2b8;
                if (0xf < local_2a0) {
                  pppppppuVar12 = (undefined8 *******)local_2b8;
                }
                FUN_14000f880((undefined8 *******)(lVar9 + 0x18),pppppppuVar12,local_2a8);
              }
              if ((undefined8 *******)(lVar9 + 0x38) != &local_298) {
                pppppppuVar12 = &local_298;
                if ((undefined8 ******)0xf < local_280) {
                  pppppppuVar12 = (undefined8 *******)local_298;
                }
                FUN_14000f880((undefined8 *******)(lVar9 + 0x38),pppppppuVar12,local_288);
              }
              if ((undefined8 *******)(lVar9 + 0x58) != &local_278) {
                pppppppuVar12 = &local_278;
                if ((undefined8 ******)0xf < local_260) {
                  pppppppuVar12 = (undefined8 *******)local_278;
                }
                FUN_14000f880((undefined8 *******)(lVar9 + 0x58),pppppppuVar12,local_268);
              }
              FUN_14001a310(local_238,iVar8);
              if ((undefined8 ******)0xf < local_260) {
                ppppppuVar16 = (undefined8 ******)((longlong)local_260 + 1);
                pppppppuVar12 = (undefined8 *******)local_278;
                if ((undefined8 ******)0xfff < ppppppuVar16) {
                  pppppppuVar12 = (undefined8 *******)local_278[-1];
                  if (0x1f < (ulonglong)((longlong)local_278 + (-8 - (longlong)pppppppuVar12)))
                  goto LAB_14001ac8f;
                  ppppppuVar16 = (undefined8 ******)(local_260 + 5);
                }
                thunk_FUN_14028af80(pppppppuVar12,ppppppuVar16);
              }
              if ((undefined8 ******)0xf < local_280) {
                ppppppuVar16 = (undefined8 ******)((longlong)local_280 + 1);
                pppppppuVar12 = (undefined8 *******)local_298;
                if ((undefined8 ******)0xfff < ppppppuVar16) {
                  pppppppuVar12 = (undefined8 *******)local_298[-1];
                  if (0x1f < (ulonglong)((longlong)local_298 + (-8 - (longlong)pppppppuVar12)))
                  goto LAB_14001ac8f;
                  ppppppuVar16 = (undefined8 ******)(local_280 + 5);
                }
                thunk_FUN_14028af80(pppppppuVar12,ppppppuVar16);
              }
              local_res20[0] = iVar8 + 1;
              if (0xf < local_2a0) {
                uVar17 = local_2a0 + 1;
                pppppppuVar12 = (undefined8 *******)local_2b8;
                if (0xfff < uVar17) {
                  pppppppuVar12 = (undefined8 *******)local_2b8[-1];
                  if (0x1f < (ulonglong)((longlong)local_2b8 + (-8 - (longlong)pppppppuVar12)))
                  goto LAB_14001ac8f;
                  uVar17 = local_2a0 + 0x28;
                }
                thunk_FUN_14028af80(pppppppuVar12,uVar17);
              }
            }
          }
          else {
            FUN_14001a310(local_238,*(undefined4 *)(lVar19 + 0x30));
          }
          if (0xf < local_240) {
            uVar17 = local_240 + 1;
            pppppppuVar12 = (undefined8 *******)local_258[0];
            if (0xfff < uVar17) {
              pppppppuVar12 = (undefined8 *******)local_258[0][-1];
              if (0x1f < (ulonglong)((longlong)local_258[0] + (-8 - (longlong)pppppppuVar12))) {
LAB_14001ac8f:
                pcVar6 = (code *)swi(0x29);
                (*pcVar6)(5);
                return;
              }
              uVar17 = local_240 + 0x28;
            }
            thunk_FUN_14028af80(pppppppuVar12,uVar17);
          }
        }
        plVar10 = (longlong *)plVar18[2];
        if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar10 + 0x19);
          plVar18 = plVar10;
          while (cVar2 == '\0') {
            plVar18 = (longlong *)*plVar18;
            cVar2 = *(char *)(*plVar18 + 0x19);
          }
        }
        else {
          cVar2 = *(char *)(plVar18[1] + 0x19);
          plVar7 = (longlong *)plVar18[1];
          plVar10 = plVar18;
          while ((plVar18 = plVar7, cVar2 == '\0' && (plVar10 == (longlong *)plVar18[2]))) {
            cVar2 = *(char *)(plVar18[1] + 0x19);
            plVar7 = (longlong *)plVar18[1];
            plVar10 = plVar18;
          }
        }
      } while( true );
    }
  }
  return;
}

