// Function: FUN_1401556e0
// Addr: 1401556e0
// Size: 2265 bytes


void FUN_1401556e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  float fVar3;
  undefined8 *****pppppuVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  char *pcVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  char *pcVar18;
  undefined8 ******ppppppuVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  int iVar22;
  uint uVar23;
  char *pcVar24;
  float fVar25;
  float fVar26;
  longlong *local_res18;
  undefined1 local_res20;
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [24];
  undefined4 local_278;
  int local_274;
  longlong *local_270;
  ulonglong local_268 [2];
  longlong *local_258;
  ulonglong local_250;
  uint local_248;
  float local_244;
  undefined2 local_240;
  int local_238;
  longlong *local_230;
  undefined8 *****local_228;
  undefined8 uStack_220;
  longlong *local_218;
  ulonglong local_210;
  longlong local_208;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [40];
  undefined1 local_198 [8];
  uint local_190;
  uint local_18c;
  longlong local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined1 local_168 [16];
  undefined1 local_158 [32];
  longlong *local_138;
  longlong *local_130;
  longlong *local_118;
  longlong *local_110;
  uint local_e0;
  
  puVar21 = auStack_298;
  *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) & 0xfffffffb;
  lVar8 = FUN_140087490(param_2,"textures","");
  if (lVar8 == 0) {
    local_208 = lVar8;
    lVar8 = FUN_140084ac0();
  }
  if (*(char *)(lVar8 + 8) == '\x06') {
    local_208 = lVar8;
    uVar6 = FUN_1400863a0(lVar8);
    if (uVar6 < 10) {
      local_274 = FUN_1400863a0(lVar8);
      if (local_274 < 1) {
        return;
      }
    }
    else {
      local_274 = 10;
    }
    fVar3 = DAT_140492868;
    uVar16 = 0;
    local_278 = 0;
    do {
      pcVar18 = (char *)0x0;
      uVar6 = (uint)uVar16;
      plVar9 = (longlong *)FUN_140086b80(lVar8,uVar16);
      local_230 = plVar9;
      if ((char)*(uint *)(plVar9 + 1) == '\x04') {
        pcVar24 = (char *)*plVar9;
        pcVar15 = pcVar18;
        if ((pcVar24 != (char *)0x0) && (pcVar15 = pcVar24, (*(uint *)(plVar9 + 1) >> 8 & 1) != 0))
        {
          pcVar15 = pcVar24 + 4;
        }
        if (*pcVar15 != '\0') {
          local_270 = (longlong *)0x0;
          uVar16 = ((((uVar16 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)local_278._1_1_) * 0x100000001b3 ^ (ulonglong)local_278._2_1_) *
                    0x100000001b3 ^ (ulonglong)local_278._3_1_) * 0x100000001b3 &
                   *(ulonglong *)(param_1 + 0x2a0);
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x288) + 8 + uVar16 * 0x10);
          if (lVar8 == *(longlong *)(param_1 + 0x278)) {
LAB_140155898:
            lVar8 = 0;
          }
          else {
            uVar7 = *(uint *)(lVar8 + 0x10);
            while (uVar6 != uVar7) {
              if (lVar8 == *(longlong *)(*(longlong *)(param_1 + 0x288) + uVar16 * 0x10))
              goto LAB_140155898;
              lVar8 = *(longlong *)(lVar8 + 8);
              uVar7 = *(uint *)(lVar8 + 0x10);
            }
          }
          if (((lVar8 == 0) || (lVar8 == *(longlong *)(param_1 + 0x278))) ||
             (plVar14 = *(longlong **)(lVar8 + 0x18), plVar14[4] == 0)) {
LAB_140155eff:
            lVar11 = 0;
            lVar8 = *plVar9;
            if ((lVar8 != 0) && (lVar11 = lVar8, (*(uint *)(plVar9 + 1) >> 8 & 1) != 0)) {
              lVar11 = lVar8 + 4;
            }
            plVar14 = (longlong *)FUN_14014cf90(*(longlong *)(param_1 + 200) + 0x1520,lVar11,1);
          }
          else {
            if (1 < *(int *)(*plVar14 + 0x18) - 1U) {
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1898);
              plVar10 = plVar14 + 2;
              if (0xf < (ulonglong)plVar14[5]) {
                plVar10 = (longlong *)*plVar10;
              }
              cVar5 = (**(code **)(*plVar1 + 0x60))(plVar1,plVar10);
              if (cVar5 == '\0') goto LAB_140155eff;
            }
            lVar11 = FUN_140087490(param_2,"usertexturereference","");
            if (lVar11 == 0) {
              lVar11 = FUN_140084ac0();
            }
            local_1f8 = 0;
            local_1f0 = 0;
            local_1e8 = 1;
            local_1e0 = 0;
            FUN_14000d970(local_1d8);
            local_188 = 0;
            uStack_180 = 0;
            local_178 = 0;
            pcVar24 = pcVar18;
            pcVar15 = pcVar18;
            if (*(char *)(lVar11 + 8) == '\a') {
              lVar12 = FUN_140087490(lVar11,"width","");
              if (lVar12 == 0) {
                lVar12 = FUN_140084ac0();
              }
              lVar11 = FUN_140087490(lVar11,"height","");
              if (lVar11 == 0) {
                lVar11 = FUN_140084ac0();
              }
              if (*(byte *)(lVar12 + 8) - 1 < 3) {
                uVar6 = FUN_140085ee0(lVar12);
                pcVar15 = (char *)(ulonglong)uVar6;
              }
              uVar6 = (uint)pcVar15;
              if (*(byte *)(lVar11 + 8) - 1 < 3) {
                uVar7 = FUN_140085ee0(lVar11);
                pcVar24 = (char *)(ulonglong)uVar7;
              }
              uVar7 = (uint)pcVar24;
              plVar9 = local_230;
              if ((uVar6 == 0) || (uVar7 == 0)) goto LAB_1401559f1;
LAB_140155a4a:
              uVar23 = local_1f8._4_4_;
            }
            else {
LAB_1401559f1:
              uVar7 = (uint)pcVar24;
              uVar6 = (uint)pcVar15;
              pcVar24 = (char *)*plVar9;
              if ((pcVar24 != (char *)0x0) &&
                 (pcVar18 = pcVar24, (*(uint *)(plVar9 + 1) >> 8 & 1) != 0)) {
                pcVar18 = pcVar24 + 4;
              }
              cVar5 = FUN_14014d500(*(longlong *)(param_1 + 200) + 0x1520,pcVar18,&local_1f8,
                                    local_198);
              if (cVar5 == '\0') goto LAB_140155a4a;
              uVar23 = local_1f8._4_4_;
              uVar6 = local_190;
              uVar7 = local_18c;
              if ((local_1f8 & 0x400000000) == 0) {
                uVar6 = local_1e8._4_4_;
                uVar7 = (uint)local_1e0;
              }
            }
            if ((uVar6 != 0) && (uVar7 != 0)) {
              *(short *)(param_1 + 0x2b0) = (short)uVar6;
              *(short *)(param_1 + 0x2b2) = (short)uVar7;
              iVar22 = *(int *)(**(longlong **)(lVar8 + 0x18) + 0x18);
              local_res18 = (longlong *)CONCAT71(local_res18._1_7_,iVar22 == 1);
              local_res20 = iVar22 == 2;
              fVar26 = (float)uVar6 / (float)uVar7;
              local_238 = iVar22;
              fVar25 = (float)FUN_1402edef0(fVar26 * fVar3);
              FUN_14000ef10(local_168);
              if (iVar22 == 2) {
                FUN_14000c990(local_158,"usershortcut_");
              }
              uVar13 = FUN_14000cbc0(local_158,*(longlong *)(lVar8 + 0x18) + 0x10);
              uVar13 = FUN_14000c990(uVar13,&DAT_140473c0c);
              FUN_140032190(uVar13,(int)fVar25);
              local_258 = (longlong *)0x0;
              local_218 = (longlong *)0x0;
              local_210 = 0xf;
              uStack_220 = 0;
              local_228 = (undefined8 ******)0x0;
              local_268[0] = 0;
              local_268[1] = 0;
              if ((((byte)local_e0 & 0x22) == 2) || (*local_110 == 0)) {
                if ((local_e0 & 4) == 0) {
                  if (*local_118 == 0) {
                    lVar11 = 0;
                  }
                  else {
                    lVar11 = *local_138;
                  }
                  goto LAB_140155ba9;
                }
              }
              else {
                lVar11 = *local_130;
LAB_140155ba9:
                if (lVar11 != 0) {
                  FUN_14000f880(&local_228,lVar11);
                }
              }
              ppppppuVar19 = &local_228;
              if (0xf < local_210) {
                ppppppuVar19 = (undefined8 ******)local_228;
              }
              local_270 = (longlong *)
                          FUN_14014cf90(*(longlong *)(param_1 + 200) + 0x1520,ppppppuVar19,0);
              plVar9 = local_218;
              pppppuVar4 = local_228;
              if (local_270 != (longlong *)0x0) {
LAB_140155e41:
                *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) | 4;
LAB_140155e4a:
                if (0xf < local_210) {
                  uVar16 = local_210 + 1;
                  ppppppuVar19 = (undefined8 ******)pppppuVar4;
                  if (0xfff < uVar16) {
                    ppppppuVar19 = (undefined8 ******)pppppuVar4[-1];
                    if (0x1f < (ulonglong)((longlong)pppppuVar4 + (-8 - (longlong)ppppppuVar19)))
                    goto LAB_140155fa8;
                    uVar16 = local_210 + 0x28;
                  }
                  thunk_FUN_14028af80(ppppppuVar19,uVar16);
                }
                FUN_1400056d0(local_168);
                goto LAB_140155e9a;
              }
              ppppppuVar19 = &local_228;
              if (0xf < local_210) {
                ppppppuVar19 = (undefined8 ******)local_228;
              }
              local_250 = 0xf;
              local_248 = 0;
              local_240 = 0;
              local_268[1] = 0;
              local_268[0] = 0;
              local_244 = fVar26;
              if (local_218 < &DAT_00000010) {
                local_258 = local_218;
                FUN_1404210f0(local_268,ppppppuVar19,local_218);
                *(undefined1 *)((longlong)local_268 + (longlong)plVar9) = 0;
LAB_140155d00:
                lVar11 = *(longlong *)(lVar8 + 0x18);
                local_240 = CONCAT11(local_res20,local_res18._0_1_);
                uVar6 = 8;
                local_248 = 8;
                if (*(char *)(lVar11 + 0x30) != '\0') {
                  local_244 = 0.0;
                }
                if (((uVar23 & 2) != 0) || (iVar22 == 2)) {
                  uVar6 = 10;
                  local_248 = 10;
                }
                if ((uVar23 & 1) != 0) {
                  local_248 = uVar6 | 1;
                }
                plVar9 = (longlong *)(lVar11 + 0x10);
                plVar14 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
                if (0xf < *(ulonglong *)(lVar11 + 0x28)) {
                  plVar9 = (longlong *)*plVar9;
                }
                local_res18 = (longlong *)(**(code **)(*plVar14 + 0x50))(plVar14,plVar9,local_268);
                if ((*(uint *)((longlong)local_res18 + 0x1c) & 0x40000000) == 0) {
                  if (*(char *)(*(longlong *)(lVar8 + 0x18) + 0x30) != '\0') {
                    *(undefined2 *)(param_1 + 0x2b0) = *(undefined2 *)((longlong)local_res18 + 0x2c)
                    ;
                    *(short *)(param_1 + 0x2b2) = (short)local_res18[6];
                  }
                  FUN_14014c8f0(*(longlong *)(param_1 + 200) + 0x1520,&local_res18);
                  plVar9 = local_res18;
                }
                else {
                  if (local_res18 != (longlong *)0x0) {
                    (**(code **)*local_res18)(local_res18,1);
                  }
                  plVar9 = (longlong *)0x0;
                }
                local_270 = plVar9;
                if (0xf < local_250) {
                  uVar20 = local_250 + 1;
                  uVar16 = local_268[0];
                  if (0xfff < uVar20) {
                    uVar16 = *(ulonglong *)(local_268[0] - 8);
                    if (0x1f < (local_268[0] - uVar16) - 8) goto LAB_140155fa8;
                    uVar20 = local_250 + 0x28;
                  }
                  thunk_FUN_14028af80(uVar16,uVar20);
                }
                if (plVar9 != (longlong *)0x0) goto LAB_140155e41;
                goto LAB_140155e4a;
              }
              local_258 = local_270;
              if ((longlong *)0x7fffffffffffffff < local_218) goto LAB_140155faf;
              uVar16 = (ulonglong)local_218 | 0xf;
              if (uVar16 < 0x8000000000000000) {
                if (uVar16 < 0x16) {
                  uVar16 = 0x16;
                }
                uVar20 = uVar16 + 1;
                if (uVar20 == 0) {
                  uVar20 = 0;
                }
                else {
                  if (0xfff < uVar20) {
                    uVar17 = uVar16 + 0x28;
                    if (uVar17 <= uVar20) {
                    /* WARNING: Subroutine does not return */
                      FUN_140017370();
                    }
                    goto LAB_140155cb3;
                  }
                  uVar20 = FUN_14028af20(uVar20);
                }
LAB_140155cda:
                local_258 = plVar9;
                local_250 = uVar16;
                FUN_1404210f0(uVar20,ppppppuVar19,plVar9);
                *(undefined1 *)(uVar20 + (longlong)plVar9) = 0;
                iVar22 = local_238;
                local_268[0] = uVar20;
                goto LAB_140155d00;
              }
              uVar16 = 0x7fffffffffffffff;
              uVar17 = 0x8000000000000027;
LAB_140155cb3:
              lVar11 = FUN_14028af20(uVar17);
              if (lVar11 != 0) {
                uVar20 = lVar11 + 0x27U & 0xffffffffffffffe0;
                *(longlong *)(uVar20 - 8) = lVar11;
                goto LAB_140155cda;
              }
LAB_140155fa8:
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)(5);
              puVar21 = auStack_290;
LAB_140155faf:
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar21 + -8) = &UNK_140155fb4;
              FUN_1400172e0();
            }
LAB_140155e9a:
            if (local_188 != 0) {
              uVar16 = local_178 - local_188 & 0xffffffffffffffe0;
              lVar8 = local_188;
              if (0xfff < uVar16) {
                if (0x1f < (local_188 - *(longlong *)(local_188 + -8)) - 8U) goto LAB_140155fa8;
                uVar16 = uVar16 + 0x27;
                lVar8 = *(longlong *)(local_188 + -8);
              }
              thunk_FUN_14028af80(lVar8,uVar16);
            }
            FUN_14000d9e0(local_1c0);
            FUN_14000da50(local_1d0);
            plVar14 = local_270;
            plVar9 = local_230;
            uVar6 = local_278;
            if (local_270 == (longlong *)0x0) goto LAB_140155eff;
          }
          *(longlong **)(param_1 + 0xd0 + (longlong)(int)uVar6 * 8) = plVar14;
          lVar8 = local_208;
        }
      }
      local_278 = uVar6 + 1;
      uVar16 = (ulonglong)local_278;
    } while ((int)local_278 < local_274);
  }
  return;
}

