// Function: FUN_140162100
// Addr: 140162100
// Size: 2486 bytes


void FUN_140162100(longlong param_1,ulonglong param_2,undefined8 *param_3,undefined8 *******param_4,
                  ulonglong param_5)

{
  byte *pbVar1;
  undefined2 *puVar2;
  char cVar3;
  code *pcVar4;
  undefined8 *****pppppuVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *******pppppppuVar10;
  char ******ppppppcVar11;
  undefined8 *******pppppppuVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined8 *******_Buf1;
  undefined8 ******ppppppuVar15;
  undefined8 *******_Buf2;
  undefined8 *******pppppppuVar16;
  longlong lVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  char *******pppppppcVar22;
  char *_Str2;
  char *pcVar23;
  undefined1 local_res10;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [24];
  ulonglong local_168;
  undefined8 ******local_158;
  undefined8 uStack_150;
  ulonglong local_148;
  ulonglong local_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  int local_120;
  undefined8 ******local_118;
  undefined8 ******local_110;
  undefined8 uStack_108;
  ulonglong local_100;
  ulonglong local_f8;
  undefined8 ******local_f0;
  undefined8 uStack_e8;
  undefined8 *****local_e0;
  ulonglong local_d8;
  undefined8 ******local_d0 [2];
  undefined8 ******local_c0;
  undefined8 uStack_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  char ******local_a0;
  undefined8 uStack_98;
  undefined8 *****local_90;
  ulonglong local_88;
  char local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  ulonglong local_68;
  longlong local_60;
  undefined1 local_58 [24];
  
  puVar18 = auStack_188;
  uVar21 = param_3[3];
  lVar17 = param_2 + 0x1410;
  puVar19 = param_3;
  if (0xf < uVar21) {
    puVar19 = (undefined8 *)*param_3;
  }
  uVar14 = 0;
  uVar20 = 0xcbf29ce484222325;
  if (param_3[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar19 + uVar14);
      uVar14 = uVar14 + 1;
      uVar20 = (uVar20 ^ *pbVar1) * 0x100000001b3;
    } while (uVar14 < (ulonglong)param_3[2]);
  }
  local_60 = lVar17;
  lVar7 = FUN_1400110a0(lVar17,local_d0,param_3,uVar20);
  lVar7 = *(longlong *)(lVar7 + 8);
  if ((lVar7 == 0) || (lVar7 == *(longlong *)(param_2 + 0x1418))) {
    local_148 = 0;
    local_140 = 0xf;
    local_128 = 0;
    uStack_150 = 0;
    local_158 = (undefined8 *******)0x0;
    local_138 = 0;
    lStack_130 = 0;
    puVar19 = param_3;
    if (0xf < uVar21) {
      puVar19 = (undefined8 *)*param_3;
    }
    FUN_1400d3f80(&local_80,*(undefined8 *)(param_2 + 0x1898),puVar19,0);
    local_120 = *(int *)(param_4 + 2);
    FUN_140052fb0(&local_158,local_120);
    _Str2 = &local_80;
    if (0xf < local_68) {
      _Str2 = (char *)CONCAT71(uStack_7f,local_80);
    }
    if (*_Str2 != '\0') {
      local_res10 = (undefined1)param_2;
      do {
        cVar3 = *_Str2;
        pcVar23 = _Str2;
        while (((cVar3 != '\0' && (*pcVar23 != '\r')) && (*pcVar23 != '\n'))) {
          pcVar23 = pcVar23 + 1;
          cVar3 = *pcVar23;
        }
        uVar21 = (longlong)pcVar23 - (longlong)_Str2;
        iVar6 = strncmp("#include",_Str2,8);
        if (iVar6 == 0) {
          local_100 = 0;
          uStack_108 = 0;
          local_110 = (undefined8 *******)0x0;
          local_f8 = 0xf;
          FUN_14000f880(&local_110,_Str2,uVar21);
          pppppppuVar12 = &local_110;
          if (0xf < local_f8) {
            pppppppuVar12 = (undefined8 *******)local_110;
          }
          if (local_100 == 0) {
            lVar7 = -1;
          }
          else {
            lVar17 = local_100 + (longlong)pppppppuVar12;
            lVar8 = thunk_FUN_14028cf70(pppppppuVar12,lVar17,0x22);
            lVar7 = -1;
            if (lVar8 != lVar17) {
              lVar7 = lVar8 - (longlong)pppppppuVar12;
            }
          }
          pppppppuVar12 = &local_110;
          if (0xf < local_f8) {
            pppppppuVar12 = (undefined8 *******)local_110;
          }
          if (lVar7 + 1U < local_100) {
            lVar17 = local_100 + (longlong)pppppppuVar12;
            lVar9 = thunk_FUN_14028cf70(lVar7 + 1U + (longlong)pppppppuVar12,lVar17,0x22);
            lVar8 = -1;
            if (lVar9 != lVar17) {
              lVar8 = lVar9 - (longlong)pppppppuVar12;
            }
          }
          else {
            lVar8 = -1;
          }
          uVar21 = lVar7 + 1;
          if ((lVar7 != -1) && (lVar8 != -1)) {
            ppppppuVar15 = (undefined8 ******)0x0;
            local_e0 = (undefined8 ******)0x0;
            local_d8 = 0;
            local_f0 = (undefined8 *******)0x0;
            uStack_e8 = 0;
            if (local_100 < uVar21) goto LAB_140162aa7;
            uVar14 = lVar8 - uVar21;
            if (local_100 - uVar21 < lVar8 - uVar21) {
              uVar14 = local_100 - uVar21;
            }
            pppppppuVar12 = &local_110;
            if (0xf < local_f8) {
              pppppppuVar12 = (undefined8 *******)local_110;
            }
            FUN_140017480(&local_f0,(longlong)pppppppuVar12 + uVar21,uVar14);
            pppppuVar5 = local_e0;
            pppppppuVar12 = (undefined8 *******)local_f0;
            uVar21 = 0xcbf29ce484222325;
            pppppppuVar16 = &local_f0;
            if (0xf < local_d8) {
              pppppppuVar16 = (undefined8 *******)local_f0;
            }
            if ((undefined8 ******)local_e0 != (undefined8 ******)0x0) {
              do {
                pbVar1 = (byte *)((longlong)pppppppuVar16 + (longlong)ppppppuVar15);
                ppppppuVar15 = (undefined8 ******)((longlong)ppppppuVar15 + 1);
                uVar21 = (uVar21 ^ *pbVar1) * 0x100000001b3;
              } while (ppppppuVar15 < local_e0);
            }
            uVar21 = uVar21 & *(ulonglong *)(param_1 + 0x30);
            local_118 = *(undefined8 *******)(param_1 + 8);
            pppppppuVar16 =
                 *(undefined8 ********)(*(longlong *)(param_1 + 0x18) + 8 + uVar21 * 0x10);
            if (pppppppuVar16 != (undefined8 *******)local_118) {
              pppppppuVar10 = *(undefined8 ********)(*(longlong *)(param_1 + 0x18) + uVar21 * 0x10);
              local_d0[0] = pppppppuVar10;
              uVar21 = local_d8;
              while( true ) {
                _Buf2 = pppppppuVar16 + 2;
                if ((undefined8 ******)0xf < pppppppuVar16[5]) {
                  _Buf2 = (undefined8 *******)*_Buf2;
                }
                _Buf1 = &local_f0;
                if (0xf < uVar21) {
                  _Buf1 = pppppppuVar12;
                }
                if (((undefined8 ******)pppppuVar5 == pppppppuVar16[4]) &&
                   (((undefined8 ******)pppppuVar5 == (undefined8 ******)0x0 ||
                    (iVar6 = memcmp(_Buf1,_Buf2,(size_t)pppppuVar5),
                    pppppppuVar10 = (undefined8 *******)local_d0[0], uVar21 = local_d8, iVar6 == 0))
                   )) goto LAB_140162503;
                if (pppppppuVar16 == pppppppuVar10) break;
                pppppppuVar16 = (undefined8 *******)pppppppuVar16[1];
              }
            }
            pppppppuVar16 = (undefined8 *******)0x0;
LAB_140162503:
            if (pppppppuVar16 == (undefined8 *******)0x0) {
              pppppppuVar16 = (undefined8 *******)local_118;
            }
            if (pppppppuVar16 == (undefined8 *******)local_118) {
              FUN_140032bc0(param_1,local_58,&local_f0);
              FUN_14000cde0(&local_138,&local_f0);
              if (param_5 != 0) {
                FUN_14000cde0(param_5,&local_f0);
              }
              pppppuVar5 = local_e0;
              local_b0 = 0;
              local_a8 = 0xf;
              uStack_b8 = 0;
              local_c0 = (undefined8 *******)0x0;
              if (0x7fffffffffffffffU - (longlong)local_e0 < 8) {
                    /* WARNING: Subroutine does not return */
                FUN_1400172e0();
              }
              local_118 = &local_f0;
              if (0xf < local_d8) {
                local_118 = local_f0;
              }
              local_d0[0] = local_f0;
              local_90 = (undefined8 ******)0x0;
              local_88 = 0;
              local_a0 = (char ******)0x0;
              uStack_98 = 0;
              if (local_e0 + 1 < (undefined8 ******)0x10) {
                uVar21 = 0xf;
                pppppppcVar22 = &local_a0;
              }
              else {
                uVar21 = (ulonglong)(local_e0 + 1) | 0xf;
                if (uVar21 < 0x8000000000000000) {
                  if (uVar21 < 0x16) {
                    uVar21 = 0x16;
                  }
                  uVar14 = uVar21 + 1;
                  if (uVar14 == 0) {
                    pppppppcVar22 = (char *******)0x0;
                    local_a0 = (char ******)0x0;
                  }
                  else {
                    if (0xfff < uVar14) {
                      uVar20 = uVar21 + 0x28;
                      if (uVar20 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                        FUN_140017370();
                      }
                      goto LAB_14016260b;
                    }
                    pppppppcVar22 = (char *******)FUN_14028af20(uVar14);
                    local_a0 = (char ******)pppppppcVar22;
                  }
                }
                else {
                  uVar21 = 0x7fffffffffffffff;
                  uVar20 = 0x8000000000000027;
LAB_14016260b:
                  ppppppcVar11 = (char ******)FUN_14028af20(uVar20);
                  if (ppppppcVar11 == (char ******)0x0) goto LAB_140162aa0;
                  pppppppcVar22 =
                       (char *******)((longlong)ppppppcVar11 + 0x27U & 0xffffffffffffffe0);
                  pppppppcVar22[-1] = ppppppcVar11;
                  local_a0 = (char ******)pppppppcVar22;
                }
              }
              local_90 = pppppuVar5 + 1;
              local_88 = uVar21;
              *pppppppcVar22 = (char ******)s_shaders__14048b9b0._0_8_;
              FUN_1404210f0(pppppppcVar22 + 1,local_118,pppppuVar5);
              local_168 = param_5;
              *(char *)((longlong)pppppppcVar22 + (longlong)(pppppuVar5 + 1)) = '\0';
              FUN_140162100(param_1,param_2,&local_a0,&local_c0);
              if (0xf < local_88) {
                uVar21 = local_88 + 1;
                pppppppcVar22 = (char *******)local_a0;
                if (0xfff < uVar21) {
                  pppppppcVar22 = (char *******)local_a0[-1];
                  if ((char *)0x1f < (char *)((longlong)local_a0 + (-8 - (longlong)pppppppcVar22)))
                  goto LAB_140162aa0;
                  uVar21 = local_88 + 0x28;
                }
                thunk_FUN_14028af80(pppppppcVar22,uVar21);
              }
              local_120 = local_120 + (int)local_b0;
              FUN_140052fb0(&local_158,local_120);
              uVar21 = local_b0;
              pppppppuVar12 = &local_c0;
              if (0xf < local_a8) {
                pppppppuVar12 = (undefined8 *******)local_c0;
              }
              if (local_140 - local_148 < local_b0) {
                local_168 = local_b0;
                FUN_140053110(&local_158,local_b0,param_2 & 0xff);
              }
              else {
                pppppppuVar16 = &local_158;
                if (0xf < local_140) {
                  pppppppuVar16 = (undefined8 *******)local_158;
                }
                lVar17 = (longlong)pppppppuVar16 + local_148;
                local_148 = local_148 + local_b0;
                FUN_1404210f0(lVar17,pppppppuVar12,local_b0);
                *(undefined1 *)(uVar21 + lVar17) = 0;
              }
              pppppppuVar12 = (undefined8 *******)local_d0[0];
              if (0xf < local_a8) {
                uVar21 = local_a8 + 1;
                pppppppuVar12 = (undefined8 *******)local_c0;
                if (0xfff < uVar21) {
                  pppppppuVar12 = (undefined8 *******)local_c0[-1];
                  if (0x1f < (ulonglong)((longlong)local_c0 + (-8 - (longlong)pppppppuVar12)))
                  goto LAB_140162aa0;
                  uVar21 = local_a8 + 0x28;
                }
                thunk_FUN_14028af80(pppppppuVar12,uVar21);
                pppppppuVar12 = (undefined8 *******)local_d0[0];
              }
            }
            if (0xf < local_d8) {
              uVar21 = local_d8 + 1;
              pppppppuVar16 = pppppppuVar12;
              if (0xfff < uVar21) {
                pppppppuVar16 = (undefined8 *******)pppppppuVar12[-1];
                if (0x1f < (ulonglong)((longlong)pppppppuVar12 + (-8 - (longlong)pppppppuVar16)))
                goto LAB_140162aa0;
                uVar21 = local_d8 + 0x28;
              }
              thunk_FUN_14028af80(pppppppuVar16,uVar21);
            }
          }
          if (0xf < local_f8) {
            uVar21 = local_f8 + 1;
            pppppppuVar12 = (undefined8 *******)local_110;
            if (0xfff < uVar21) {
              pppppppuVar12 = (undefined8 *******)local_110[-1];
              if (0x1f < (ulonglong)((longlong)local_110 + (-8 - (longlong)pppppppuVar12)))
              goto LAB_140162aa0;
              uVar21 = local_f8 + 0x28;
            }
            thunk_FUN_14028af80(pppppppuVar12,uVar21);
          }
        }
        else if (local_140 - local_148 < uVar21) {
          local_168 = uVar21;
          FUN_140053110(&local_158,uVar21,param_2 & 0xff,_Str2);
        }
        else {
          pppppppuVar12 = &local_158;
          if (0xf < local_140) {
            pppppppuVar12 = (undefined8 *******)local_158;
          }
          lVar17 = (longlong)pppppppuVar12 + local_148;
          local_148 = local_148 + uVar21;
          FUN_1404210f0(lVar17,_Str2,uVar21);
          *(undefined1 *)(uVar21 + lVar17) = 0;
        }
        if (local_140 == local_148) {
          local_168 = 1;
          FUN_140053110(&local_158,1,local_res10,&DAT_1404736e4);
        }
        else {
          pppppppuVar12 = &local_158;
          if (0xf < local_140) {
            pppppppuVar12 = (undefined8 *******)local_158;
          }
          puVar2 = (undefined2 *)((longlong)pppppppuVar12 + local_148);
          local_148 = local_148 + 1;
          *puVar2 = 10;
        }
        for (; (cVar3 = *pcVar23, cVar3 == '\r' || (cVar3 == '\n')); pcVar23 = pcVar23 + 1) {
        }
        lVar17 = local_60;
        _Str2 = pcVar23;
      } while (cVar3 != '\0');
    }
    if (param_4 != &local_158) {
      pppppppuVar12 = &local_158;
      if (0xf < local_140) {
        pppppppuVar12 = (undefined8 *******)local_158;
      }
      FUN_14000f880(param_4,pppppppuVar12,local_148);
    }
    plVar13 = (longlong *)FUN_140164160(lVar17,local_58,param_3);
    lVar17 = *plVar13;
    pppppppuVar12 = (undefined8 *******)(lVar17 + 0x30);
    if (pppppppuVar12 != &local_158) {
      pppppppuVar16 = &local_158;
      if (0xf < local_140) {
        pppppppuVar16 = (undefined8 *******)local_158;
      }
      FUN_14000f880(pppppppuVar12,pppppppuVar16,local_148);
    }
    plVar13 = (longlong *)(lVar17 + 0x50);
    if (plVar13 != &local_138) {
      FUN_140164420(plVar13,local_138,lStack_130 - local_138 >> 5);
    }
    if (0xf < local_68) {
      lVar7 = CONCAT71(uStack_7f,local_80);
      uVar21 = local_68 + 1;
      lVar17 = lVar7;
      if (0xfff < uVar21) {
        lVar17 = *(longlong *)(lVar7 + -8);
        if (0x1f < (lVar7 - lVar17) - 8U) goto LAB_140162aa0;
        uVar21 = local_68 + 0x28;
      }
      thunk_FUN_14028af80(lVar17,uVar21);
    }
    lVar7 = lStack_130;
    local_70 = 0;
    local_68 = 0xf;
    local_80 = '\0';
    lVar17 = local_138;
    if (local_138 != 0) {
      for (; lVar17 != lVar7; lVar17 = lVar17 + 0x20) {
        FUN_140017240(lVar17);
      }
      uVar21 = local_128 - local_138 & 0xffffffffffffffe0;
      lVar17 = local_138;
      if (0xfff < uVar21) {
        lVar17 = *(longlong *)(local_138 + -8);
        if (0x1f < (local_138 - lVar17) - 8U) goto LAB_140162aa0;
        uVar21 = uVar21 + 0x27;
      }
      thunk_FUN_14028af80(lVar17,uVar21);
      local_128 = 0;
      local_138 = 0;
      lStack_130 = 0;
    }
    if (0xf < local_140) {
      uVar21 = local_140 + 1;
      pppppppuVar12 = (undefined8 *******)local_158;
      if (0xfff < uVar21) {
        pppppppuVar12 = (undefined8 *******)local_158[-1];
        if (0x1f < (ulonglong)((longlong)local_158 + (-8 - (longlong)pppppppuVar12))) {
LAB_140162aa0:
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          puVar18 = auStack_180;
LAB_140162aa7:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar18 + -8) = &UNK_140162aac;
          FUN_140012940();
        }
        uVar21 = local_140 + 0x28;
      }
      thunk_FUN_14028af80(pppppppuVar12,uVar21);
    }
  }
  else {
    pppppppuVar12 = (undefined8 *******)(lVar7 + 0x30);
    if (param_4 != pppppppuVar12) {
      if (0xf < *(ulonglong *)(lVar7 + 0x48)) {
        pppppppuVar12 = (undefined8 *******)*pppppppuVar12;
      }
      FUN_14000f880(param_4,pppppppuVar12,*(undefined8 *)(lVar7 + 0x40));
    }
    if (param_5 != 0) {
      lVar8 = *(longlong *)(lVar7 + 0x58);
      for (lVar17 = *(longlong *)(lVar7 + 0x50); lVar17 != lVar8; lVar17 = lVar17 + 0x20) {
        lVar7 = *(longlong *)(param_5 + 8);
        if (lVar7 == *(longlong *)(param_5 + 0x10)) {
          FUN_14008d090(param_5,lVar7,lVar17);
        }
        else {
          FUN_140016fc0(lVar7,lVar17);
          *(longlong *)(param_5 + 8) = *(longlong *)(param_5 + 8) + 0x20;
        }
      }
    }
  }
  return;
}

