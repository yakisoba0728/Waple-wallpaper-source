// Function: FUN_14006cea0
// Addr: 14006cea0
// Size: 4571 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006cea0(ulonglong param_1,char param_2,undefined1 param_3)

{
  byte *pbVar1;
  size_t _Size;
  size_t sVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  size_t sVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  longlong **pplVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  undefined8 *******pppppppuVar22;
  ulonglong uVar23;
  byte bVar24;
  uint uVar25;
  uint uVar26;
  undefined1 *puVar27;
  size_t sVar28;
  bool bVar29;
  UINT UVar30;
  undefined8 *******pppppppuVar31;
  bool bVar32;
  bool bVar33;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  ulonglong local_res8;
  uint local_res10 [2];
  undefined1 local_res18;
  uint local_res20 [2];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  int local_138 [2];
  longlong *local_130;
  uint local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  longlong *local_108;
  uint local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 ******local_e0;
  undefined8 uStack_d8;
  size_t local_d0;
  ulonglong local_c8;
  longlong *local_c0;
  uint local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong *local_98;
  uint local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,param_2);
  local_138[0] = 0;
  local_res8 = param_1;
  local_res18 = param_3;
  if (param_2 != '\0') {
    FUN_1400c1890(&DAT_1404e55a0);
    puVar17 = DAT_1404e5330;
    if (DAT_1404e6370 != '\0') {
      DAT_1404e6370 = '\0';
      puVar7 = DAT_1404e5330;
      for (puVar20 = (undefined8 *)*DAT_1404e5330; DAT_1404e5330 = puVar7, puVar20 != puVar17;
          puVar20 = (undefined8 *)*puVar20) {
        plVar13 = (longlong *)puVar20[6];
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x58))(plVar13,1);
        }
        puVar7 = DAT_1404e5330;
      }
      for (puVar17 = (undefined8 *)*puVar7; puVar17 != puVar7; puVar17 = (undefined8 *)*puVar17) {
        plVar13 = (longlong *)puVar17[6];
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x58))(plVar13,0);
        }
      }
    }
    FUN_1401354d0(&DAT_1404e53e0,0);
    if ((DAT_1404e5410 == 0) && (DAT_1404e5440 == DAT_1404e5448)) {
      DAT_1404e52f1 = 0;
    }
    else {
      DAT_1404e52f1 = 1;
    }
  }
  bVar33 = false;
  local_res20[0] = local_res20[0] & 0xffffff00;
  local_res8 = local_res8 & 0xffffffffffffff00;
  puVar17 = DAT_1404e5518;
  if (DAT_1404e5518 != DAT_1404e5520) {
    do {
      puVar9 = DAT_1404e5520;
      puVar20 = puVar17;
      puVar7 = puVar17;
      if (*(int *)((longlong)puVar17 + 0x24) == 4) {
        if (7 < (ulonglong)puVar17[3]) {
          puVar20 = (undefined8 *)*puVar17;
        }
        uVar23 = 0;
        uVar21 = 0xcbf29ce484222325;
        if (puVar17[2] * 2 != 0) {
          do {
            pbVar1 = (byte *)(uVar23 + (longlong)puVar20);
            uVar23 = uVar23 + 1;
            uVar21 = (uVar21 ^ *pbVar1) * 0x100000001b3;
          } while (uVar23 < (ulonglong)(puVar17[2] * 2));
        }
        lVar14 = FUN_14007cbd0(&DAT_1404e5530,&local_e0,puVar17,uVar21);
        puVar9 = DAT_1404e5520;
        puVar20 = puVar17 + 5;
        if ((*(longlong *)(lVar14 + 8) == 0) || (*(longlong *)(lVar14 + 8) == DAT_1404e5538)) {
          for (; puVar20 != puVar9; puVar20 = puVar20 + 5) {
            FUN_140016560(puVar7,puVar20);
            *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar20 + 4);
            *(undefined4 *)((longlong)puVar7 + 0x24) = *(undefined4 *)((longlong)puVar20 + 0x24);
            puVar7 = puVar7 + 5;
          }
          goto LAB_14006d0ab;
        }
      }
      else {
        while (puVar8 = puVar7 + 5, puVar8 != puVar9) {
          FUN_140016560(puVar20,puVar8);
          *(undefined4 *)(puVar20 + 4) = *(undefined4 *)(puVar8 + 4);
          *(undefined4 *)((longlong)puVar20 + 0x24) = *(undefined4 *)((longlong)puVar7 + 0x4c);
          puVar20 = puVar20 + 5;
          puVar7 = puVar8;
        }
LAB_14006d0ab:
        FUN_140016770();
        DAT_1404e5520 = DAT_1404e5520 + -5;
        puVar20 = puVar17;
      }
      puVar17 = puVar20;
    } while (puVar20 != DAT_1404e5520);
    param_2 = (char)local_res10[0];
  }
  bVar29 = false;
  bVar6 = false;
  bVar32 = false;
  FUN_14003d050(&DAT_1404e52f0);
  if (DAT_1404e52e0 != 0) {
    DAT_1404e5304 = DAT_1404e5304 | DAT_1404e5308;
  }
  uVar12 = DAT_1404e5308;
  if (DAT_1404e53c8 == 1) {
    bVar33 = DAT_1404e5308 != 0;
    local_res8 = CONCAT71(local_res8._1_7_,bVar33);
    uVar26 = 0;
  }
  else if (DAT_1404e53c8 == 2) {
    if (((DAT_1404e52e0 == 1) || (uVar26 = DAT_1404e5308, DAT_1404e52e0 == 2)) &&
       (uVar26 = 0, DAT_1404e52ec == DAT_1404e5308)) {
      uVar26 = 0xffffffff;
    }
  }
  else if (DAT_1404e53c8 == 3) {
    uVar26 = -(uint)(DAT_1404e5308 != 0);
    uVar12 = -DAT_1404e5308;
  }
  else {
    uVar26 = 0;
    if (DAT_1404e53c8 == 4) {
      bVar32 = DAT_1404e5308 != 0;
      local_res20[0] = CONCAT31(local_res20[0]._1_3_,bVar32);
    }
  }
  if (DAT_1404e53c4 == 1) {
    if ((bVar33) || (local_res8 = local_res8 & 0xffffffffffffff00, DAT_1404e5304 != 0)) {
      local_res8 = CONCAT71(local_res8._1_7_,1);
    }
  }
  else if (DAT_1404e53c4 == 2) {
    if ((DAT_1404e52e0 == 1) || (DAT_1404e52e0 == 2)) {
      uVar25 = 0;
      if (DAT_1404e52ec == DAT_1404e5304) {
        uVar25 = 0xffffffff;
      }
      uVar26 = uVar26 | uVar25;
    }
    else {
      uVar26 = uVar26 | DAT_1404e5304;
    }
  }
  else if (DAT_1404e53c4 == 3) {
    uVar26 = uVar26 | -(uint)(DAT_1404e5304 != 0);
  }
  else if (DAT_1404e53c4 == 4) {
    if ((bVar32) || (DAT_1404e5304 != 0)) {
      local_res20[0] = CONCAT31(local_res20[0]._1_3_,1);
    }
    else {
      local_res20[0] = (uint)local_res20[0]._1_3_ << 8;
    }
  }
  if (DAT_1404e5300 != 0) {
    if (DAT_1404e53c0 == 1) {
      local_res8 = CONCAT71(local_res8._1_7_,1);
    }
    else if (DAT_1404e53c0 == 2) {
      uVar25 = DAT_1404e5300;
      if (DAT_1404e52e0 != 0) {
        uVar25 = -(uint)(DAT_1404e5300 != 0);
      }
      uVar26 = uVar26 | uVar25;
    }
    else if (DAT_1404e53c0 == 3) {
      uVar26 = 0xffffffff;
    }
  }
  if (DAT_1404e6128 != '\0') {
    cVar10 = DAT_1404e6198;
    if (param_2 != '\0') {
      cVar10 = FUN_140138b80(&DAT_1404e6128,&DAT_1404e53e0,uVar12);
    }
    if (cVar10 != '\0') {
      if (DAT_1404e53d4 == 1) {
        local_res8 = CONCAT71(local_res8._1_7_,1);
      }
      else if (DAT_1404e53d4 == 2) {
        uVar26 = 0xffffffff;
      }
    }
  }
  if ((DAT_1404e52e4 >> 1 & 1) != 0) {
    uVar26 = 0;
  }
  if ((DAT_1404e52e4 >> 0x16 & 1) != 0) {
    uVar26 = 0xffffffff;
  }
  local_res10[0] = uVar26;
  if ((DAT_1404e52e4 >> 4 & 1) != 0) {
    if (DAT_1404e53d0 == 4) {
      local_res20[0] = CONCAT31(local_res20[0]._1_3_,1);
    }
    else if (DAT_1404e53d0 == 2) {
      local_res10[0] = 0xffffffff;
    }
  }
  FUN_1401359c0(&DAT_1404e53e0,&local_res8,local_res20,local_res10);
  if (param_2 == '\0') {
LAB_14006d3fd:
    uVar23 = (ulonglong)DAT_1404e52e4;
  }
  else {
    uVar23 = (ulonglong)DAT_1404e52e4;
    if (((DAT_1404e52e4 >> 9 & 1) != 0) && (DAT_1404e6410 != 0)) {
      plVar13 = *(longlong **)(DAT_1404e6410 + 0x20);
      uVar21 = *(longlong *)(DAT_1404e6410 + 0x28) - (longlong)plVar13;
      if ((1 < (ulonglong)((longlong)uVar21 >> 3)) &&
         (uVar12 = *(uint *)(((uVar21 & 0xfffffffffffffff8) - 8) + (longlong)plVar13),
         uVar12 - 0x801 < 0x1f7ff)) {
        fVar35 = (float)uVar12;
        fVar36 = (float)(*plVar13 / 1000000 & 0xffffffff);
        if (fVar36 < fVar35 * _DAT_1404926e4) {
          if ((DAT_1404e52e4 >> 10 & 1) != 0) {
            FUN_140057720(&DAT_1404e6418);
            if (((DAT_1404e6428 <= DAT_140492888) || (fVar35 * _DAT_1404926d4 <= fVar36)) &&
               (fVar35 * _DAT_1404926a0 <= fVar36)) goto LAB_14006d3fd;
            DAT_1404e52e4 = DAT_1404e52e4 & 0xfffffbff;
            uVar23 = (ulonglong)DAT_1404e52e4;
          }
        }
        else {
          if ((DAT_1404e52e4 >> 10 & 1) == 0) {
            FUN_140098760("VRAM exhausted (%u of %u).\n");
          }
          DAT_1404e52e4 = DAT_1404e52e4 | 0x400;
          uVar23 = (ulonglong)DAT_1404e52e4;
          DAT_1404e6428 = 0.0;
        }
      }
    }
  }
  uVar12 = local_res20[0] & 0xff;
  if ((uVar23 & 0x408) != 0) {
    uVar12 = 1;
  }
  bVar24 = (byte)uVar12;
  local_res20[0] = uVar12;
  if (((byte)(uVar23 >> 2) & 1) != bVar24) {
    if (bVar24 == 0) {
      DAT_1404e52e4 = (uint)uVar23 & 0xfffffffb;
    }
    else {
      DAT_1404e52e4 = (uint)uVar23 | 4;
    }
    FUN_140073ac0();
    uVar23 = (ulonglong)DAT_1404e52e4;
  }
  uVar26 = local_res10[0];
  uVar25 = (uint)uVar23;
  puVar27 = auStack_158;
  if ((bVar24 == 0) && (puVar27 = auStack_158, (uVar23 >> 5 & 1) == 0)) {
    if ((local_res10[0] != DAT_1404e52e8) || ((byte)local_res8 != ((byte)(uVar23 >> 7) & 1))) {
      DAT_1404e52e8 = local_res10[0];
      if ((byte)local_res8 == 0) {
        DAT_1404e52e4 = uVar25 & 0xffffff7f;
      }
      else {
        DAT_1404e52e4 = uVar25 | 0x80;
      }
      FUN_1400739a0();
      uVar25 = DAT_1404e52e4;
    }
    puVar27 = auStack_158;
    if (param_2 == '\0') goto LAB_14006df7b;
    local_c8 = 0xf;
    sVar28 = 0;
    uStack_d8 = 0;
    local_e0 = (undefined8 *******)0x0;
    local_d0 = 0;
    cVar10 = FUN_140135c40(&DAT_1404e53e0,&local_res8,local_138,&local_e0);
    pppppppuVar31 = (undefined8 *******)local_e0;
    puVar17 = DAT_1404e5330;
    uVar34 = extraout_XMM0_Da;
    if (cVar10 == '\0') {
      if ((DAT_1404e6408 != -1) && (DAT_1404e6408 = -1, DAT_1404df618 == '\a')) {
        FUN_140084dd0(&local_130,0);
        FUN_140085520(&local_130,&DAT_1404df610);
        local_b8 = (local_b8 >> 8 & 0xfffffe) << 8;
        local_a0 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        FUN_140085610(&DAT_1404df610,&local_c0);
        FUN_140085440(&local_c0);
        uVar15 = FUN_140086de0(&DAT_1404df5e8,"general","");
        uVar15 = FUN_140086de0(uVar15,"selectedwallpapers","");
        FUN_140085520(uVar15,&local_130);
        FUN_14006a490(&DAT_1404e52e0,&local_130);
        uVar34 = FUN_140085440(&local_130);
      }
    }
    else {
      if (DAT_1404e6408 == -1) {
        for (puVar20 = (undefined8 *)*DAT_1404e5330; puVar20 != puVar17;
            puVar20 = (undefined8 *)*puVar20) {
          lVar14 = puVar20[6];
          if (lVar14 != 0) {
            if (puVar20 != (undefined8 *)(lVar14 + 0x40)) {
              plVar13 = (longlong *)(lVar14 + 0xe0);
              if (0xf < *(ulonglong *)(lVar14 + 0xf8)) {
                plVar13 = (longlong *)*plVar13;
              }
              uVar34 = FUN_14000f880(puVar20 + 0x14,plVar13,*(undefined8 *)(lVar14 + 0xf0));
            }
            lVar14 = puVar20[6];
            if (puVar20 != (undefined8 *)(lVar14 + 0x60)) {
              plVar13 = (longlong *)(lVar14 + 0x120);
              if (0xf < *(ulonglong *)(lVar14 + 0x138)) {
                plVar13 = (longlong *)*plVar13;
              }
              uVar34 = FUN_14000f880(puVar20 + 0x18,plVar13,*(undefined8 *)(lVar14 + 0x130));
            }
          }
        }
      }
      iVar11 = (int)local_res8;
      uVar12 = local_res20[0];
      if (DAT_1404e6408 != (int)local_res8) {
        if (DAT_1404df618 != '\a') {
          FUN_140085520(&DAT_1404df610,&DAT_1404e6378);
        }
        local_90 = CONCAT31(local_90._1_3_,7);
        local_90 = local_90 & 0xfffffeff;
        local_88 = 0;
        uStack_80 = 0;
        DAT_1404e6408 = iVar11;
        local_78 = 0;
        plVar13 = (longlong *)FUN_14028af20(0x10);
        *plVar13 = 0;
        plVar13[1] = 0;
        lVar14 = FUN_14028af20(0x58);
        *(longlong *)lVar14 = lVar14;
        *(longlong *)(lVar14 + 8) = lVar14;
        *(longlong *)(lVar14 + 0x10) = lVar14;
        *(undefined2 *)(lVar14 + 0x18) = 0x101;
        *plVar13 = lVar14;
        local_98 = plVar13;
        if (local_138[0] == 0) {
          local_128 = CONCAT31(local_128._1_3_,7);
          local_128 = local_128 & 0xfffffeff;
          local_120 = 0;
          uStack_118 = 0;
          local_110 = 0;
          plVar13 = (longlong *)FUN_14028af20(0x10);
          *plVar13 = 0;
          plVar13[1] = 0;
          lVar14 = FUN_14028af20(0x58);
          *(longlong *)lVar14 = lVar14;
          *(longlong *)(lVar14 + 8) = lVar14;
          *(longlong *)(lVar14 + 0x10) = lVar14;
          *(undefined2 *)(lVar14 + 0x18) = 0x101;
          *plVar13 = lVar14;
          sVar16 = (DAT_1404e8ed0 - DAT_1404e8ec8 >> 3) * -0xf0f0f0f0f0f0f0f;
          local_130 = plVar13;
          if (0 < (int)sVar16) {
            uVar34 = (undefined4)local_d0;
            uVar21 = local_d0 & 0xffffffff;
            uVar23 = 0;
            do {
              local_100 = CONCAT31(local_100._1_3_,7);
              local_100 = local_100 & 0xfffffeff;
              local_f8 = 0;
              uStack_f0 = 0;
              local_e8 = 0;
              plVar13 = (longlong *)FUN_14028af20(0x10);
              *plVar13 = 0;
              plVar13[1] = 0;
              lVar14 = FUN_14028af20(0x58);
              local_a0 = 0;
              local_b8 = CONCAT31(local_b8._1_3_,4);
              local_b8 = local_b8 | 0x100;
              *(longlong *)lVar14 = lVar14;
              pppppppuVar31 = &local_e0;
              if (0xf < local_c8) {
                pppppppuVar31 = (undefined8 *******)local_e0;
              }
              *(longlong *)(lVar14 + 8) = lVar14;
              *(longlong *)(lVar14 + 0x10) = lVar14;
              *(undefined2 *)(lVar14 + 0x18) = 0x101;
              *plVar13 = lVar14;
              local_b0 = 0;
              uStack_a8 = 0;
              local_108 = plVar13;
              plVar13 = (longlong *)_malloc_base(uVar21 + 5);
              if (plVar13 == (longlong *)0x0) {
                FUN_140017170(&local_108,
                              "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                             );
                    /* WARNING: Subroutine does not return */
                FUN_140084bc0(&local_108);
              }
              *(undefined4 *)plVar13 = uVar34;
              FUN_1404210f0((undefined4 *)((longlong)plVar13 + 4),pppppppuVar31,uVar21);
              *(undefined1 *)((longlong)plVar13 + uVar21 + 4) = 0;
              local_c0 = plVar13;
              uVar15 = FUN_140086de0(&local_108,&DAT_140473b68,&DAT_140473b6c);
              FUN_140085610(uVar15,&local_c0);
              FUN_140085440(&local_c0);
              lVar14 = uVar23 * 0x88;
              puVar17 = (undefined8 *)(DAT_1404e8ec8 + 0x18 + lVar14);
              if (0xf < *(ulonglong *)(lVar14 + 0x30 + DAT_1404e8ec8)) {
                puVar17 = (undefined8 *)*puVar17;
              }
              uVar15 = FUN_140086de0(&local_130,puVar17,
                                     *(longlong *)(lVar14 + 0x28 + DAT_1404e8ec8) +
                                     (longlong)puVar17);
              FUN_140085520(uVar15,&local_108);
              plVar13 = local_108;
              switch((undefined1)local_100) {
              case 0:
              case 1:
              case 2:
              case 3:
              case 5:
                break;
              case 4:
                if ((local_100 >> 8 & 1) != 0) {
                  thunk_FUN_1402d9040(local_108);
                }
                break;
              case 6:
              case 7:
                if (local_108 != (longlong *)0x0) {
                  FUN_140088e40(local_108);
                  thunk_FUN_14028af80(plVar13,0x10);
                }
                break;
              default:
                FID_conflict__assert
                          (L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
              }
              lVar14 = local_f8;
              if (local_f8 != 0) {
                FUN_140017240(local_f8 + 0x40);
                FUN_140017240(lVar14 + 0x20);
                FUN_140017240(lVar14);
                thunk_FUN_14028af80(lVar14,0x60);
              }
              uVar12 = (int)uVar23 + 1;
              uVar23 = (ulonglong)uVar12;
              pppppppuVar31 = (undefined8 *******)local_e0;
              uVar26 = local_res10[0];
            } while ((int)uVar12 < (int)sVar16);
          }
          uVar15 = FUN_140086de0(&local_98,"selectedwallpapers","");
          FUN_140085520(uVar15,&local_130);
LAB_14006dd64:
          pplVar19 = &local_130;
          sVar28 = sVar16;
          goto LAB_14006dd69;
        }
        if (local_138[0] == 1) {
          FUN_140084dd0(&local_c0,0);
          uVar15 = FUN_140086de0(&DAT_1404df5e8,"general","");
          lVar14 = FUN_140087490(uVar15,"playlists","");
          if (lVar14 != 0) {
            uVar15 = FUN_140086de0(uVar15,"playlists","");
            FUN_140085520(&local_c0,uVar15);
            if (((char)local_b8 == '\x06') &&
               (iVar11 = FUN_1400863a0(&local_c0), sVar16 = local_d0, iVar11 != 0)) {
LAB_14006d830:
              uVar15 = FUN_140086540(&local_c0,sVar28);
              lVar14 = FUN_140086de0(uVar15,&DAT_1404748b8,&DAT_1404748bc);
              if (*(char *)(lVar14 + 8) == '\x04') {
                bVar29 = true;
                puVar17 = (undefined8 *)FUN_140085cc0(lVar14,&local_108);
                pppppppuVar22 = &local_e0;
                if (0xf < local_c8) {
                  pppppppuVar22 = pppppppuVar31;
                }
                sVar2 = puVar17[2];
                if (0xf < (ulonglong)puVar17[3]) {
                  puVar17 = (undefined8 *)*puVar17;
                }
                if ((sVar2 != sVar16) ||
                   ((sVar2 != 0 && (iVar11 = memcmp(puVar17,pppppppuVar22,sVar2), iVar11 != 0))))
                goto LAB_14006d8a2;
                bVar33 = true;
              }
              else {
LAB_14006d8a2:
                bVar33 = false;
              }
              if (bVar29) {
                bVar29 = false;
                FUN_140017240(&local_108);
              }
              if (!bVar33) goto code_r0x00014006d8bd;
              local_128 = CONCAT31(local_128._1_3_,7);
              local_128 = local_128 & 0xfffffeff;
              sVar28 = 0;
              local_110 = 0;
              local_120 = 0;
              uStack_118 = 0;
              plVar13 = (longlong *)FUN_14028af20(0x10);
              *plVar13 = 0;
              plVar13[1] = 0;
              lVar14 = FUN_14028af20(0x58);
              *(longlong *)lVar14 = lVar14;
              *(longlong *)(lVar14 + 8) = lVar14;
              *(longlong *)(lVar14 + 0x10) = lVar14;
              *(undefined2 *)(lVar14 + 0x18) = 0x101;
              *plVar13 = lVar14;
              iVar11 = (int)(DAT_1404e8ed0 - DAT_1404e8ec8 >> 3) * -0xf0f0f0f;
              sVar16 = sVar28;
              local_130 = plVar13;
              if (0 < iVar11) {
                do {
                  lVar14 = DAT_1404e8ec8;
                  local_100 = (local_100 >> 8 & 0xfffffe) << 8;
                  local_e8 = 0;
                  sVar28 = sVar16 * 0x88;
                  local_f8 = 0;
                  uStack_f0 = 0;
                  uVar18 = FUN_140086de0(&local_108,"playlist","");
                  FUN_140085520(uVar18,uVar15);
                  puVar17 = (undefined8 *)(lVar14 + 0x18 + sVar28);
                  if (0xf < *(ulonglong *)(sVar28 + 0x30 + lVar14)) {
                    puVar17 = (undefined8 *)*puVar17;
                  }
                  uVar18 = FUN_140086de0(&local_130,puVar17,
                                         *(longlong *)(sVar28 + 0x28 + lVar14) + (longlong)puVar17);
                  FUN_140085520(uVar18,&local_108);
                  plVar13 = local_108;
                  switch((undefined1)local_100) {
                  case 0:
                  case 1:
                  case 2:
                  case 3:
                  case 5:
                    break;
                  case 4:
                    if ((local_100 >> 8 & 1) != 0) {
                      thunk_FUN_1402d9040(local_108);
                    }
                    break;
                  case 6:
                  case 7:
                    if (local_108 != (longlong *)0x0) {
                      FUN_140088e40(local_108);
                      thunk_FUN_14028af80(plVar13,0x10);
                    }
                    break;
                  default:
                    FID_conflict__assert
                              (L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",
                               0x434);
                  }
                  lVar14 = local_f8;
                  if (local_f8 != 0) {
                    FUN_140017240(local_f8 + 0x40);
                    FUN_140017240(lVar14 + 0x20);
                    FUN_140017240(lVar14);
                    thunk_FUN_14028af80(lVar14,0x60);
                  }
                  uVar12 = (int)sVar16 + 1;
                  sVar16 = (size_t)uVar12;
                  pppppppuVar31 = (undefined8 *******)local_e0;
                } while ((int)uVar12 < iVar11);
              }
              uVar15 = FUN_140086de0(&local_98,"selectedwallpapers","");
              FUN_140085520(uVar15,&local_130);
              FUN_140085440(&local_130);
              uVar26 = local_res10[0];
            }
          }
          pplVar19 = &local_c0;
          goto LAB_14006dd69;
        }
        if (local_138[0] == 2) {
          local_128 = (local_128._1_3_ & 0xfffffe) << 8;
          local_110 = 0;
          local_120 = 0;
          uStack_118 = 0;
          uVar15 = FUN_140086de0(&DAT_1404df5e8,"general","");
          lVar14 = FUN_140087490(uVar15,"profiles","");
          sVar16 = sVar28;
          if (lVar14 != 0) {
            uVar15 = FUN_140086de0(uVar15,"profiles","");
            FUN_140085520(&local_130,uVar15);
            if (((char)local_128 == '\x06') &&
               (iVar11 = FUN_1400863a0(&local_130), uVar23 = local_c8, sVar2 = local_d0, iVar11 != 0
               )) {
              do {
                sVar16 = FUN_140086540(&local_130,sVar28);
                lVar14 = FUN_140086de0(sVar16,&DAT_1404748b8,&DAT_1404748bc);
                if (*(char *)(lVar14 + 8) == '\x04') {
                  bVar6 = true;
                  puVar17 = (undefined8 *)FUN_140085cc0(lVar14,&local_108);
                  pppppppuVar22 = &local_e0;
                  if (0xf < uVar23) {
                    pppppppuVar22 = pppppppuVar31;
                  }
                  _Size = puVar17[2];
                  if (0xf < (ulonglong)puVar17[3]) {
                    puVar17 = (undefined8 *)*puVar17;
                  }
                  if ((_Size != sVar2) ||
                     ((_Size != 0 && (iVar11 = memcmp(puVar17,pppppppuVar22,_Size), iVar11 != 0))))
                  goto LAB_14006d746;
                  bVar33 = true;
                }
                else {
LAB_14006d746:
                  bVar33 = false;
                }
                if (bVar6) {
                  bVar6 = false;
                  FUN_140017240(&local_108);
                }
                if (bVar33) {
                  FUN_140085520(&local_98,sVar16);
                  uVar26 = local_res10[0];
                  break;
                }
                uVar25 = (int)sVar28 + 1;
                sVar28 = (size_t)uVar25;
                uVar12 = FUN_1400863a0(&local_130);
                uVar26 = local_res10[0];
              } while (uVar25 < uVar12);
            }
          }
          goto LAB_14006dd64;
        }
        goto LAB_14006dd6e;
      }
    }
    goto LAB_14006dd9a;
  }
LAB_14006debe:
  cVar10 = (char)uVar12;
  uVar25 = (uint)uVar23;
  if (param_2 == '\0') goto LAB_14006df7b;
LAB_14006dec7:
  uVar25 = (uint)uVar23;
  if (((((uVar23 >> 0x11 & 1) == 0) || ((uVar23 & 0x2d) != 0)) || (DAT_1404e52e8 == DAT_1404e52ec))
     || (cVar10 != '\0')) {
    bVar24 = 0;
  }
  else {
    bVar24 = 1;
  }
  uVar21 = uVar23 >> 4;
  uVar5 = uVar23 >> 0x13;
  if (((byte)(uVar23 >> 0x12) & 1) == bVar24) {
    if ((bVar24 == 0) || (((byte)uVar21 & 1) == ((byte)uVar5 & 1))) goto LAB_14006df7b;
    UVar30 = 1;
    if ((uVar5 & 1) != 0) {
      UVar30 = 8;
    }
    *(undefined8 *)(puVar27 + -8) = 0x14006df27;
    timeEndPeriod(UVar30);
LAB_14006df33:
    UVar30 = 1;
    if ((uVar21 & 1) != 0) {
      UVar30 = 8;
    }
    *(undefined8 *)(puVar27 + -8) = 0x14006df42;
    timeBeginPeriod(UVar30);
    uVar25 = DAT_1404e52e4 | 0x40000;
  }
  else {
    if (bVar24 != 0) goto LAB_14006df33;
    UVar30 = 1;
    if ((uVar5 & 1) != 0) {
      UVar30 = 8;
    }
    *(undefined8 *)(puVar27 + -8) = 0x14006df5d;
    timeEndPeriod(UVar30);
    uVar25 = DAT_1404e52e4 & 0xfffbffff;
  }
  if ((uVar21 & 1) == 0) {
    uVar25 = uVar25 & 0xfff7ffff;
    DAT_1404e52e4 = uVar25;
  }
  else {
    uVar25 = uVar25 | 0x80000;
    DAT_1404e52e4 = uVar25;
  }
LAB_14006df7b:
  if (DAT_1404e5310 != DAT_1404e5318) {
    if ((uVar25 >> 0x17 & 1) != 0) {
      *(undefined8 *)(puVar27 + -8) = 0x14006dfa1;
      FUN_14006a030(uVar25 >> 0x17,0);
    }
    iVar11 = 0;
    if (DAT_1404e5318 - DAT_1404e5310 >> 3 != 0) {
      do {
        lVar14 = (longlong)iVar11;
        if (*(char *)(*(longlong *)(DAT_1404e5310 + lVar14 * 8) + 0x3a) != '\0') {
          lVar3 = *(longlong *)(DAT_1404e5310 + lVar14 * 8);
          if (lVar3 != 0) {
            *(undefined8 *)(puVar27 + -8) = 0x14006dfe8;
            FUN_140058130(lVar3);
            *(undefined8 *)(puVar27 + -8) = 0x14006dff5;
            thunk_FUN_14028af80(lVar3,0xf0);
          }
          lVar3 = DAT_1404e5310 + lVar14 * 8;
          lVar14 = lVar3 + 8;
          *(undefined8 *)(puVar27 + -8) = 0x14006e013;
          FUN_1404210f0(lVar3,lVar14,DAT_1404e5318 - lVar14);
          DAT_1404e5318 = DAT_1404e5318 + -8;
          iVar11 = iVar11 + -1;
        }
        iVar11 = iVar11 + 1;
      } while ((ulonglong)(longlong)iVar11 < (ulonglong)(DAT_1404e5318 - DAT_1404e5310 >> 3));
    }
  }
  return;
code_r0x00014006d8bd:
  uVar26 = (int)sVar28 + 1;
  sVar28 = (size_t)uVar26;
  uVar12 = FUN_1400863a0(&local_c0);
  if (uVar12 <= uVar26) goto code_r0x00014006d8d0;
  goto LAB_14006d830;
code_r0x00014006d8d0:
  pplVar19 = &local_c0;
  sVar28 = sVar16;
  uVar26 = local_res10[0];
LAB_14006dd69:
  FUN_140085440(pplVar19);
LAB_14006dd6e:
  FUN_140085520(&DAT_1404e63a0,&local_98);
  FUN_14006a490(&DAT_1404e52e0,&local_98);
  uVar34 = FUN_140085440(&local_98);
  uVar12 = local_res20[0];
LAB_14006dd9a:
  cVar10 = (char)uVar12;
  param_2 = (char)sVar28;
  FUN_140076be0(uVar34,uVar26);
  if (0xf < local_c8) {
    uVar23 = local_c8 + 1;
    pppppppuVar22 = pppppppuVar31;
    if (0xfff < uVar23) {
      pppppppuVar22 = (undefined8 *******)pppppppuVar31[-1];
      if (0x1f < (ulonglong)((longlong)pppppppuVar31 + (-8 - (longlong)pppppppuVar22))) {
        uVar23 = 5;
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)();
        puVar27 = auStack_150;
        goto LAB_14006debe;
      }
      uVar23 = local_c8 + 0x28;
    }
    thunk_FUN_14028af80(pppppppuVar22,uVar23);
  }
  uVar23 = (ulonglong)DAT_1404e52e4;
  puVar27 = auStack_158;
  goto LAB_14006dec7;
}

