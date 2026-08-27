// Function: FUN_14022c3c0
// Addr: 14022c3c0
// Size: 3025 bytes


void FUN_14022c3c0(longlong *param_1,char *param_2,longlong param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  size_t sVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  longlong lVar17;
  void *pvVar18;
  byte bVar19;
  longlong *plVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong *_Buf1;
  undefined8 *_Buf1_00;
  undefined8 *puVar24;
  undefined8 *******pppppppuVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong *plVar30;
  undefined8 *puVar31;
  undefined1 *puVar32;
  longlong lVar33;
  uint uVar34;
  char *pcVar35;
  undefined4 uVar36;
  float fVar37;
  longlong *local_res8;
  char *local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [24];
  ulonglong local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 ******local_1c0;
  undefined8 uStack_1b8;
  ulonglong local_1b0;
  ulonglong uStack_1a8;
  longlong *local_1a0;
  undefined8 *local_198;
  longlong *local_190;
  undefined1 local_188;
  undefined7 uStack_187;
  undefined8 local_178;
  ulonglong local_170;
  longlong local_148 [33];
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_14022f990();
  lVar17 = *param_1;
  local_1d0 = (undefined8 *)(lVar17 + 0x1a60);
  local_res20 = lVar17;
  FUN_1401c4000(local_1d0,param_1 + 3);
  FUN_1401d3650();
  if ((int)param_1[0x69] != 0) {
    FUN_1402d3dd0(param_1[0x4b]);
    FUN_1404217a0(local_148,0,0x100);
    lVar27 = 2;
    plVar13 = param_1 + 0x4b;
    plVar20 = local_148;
    do {
      lVar26 = plVar20[1];
      lVar33 = plVar20[2];
      lVar5 = plVar20[3];
      *plVar13 = *plVar20;
      plVar13[1] = lVar26;
      lVar26 = plVar20[4];
      lVar6 = plVar20[5];
      plVar13[2] = lVar33;
      plVar13[3] = lVar5;
      lVar33 = plVar20[6];
      lVar5 = plVar20[7];
      plVar13[4] = lVar26;
      plVar13[5] = lVar6;
      lVar26 = plVar20[8];
      lVar6 = plVar20[9];
      plVar13[6] = lVar33;
      plVar13[7] = lVar5;
      lVar33 = plVar20[10];
      lVar5 = plVar20[0xb];
      plVar13[8] = lVar26;
      plVar13[9] = lVar6;
      lVar26 = plVar20[0xc];
      lVar6 = plVar20[0xd];
      plVar13[10] = lVar33;
      plVar13[0xb] = lVar5;
      lVar33 = plVar20[0xe];
      lVar5 = plVar20[0xf];
      plVar13[0xc] = lVar26;
      plVar13[0xd] = lVar6;
      plVar13[0xe] = lVar33;
      plVar13[0xf] = lVar5;
      lVar27 = lVar27 + -1;
      plVar13 = plVar13 + 0x10;
      plVar20 = plVar20 + 0x10;
    } while (lVar27 != 0);
  }
  sVar12 = strlen(param_2);
  uVar28 = 0;
  uVar21 = 0xcbf29ce484222325;
  if (sVar12 != 0) {
    do {
      pbVar1 = (byte *)(param_2 + uVar28);
      uVar28 = uVar28 + 1;
      uVar21 = (uVar21 ^ *pbVar1) * 0x100000001b3;
    } while (uVar28 < sVar12);
  }
  uVar21 = uVar21 & *(ulonglong *)(lVar17 + 0x1ad8);
  lVar27 = *(longlong *)(lVar17 + 0x1ab0);
  lVar26 = *(longlong *)(*(longlong *)(lVar17 + 0x1ac0) + 8 + uVar21 * 0x10);
  if (lVar26 == lVar27) {
    lVar26 = 0;
  }
  else {
    lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x1ac0) + uVar21 * 0x10);
    cVar10 = FUN_14000d010(lVar26 + 0x10);
    while (cVar10 == '\0') {
      if (lVar26 == lVar17) {
        lVar26 = 0;
        break;
      }
      lVar26 = *(longlong *)(lVar26 + 8);
      cVar10 = FUN_14000d010(lVar26 + 0x10);
    }
  }
  lVar17 = local_res20;
  if ((lVar26 == 0) || (lVar26 == lVar27)) {
    uVar28 = 0;
    uVar21 = 0xcbf29ce484222325;
    if (sVar12 != 0) {
      do {
        pbVar1 = (byte *)(param_2 + uVar28);
        uVar28 = uVar28 + 1;
        uVar21 = (uVar21 ^ *pbVar1) * 0x100000001b3;
      } while (uVar28 < sVar12);
    }
    uVar21 = uVar21 & *(ulonglong *)(local_res20 + 0x1a98);
    lVar27 = *(longlong *)(local_res20 + 0x1a70);
    lVar26 = *(longlong *)(*(longlong *)(local_res20 + 0x1a80) + 8 + uVar21 * 0x10);
    if (lVar26 == lVar27) {
LAB_14022c622:
      lVar26 = 0;
    }
    else {
      lVar33 = *(longlong *)(*(longlong *)(local_res20 + 0x1a80) + uVar21 * 0x10);
      cVar10 = FUN_14000d010(lVar26 + 0x10,param_2);
      while (cVar10 == '\0') {
        if (lVar26 == lVar33) goto LAB_14022c622;
        lVar26 = *(longlong *)(lVar26 + 8);
        cVar10 = FUN_14000d010(lVar26 + 0x10,param_2);
      }
    }
    if ((lVar26 != 0) && (lVar26 != lVar27)) {
      plVar13 = *(longlong **)(lVar26 + 0x30);
LAB_14022cc5a:
      uVar16 = FUN_14028af20(0x1e0);
      uVar16 = FUN_1401c17a0(uVar16);
      puVar24 = (undefined8 *)(lVar17 + 0x1a60);
      uVar36 = FUN_1401c5490(puVar24,plVar13,uVar16);
      plVar13 = param_1 + 3;
      FUN_1401c4220(uVar36,uVar16,plVar13);
      FUN_140017170(&local_188,param_2);
      puVar15 = (undefined8 *)FUN_1401d9250(lVar17 + 0x1aa8,&local_188);
      *puVar15 = uVar16;
      uVar36 = FUN_140017240(&local_188);
      goto LAB_14022ccbf;
    }
    FUN_1400d3f80(&local_188,*(undefined8 *)(*(longlong *)(lVar17 + 0x1a60) + 0x1898),param_2,1);
    plVar13 = (longlong *)FUN_14028af20(0x28);
    uVar21 = 0;
    plVar13[2] = 0;
    *(undefined1 *)(plVar13 + 1) = 0;
    *(uint *)(plVar13 + 1) = *(uint *)(plVar13 + 1) & 0xfffffeff;
    plVar13[3] = 0;
    plVar13[4] = 0;
    local_190 = plVar13;
    FUN_14003f220(&local_188,plVar13,0);
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1c0 = (undefined8 *******)0x0;
    uStack_1b8 = 0;
    sVar12 = strlen(param_2);
    FUN_140017480(&local_1c0,param_2,sVar12);
    uVar28 = 0xcbf29ce484222325;
    pppppppuVar25 = &local_1c0;
    if (0xf < uStack_1a8) {
      pppppppuVar25 = (undefined8 *******)local_1c0;
    }
    local_1d8 = 0xcbf29ce484222325;
    if (local_1b0 != 0) {
      do {
        pbVar1 = (byte *)((longlong)pppppppuVar25 + uVar21);
        uVar21 = uVar21 + 1;
        uVar28 = (uVar28 ^ *pbVar1) * 0x100000001b3;
        local_1d8 = uVar28;
      } while (uVar21 < local_1b0);
    }
    FUN_1400110a0(lVar17 + 0x1a68,&local_1d0,&local_1c0);
    puVar15 = local_1c8;
    if (local_1c8 == (undefined8 *)0x0) {
      if (*(longlong *)(lVar17 + 0x1a78) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("unordered_map/set too long");
      }
      puVar15 = (undefined8 *)FUN_14028af20(0x38);
      puVar15[2] = local_1c0;
      puVar15[3] = uStack_1b8;
      puVar15[4] = local_1b0;
      puVar15[5] = uStack_1a8;
      local_1b0 = 0;
      uStack_1a8 = 0xf;
      local_1c0 = (undefined8 ******)((ulonglong)local_1c0 & 0xffffffffffffff00);
      puVar15[6] = 0;
      fVar37 = (float)(*(longlong *)(lVar17 + 0x1a78) + 1);
      uVar21 = *(ulonglong *)(lVar17 + 0x1aa0);
      puVar24 = local_1d0;
      uVar28 = local_1d8;
      local_198 = puVar15;
      if (*(float *)(lVar17 + 0x1a68) < fVar37 / (float)uVar21) {
        fVar37 = (float)FUN_140419fa0(fVar37 / *(float *)(lVar17 + 0x1a68));
        lVar27 = 0;
        if ((DAT_140492974 <= fVar37) && (fVar37 = fVar37 - DAT_140492974, fVar37 < DAT_140492974))
        {
          lVar27 = -0x8000000000000000;
        }
        uVar28 = 8;
        if (8 < (ulonglong)((longlong)fVar37 + lVar27)) {
          uVar28 = (longlong)fVar37 + lVar27;
        }
        uVar22 = uVar21;
        if ((uVar21 < uVar28) && ((0x1ff < uVar21 || (uVar22 = uVar21 * 8, uVar21 * 8 < uVar28)))) {
          uVar22 = uVar28;
        }
        for (lVar27 = 0x3f; 0xfffffffffffffffU >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
        if ((ulonglong)(1L << ((byte)lVar27 & 0x3f)) < uVar22) {
                    /* WARNING: Subroutine does not return */
          FUN_14028c2e0("invalid hash bucket count");
        }
        plVar13 = *(longlong **)(lVar17 + 0x1a70);
        uVar21 = uVar22 - 1 | 1;
        lVar27 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        bVar19 = (char)lVar27 + 1;
        lVar27 = 1L << (bVar19 & 0x3f);
        FUN_14004f190(lVar17 + 0x1a80,2L << (bVar19 & 0x3f),plVar13);
        *(longlong *)(lVar17 + 0x1aa0) = lVar27;
        *(longlong *)(lVar17 + 0x1a98) = lVar27 + -1;
        plVar20 = (longlong *)**(undefined8 **)(lVar17 + 0x1a70);
        lVar27 = lVar17;
joined_r0x00014022c8c3:
        if (plVar20 != plVar13) {
          uVar21 = plVar20[5];
          plVar14 = plVar20 + 2;
          plVar2 = (longlong *)*plVar20;
          if (0xf < uVar21) {
            plVar14 = (longlong *)plVar20[2];
          }
          uVar28 = plVar20[4];
          uVar22 = 0;
          uVar29 = 0xcbf29ce484222325;
          if (uVar28 != 0) {
            do {
              pbVar1 = (byte *)((longlong)plVar14 + uVar22);
              uVar22 = uVar22 + 1;
              uVar29 = (uVar29 ^ *pbVar1) * 0x100000001b3;
              lVar27 = local_res20;
            } while (uVar22 < uVar28);
          }
          local_1d0 = *(undefined8 **)(lVar27 + 0x1a80);
          uVar29 = *(ulonglong *)(lVar27 + 0x1a98) & uVar29;
          local_1a0 = (longlong *)local_1d0[uVar29 * 2];
          if (local_1a0 == plVar13) {
            local_1d0[uVar29 * 2] = plVar20;
            local_1d0[uVar29 * 2 + 1] = plVar20;
            plVar20 = plVar2;
            puVar15 = local_198;
            param_1 = local_res8;
          }
          else {
            plVar30 = (longlong *)local_1d0[uVar29 * 2 + 1];
            plVar14 = plVar30 + 2;
            if (0xf < (ulonglong)plVar30[5]) {
              plVar14 = (longlong *)*plVar14;
            }
            plVar23 = plVar20 + 2;
            if (0xf < uVar21) {
              plVar23 = (longlong *)plVar20[2];
            }
            if (uVar28 == plVar30[4]) {
              if ((uVar28 != 0) && (iVar11 = memcmp(plVar23,plVar14,uVar28), iVar11 != 0)) {
                uVar21 = plVar20[5];
                goto LAB_14022c9d9;
              }
              plVar30 = (longlong *)*plVar30;
              if (plVar30 != plVar20) {
                plVar14 = (longlong *)plVar20[1];
                *plVar14 = (longlong)plVar2;
                puVar15 = (undefined8 *)plVar2[1];
                *puVar15 = plVar30;
                puVar24 = (undefined8 *)plVar30[1];
                *puVar24 = plVar20;
                plVar30[1] = (longlong)puVar15;
                plVar2[1] = (longlong)plVar14;
                plVar20[1] = (longlong)puVar24;
              }
              local_1d0[uVar29 * 2 + 1] = plVar20;
              plVar20 = plVar2;
              puVar15 = local_198;
              param_1 = local_res8;
              lVar27 = local_res20;
            }
            else {
LAB_14022c9d9:
              plVar14 = local_1a0;
              if (local_1a0 != plVar30) {
                do {
                  plVar30 = (longlong *)plVar30[1];
                  plVar23 = plVar30 + 2;
                  if (0xf < (ulonglong)plVar30[5]) {
                    plVar23 = (longlong *)*plVar23;
                  }
                  if (uVar21 < 0x10) {
                    _Buf1 = plVar20 + 2;
                  }
                  else {
                    _Buf1 = (longlong *)plVar20[2];
                  }
                  if (uVar28 == plVar30[4]) {
                    if ((uVar28 == 0) || (iVar11 = memcmp(_Buf1,plVar23,uVar28), iVar11 == 0)) {
                      lVar17 = *plVar30;
                      plVar14 = (longlong *)plVar20[1];
                      *plVar14 = (longlong)plVar2;
                      plVar30 = (longlong *)plVar2[1];
                      *plVar30 = lVar17;
                      puVar15 = *(undefined8 **)(lVar17 + 8);
                      *puVar15 = plVar20;
                      *(longlong **)(lVar17 + 8) = plVar30;
                      plVar2[1] = (longlong)plVar14;
                      plVar20[1] = (longlong)puVar15;
                      plVar20 = plVar2;
                      puVar15 = local_198;
                      param_1 = local_res8;
                      lVar27 = local_res20;
                      goto joined_r0x00014022c8c3;
                    }
                    uVar21 = plVar20[5];
                    plVar14 = local_1a0;
                  }
                } while (plVar14 != plVar30);
              }
              plVar14 = (longlong *)plVar20[1];
              *plVar14 = (longlong)plVar2;
              puVar15 = (undefined8 *)plVar2[1];
              *puVar15 = plVar30;
              puVar24 = (undefined8 *)plVar30[1];
              *puVar24 = plVar20;
              plVar30[1] = (longlong)puVar15;
              plVar2[1] = (longlong)plVar14;
              plVar20[1] = (longlong)puVar24;
              local_1d0[uVar29 * 2] = plVar20;
              plVar20 = plVar2;
              puVar15 = local_198;
              param_1 = local_res8;
              lVar27 = local_res20;
            }
          }
          goto joined_r0x00014022c8c3;
        }
        local_res8 = (longlong *)0x0;
        FUN_14003a070(&local_res8);
        uVar28 = local_1d8;
        uVar21 = local_1d8 & *(ulonglong *)(lVar27 + 0x1a98);
        puVar31 = *(undefined8 **)(*(longlong *)(lVar27 + 0x1a80) + 8 + uVar21 * 0x10);
        puVar24 = *(undefined8 **)(local_res20 + 0x1a70);
        plVar13 = local_190;
        lVar17 = local_res20;
        if (puVar31 != *(undefined8 **)(local_res20 + 0x1a70)) {
          uVar22 = puVar15[5];
          sVar12 = puVar15[4];
          puVar3 = *(undefined8 **)(*(longlong *)(lVar27 + 0x1a80) + uVar21 * 0x10);
          while( true ) {
            puVar24 = puVar31 + 2;
            if (0xf < (ulonglong)puVar31[5]) {
              puVar24 = (undefined8 *)*puVar24;
            }
            if (uVar22 < 0x10) {
              _Buf1_00 = puVar15 + 2;
            }
            else {
              _Buf1_00 = (undefined8 *)puVar15[2];
            }
            if ((sVar12 == puVar31[4]) &&
               ((sVar12 == 0 || (iVar11 = memcmp(_Buf1_00,puVar24,sVar12), iVar11 == 0)))) break;
            puVar24 = puVar31;
            plVar13 = local_190;
            lVar17 = local_res20;
            if (puVar31 == puVar3) goto LAB_14022cb6d;
            puVar31 = (undefined8 *)puVar31[1];
          }
          puVar24 = (undefined8 *)*puVar31;
          plVar13 = local_190;
          lVar17 = local_res20;
        }
      }
LAB_14022cb6d:
      puVar31 = (undefined8 *)puVar24[1];
      *(longlong *)(lVar17 + 0x1a78) = *(longlong *)(lVar17 + 0x1a78) + 1;
      *puVar15 = puVar24;
      puVar15[1] = puVar31;
      *puVar31 = puVar15;
      puVar24[1] = puVar15;
      lVar27 = *(longlong *)(lVar17 + 0x1a80);
      uVar28 = *(ulonglong *)(lVar17 + 0x1a98) & uVar28;
      puVar3 = *(undefined8 **)(lVar27 + uVar28 * 0x10);
      if (puVar3 == *(undefined8 **)(lVar17 + 0x1a70)) {
        *(undefined8 **)(lVar27 + uVar28 * 0x10) = puVar15;
LAB_14022cbc0:
        *(undefined8 **)(lVar27 + 8 + uVar28 * 0x10) = puVar15;
      }
      else if (puVar3 == puVar24) {
        *(undefined8 **)(lVar27 + uVar28 * 0x10) = puVar15;
      }
      else if (*(undefined8 **)(lVar27 + 8 + uVar28 * 0x10) == puVar31) goto LAB_14022cbc0;
    }
    puVar24 = (undefined8 *)0x0;
    puVar15[6] = plVar13;
    if (uStack_1a8 < 0x10) {
LAB_14022cc06:
      if (0xf < local_170) {
        lVar26 = CONCAT71(uStack_187,local_188);
        uVar21 = local_170 + 1;
        lVar27 = lVar26;
        if (0xfff < uVar21) {
          lVar27 = *(longlong *)(lVar26 + -8);
          if (0x1f < (lVar26 - lVar27) - 8U) goto LAB_14022ccf1;
          uVar21 = local_170 + 0x28;
        }
        thunk_FUN_14028af80(lVar27,uVar21);
      }
      local_178 = 0;
      local_170 = 0xf;
      local_188 = 0;
      param_2 = local_res10;
      goto LAB_14022cc5a;
    }
    uVar21 = uStack_1a8 + 1;
    pppppppuVar25 = (undefined8 *******)local_1c0;
    if (uVar21 < 0x1000) {
LAB_14022cc01:
      thunk_FUN_14028af80(pppppppuVar25,uVar21);
      goto LAB_14022cc06;
    }
    pppppppuVar25 = (undefined8 *******)local_1c0[-1];
    if ((ulonglong)((longlong)local_1c0 + (-8 - (longlong)pppppppuVar25)) < 0x20) {
      uVar21 = uStack_1a8 + 0x28;
      goto LAB_14022cc01;
    }
LAB_14022ccf1:
    pcVar4 = (code *)swi(0x29);
    uVar36 = (*pcVar4)(5);
    puVar32 = auStack_1f0;
  }
  else {
    plVar13 = param_1 + 3;
    uVar36 = FUN_1401c4220();
    puVar24 = local_1d0;
LAB_14022ccbf:
    puVar32 = auStack_1f8;
    if ((local_res18 != 0) && (puVar32 = auStack_1f8, (*(byte *)(local_res18 + 100) & 1) != 0)) {
      *(byte *)((longlong)param_1 + 0x3f6) = *(byte *)((longlong)param_1 + 0x3f6) | 1;
      *(undefined4 *)((longlong)param_1 + 0x44) = 8;
      *(undefined1 *)((longlong)param_1 + 0x3f5) = *(undefined1 *)(local_res18 + 0x68);
      puVar32 = auStack_1f8;
      goto LAB_14022cd01;
    }
  }
  *(byte *)((longlong)param_1 + 0x3f6) = *(byte *)((longlong)param_1 + 0x3f6) & 0xfe;
LAB_14022cd01:
  *(undefined8 *)(puVar32 + -8) = 0x14022cd11;
  FUN_1401d3780(uVar36,plVar13,param_1 + 0x4b);
  *(undefined8 *)(puVar32 + -8) = 0x14022cd24;
  FUN_1401d2340(puVar24,plVar13,param_1 + 0x3f);
  lVar17 = *param_1;
  uVar34 = *(uint *)(param_1 + 4);
  *(undefined8 *)(puVar32 + -8) = 0x14022cd37;
  FUN_140031950(puVar32 + 0x70);
  *(undefined8 *)(puVar32 + -8) = 0x14022cd41;
  uVar16 = FUN_140017110(param_1 + 10);
  pcVar35 = (char *)0x0;
  if ((uVar34 >> 0x10 & 1) != 0) {
    pcVar35 = "genericropeparticle";
  }
  *(undefined8 *)(puVar32 + -8) = 0x14022cd69;
  lVar17 = FUN_140150110(lVar17 + 0x1630,uVar16,puVar32 + 0x70,pcVar35);
  param_1[0x6b] = lVar17;
  *(undefined8 *)(puVar32 + -8) = 0x14022cd7b;
  FUN_140155670(puVar32 + 0x70);
  lVar17 = param_1[0x80];
  *(undefined8 *)(puVar32 + -8) = 0x14022cd88;
  FUN_1402d3dd0(lVar17);
  iVar11 = *(int *)((longlong)param_1 + 0x44);
  if (iVar11 < 1) {
    param_1[0x80] = 0;
  }
  else {
    *(undefined8 *)(puVar32 + -8) = 0x14022cda6;
    pvVar18 = _aligned_malloc((longlong)iVar11 * 0xd0,0x10);
    param_1[0x80] = (longlong)pvVar18;
    pcVar35 = (char *)0x0;
    if (*(int *)((longlong)param_1 + 0x44) != 0) {
      do {
        lVar17 = param_1[0x80];
        lVar33 = (longlong)pcVar35 * 0xd0;
        uVar34 = (int)pcVar35 + 1;
        lVar26 = (longlong)pcVar35 * 0x20;
        *(undefined4 *)(lVar33 + 0xc0 + lVar17) = *(undefined4 *)((longlong)param_1 + lVar26 + 0xbc)
        ;
        lVar27 = param_1[(longlong)pcVar35 * 4 + 0x18];
        *(undefined8 *)(lVar33 + 0x40 + lVar17) = 0x3f800000;
        *(undefined8 *)(lVar33 + 0x48 + lVar17) = 0;
        *(undefined4 *)(lVar33 + 0x50 + lVar17) = 0;
        *(undefined8 *)(lVar33 + 0x54 + lVar17) = 0x3f800000;
        *(undefined8 *)(lVar33 + 0x5c + lVar17) = 0;
        *(undefined4 *)(lVar33 + 100 + lVar17) = 0;
        *(undefined8 *)(lVar33 + 0x68 + lVar17) = 0x3f800000;
        *(undefined8 *)(lVar33 + 0x70 + lVar17) = 0;
        *(undefined4 *)(lVar33 + 0x78 + lVar17) = 0;
        *(undefined4 *)(lVar33 + 0x7c + lVar17) = 0x3f800000;
        puVar15 = (undefined8 *)(lVar33 + 0x40 + lVar17);
        uVar16 = puVar15[1];
        puVar24 = (undefined8 *)(lVar33 + 0x50 + lVar17);
        uVar7 = *puVar24;
        uVar8 = puVar24[1];
        puVar24 = (undefined8 *)(lVar33 + 0x80 + lVar17);
        *puVar24 = *puVar15;
        puVar24[1] = uVar16;
        *(int *)(lVar33 + 0xc4 + lVar17) = (int)lVar27;
        puVar15 = (undefined8 *)(lVar33 + 0x60 + lVar17);
        uVar16 = *puVar15;
        uVar9 = puVar15[1];
        puVar15 = (undefined8 *)(lVar33 + 0x90 + lVar17);
        *puVar15 = uVar7;
        puVar15[1] = uVar8;
        puVar15 = (undefined8 *)(lVar33 + 0x70 + lVar17);
        uVar7 = *puVar15;
        uVar8 = puVar15[1];
        puVar15 = (undefined8 *)(lVar33 + 0xa0 + lVar17);
        *puVar15 = uVar16;
        puVar15[1] = uVar9;
        puVar15 = (undefined8 *)(lVar33 + 0x40 + lVar17);
        uVar16 = puVar15[1];
        *(undefined8 *)(lVar33 + lVar17) = *puVar15;
        ((undefined8 *)(lVar33 + lVar17))[1] = uVar16;
        puVar15 = (undefined8 *)(lVar33 + 0x60 + lVar17);
        uVar16 = *puVar15;
        uVar9 = puVar15[1];
        puVar15 = (undefined8 *)(lVar33 + 0xb0 + lVar17);
        *puVar15 = uVar7;
        puVar15[1] = uVar8;
        puVar15 = (undefined8 *)(lVar33 + 0x50 + lVar17);
        uVar7 = puVar15[1];
        puVar24 = (undefined8 *)(lVar33 + 0x10 + lVar17);
        *puVar24 = *puVar15;
        puVar24[1] = uVar7;
        puVar15 = (undefined8 *)(lVar33 + 0x70 + lVar17);
        uVar7 = *puVar15;
        uVar8 = puVar15[1];
        puVar15 = (undefined8 *)(lVar33 + 0x20 + lVar17);
        *puVar15 = uVar16;
        puVar15[1] = uVar9;
        puVar15 = (undefined8 *)(lVar33 + 0x30 + lVar17);
        *puVar15 = uVar7;
        puVar15[1] = uVar8;
        *(undefined4 *)(lVar33 + 0xb0 + lVar17) = *(undefined4 *)((longlong)param_1 + lVar26 + 0xc4)
        ;
        *(int *)(lVar33 + 0xb4 + lVar17) = (int)param_1[(longlong)pcVar35 * 4 + 0x19];
        *(undefined4 *)(lVar33 + 0xb8 + lVar17) = *(undefined4 *)((longlong)param_1 + lVar26 + 0xcc)
        ;
        puVar24 = (undefined8 *)(lVar33 + 0x80 + lVar17);
        uVar16 = puVar24[1];
        puVar15 = (undefined8 *)(lVar33 + 0x90 + lVar17);
        uVar7 = *puVar15;
        uVar8 = puVar15[1];
        puVar15 = (undefined8 *)(lVar33 + 0x40 + lVar17);
        *puVar15 = *puVar24;
        puVar15[1] = uVar16;
        puVar15 = (undefined8 *)(lVar33 + 0xa0 + lVar17);
        uVar16 = *puVar15;
        uVar9 = puVar15[1];
        puVar15 = (undefined8 *)(lVar33 + 0x50 + lVar17);
        *puVar15 = uVar7;
        puVar15[1] = uVar8;
        puVar15 = (undefined8 *)(lVar33 + 0xb0 + lVar17);
        uVar7 = *puVar15;
        uVar8 = puVar15[1];
        puVar15 = (undefined8 *)(lVar33 + 0x60 + lVar17);
        *puVar15 = uVar16;
        puVar15[1] = uVar9;
        puVar15 = (undefined8 *)(lVar33 + 0x80 + lVar17);
        uVar16 = *puVar15;
        uVar9 = puVar15[1];
        puVar15 = (undefined8 *)(lVar33 + 0x70 + lVar17);
        *puVar15 = uVar7;
        puVar15[1] = uVar8;
        puVar15 = (undefined8 *)(lVar33 + 0x90 + lVar17);
        uVar7 = *puVar15;
        uVar8 = puVar15[1];
        *(undefined8 *)(lVar33 + lVar17) = uVar16;
        ((undefined8 *)(lVar33 + lVar17))[1] = uVar9;
        puVar15 = (undefined8 *)(lVar33 + 0xa0 + lVar17);
        uVar16 = *puVar15;
        uVar9 = puVar15[1];
        puVar15 = (undefined8 *)(lVar33 + 0x10 + lVar17);
        *puVar15 = uVar7;
        puVar15[1] = uVar8;
        puVar15 = (undefined8 *)(lVar33 + 0xb0 + lVar17);
        uVar7 = *puVar15;
        uVar8 = puVar15[1];
        puVar15 = (undefined8 *)(lVar33 + 0x20 + lVar17);
        *puVar15 = uVar16;
        puVar15[1] = uVar9;
        puVar15 = (undefined8 *)(lVar33 + 0x30 + lVar17);
        *puVar15 = uVar7;
        puVar15[1] = uVar8;
        pcVar35 = (char *)(ulonglong)uVar34;
      } while (uVar34 < *(uint *)((longlong)param_1 + 0x44));
    }
  }
  return;
}

