// Function: FUN_1403ad900
// Addr: 1403ad900
// Size: 2852 bytes


undefined8
FUN_1403ad900(undefined8 *param_1,uint param_2,longlong param_3,undefined8 *param_4,longlong param_5
             ,uint *param_6,char param_7)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  char cVar12;
  char cVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  undefined8 uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  undefined8 *puVar22;
  longlong lVar23;
  short sVar24;
  uint uVar25;
  uint uVar26;
  byte *pbVar27;
  uint uVar28;
  int iVar29;
  byte *pbVar30;
  longlong lVar31;
  ushort uVar32;
  short sVar33;
  int iVar34;
  int *piVar35;
  int iVar36;
  uint *puVar37;
  byte *pbVar38;
  uint uVar39;
  bool bVar40;
  float fVar41;
  byte *local_res8;
  char local_res10;
  uint local_210;
  byte *local_200;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  byte *local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  uint local_1d8;
  uint local_1d4;
  undefined8 local_1d0;
  uint local_1c8;
  undefined1 local_1c0 [8];
  byte *local_1b8;
  uint local_1b0;
  undefined4 local_1ac;
  uint local_1a8;
  undefined4 uStack_1a4;
  byte *pbStack_1a0;
  int local_198;
  int iStack_194;
  uint uStack_190;
  uint uStack_18c;
  byte *local_178;
  uint uStack_170;
  undefined4 uStack_16c;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_118;
  byte *pbStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  byte *local_e8;
  undefined8 uStack_e0;
  byte *local_d8;
  
  if (param_2 < *(uint *)(param_1 + 1)) {
    puVar14 = (undefined8 *)*param_1;
    puVar22 = &DAT_14045dde0;
    puVar15 = &DAT_14045dde0;
    if (puVar14 != (undefined8 *)0x0) {
      puVar15 = puVar14;
    }
    if (0x13 < *(uint *)(puVar15 + 3)) {
      puVar22 = (undefined8 *)puVar15[2];
    }
    FUN_1403caca0(puVar22,local_1c0,puVar14,*(uint *)(param_1 + 1),param_2);
    pbVar38 = local_1b8;
    pbVar27 = (byte *)(ulonglong)local_1b0;
    pbVar30 = (byte *)&DAT_14045dde0;
    if (3 < local_1b0) {
      pbVar30 = local_1b8;
    }
    if ((uint)pbVar30[1] + (uint)*pbVar30 * 0x100 != 0) {
      *(undefined4 *)(param_5 + 0x7c) = 0;
      puVar14 = &DAT_14045dde0;
      if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
        puVar14 = (undefined8 *)*param_1;
      }
      puVar22 = &DAT_14045dde0;
      if (0x13 < *(uint *)(puVar14 + 3)) {
        puVar22 = (undefined8 *)puVar14[2];
      }
      local_198 = (uint)*(byte *)((longlong)puVar22 + 5) +
                  (uint)*(byte *)((longlong)puVar22 + 4) * 0x100;
      local_178 = local_1b8;
      uStack_16c = local_1ac;
      pbStack_1a0 = (byte *)&DAT_14045dde0;
      if (3 < local_1b0) {
        pbStack_1a0 = local_1b8;
      }
      iStack_194 = local_198 * 2;
      uStack_170 = local_1b0;
      local_1e8 = pbStack_1a0 + 4;
      uVar25 = (uint)pbStack_1a0[1] + (uint)*pbStack_1a0 * 0x100;
      uVar39 = uVar25 & 0xfff;
      local_1f4 = 0;
      uStack_190 = 0;
      local_1d8 = uVar39;
      local_1a8 = uVar39;
      if (uVar25 >> 0xf != 0) {
        uVar25 = (uint)pbStack_1a0[2] * 0x100 + (uint)pbStack_1a0[3];
        if (uVar25 == 0) {
          pbVar30 = (byte *)&DAT_14045dde0;
        }
        else {
          pbVar30 = local_1b8 + uVar25;
        }
        local_res8 = pbVar30;
        cVar12 = FUN_1403bd130(&local_res8,param_5 + 0x78,local_1b8 + (longlong)pbVar27);
        if (cVar12 == '\0') {
          return 1;
        }
        uStack_190 = (int)local_res8 - (int)pbVar30;
        pbVar27 = (byte *)(ulonglong)local_1b0;
      }
      uVar25 = uStack_170;
      pbVar30 = local_178;
      if ((uVar39 != 0) && (local_1e8 + (4 - (longlong)pbVar38) <= pbVar27)) {
        bVar1 = local_1e8[2];
        if ((bVar1 & 0xc0) == 0) {
          uStack_18c = 4;
        }
        else {
          uStack_18c = ((uint)(bVar1 >> 7) + (bVar1 >> 6 & 1) * 2) * iStack_194 + 4;
        }
        if (local_1e8 + ((ulonglong)uStack_18c - (longlong)pbVar38) <= pbVar27) {
          bVar6 = false;
          local_res8 = (byte *)((ulonglong)local_res8 & 0xffffffffffffff00);
          local_1d0 = *(undefined8 *)(param_5 + 0x40);
          *(undefined4 *)(param_5 + 0x3c) = 0;
          lVar31 = *(longlong *)(param_5 + 0x70);
          local_148 = param_5 + 0x68;
          *(undefined4 *)(param_5 + 0x6c) = 0;
          dVar11 = DAT_140492848;
          fVar10 = DAT_1404927d4;
          fVar9 = DAT_140492790;
          fVar8 = DAT_140471b58;
          fVar7 = DAT_140471b28;
          param_1 = (undefined8 *)*param_1;
          local_1e0 = 0;
          puVar14 = &DAT_14045dde0;
          if (param_1 != (undefined8 *)0x0) {
            puVar14 = param_1;
          }
          local_210 = 0;
          if (*(uint *)(puVar14 + 3) < 0x14) {
            puVar14 = &DAT_14045dde0;
          }
          else {
            puVar14 = (undefined8 *)puVar14[2];
          }
          local_1d4 = (uint)*(byte *)((longlong)puVar14 + 5) +
                      (uint)*(byte *)((longlong)puVar14 + 4) * 0x100;
          puVar14 = &DAT_14045dde0;
          if (param_1 != (undefined8 *)0x0) {
            puVar14 = param_1;
          }
          if (*(uint *)(puVar14 + 3) < 0x14) {
            puVar14 = &DAT_14045dde0;
          }
          else {
            puVar14 = (undefined8 *)puVar14[2];
          }
          puVar22 = &DAT_14045dde0;
          puVar15 = &DAT_14045dde0;
          if (param_1 != (undefined8 *)0x0) {
            puVar15 = param_1;
          }
          if (0x13 < *(uint *)(puVar15 + 3)) {
            puVar22 = (undefined8 *)puVar15[2];
          }
          local_158 = (longlong)puVar22 +
                      (ulonglong)*(byte *)((longlong)puVar14 + 0xb) +
                      ((ulonglong)*(byte *)((longlong)puVar14 + 10) +
                      (ulonglong)
                      CONCAT11(*(undefined1 *)(puVar14 + 1),*(undefined1 *)((longlong)puVar14 + 9))
                      * 0x100) * 0x100;
          puVar14 = &DAT_14045dde0;
          if (param_1 != (undefined8 *)0x0) {
            puVar14 = param_1;
          }
          if (*(uint *)(puVar14 + 3) < 0x14) {
            puVar14 = &DAT_14045dde0;
          }
          else {
            puVar14 = (undefined8 *)puVar14[2];
          }
          uVar39 = *(uint *)(param_4 + 2);
          uVar3 = *(uint *)(param_3 + 0x10);
          uVar17 = CONCAT44(uStack_16c,uStack_170);
          local_140 = param_5 + 0x88;
          local_1c8 = ((uint)*(byte *)((longlong)puVar14 + 7) +
                      (uint)*(byte *)((longlong)puVar14 + 6) * 0x100) * local_1d4;
          cVar12 = '\0';
          local_res10 = '\0';
          local_150 = *(longlong *)(param_3 + 8);
          do {
            uVar26 = (uint)local_1e8[2] * 0x100 + (uint)local_1e8[3];
            uVar28 = uVar26 & 0x4000;
            local_1f4 = uStack_190;
            local_1f0 = uStack_18c;
            if (uVar26 >> 0xf == 0) {
              uVar26 = uVar26 & 0xfff;
              puVar37 = param_6;
              if (param_6 == (uint *)0x0) {
LAB_1403add32:
                if ((uVar26 + 1) * local_1d4 <= local_1c8) {
                  pbVar38 = (byte *)(local_158 + (ulonglong)(uVar26 * local_1d4) * 2);
                  goto LAB_1403add5e;
                }
                dVar5 = 0.0;
              }
              else {
                if (uVar26 < *param_6) {
                  uVar4 = param_6[(ulonglong)uVar26 + 1];
                  if (uVar4 == 0) {
                    fVar41 = 0.0;
                  }
                  else {
                    if (uVar4 == 0x80000000) goto LAB_1403add32;
                    fVar41 = (float)(int)uVar4 * fVar7;
                  }
                }
                else {
                  fVar41 = 0.0;
                }
                if (((uVar28 != 0) && (fVar41 != 0.0)) && (fVar41 != fVar10)) {
                  puVar37 = (uint *)0x0;
                  goto LAB_1403add32;
                }
                dVar5 = (double)fVar41;
              }
            }
            else {
              pbVar38 = local_1e8 + 4;
              puVar37 = (uint *)0x0;
LAB_1403add5e:
              pbVar27 = (byte *)0x0;
              pbVar16 = (byte *)0x0;
              if (uVar28 != 0) {
                if ((local_1e8[2] & 0x80) != 0) {
                  pbVar16 = (byte *)(ulonglong)local_1d4;
                }
                pbVar27 = local_1e8 + (longlong)(pbVar16 + 2) * 2;
                pbVar16 = local_1e8 + (longlong)(pbVar16 + (ulonglong)local_1d4 + 2) * 2;
              }
              uVar20 = 0;
              dVar5 = dVar11;
              cVar12 = local_res10;
              if (local_1d4 != 0) {
                do {
                  uVar32 = (ushort)pbVar38[uVar20 * 2 + 1] + (ushort)pbVar38[uVar20 * 2] * 0x100;
                  if (uVar32 != 0) {
                    if ((uint)uVar20 < uVar3) {
                      piVar35 = (int *)(local_150 + uVar20 * 4);
                    }
                    else {
                      piVar35 = (int *)&DAT_14045dde0;
                    }
                    iVar36 = *piVar35;
                    if (iVar36 == 0) goto LAB_1403adf06;
                    iVar34 = (int)(short)uVar32;
                    if (iVar36 != iVar34) {
                      if (uVar28 == 0) {
                        iVar29 = iVar34;
                        if (uVar32 < 0x8000) {
                          iVar29 = 0;
                        }
                        if (iVar29 <= iVar36) {
                          iVar29 = iVar34;
                          if ((short)uVar32 < 1) {
                            iVar29 = 0;
                          }
                          if (iVar36 <= iVar29) {
                            dVar5 = dVar5 * ((double)iVar36 / (double)iVar34);
                            goto LAB_1403ade8b;
                          }
                        }
LAB_1403adf06:
                        dVar5 = 0.0;
                        break;
                      }
                      puVar37 = (uint *)0x0;
                      sVar24 = (ushort)pbVar27[uVar20 * 2] * 0x100 + (ushort)pbVar27[uVar20 * 2 + 1]
                      ;
                      iVar29 = (int)sVar24;
                      if (iVar29 <= iVar34) {
                        sVar33 = (ushort)pbVar16[uVar20 * 2 + 1] +
                                 (ushort)pbVar16[uVar20 * 2] * 0x100;
                        iVar21 = (int)sVar33;
                        if ((iVar34 <= iVar21) && ((-1 < sVar24 || (sVar33 < 1)))) {
                          if ((iVar36 < iVar29) || (iVar21 < iVar36)) {
                            dVar5 = 0.0;
                            goto LAB_1403adf77;
                          }
                          if (iVar36 < iVar34) {
                            if (iVar34 != iVar29) {
                              dVar5 = dVar5 * ((double)(iVar36 - iVar29) / (double)(iVar34 - iVar29)
                                              );
                            }
                          }
                          else if (iVar34 != iVar21) {
                            dVar5 = dVar5 * ((double)(iVar21 - iVar36) / (double)(iVar21 - iVar34));
                          }
                        }
                      }
                    }
                  }
LAB_1403ade8b:
                  uVar26 = (uint)uVar20 + 1;
                  uVar20 = (ulonglong)uVar26;
                } while (uVar26 < local_1d4);
              }
              if (puVar37 != (uint *)0x0) {
                bVar1 = local_1e8[2];
                bVar2 = local_1e8[3];
                if (((uint)bVar1 * 0x100 + (uint)bVar2 & 0xfff) < *puVar37) {
                  fVar41 = (float)FUN_14041a690((float)dVar5 * fVar8 + fVar9);
                  puVar37[(ulonglong)(CONCAT11(bVar1,bVar2) & 0xfff) + 1] = (int)fVar41;
                  cVar12 = local_res10;
                }
              }
            }
LAB_1403adf77:
            lVar23 = local_148;
            pbVar38 = local_1e8;
            fVar41 = (float)dVar5;
            if (fVar41 != 0.0) {
              if ((char)local_res8 == '\0') {
                local_118 = CONCAT44(uStack_1a4,local_1a8);
                local_108 = CONCAT44(iStack_194,local_198);
                uStack_100 = CONCAT44(uStack_18c,uStack_190);
                local_e8 = pbVar30;
                pbStack_110 = pbStack_1a0;
                pbVar27 = local_1e8;
                uVar26 = uStack_18c;
                uVar28 = local_1a8;
                while ((pbVar27[2] & 0x20) == 0) {
                  uVar28 = uVar28 - 1;
                  pbVar27 = pbVar27 + uVar26;
                  if (((int)uVar28 < 1) ||
                     ((byte *)(ulonglong)uVar25 < pbVar27 + (4 - (longlong)pbVar30)))
                  goto LAB_1403ae037;
                  bVar1 = pbVar27[2];
                  if ((bVar1 & 0xc0) == 0) {
                    uVar26 = 4;
                  }
                  else {
                    uVar26 = ((uint)(bVar1 >> 7) + (bVar1 >> 6 & 1) * 2) * iStack_194 + 4;
                  }
                  if ((byte *)(ulonglong)uVar25 < pbVar27 + ((ulonglong)uVar26 - (longlong)pbVar30))
                  goto LAB_1403ae037;
                }
                bVar6 = true;
LAB_1403ae037:
                local_res8 = (byte *)CONCAT71(local_res8._1_7_,1);
                uStack_e0 = uVar17;
                local_d8 = local_1e8;
              }
              uVar26 = (uint)pbStack_1a0[2] * 0x100 + (uint)pbStack_1a0[3];
              if (uVar26 == 0) {
                pbVar27 = (byte *)&DAT_14045dde0;
              }
              else {
                pbVar27 = local_1b8 + uVar26;
              }
              pbVar27 = pbVar27 + local_1f4;
              if (pbVar27 < local_1b8) {
                return 0;
              }
              if (local_1b8 + local_1b0 < pbVar27) {
                return 0;
              }
              uVar26 = (uint)*local_1e8 * 0x100 + (uint)local_1e8[1];
              if (((int)local_1b8 - (int)pbVar27) + local_1b0 < uVar26) {
                return 0;
              }
              local_200 = pbVar27;
              if (local_210 == 0) {
                local_210 = uVar39;
                if ((int)uVar39 < 0) {
                  local_210 = 0;
                }
                cVar12 = FUN_1403a4d50(local_148,local_210,0);
                if (cVar12 == '\0') {
                  return 0;
                }
                *(uint *)(lVar23 + 4) = local_210;
                lVar31 = *(longlong *)(lVar23 + 8);
                if (param_7 == '\0') {
                  uVar20 = 0;
                  uVar28 = uVar39;
                }
                else {
                  uVar20 = (ulonglong)(uVar39 - 4);
                  uVar28 = 4;
                }
                if ((uVar28 * 3 & 0x3fffffff) != 0) {
                  uVar17 = func_0x000140421870(lVar31 + uVar20 * 0xc,0,uVar28 * 0xc);
                  return uVar17;
                }
              }
              bVar1 = pbVar38[2];
              pbVar27 = pbVar27 + uVar26;
              if (((bVar1 & 0x20) != 0) &&
                 (cVar12 = FUN_1403bd130(&local_200,local_140,pbVar27), cVar12 == '\0')) {
                return 0;
              }
              bVar40 = (bVar1 & 0x20) != 0;
              lVar23 = 0x80;
              if (bVar40) {
                lVar23 = 0x90;
              }
              lVar18 = 0x7c;
              if (bVar40) {
                lVar18 = 0x8c;
              }
              local_1dc = *(uint *)(lVar18 + param_5);
              local_1f8 = local_1dc;
              if (((local_1dc == 0) && (local_1f8 = uVar39, param_7 != '\0')) && (3 < uVar39)) {
                iVar36 = uVar39 - 4;
              }
              else {
                iVar36 = 0;
                if (local_1dc != 0) goto LAB_1403ae23e;
              }
              if (bVar6) {
LAB_1403ae23e:
                local_200 = *(byte **)(param_5 + lVar23);
                if ((int)local_1f8 < 0) {
                  local_1f8 = 0;
                }
                    /* WARNING: Subroutine does not return */
                FUN_1403a4650(param_5 + 0x48,local_1f8,0);
              }
              local_138 = *param_4;
              uStack_130 = param_4[1];
              local_128 = param_4[2];
              cVar12 = FUN_1403729e0(&local_200,&local_138,fVar41,pbVar27,iVar36);
              if (cVar12 == '\0') {
                return 0;
              }
              local_138 = *param_4;
              uStack_130 = param_4[1];
              local_128 = param_4[2];
              cVar13 = FUN_140372f00(&local_200,&local_138,fVar41,pbVar27,iVar36);
              cVar12 = local_res10;
              if (cVar13 == '\0') {
                return 0;
              }
            }
            uStack_190 = local_1e8[1] + local_1f4 + (uint)*local_1e8 * 0x100;
            local_1e8 = local_1e8 + local_1f0;
            local_1d8 = local_1d8 - 1;
            if (((int)local_1d8 < 1) ||
               ((byte *)(ulonglong)local_1b0 < local_1e8 + (4 - (longlong)local_1b8))) break;
            bVar1 = local_1e8[2];
            if ((bVar1 & 0xc0) == 0) {
              uStack_18c = 4;
            }
            else {
              uStack_18c = ((uint)(bVar1 >> 7) + (bVar1 >> 6 & 1) * 2) * iStack_194 + 4;
            }
            local_1a8 = local_1d8;
          } while (local_1e8 + ((ulonglong)uStack_18c - (longlong)local_1b8) <=
                   (byte *)(ulonglong)local_1b0);
          if (cVar12 != '\0') {
            if (param_7 == '\0') {
              uVar20 = 0;
            }
            else {
              uVar20 = (ulonglong)(uVar39 - 4);
            }
            if ((uint)uVar20 < uVar39) {
              lVar23 = param_4[1];
              if (3 < uVar39 - (uint)uVar20) {
                do {
                  iVar36 = (int)uVar20;
                  uVar19 = (ulonglong)(iVar36 + 1);
                  *(float *)(lVar23 + uVar20 * 0xc) =
                       *(float *)(lVar23 + uVar20 * 0xc) + *(float *)(lVar31 + uVar20 * 0xc);
                  *(float *)(lVar23 + 4 + uVar20 * 0xc) =
                       *(float *)(lVar31 + 4 + uVar20 * 0xc) + *(float *)(lVar23 + 4 + uVar20 * 0xc)
                  ;
                  *(float *)(lVar23 + uVar19 * 0xc) =
                       *(float *)(lVar31 + uVar19 * 0xc) + *(float *)(lVar23 + uVar19 * 0xc);
                  *(float *)(lVar23 + 4 + uVar19 * 0xc) =
                       *(float *)(lVar31 + 4 + uVar19 * 0xc) + *(float *)(lVar23 + 4 + uVar19 * 0xc)
                  ;
                  uVar20 = (ulonglong)(iVar36 + 2);
                  *(float *)(lVar23 + uVar20 * 0xc) =
                       *(float *)(lVar31 + uVar20 * 0xc) + *(float *)(lVar23 + uVar20 * 0xc);
                  *(float *)(lVar23 + 4 + uVar20 * 0xc) =
                       *(float *)(lVar31 + 4 + uVar20 * 0xc) + *(float *)(lVar23 + 4 + uVar20 * 0xc)
                  ;
                  uVar19 = (ulonglong)(iVar36 + 3);
                  uVar25 = iVar36 + 4;
                  uVar20 = (ulonglong)uVar25;
                  *(float *)(lVar23 + uVar19 * 0xc) =
                       *(float *)(lVar31 + uVar19 * 0xc) + *(float *)(lVar23 + uVar19 * 0xc);
                  *(float *)(lVar23 + 4 + uVar19 * 0xc) =
                       *(float *)(lVar31 + 4 + uVar19 * 0xc) + *(float *)(lVar23 + 4 + uVar19 * 0xc)
                  ;
                } while (uVar25 < uVar39 - 3);
                if (uVar39 <= uVar25) {
                  return 1;
                }
              }
              do {
                uVar25 = (int)uVar20 + 1;
                *(float *)(lVar23 + uVar20 * 0xc) =
                     *(float *)(lVar23 + uVar20 * 0xc) + *(float *)(lVar31 + uVar20 * 0xc);
                *(float *)(lVar23 + 4 + uVar20 * 0xc) =
                     *(float *)(lVar31 + 4 + uVar20 * 0xc) + *(float *)(lVar23 + 4 + uVar20 * 0xc);
                uVar20 = (ulonglong)uVar25;
              } while (uVar25 < uVar39);
            }
          }
        }
      }
    }
  }
  return 1;
}

