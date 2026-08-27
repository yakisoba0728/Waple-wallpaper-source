// Function: FUN_1403ad830
// Addr: 1403ad830
// Size: 7792 bytes


undefined8
FUN_1403ad830(undefined8 *param_1,uint param_2,longlong param_3,undefined8 *param_4,longlong param_5
             ,uint *param_6,char param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  double dVar11;
  undefined8 uVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  char cVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  undefined8 *puVar28;
  longlong lVar29;
  short sVar30;
  uint uVar31;
  uint uVar32;
  byte *pbVar33;
  uint uVar34;
  int iVar35;
  byte *pbVar36;
  byte *pbVar37;
  longlong lVar38;
  uint uVar39;
  ushort uVar40;
  short sVar41;
  int iVar42;
  int iVar43;
  uint uVar44;
  uint uVar45;
  int *piVar46;
  uint *puVar47;
  byte *pbVar48;
  ulonglong uVar49;
  uint uVar50;
  bool bVar51;
  float fVar52;
  byte *local_res8;
  uint local_res10;
  uint local_228;
  uint local_210;
  byte *local_200;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  byte *local_1e8;
  int local_1e0;
  uint local_1dc;
  uint local_1d8;
  uint local_1d4;
  longlong local_1d0;
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
  undefined1 local_108 [16];
  byte *local_e8;
  undefined8 uStack_e0;
  byte *local_d8;
  
  if (param_2 < *(uint *)(param_1 + 1)) {
    puVar20 = (undefined8 *)*param_1;
    puVar28 = &DAT_14045dd10;
    puVar21 = &DAT_14045dd10;
    if (puVar20 != (undefined8 *)0x0) {
      puVar21 = puVar20;
    }
    if (0x13 < *(uint *)(puVar21 + 3)) {
      puVar28 = (undefined8 *)puVar21[2];
    }
    FUN_1403cabd0(puVar28,local_1c0,puVar20,*(uint *)(param_1 + 1),param_2);
    pbVar48 = local_1b8;
    pbVar33 = (byte *)(ulonglong)local_1b0;
    pbVar36 = (byte *)&DAT_14045dd10;
    if (3 < local_1b0) {
      pbVar36 = local_1b8;
    }
    if ((uint)pbVar36[1] + (uint)*pbVar36 * 0x100 != 0) {
      *(undefined4 *)(param_5 + 0x7c) = 0;
      puVar20 = &DAT_14045dd10;
      if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
        puVar20 = (undefined8 *)*param_1;
      }
      puVar28 = &DAT_14045dd10;
      if (0x13 < *(uint *)(puVar20 + 3)) {
        puVar28 = (undefined8 *)puVar20[2];
      }
      local_198 = (uint)*(byte *)((longlong)puVar28 + 5) +
                  (uint)*(byte *)((longlong)puVar28 + 4) * 0x100;
      local_178 = local_1b8;
      uStack_16c = local_1ac;
      pbStack_1a0 = (byte *)&DAT_14045dd10;
      if (3 < local_1b0) {
        pbStack_1a0 = local_1b8;
      }
      iStack_194 = local_198 * 2;
      uStack_170 = local_1b0;
      local_1e8 = pbStack_1a0 + 4;
      uVar31 = (uint)pbStack_1a0[1] + (uint)*pbStack_1a0 * 0x100;
      uVar50 = uVar31 & 0xfff;
      local_1f4 = 0;
      uStack_190 = 0;
      local_1d8 = uVar50;
      local_1a8 = uVar50;
      if (uVar31 >> 0xf != 0) {
        uVar31 = (uint)pbStack_1a0[2] * 0x100 + (uint)pbStack_1a0[3];
        if (uVar31 == 0) {
          pbVar36 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar36 = local_1b8 + uVar31;
        }
        local_res8 = pbVar36;
        cVar19 = FUN_1403bd060(&local_res8,param_5 + 0x78,local_1b8 + (longlong)pbVar33);
        if (cVar19 == '\0') {
          return 1;
        }
        uStack_190 = (int)local_res8 - (int)pbVar36;
        pbVar33 = (byte *)(ulonglong)local_1b0;
      }
      uVar31 = uStack_170;
      pbVar36 = local_178;
      if ((uVar50 != 0) && (local_1e8 + (4 - (longlong)pbVar48) <= pbVar33)) {
        bVar8 = local_1e8[2];
        if ((bVar8 & 0xc0) == 0) {
          uStack_18c = 4;
        }
        else {
          uStack_18c = ((uint)(bVar8 >> 7) + (bVar8 >> 6 & 1) * 2) * iStack_194 + 4;
        }
        if (local_1e8 + ((ulonglong)uStack_18c - (longlong)pbVar48) <= pbVar33) {
          bVar13 = false;
          local_res8 = (byte *)((ulonglong)local_res8 & 0xffffffffffffff00);
          local_1d0 = *(longlong *)(param_5 + 0x40);
          *(undefined4 *)(param_5 + 0x3c) = 0;
          lVar38 = *(longlong *)(param_5 + 0x70);
          local_148 = param_5 + 0x68;
          *(undefined4 *)(param_5 + 0x6c) = 0;
          dVar18 = DAT_140492778;
          fVar17 = DAT_140492704;
          fVar16 = DAT_1404926c0;
          fVar15 = DAT_140471a88;
          fVar14 = DAT_140471a58;
          param_1 = (undefined8 *)*param_1;
          local_1e0 = 0;
          puVar20 = &DAT_14045dd10;
          if (param_1 != (undefined8 *)0x0) {
            puVar20 = param_1;
          }
          local_210 = 0;
          if (*(uint *)(puVar20 + 3) < 0x14) {
            puVar20 = &DAT_14045dd10;
          }
          else {
            puVar20 = (undefined8 *)puVar20[2];
          }
          local_1d4 = (uint)*(byte *)((longlong)puVar20 + 5) +
                      (uint)*(byte *)((longlong)puVar20 + 4) * 0x100;
          puVar20 = &DAT_14045dd10;
          if (param_1 != (undefined8 *)0x0) {
            puVar20 = param_1;
          }
          if (*(uint *)(puVar20 + 3) < 0x14) {
            puVar20 = &DAT_14045dd10;
          }
          else {
            puVar20 = (undefined8 *)puVar20[2];
          }
          puVar28 = &DAT_14045dd10;
          puVar21 = &DAT_14045dd10;
          if (param_1 != (undefined8 *)0x0) {
            puVar21 = param_1;
          }
          if (0x13 < *(uint *)(puVar21 + 3)) {
            puVar28 = (undefined8 *)puVar21[2];
          }
          local_158 = (longlong)puVar28 +
                      (ulonglong)*(byte *)((longlong)puVar20 + 0xb) +
                      ((ulonglong)*(byte *)((longlong)puVar20 + 10) +
                      (ulonglong)
                      CONCAT11(*(undefined1 *)(puVar20 + 1),*(undefined1 *)((longlong)puVar20 + 9))
                      * 0x100) * 0x100;
          puVar20 = &DAT_14045dd10;
          if (param_1 != (undefined8 *)0x0) {
            puVar20 = param_1;
          }
          if (*(uint *)(puVar20 + 3) < 0x14) {
            puVar20 = &DAT_14045dd10;
          }
          else {
            puVar20 = (undefined8 *)puVar20[2];
          }
          uVar50 = *(uint *)(param_4 + 2);
          uVar10 = *(uint *)(param_3 + 0x10);
          uVar12 = CONCAT44(uStack_16c,uStack_170);
          local_140 = param_5 + 0x88;
          local_1c8 = ((uint)*(byte *)((longlong)puVar20 + 7) +
                      (uint)*(byte *)((longlong)puVar20 + 6) * 0x100) * local_1d4;
          cVar19 = '\0';
          local_res10 = local_res10 & 0xffffff00;
          local_150 = *(longlong *)(param_3 + 8);
          do {
            uVar32 = (uint)local_1e8[2] * 0x100 + (uint)local_1e8[3];
            uVar34 = uVar32 & 0x4000;
            local_1f4 = uStack_190;
            local_1f0 = uStack_18c;
            if (uVar32 >> 0xf == 0) {
              uVar32 = uVar32 & 0xfff;
              puVar47 = param_6;
              if (param_6 == (uint *)0x0) {
LAB_1403adc62:
                if ((uVar32 + 1) * local_1d4 <= local_1c8) {
                  pbVar48 = (byte *)(local_158 + (ulonglong)(uVar32 * local_1d4) * 2);
                  goto LAB_1403adc8e;
                }
                dVar11 = 0.0;
              }
              else {
                if (uVar32 < *param_6) {
                  uVar45 = param_6[(ulonglong)uVar32 + 1];
                  if (uVar45 == 0) {
                    fVar52 = 0.0;
                  }
                  else {
                    if (uVar45 == 0x80000000) goto LAB_1403adc62;
                    fVar52 = (float)(int)uVar45 * fVar14;
                  }
                }
                else {
                  fVar52 = 0.0;
                }
                if (((uVar34 != 0) && (fVar52 != 0.0)) && (fVar52 != fVar17)) {
                  puVar47 = (uint *)0x0;
                  goto LAB_1403adc62;
                }
                dVar11 = (double)fVar52;
              }
            }
            else {
              pbVar48 = local_1e8 + 4;
              puVar47 = (uint *)0x0;
LAB_1403adc8e:
              pbVar33 = (byte *)0x0;
              pbVar37 = (byte *)0x0;
              if (uVar34 != 0) {
                if ((local_1e8[2] & 0x80) != 0) {
                  pbVar37 = (byte *)(ulonglong)local_1d4;
                }
                pbVar33 = local_1e8 + (longlong)(pbVar37 + 2) * 2;
                pbVar37 = local_1e8 + (longlong)(pbVar37 + (ulonglong)local_1d4 + 2) * 2;
              }
              uVar24 = 0;
              dVar11 = dVar18;
              if (local_1d4 != 0) {
                do {
                  uVar40 = (ushort)pbVar48[uVar24 * 2 + 1] + (ushort)pbVar48[uVar24 * 2] * 0x100;
                  if (uVar40 != 0) {
                    if ((uint)uVar24 < uVar10) {
                      piVar46 = (int *)(local_150 + uVar24 * 4);
                    }
                    else {
                      piVar46 = (int *)&DAT_14045dd10;
                    }
                    iVar42 = *piVar46;
                    if (iVar42 == 0) goto LAB_1403ade36;
                    iVar43 = (int)(short)uVar40;
                    if (iVar42 != iVar43) {
                      if (uVar34 == 0) {
                        iVar35 = iVar43;
                        if (uVar40 < 0x8000) {
                          iVar35 = 0;
                        }
                        if (iVar35 <= iVar42) {
                          iVar35 = iVar43;
                          if ((short)uVar40 < 1) {
                            iVar35 = 0;
                          }
                          if (iVar42 <= iVar35) {
                            dVar11 = dVar11 * ((double)iVar42 / (double)iVar43);
                            goto LAB_1403addbb;
                          }
                        }
LAB_1403ade36:
                        dVar11 = 0.0;
                        break;
                      }
                      puVar47 = (uint *)0x0;
                      sVar30 = (ushort)pbVar33[uVar24 * 2] * 0x100 + (ushort)pbVar33[uVar24 * 2 + 1]
                      ;
                      iVar35 = (int)sVar30;
                      if (iVar35 <= iVar43) {
                        sVar41 = (ushort)pbVar37[uVar24 * 2 + 1] +
                                 (ushort)pbVar37[uVar24 * 2] * 0x100;
                        iVar26 = (int)sVar41;
                        if ((iVar43 <= iVar26) && ((-1 < sVar30 || (sVar41 < 1)))) {
                          if ((iVar42 < iVar35) || (iVar26 < iVar42)) {
                            dVar11 = 0.0;
                            goto LAB_1403ade8d;
                          }
                          if (iVar42 < iVar43) {
                            if (iVar43 != iVar35) {
                              dVar11 = dVar11 * ((double)(iVar42 - iVar35) /
                                                (double)(iVar43 - iVar35));
                            }
                          }
                          else if (iVar43 != iVar26) {
                            dVar11 = dVar11 * ((double)(iVar26 - iVar42) / (double)(iVar26 - iVar43)
                                              );
                          }
                        }
                      }
                    }
                  }
LAB_1403addbb:
                  uVar32 = (uint)uVar24 + 1;
                  uVar24 = (ulonglong)uVar32;
                } while (uVar32 < local_1d4);
              }
              if (puVar47 != (uint *)0x0) {
                bVar8 = local_1e8[2];
                bVar9 = local_1e8[3];
                if (((uint)bVar8 * 0x100 + (uint)bVar9 & 0xfff) < *puVar47) {
                  fVar52 = (float)FUN_14041a5c0((float)dVar11 * fVar15 + fVar16);
                  puVar47[(ulonglong)(CONCAT11(bVar8,bVar9) & 0xfff) + 1] = (int)fVar52;
                }
              }
LAB_1403ade8d:
              cVar19 = (char)local_res10;
            }
            lVar29 = local_148;
            pbVar48 = local_1e8;
            fVar52 = (float)dVar11;
            if (fVar52 != 0.0) {
              if ((char)local_res8 == '\0') {
                local_118 = CONCAT44(uStack_1a4,local_1a8);
                local_108._4_4_ = iStack_194;
                local_108._0_4_ = local_198;
                local_108._8_4_ = uStack_190;
                local_108._12_4_ = uStack_18c;
                local_e8 = pbVar36;
                pbStack_110 = pbStack_1a0;
                pbVar33 = local_1e8;
                uVar32 = uStack_18c;
                uVar34 = local_1a8;
                while ((pbVar33[2] & 0x20) == 0) {
                  uVar34 = uVar34 - 1;
                  pbVar33 = pbVar33 + uVar32;
                  if (((int)uVar34 < 1) ||
                     ((byte *)(ulonglong)uVar31 < pbVar33 + (4 - (longlong)pbVar36)))
                  goto LAB_1403adf67;
                  bVar8 = pbVar33[2];
                  if ((bVar8 & 0xc0) == 0) {
                    uVar32 = 4;
                  }
                  else {
                    uVar32 = ((uint)(bVar8 >> 7) + (bVar8 >> 6 & 1) * 2) * iStack_194 + 4;
                  }
                  if ((byte *)(ulonglong)uVar31 < pbVar33 + ((ulonglong)uVar32 - (longlong)pbVar36))
                  goto LAB_1403adf67;
                }
                bVar13 = true;
LAB_1403adf67:
                local_res8 = (byte *)CONCAT71(local_res8._1_7_,1);
                uStack_e0 = uVar12;
                local_d8 = local_1e8;
              }
              uVar32 = (uint)pbStack_1a0[2] * 0x100 + (uint)pbStack_1a0[3];
              if (uVar32 == 0) {
                pbVar33 = (byte *)&DAT_14045dd10;
              }
              else {
                pbVar33 = local_1b8 + uVar32;
              }
              pbVar33 = pbVar33 + local_1f4;
              if (pbVar33 < local_1b8) {
                return 0;
              }
              if (local_1b8 + local_1b0 < pbVar33) {
                return 0;
              }
              uVar32 = (uint)*local_1e8 * 0x100 + (uint)local_1e8[1];
              if (((int)local_1b8 - (int)pbVar33) + local_1b0 < uVar32) {
                return 0;
              }
              local_200 = pbVar33;
              if (local_210 == 0) {
                local_210 = uVar50;
                if ((int)uVar50 < 0) {
                  local_210 = 0;
                }
                cVar19 = FUN_1403a4c80(local_148,local_210,0);
                if (cVar19 == '\0') {
                  return 0;
                }
                *(uint *)(lVar29 + 4) = local_210;
                lVar38 = *(longlong *)(lVar29 + 8);
                if (param_7 == '\0') {
                  uVar24 = 0;
                  uVar34 = uVar50;
                }
                else {
                  uVar24 = (ulonglong)(uVar50 - 4);
                  uVar34 = 4;
                }
                if ((uVar34 * 3 & 0x3fffffff) != 0) {
                  FUN_1404217a0(lVar38 + uVar24 * 0xc,0,uVar34 * 0xc);
                }
              }
              bVar8 = pbVar48[2];
              pbVar48 = pbVar33 + uVar32;
              if (((bVar8 & 0x20) != 0) &&
                 (cVar19 = FUN_1403bd060(&local_200,local_140,pbVar48), pbVar33 = local_200,
                 cVar19 == '\0')) {
                return 0;
              }
              bVar51 = (bVar8 & 0x20) != 0;
              lVar29 = 0x80;
              if (bVar51) {
                lVar29 = 0x90;
              }
              lVar22 = 0x7c;
              if (bVar51) {
                lVar22 = 0x8c;
              }
              local_1dc = *(uint *)(lVar22 + param_5);
              local_228 = local_1dc;
              if (((local_1dc == 0) && (local_228 = uVar50, param_7 != '\0')) && (3 < uVar50)) {
                uVar32 = uVar50 - 4;
LAB_1403ae0e0:
                uVar34 = uVar32;
                if (!bVar13) {
                  local_138 = *param_4;
                  uStack_130 = param_4[1];
                  local_128 = param_4[2];
                  cVar19 = FUN_140372910(&local_200,&local_138,fVar52,pbVar48,uVar34);
                  if (cVar19 == '\0') {
                    return 0;
                  }
                  local_138 = *param_4;
                  uStack_130 = param_4[1];
                  local_128 = param_4[2];
                  cVar19 = FUN_140372e30(&local_200,&local_138,fVar52,pbVar48,uVar34);
                  if (cVar19 == '\0') {
                    return 0;
                  }
                  cVar19 = (char)local_res10;
                  goto LAB_1403aeb04;
                }
              }
              else {
                uVar34 = 0;
                uVar32 = 0;
                if (local_1dc == 0) goto LAB_1403ae0e0;
              }
              local_200 = *(byte **)(param_5 + lVar29);
              uVar32 = local_228;
              if ((int)local_228 < 0) {
                uVar32 = 0;
              }
              local_1f8 = uVar32;
              cVar19 = FUN_1403a4580(param_5 + 0x48,uVar32);
              if (cVar19 == '\0') {
                return 0;
              }
              uVar24 = 0;
              *(uint *)(param_5 + 0x4c) = uVar32;
              pbVar37 = pbVar33;
              if (uVar32 != 0) {
                do {
                  pbVar33 = pbVar37 + 1;
                  if (pbVar48 < pbVar33) {
                    return 0;
                  }
                  bVar8 = *pbVar37;
                  uVar44 = (bVar8 & 0x3f) + 1;
                  uVar45 = (uint)uVar24;
                  uVar39 = uVar44 + uVar45;
                  uVar24 = (ulonglong)uVar39;
                  if (uVar32 < uVar39) {
                    return 0;
                  }
                  if (uVar45 < uVar34) {
                    uVar23 = (ulonglong)uVar44;
                    if (uVar34 - uVar45 <= uVar44) {
                      uVar23 = (ulonglong)(uVar34 - uVar45);
                    }
                  }
                  else {
                    uVar23 = 0;
                  }
                  iVar42 = (int)uVar23;
                  uVar45 = uVar45 + iVar42;
                  uVar25 = (ulonglong)uVar45;
                  uVar27 = bVar8 & 0xc0;
                  if (uVar27 == 0x80) {
                    if ((uVar39 - uVar45 & 0x3fffffff) != 0) {
                      FUN_1404217a0(*(longlong *)(param_5 + 0x50) + uVar25 * 4,0);
                    }
                  }
                  else if (uVar27 == 0x40) {
                    if (pbVar48 < pbVar33 + uVar44 * 2) {
                      return 0;
                    }
                    pbVar33 = pbVar33 + (uint)(iVar42 * 2);
                    uVar45 = uVar45 + 3;
                    while (uVar44 = (uint)uVar25, uVar45 < uVar39) {
                      *(int *)(*(longlong *)(param_5 + 0x50) + uVar25 * 4) =
                           (int)(short)((ushort)pbVar33[1] + (ushort)*pbVar33 * 0x100);
                      *(int *)(*(longlong *)(param_5 + 0x50) + (ulonglong)(uVar44 + 1) * 4) =
                           (int)(short)((ushort)pbVar33[3] + (ushort)pbVar33[2] * 0x100);
                      *(int *)(*(longlong *)(param_5 + 0x50) + (ulonglong)(uVar44 + 2) * 4) =
                           (int)(short)((ushort)pbVar33[4] * 0x100 + (ushort)pbVar33[5]);
                      pbVar37 = pbVar33 + 7;
                      pbVar1 = pbVar33 + 6;
                      pbVar33 = pbVar33 + 8;
                      uVar25 = (ulonglong)(uVar44 + 4);
                      *(int *)(*(longlong *)(param_5 + 0x50) + (ulonglong)(uVar44 + 3) * 4) =
                           (int)(short)((ushort)*pbVar1 * 0x100 + (ushort)*pbVar37);
                      uVar32 = local_1f8;
                      uVar45 = uVar44 + 7;
                    }
                    while (uVar24 = uVar25, uVar44 < uVar39) {
                      bVar8 = *pbVar33;
                      pbVar37 = pbVar33 + 1;
                      pbVar33 = pbVar33 + 2;
                      *(int *)(*(longlong *)(param_5 + 0x50) + uVar25 * 4) =
                           (int)(short)((ushort)*pbVar37 + (ushort)bVar8 * 0x100);
                      uVar44 = (int)uVar25 + 1;
                      uVar25 = (ulonglong)uVar44;
                      uVar32 = local_1f8;
                    }
                  }
                  else if (uVar27 == 0xc0) {
                    if (pbVar48 < pbVar33 + uVar44 * 4) {
                      return 0;
                    }
                    pbVar33 = pbVar33 + (uint)(iVar42 * 4);
                    while (uVar24 = uVar25, uVar45 < uVar39) {
                      bVar8 = *pbVar33;
                      pbVar37 = pbVar33 + 1;
                      pbVar1 = pbVar33 + 2;
                      pbVar2 = pbVar33 + 3;
                      pbVar33 = pbVar33 + 4;
                      *(uint *)(*(longlong *)(param_5 + 0x50) + uVar25 * 4) =
                           (((uint)*pbVar37 + (uint)bVar8 * 0x100) * 0x100 + (uint)*pbVar1) * 0x100
                           + (uint)*pbVar2;
                      uVar45 = (int)uVar25 + 1;
                      uVar25 = (ulonglong)uVar45;
                    }
                  }
                  else {
                    uVar24 = uVar25;
                    if ((bVar8 & 0xc0) == 0) {
                      if (pbVar48 < pbVar33 + uVar44) {
                        return 0;
                      }
                      uVar45 = uVar45 + 3;
                      pbVar33 = pbVar33 + uVar23;
                      while (uVar44 = (uint)uVar25, uVar24 = uVar25, uVar45 < uVar39) {
                        *(int *)(*(longlong *)(param_5 + 0x50) + uVar25 * 4) = (int)(char)*pbVar33;
                        *(int *)(*(longlong *)(param_5 + 0x50) + (ulonglong)(uVar44 + 1) * 4) =
                             (int)(char)pbVar33[1];
                        *(int *)(*(longlong *)(param_5 + 0x50) + (ulonglong)(uVar44 + 2) * 4) =
                             (int)(char)pbVar33[2];
                        uVar25 = (ulonglong)(uVar44 + 4);
                        *(int *)(*(longlong *)(param_5 + 0x50) + (ulonglong)(uVar44 + 3) * 4) =
                             (int)(char)pbVar33[3];
                        pbVar33 = pbVar33 + 4;
                        uVar45 = uVar44 + 7;
                      }
                      while (uVar44 < uVar39) {
                        bVar8 = *pbVar33;
                        pbVar33 = pbVar33 + 1;
                        *(int *)(*(longlong *)(param_5 + 0x50) + uVar24 * 4) = (int)(char)bVar8;
                        uVar44 = (int)uVar24 + 1;
                        uVar24 = (ulonglong)uVar44;
                      }
                    }
                  }
                  pbVar37 = pbVar33;
                } while ((uint)uVar24 < uVar32);
              }
              cVar19 = FUN_1403a4580(param_5 + 0x58);
              if (cVar19 == '\0') {
                return 0;
              }
              uVar24 = 0;
              *(uint *)(param_5 + 0x5c) = uVar32;
              if (uVar32 != 0) {
                do {
                  pbVar37 = pbVar33 + 1;
                  if (pbVar48 < pbVar37) {
                    return 0;
                  }
                  bVar8 = *pbVar33;
                  uVar44 = (bVar8 & 0x3f) + 1;
                  uVar45 = (uint)uVar24;
                  uVar39 = uVar45 + uVar44;
                  uVar24 = (ulonglong)uVar39;
                  if (uVar32 < uVar39) {
                    return 0;
                  }
                  if (uVar45 < uVar34) {
                    uVar23 = (ulonglong)uVar44;
                    if (uVar34 - uVar45 <= uVar44) {
                      uVar23 = (ulonglong)(uVar34 - uVar45);
                    }
                  }
                  else {
                    uVar23 = 0;
                  }
                  iVar42 = (int)uVar23;
                  uVar45 = uVar45 + iVar42;
                  uVar25 = (ulonglong)uVar45;
                  uVar27 = bVar8 & 0xc0;
                  if (uVar27 == 0x80) {
                    if ((uVar39 - uVar45 & 0x3fffffff) != 0) {
                      FUN_1404217a0(*(longlong *)(param_5 + 0x60) + uVar25 * 4);
                    }
                  }
                  else if (uVar27 == 0x40) {
                    if (pbVar48 < pbVar37 + uVar44 * 2) {
                      return 0;
                    }
                    pbVar37 = pbVar37 + (uint)(iVar42 * 2);
                    uVar45 = uVar45 + 3;
                    while (uVar44 = (uint)uVar25, uVar45 < uVar39) {
                      *(int *)(*(longlong *)(param_5 + 0x60) + uVar25 * 4) =
                           (int)(short)((ushort)pbVar37[1] + (ushort)*pbVar37 * 0x100);
                      *(int *)(*(longlong *)(param_5 + 0x60) + (ulonglong)(uVar44 + 1) * 4) =
                           (int)(short)((ushort)pbVar37[3] + (ushort)pbVar37[2] * 0x100);
                      *(int *)(*(longlong *)(param_5 + 0x60) + (ulonglong)(uVar44 + 2) * 4) =
                           (int)(short)((ushort)pbVar37[4] * 0x100 + (ushort)pbVar37[5]);
                      pbVar33 = pbVar37 + 7;
                      pbVar1 = pbVar37 + 6;
                      pbVar37 = pbVar37 + 8;
                      uVar25 = (ulonglong)(uVar44 + 4);
                      *(int *)(*(longlong *)(param_5 + 0x60) + (ulonglong)(uVar44 + 3) * 4) =
                           (int)(short)((ushort)*pbVar1 * 0x100 + (ushort)*pbVar33);
                      uVar32 = local_1f8;
                      uVar45 = uVar44 + 7;
                    }
                    while (uVar24 = uVar25, uVar44 < uVar39) {
                      bVar8 = *pbVar37;
                      pbVar33 = pbVar37 + 1;
                      pbVar37 = pbVar37 + 2;
                      *(int *)(*(longlong *)(param_5 + 0x60) + uVar25 * 4) =
                           (int)(short)((ushort)*pbVar33 + (ushort)bVar8 * 0x100);
                      uVar44 = (int)uVar25 + 1;
                      uVar25 = (ulonglong)uVar44;
                      uVar32 = local_1f8;
                    }
                  }
                  else if (uVar27 == 0xc0) {
                    if (pbVar48 < pbVar37 + uVar44 * 4) {
                      return 0;
                    }
                    pbVar37 = pbVar37 + (uint)(iVar42 * 4);
                    while (uVar24 = uVar25, uVar45 < uVar39) {
                      bVar8 = *pbVar37;
                      pbVar33 = pbVar37 + 1;
                      pbVar1 = pbVar37 + 2;
                      pbVar2 = pbVar37 + 3;
                      pbVar37 = pbVar37 + 4;
                      *(uint *)(*(longlong *)(param_5 + 0x60) + uVar25 * 4) =
                           (((uint)*pbVar33 + (uint)bVar8 * 0x100) * 0x100 + (uint)*pbVar1) * 0x100
                           + (uint)*pbVar2;
                      uVar45 = (int)uVar25 + 1;
                      uVar25 = (ulonglong)uVar45;
                    }
                  }
                  else {
                    uVar24 = uVar25;
                    if ((bVar8 & 0xc0) == 0) {
                      if (pbVar48 < pbVar37 + uVar44) {
                        return 0;
                      }
                      uVar45 = uVar45 + 3;
                      pbVar37 = pbVar37 + uVar23;
                      while (uVar44 = (uint)uVar25, uVar24 = uVar25, uVar45 < uVar39) {
                        *(int *)(*(longlong *)(param_5 + 0x60) + uVar25 * 4) = (int)(char)*pbVar37;
                        *(int *)(*(longlong *)(param_5 + 0x60) + (ulonglong)(uVar44 + 1) * 4) =
                             (int)(char)pbVar37[1];
                        *(int *)(*(longlong *)(param_5 + 0x60) + (ulonglong)(uVar44 + 2) * 4) =
                             (int)(char)pbVar37[2];
                        uVar25 = (ulonglong)(uVar44 + 4);
                        *(int *)(*(longlong *)(param_5 + 0x60) + (ulonglong)(uVar44 + 3) * 4) =
                             (int)(char)pbVar37[3];
                        pbVar37 = pbVar37 + 4;
                        uVar45 = uVar44 + 7;
                      }
                      while (uVar44 < uVar39) {
                        bVar8 = *pbVar37;
                        pbVar37 = pbVar37 + 1;
                        *(int *)(*(longlong *)(param_5 + 0x60) + uVar24 * 4) = (int)(char)bVar8;
                        uVar44 = (int)uVar24 + 1;
                        uVar24 = (ulonglong)uVar44;
                      }
                    }
                  }
                  pbVar33 = pbVar37;
                } while ((uint)uVar24 < uVar32);
              }
              uVar32 = local_1dc;
              if (local_1dc != 0) {
                if ((local_1e0 == 0) && (param_7 == '\0')) {
                  iVar42 = *(int *)(param_4 + 2);
                  FUN_1403a4c80(param_5 + 0x38,*(int *)(param_5 + 0x3c) + iVar42);
                  iVar43 = *(int *)(param_5 + 0x38);
                  if (-1 < iVar43) {
                    if ((iVar42 * 3 & 0x3fffffffU) != 0) {
                      FUN_1404210f0(*(longlong *)(param_5 + 0x40) +
                                    (ulonglong)*(uint *)(param_5 + 0x3c) * 0xc,param_4[1]);
                      iVar43 = *(int *)(param_5 + 0x38);
                    }
                    *(int *)(param_5 + 0x3c) = *(int *)(param_5 + 0x3c) + iVar42;
                  }
                  if (iVar43 < 0) {
                    return 0;
                  }
                  local_1d0 = *(longlong *)(param_5 + 0x40);
                  local_1e0 = *(int *)(param_5 + 0x3c);
                }
                uVar32 = local_1dc;
                if ((char)local_res10 != '\0') {
                  if (param_7 == '\0') {
                    uVar24 = 0;
                  }
                  else {
                    uVar24 = (ulonglong)(uVar50 - 4);
                  }
                  if ((uint)uVar24 < uVar50) {
                    lVar29 = param_4[1];
                    if (3 < uVar50 - (uint)uVar24) {
                      do {
                        iVar42 = (int)uVar24;
                        uVar23 = (ulonglong)(iVar42 + 1);
                        *(float *)(lVar29 + uVar24 * 0xc) =
                             *(float *)(lVar38 + uVar24 * 0xc) + *(float *)(lVar29 + uVar24 * 0xc);
                        *(float *)(lVar29 + 4 + uVar24 * 0xc) =
                             *(float *)(lVar38 + 4 + uVar24 * 0xc) +
                             *(float *)(lVar29 + 4 + uVar24 * 0xc);
                        *(float *)(lVar29 + uVar23 * 0xc) =
                             *(float *)(lVar29 + uVar23 * 0xc) + *(float *)(lVar38 + uVar23 * 0xc);
                        *(float *)(lVar29 + 4 + uVar23 * 0xc) =
                             *(float *)(lVar38 + 4 + uVar23 * 0xc) +
                             *(float *)(lVar29 + 4 + uVar23 * 0xc);
                        uVar24 = (ulonglong)(iVar42 + 2);
                        *(float *)(lVar29 + uVar24 * 0xc) =
                             *(float *)(lVar29 + uVar24 * 0xc) + *(float *)(lVar38 + uVar24 * 0xc);
                        *(float *)(lVar29 + 4 + uVar24 * 0xc) =
                             *(float *)(lVar38 + 4 + uVar24 * 0xc) +
                             *(float *)(lVar29 + 4 + uVar24 * 0xc);
                        uVar23 = (ulonglong)(iVar42 + 3);
                        uVar34 = iVar42 + 4;
                        uVar24 = (ulonglong)uVar34;
                        *(float *)(lVar29 + uVar23 * 0xc) =
                             *(float *)(lVar29 + uVar23 * 0xc) + *(float *)(lVar38 + uVar23 * 0xc);
                        *(float *)(lVar29 + 4 + uVar23 * 0xc) =
                             *(float *)(lVar38 + 4 + uVar23 * 0xc) +
                             *(float *)(lVar29 + 4 + uVar23 * 0xc);
                      } while (uVar34 < uVar50 - 3);
                      if (uVar50 <= uVar34) goto LAB_1403ae92f;
                    }
                    do {
                      uVar34 = (int)uVar24 + 1;
                      *(float *)(lVar29 + uVar24 * 0xc) =
                           *(float *)(lVar29 + uVar24 * 0xc) + *(float *)(lVar38 + uVar24 * 0xc);
                      *(float *)(lVar29 + 4 + uVar24 * 0xc) =
                           *(float *)(lVar38 + 4 + uVar24 * 0xc) +
                           *(float *)(lVar29 + 4 + uVar24 * 0xc);
                      uVar24 = (ulonglong)uVar34;
                    } while (uVar34 < uVar50);
                  }
                }
LAB_1403ae92f:
                if (param_7 == '\0') {
                  uVar24 = 0;
                  uVar34 = uVar50;
                }
                else {
                  uVar24 = (ulonglong)(uVar50 - 4);
                  uVar34 = 4;
                }
                if ((uVar34 * 3 & 0x3fffffff) != 0) {
                  FUN_1404217a0(lVar38 + uVar24 * 0xc);
                }
              }
              if (fVar52 == fVar17) {
                if (uVar32 == 0) {
                  if (param_7 == '\0') {
                    uVar24 = 0;
                  }
                  else {
                    uVar24 = (ulonglong)(uVar50 - 4);
                  }
                  if ((uint)uVar24 < uVar50) {
                    if (3 < uVar50 - (uint)uVar24) {
                      do {
                        iVar42 = *(int *)(*(longlong *)(param_5 + 0x60) + uVar24 * 4);
                        iVar43 = (int)uVar24;
                        uVar32 = iVar43 + 1;
                        uVar23 = (ulonglong)uVar32;
                        *(float *)(lVar38 + uVar24 * 0xc) =
                             (float)*(int *)(*(longlong *)(param_5 + 0x50) + uVar24 * 4) +
                             *(float *)(lVar38 + uVar24 * 0xc);
                        *(float *)(lVar38 + 4 + uVar24 * 0xc) =
                             (float)iVar42 + *(float *)(lVar38 + 4 + uVar24 * 0xc);
                        iVar42 = *(int *)(*(longlong *)(param_5 + 0x60) + (ulonglong)uVar32 * 4);
                        uVar34 = iVar43 + 2;
                        uVar25 = (ulonglong)uVar34;
                        *(float *)(lVar38 + uVar23 * 0xc) =
                             (float)*(int *)(*(longlong *)(param_5 + 0x50) + (ulonglong)uVar32 * 4)
                             + *(float *)(lVar38 + uVar23 * 0xc);
                        *(float *)(lVar38 + 4 + uVar23 * 0xc) =
                             (float)iVar42 + *(float *)(lVar38 + 4 + uVar23 * 0xc);
                        iVar42 = *(int *)(*(longlong *)(param_5 + 0x60) + (ulonglong)uVar34 * 4);
                        uVar32 = iVar43 + 3;
                        uVar23 = (ulonglong)uVar32;
                        uVar24 = (ulonglong)(iVar43 + 4U);
                        *(float *)(lVar38 + uVar25 * 0xc) =
                             (float)*(int *)(*(longlong *)(param_5 + 0x50) + (ulonglong)uVar34 * 4)
                             + *(float *)(lVar38 + uVar25 * 0xc);
                        *(float *)(lVar38 + 4 + uVar25 * 0xc) =
                             (float)iVar42 + *(float *)(lVar38 + 4 + uVar25 * 0xc);
                        iVar42 = *(int *)(*(longlong *)(param_5 + 0x60) + (ulonglong)uVar32 * 4);
                        *(float *)(lVar38 + uVar23 * 0xc) =
                             (float)*(int *)(*(longlong *)(param_5 + 0x50) + (ulonglong)uVar32 * 4)
                             + *(float *)(lVar38 + uVar23 * 0xc);
                        *(float *)(lVar38 + 4 + uVar23 * 0xc) =
                             (float)iVar42 + *(float *)(lVar38 + 4 + uVar23 * 0xc);
                      } while (iVar43 + 4U < uVar50 - 3);
                    }
                    uVar32 = (uint)uVar24;
                    uVar23 = uVar24;
                    while (uVar32 < uVar50) {
                      uVar32 = (int)uVar24 + 1;
                      uVar24 = (ulonglong)uVar32;
                      iVar42 = *(int *)(*(longlong *)(param_5 + 0x50) + uVar23 * 4);
                      *(float *)(lVar38 + 4 + uVar23 * 0xc) =
                           (float)*(int *)(*(longlong *)(param_5 + 0x60) + uVar23 * 4) +
                           *(float *)(lVar38 + 4 + uVar23 * 0xc);
                      *(float *)(lVar38 + uVar23 * 0xc) =
                           (float)iVar42 + *(float *)(lVar38 + uVar23 * 0xc);
                      uVar23 = uVar23 + 1;
                    }
                  }
                }
                else {
                  uVar24 = 0;
                  uVar34 = (uint)DAT_14045dd10;
                  if (3 < local_228) {
                    do {
                      uVar44 = (uint)uVar24;
                      uVar45 = uVar34;
                      uVar39 = uVar34;
                      if (uVar44 < uVar32) {
                        uVar45 = *(uint *)(local_200 + uVar24 * 4);
                        uVar39 = (uint)DAT_1404e4f20;
                      }
                      DAT_1404e4f20._0_4_ = uVar39;
                      if ((uVar45 < local_210) && ((param_7 == '\0' || (uVar50 - 4 <= uVar45)))) {
                        uVar23 = (ulonglong)uVar45;
                        *(undefined1 *)(lVar38 + 8 + uVar23 * 0xc) = 1;
                        iVar42 = *(int *)(*(longlong *)(param_5 + 0x60) + uVar24 * 4);
                        *(float *)(lVar38 + uVar23 * 0xc) =
                             (float)*(int *)(*(longlong *)(param_5 + 0x50) + uVar24 * 4) +
                             *(float *)(lVar38 + uVar23 * 0xc);
                        *(float *)(lVar38 + 4 + uVar23 * 0xc) =
                             (float)iVar42 + *(float *)(lVar38 + 4 + uVar23 * 0xc);
                        uVar34 = (uint)DAT_14045dd10;
                      }
                      uVar24 = (ulonglong)(uVar44 + 1);
                      uVar45 = uVar34;
                      uVar39 = uVar34;
                      if (uVar44 + 1 < uVar32) {
                        uVar45 = *(uint *)(local_200 + uVar24 * 4);
                        uVar39 = (uint)DAT_1404e4f20;
                      }
                      DAT_1404e4f20._0_4_ = uVar39;
                      if ((uVar45 < local_210) && ((param_7 == '\0' || (uVar50 - 4 <= uVar45)))) {
                        uVar23 = (ulonglong)uVar45;
                        *(undefined1 *)(lVar38 + 8 + uVar23 * 0xc) = 1;
                        iVar42 = *(int *)(*(longlong *)(param_5 + 0x60) + uVar24 * 4);
                        *(float *)(lVar38 + uVar23 * 0xc) =
                             (float)*(int *)(*(longlong *)(param_5 + 0x50) + uVar24 * 4) +
                             *(float *)(lVar38 + uVar23 * 0xc);
                        *(float *)(lVar38 + 4 + uVar23 * 0xc) =
                             (float)iVar42 + *(float *)(lVar38 + 4 + uVar23 * 0xc);
                        uVar34 = (uint)DAT_14045dd10;
                      }
                      uVar24 = (ulonglong)(uVar44 + 2);
                      uVar45 = uVar34;
                      uVar39 = uVar34;
                      if (uVar44 + 2 < uVar32) {
                        uVar45 = *(uint *)(local_200 + uVar24 * 4);
                        uVar39 = (uint)DAT_1404e4f20;
                      }
                      DAT_1404e4f20._0_4_ = uVar39;
                      if ((uVar45 < local_210) && ((param_7 == '\0' || (uVar50 - 4 <= uVar45)))) {
                        uVar23 = (ulonglong)uVar45;
                        *(undefined1 *)(lVar38 + 8 + uVar23 * 0xc) = 1;
                        iVar42 = *(int *)(*(longlong *)(param_5 + 0x60) + uVar24 * 4);
                        *(float *)(lVar38 + uVar23 * 0xc) =
                             (float)*(int *)(*(longlong *)(param_5 + 0x50) + uVar24 * 4) +
                             *(float *)(lVar38 + uVar23 * 0xc);
                        *(float *)(lVar38 + 4 + uVar23 * 0xc) =
                             (float)iVar42 + *(float *)(lVar38 + 4 + uVar23 * 0xc);
                        uVar34 = (uint)DAT_14045dd10;
                      }
                      uVar24 = (ulonglong)(uVar44 + 3);
                      uVar45 = uVar34;
                      uVar39 = uVar34;
                      if (uVar44 + 3 < uVar32) {
                        uVar45 = *(uint *)(local_200 + uVar24 * 4);
                        uVar39 = (uint)DAT_1404e4f20;
                      }
                      DAT_1404e4f20._0_4_ = uVar39;
                      if ((uVar45 < local_210) && ((param_7 == '\0' || (uVar50 - 4 <= uVar45)))) {
                        uVar23 = (ulonglong)uVar45;
                        *(undefined1 *)(lVar38 + 8 + uVar23 * 0xc) = 1;
                        iVar42 = *(int *)(*(longlong *)(param_5 + 0x60) + uVar24 * 4);
                        *(float *)(lVar38 + uVar23 * 0xc) =
                             (float)*(int *)(*(longlong *)(param_5 + 0x50) + uVar24 * 4) +
                             *(float *)(lVar38 + uVar23 * 0xc);
                        *(float *)(lVar38 + 4 + uVar23 * 0xc) =
                             (float)iVar42 + *(float *)(lVar38 + 4 + uVar23 * 0xc);
                        uVar34 = (uint)DAT_14045dd10;
                      }
                      uVar24 = (ulonglong)(uVar44 + 4);
                    } while (uVar44 + 4 < local_228 - 3);
                  }
                  uVar45 = (uint)uVar24;
                  while (uVar45 < local_228) {
                    uVar45 = uVar34;
                    uVar39 = uVar34;
                    if ((uint)uVar24 < uVar32) {
                      uVar45 = *(uint *)(local_200 + uVar24 * 4);
                      uVar39 = (uint)DAT_1404e4f20;
                    }
                    DAT_1404e4f20._0_4_ = uVar39;
                    uVar23 = (ulonglong)uVar45;
                    if ((uVar45 < local_210) && ((param_7 == '\0' || (uVar50 - 4 <= uVar45)))) {
                      *(undefined1 *)(lVar38 + 8 + uVar23 * 0xc) = 1;
                      iVar42 = *(int *)(*(longlong *)(param_5 + 0x50) + uVar24 * 4);
                      *(float *)(lVar38 + 4 + uVar23 * 0xc) =
                           (float)*(int *)(*(longlong *)(param_5 + 0x60) + uVar24 * 4) +
                           *(float *)(lVar38 + 4 + uVar23 * 0xc);
                      *(float *)(lVar38 + uVar23 * 0xc) =
                           (float)iVar42 + *(float *)(lVar38 + uVar23 * 0xc);
                      uVar34 = (uint)DAT_14045dd10;
                    }
                    uVar45 = (uint)uVar24 + 1;
                    uVar24 = (ulonglong)uVar45;
                  }
LAB_1403af27b:
                  if (param_7 == '\0') {
                    uVar32 = 0;
LAB_1403af290:
                    uVar45 = uVar32;
                    uVar34 = uVar45;
                    if (uVar45 < uVar50) {
                      do {
                        if (*(char *)(param_4[1] + 9 + (ulonglong)uVar34 * 0xc) != '\0')
                        goto LAB_1403af2bc;
                        uVar34 = uVar34 + 1;
                      } while (uVar34 < uVar50);
                    }
                    if (uVar34 != uVar50) {
LAB_1403af2bc:
                      local_res10 = uVar34 + 1;
                      iVar42 = 0;
                      uVar32 = 0;
                      if (uVar45 < local_res10) {
                        iVar42 = 0;
                        iVar43 = 0;
                        uVar24 = (ulonglong)uVar45;
                        if (local_res10 - uVar45 < 2) {
LAB_1403af30a:
                          uVar32 = (uint)*(byte *)(lVar38 + 8 + uVar24 * 0xc);
                        }
                        else {
                          do {
                            iVar35 = (int)uVar24;
                            iVar42 = iVar42 + (uint)*(byte *)(lVar38 + 8 + uVar24 * 0xc);
                            uVar39 = iVar35 + 2;
                            uVar24 = (ulonglong)uVar39;
                            iVar43 = iVar43 + (uint)*(byte *)(lVar38 + 8 +
                                                             (ulonglong)(iVar35 + 1) * 0xc);
                          } while (uVar39 < uVar34);
                          if (uVar39 < local_res10) goto LAB_1403af30a;
                        }
                        iVar42 = uVar32 + iVar43 + iVar42;
                      }
                      uVar39 = ((uVar34 - iVar42) - uVar45) + 1;
                      uVar32 = local_res10;
                      if ((uVar39 != 0) && (uVar24 = (ulonglong)uVar45, uVar39 <= uVar34 - uVar45))
                      {
                        do {
                          do {
                            uVar23 = uVar24;
                            uVar44 = uVar45;
                            if ((uint)uVar23 < uVar34) {
                              uVar44 = (uint)uVar23 + 1;
                            }
                            uVar24 = (ulonglong)uVar44;
                          } while ((*(char *)(lVar38 + 8 + uVar23 * 0xc) == '\0') ||
                                  (uVar25 = uVar23, *(char *)(lVar38 + 8 + uVar24 * 0xc) != '\0'));
                          do {
                            uVar44 = uVar45;
                            if ((uint)uVar25 < uVar34) {
                              uVar44 = (uint)uVar25 + 1;
                            }
                            uVar24 = (ulonglong)uVar44;
                            lVar29 = uVar25 * 0xc;
                            uVar25 = uVar24;
                          } while ((*(char *)(lVar38 + 8 + lVar29) != '\0') ||
                                  (uVar49 = uVar23, *(char *)(lVar38 + 8 + uVar24 * 0xc) == '\0'));
                          while( true ) {
                            uVar27 = uVar45;
                            if ((uint)uVar49 < uVar34) {
                              uVar27 = (uint)uVar49 + 1;
                            }
                            uVar49 = (ulonglong)uVar27;
                            if (uVar27 == uVar44) break;
                            fVar52 = *(float *)(lVar38 + uVar23 * 0xc);
                            fVar3 = *(float *)(local_1d0 + uVar23 * 0xc);
                            fVar4 = *(float *)(local_1d0 + uVar24 * 0xc);
                            fVar5 = *(float *)(lVar38 + uVar24 * 0xc);
                            if (fVar3 == fVar4) {
                              if (fVar52 != fVar5) {
                                fVar52 = 0.0;
                              }
                            }
                            else {
                              fVar7 = fVar3;
                              if (fVar4 <= fVar3) {
                                fVar7 = fVar4;
                              }
                              fVar6 = *(float *)(local_1d0 + uVar49 * 0xc);
                              if (fVar7 < fVar6) {
                                fVar7 = fVar3;
                                if (fVar3 <= fVar4) {
                                  fVar7 = fVar4;
                                }
                                if (fVar6 < fVar7) {
                                  fVar52 = ((fVar6 - fVar3) / (fVar4 - fVar3)) * (fVar5 - fVar52) +
                                           fVar52;
                                }
                                else if (fVar3 <= fVar4) {
                                  fVar52 = fVar5;
                                }
                              }
                              else if (fVar4 <= fVar3) {
                                fVar52 = fVar5;
                              }
                            }
                            *(float *)(lVar38 + uVar49 * 0xc) = fVar52;
                            fVar52 = *(float *)(lVar38 + 4 + uVar23 * 0xc);
                            fVar3 = *(float *)(lVar38 + 4 + uVar24 * 0xc);
                            fVar4 = *(float *)(local_1d0 + 4 + uVar23 * 0xc);
                            fVar5 = *(float *)(local_1d0 + 4 + uVar24 * 0xc);
                            if (fVar4 == fVar5) {
                              if (fVar52 != fVar3) {
                                fVar52 = 0.0;
                              }
                            }
                            else {
                              fVar7 = *(float *)(local_1d0 + 4 + uVar49 * 0xc);
                              fVar6 = fVar4;
                              if (fVar5 <= fVar4) {
                                fVar6 = fVar5;
                              }
                              if (fVar6 < fVar7) {
                                fVar6 = fVar4;
                                if (fVar4 <= fVar5) {
                                  fVar6 = fVar5;
                                }
                                if (fVar7 < fVar6) {
                                  fVar52 = ((fVar7 - fVar4) / (fVar5 - fVar4)) * (fVar3 - fVar52) +
                                           fVar52;
                                }
                                else if (fVar4 <= fVar5) {
                                  fVar52 = fVar3;
                                }
                              }
                              else if (fVar5 <= fVar4) {
                                fVar52 = fVar3;
                              }
                            }
                            *(float *)(lVar38 + 4 + uVar49 * 0xc) = fVar52;
                            uVar39 = uVar39 - 1;
                            if (uVar39 == 0) goto LAB_1403af290;
                          }
                        } while( true );
                      }
                      goto LAB_1403af290;
                    }
                  }
                }
              }
              else {
                if (uVar32 != 0) {
                  uVar24 = 0;
                  uVar34 = (uint)DAT_14045dd10;
                  if (3 < local_228) {
                    do {
                      lVar29 = uVar24 * 4;
                      uVar44 = (uint)uVar24;
                      uVar45 = uVar34;
                      uVar39 = uVar34;
                      if (uVar44 < uVar32) {
                        uVar45 = *(uint *)(local_200 + lVar29);
                        uVar39 = (uint)DAT_1404e4f20;
                      }
                      DAT_1404e4f20._0_4_ = uVar39;
                      if ((uVar45 < local_210) && ((param_7 == '\0' || (uVar50 - 4 <= uVar45)))) {
                        uVar24 = (ulonglong)uVar45;
                        *(undefined1 *)(lVar38 + 8 + uVar24 * 0xc) = 1;
                        iVar42 = *(int *)(*(longlong *)(param_5 + 0x60) + lVar29);
                        *(float *)(lVar38 + uVar24 * 0xc) =
                             (float)*(int *)(*(longlong *)(param_5 + 0x50) + lVar29) * fVar52 +
                             *(float *)(lVar38 + uVar24 * 0xc);
                        *(float *)(lVar38 + 4 + uVar24 * 0xc) =
                             (float)iVar42 * fVar52 + *(float *)(lVar38 + 4 + uVar24 * 0xc);
                        uVar34 = (uint)DAT_14045dd10;
                      }
                      uVar27 = uVar44 + 1;
                      uVar45 = uVar34;
                      uVar39 = uVar34;
                      if (uVar27 < uVar32) {
                        uVar45 = *(uint *)(local_200 + (ulonglong)uVar27 * 4);
                        uVar39 = (uint)DAT_1404e4f20;
                      }
                      DAT_1404e4f20._0_4_ = uVar39;
                      if ((uVar45 < local_210) && ((param_7 == '\0' || (uVar50 - 4 <= uVar45)))) {
                        uVar24 = (ulonglong)uVar45;
                        *(undefined1 *)(lVar38 + 8 + uVar24 * 0xc) = 1;
                        iVar42 = *(int *)(*(longlong *)(param_5 + 0x60) + (ulonglong)uVar27 * 4);
                        *(float *)(lVar38 + uVar24 * 0xc) =
                             (float)*(int *)(*(longlong *)(param_5 + 0x50) + (ulonglong)uVar27 * 4)
                             * fVar52 + *(float *)(lVar38 + uVar24 * 0xc);
                        *(float *)(lVar38 + 4 + uVar24 * 0xc) =
                             (float)iVar42 * fVar52 + *(float *)(lVar38 + 4 + uVar24 * 0xc);
                        uVar34 = (uint)DAT_14045dd10;
                      }
                      uVar27 = uVar44 + 2;
                      uVar45 = uVar34;
                      uVar39 = uVar34;
                      if (uVar27 < uVar32) {
                        uVar45 = *(uint *)(local_200 + (ulonglong)uVar27 * 4);
                        uVar39 = (uint)DAT_1404e4f20;
                      }
                      DAT_1404e4f20._0_4_ = uVar39;
                      if ((uVar45 < local_210) && ((param_7 == '\0' || (uVar50 - 4 <= uVar45)))) {
                        uVar24 = (ulonglong)uVar45;
                        *(undefined1 *)(lVar38 + 8 + uVar24 * 0xc) = 1;
                        iVar42 = *(int *)(*(longlong *)(param_5 + 0x60) + (ulonglong)uVar27 * 4);
                        *(float *)(lVar38 + uVar24 * 0xc) =
                             (float)*(int *)(*(longlong *)(param_5 + 0x50) + (ulonglong)uVar27 * 4)
                             * fVar52 + *(float *)(lVar38 + uVar24 * 0xc);
                        *(float *)(lVar38 + 4 + uVar24 * 0xc) =
                             (float)iVar42 * fVar52 + *(float *)(lVar38 + 4 + uVar24 * 0xc);
                        uVar34 = (uint)DAT_14045dd10;
                      }
                      uVar27 = uVar44 + 3;
                      uVar45 = uVar34;
                      uVar39 = uVar34;
                      if (uVar27 < uVar32) {
                        uVar45 = *(uint *)(local_200 + (ulonglong)uVar27 * 4);
                        uVar39 = (uint)DAT_1404e4f20;
                      }
                      DAT_1404e4f20._0_4_ = uVar39;
                      uVar24 = (ulonglong)uVar45;
                      if ((uVar45 < local_210) && ((param_7 == '\0' || (uVar50 - 4 <= uVar45)))) {
                        *(undefined1 *)(lVar38 + 8 + uVar24 * 0xc) = 1;
                        iVar42 = *(int *)(*(longlong *)(param_5 + 0x60) + (ulonglong)uVar27 * 4);
                        *(float *)(lVar38 + uVar24 * 0xc) =
                             (float)*(int *)(*(longlong *)(param_5 + 0x50) + (ulonglong)uVar27 * 4)
                             * fVar52 + *(float *)(lVar38 + uVar24 * 0xc);
                        *(float *)(lVar38 + 4 + uVar24 * 0xc) =
                             (float)iVar42 * fVar52 + *(float *)(lVar38 + 4 + uVar24 * 0xc);
                        uVar34 = (uint)DAT_14045dd10;
                      }
                      uVar24 = (ulonglong)(uVar44 + 4);
                    } while (uVar44 + 4 < local_228 - 3);
                  }
                  uVar45 = (uint)uVar24;
                  while (uVar45 < local_228) {
                    lVar29 = uVar24 * 4;
                    uVar45 = uVar34;
                    uVar39 = uVar34;
                    if ((uint)uVar24 < uVar32) {
                      uVar45 = *(uint *)(local_200 + lVar29);
                      uVar39 = (uint)DAT_1404e4f20;
                    }
                    DAT_1404e4f20._0_4_ = uVar39;
                    uVar23 = (ulonglong)uVar45;
                    if ((uVar45 < local_210) && ((param_7 == '\0' || (uVar50 - 4 <= uVar45)))) {
                      *(undefined1 *)(lVar38 + 8 + uVar23 * 0xc) = 1;
                      iVar42 = *(int *)(*(longlong *)(param_5 + 0x50) + lVar29);
                      *(float *)(lVar38 + 4 + uVar23 * 0xc) =
                           (float)*(int *)(*(longlong *)(param_5 + 0x60) + lVar29) * fVar52 +
                           *(float *)(lVar38 + 4 + uVar23 * 0xc);
                      *(float *)(lVar38 + uVar23 * 0xc) =
                           (float)iVar42 * fVar52 + *(float *)(lVar38 + uVar23 * 0xc);
                      uVar34 = (uint)DAT_14045dd10;
                    }
                    uVar45 = (uint)uVar24 + 1;
                    uVar24 = (ulonglong)uVar45;
                  }
                  goto LAB_1403af27b;
                }
                if (param_7 == '\0') {
                  uVar24 = 0;
                }
                else {
                  uVar24 = (ulonglong)(uVar50 - 4);
                }
                if ((uint)uVar24 < uVar50) {
                  if (3 < uVar50 - (uint)uVar24) {
                    do {
                      iVar42 = *(int *)(*(longlong *)(param_5 + 0x60) + uVar24 * 4);
                      iVar43 = (int)uVar24;
                      uVar32 = iVar43 + 1;
                      uVar23 = (ulonglong)uVar32;
                      *(float *)(lVar38 + uVar24 * 0xc) =
                           (float)*(int *)(*(longlong *)(param_5 + 0x50) + uVar24 * 4) * fVar52 +
                           *(float *)(lVar38 + uVar24 * 0xc);
                      *(float *)(lVar38 + 4 + uVar24 * 0xc) =
                           (float)iVar42 * fVar52 + *(float *)(lVar38 + 4 + uVar24 * 0xc);
                      iVar42 = *(int *)(*(longlong *)(param_5 + 0x60) + (ulonglong)uVar32 * 4);
                      uVar34 = iVar43 + 2;
                      uVar25 = (ulonglong)uVar34;
                      *(float *)(lVar38 + uVar23 * 0xc) =
                           (float)*(int *)(*(longlong *)(param_5 + 0x50) + (ulonglong)uVar32 * 4) *
                           fVar52 + *(float *)(lVar38 + uVar23 * 0xc);
                      *(float *)(lVar38 + 4 + uVar23 * 0xc) =
                           (float)iVar42 * fVar52 + *(float *)(lVar38 + 4 + uVar23 * 0xc);
                      iVar42 = *(int *)(*(longlong *)(param_5 + 0x60) + (ulonglong)uVar34 * 4);
                      uVar32 = iVar43 + 3;
                      uVar23 = (ulonglong)uVar32;
                      uVar24 = (ulonglong)(iVar43 + 4U);
                      *(float *)(lVar38 + uVar25 * 0xc) =
                           (float)*(int *)(*(longlong *)(param_5 + 0x50) + (ulonglong)uVar34 * 4) *
                           fVar52 + *(float *)(lVar38 + uVar25 * 0xc);
                      *(float *)(lVar38 + 4 + uVar25 * 0xc) =
                           (float)iVar42 * fVar52 + *(float *)(lVar38 + 4 + uVar25 * 0xc);
                      iVar42 = *(int *)(*(longlong *)(param_5 + 0x60) + (ulonglong)uVar32 * 4);
                      *(float *)(lVar38 + uVar23 * 0xc) =
                           (float)*(int *)(*(longlong *)(param_5 + 0x50) + (ulonglong)uVar32 * 4) *
                           fVar52 + *(float *)(lVar38 + uVar23 * 0xc);
                      *(float *)(lVar38 + 4 + uVar23 * 0xc) =
                           (float)iVar42 * fVar52 + *(float *)(lVar38 + 4 + uVar23 * 0xc);
                    } while (iVar43 + 4U < uVar50 - 3);
                  }
                  uVar32 = (uint)uVar24;
                  uVar23 = uVar24;
                  while (uVar32 < uVar50) {
                    uVar32 = (int)uVar24 + 1;
                    uVar24 = (ulonglong)uVar32;
                    iVar42 = *(int *)(*(longlong *)(param_5 + 0x50) + uVar23 * 4);
                    *(float *)(lVar38 + 4 + uVar23 * 0xc) =
                         (float)*(int *)(*(longlong *)(param_5 + 0x60) + uVar23 * 4) * fVar52 +
                         *(float *)(lVar38 + 4 + uVar23 * 0xc);
                    *(float *)(lVar38 + uVar23 * 0xc) =
                         (float)iVar42 * fVar52 + *(float *)(lVar38 + uVar23 * 0xc);
                    uVar23 = uVar23 + 1;
                  }
                }
              }
              cVar19 = '\x01';
              local_res10 = CONCAT31(local_res10._1_3_,1);
            }
LAB_1403aeb04:
            uStack_190 = local_1e8[1] + local_1f4 + (uint)*local_1e8 * 0x100;
            local_1e8 = local_1e8 + local_1f0;
            local_1d8 = local_1d8 - 1;
            if (((int)local_1d8 < 1) ||
               ((byte *)(ulonglong)local_1b0 < local_1e8 + (4 - (longlong)local_1b8))) break;
            bVar8 = local_1e8[2];
            if ((bVar8 & 0xc0) == 0) {
              uStack_18c = 4;
            }
            else {
              uStack_18c = ((uint)(bVar8 >> 7) + (bVar8 >> 6 & 1) * 2) * iStack_194 + 4;
            }
            local_1a8 = local_1d8;
          } while (local_1e8 + ((ulonglong)uStack_18c - (longlong)local_1b8) <=
                   (byte *)(ulonglong)local_1b0);
          if (cVar19 != '\0') {
            if (param_7 == '\0') {
              uVar24 = 0;
            }
            else {
              uVar24 = (ulonglong)(uVar50 - 4);
            }
            if ((uint)uVar24 < uVar50) {
              lVar29 = param_4[1];
              if (3 < uVar50 - (uint)uVar24) {
                do {
                  iVar42 = (int)uVar24;
                  uVar23 = (ulonglong)(iVar42 + 1);
                  *(float *)(lVar29 + uVar24 * 0xc) =
                       *(float *)(lVar29 + uVar24 * 0xc) + *(float *)(lVar38 + uVar24 * 0xc);
                  *(float *)(lVar29 + 4 + uVar24 * 0xc) =
                       *(float *)(lVar38 + 4 + uVar24 * 0xc) + *(float *)(lVar29 + 4 + uVar24 * 0xc)
                  ;
                  *(float *)(lVar29 + uVar23 * 0xc) =
                       *(float *)(lVar38 + uVar23 * 0xc) + *(float *)(lVar29 + uVar23 * 0xc);
                  *(float *)(lVar29 + 4 + uVar23 * 0xc) =
                       *(float *)(lVar38 + 4 + uVar23 * 0xc) + *(float *)(lVar29 + 4 + uVar23 * 0xc)
                  ;
                  uVar24 = (ulonglong)(iVar42 + 2);
                  *(float *)(lVar29 + uVar24 * 0xc) =
                       *(float *)(lVar38 + uVar24 * 0xc) + *(float *)(lVar29 + uVar24 * 0xc);
                  *(float *)(lVar29 + 4 + uVar24 * 0xc) =
                       *(float *)(lVar38 + 4 + uVar24 * 0xc) + *(float *)(lVar29 + 4 + uVar24 * 0xc)
                  ;
                  uVar23 = (ulonglong)(iVar42 + 3);
                  uVar31 = iVar42 + 4;
                  uVar24 = (ulonglong)uVar31;
                  *(float *)(lVar29 + uVar23 * 0xc) =
                       *(float *)(lVar38 + uVar23 * 0xc) + *(float *)(lVar29 + uVar23 * 0xc);
                  *(float *)(lVar29 + 4 + uVar23 * 0xc) =
                       *(float *)(lVar38 + 4 + uVar23 * 0xc) + *(float *)(lVar29 + 4 + uVar23 * 0xc)
                  ;
                } while (uVar31 < uVar50 - 3);
                if (uVar50 <= uVar31) {
                  return 1;
                }
              }
              do {
                uVar31 = (int)uVar24 + 1;
                *(float *)(lVar29 + uVar24 * 0xc) =
                     *(float *)(lVar29 + uVar24 * 0xc) + *(float *)(lVar38 + uVar24 * 0xc);
                *(float *)(lVar29 + 4 + uVar24 * 0xc) =
                     *(float *)(lVar38 + 4 + uVar24 * 0xc) + *(float *)(lVar29 + 4 + uVar24 * 0xc);
                uVar24 = (ulonglong)uVar31;
              } while (uVar31 < uVar50);
            }
          }
        }
      }
    }
  }
  return 1;
}

