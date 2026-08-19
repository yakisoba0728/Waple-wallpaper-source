// Function: FUN_14006cf70
// Addr: 14006cf70
// Size: 818 bytes


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006cf70(ulonglong param_1,char param_2,undefined1 param_3)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  undefined8 *******pppppppuVar21;
  uint uVar22;
  undefined8 *******pppppppuVar23;
  bool bVar24;
  bool bVar25;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  ulonglong local_res8;
  uint local_res10 [2];
  undefined1 local_res18;
  uint local_res20 [2];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  int local_138 [2];
  longlong *plStack_130;
  uint uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  longlong *plStack_108;
  uint uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *******local_e0;
  undefined8 uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  undefined1 auStack_c0 [8];
  uint uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong *plStack_98;
  uint uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,param_2);
  local_138[0] = 0;
  local_res8 = param_1;
  local_res18 = param_3;
  if (param_2 != '\0') {
    FUN_1400c1960(&DAT_1404e5670);
    puVar18 = DAT_1404e5400;
    if (DAT_1404e6440 != '\0') {
      DAT_1404e6440 = '\0';
      puVar5 = DAT_1404e5400;
      for (puVar14 = (undefined8 *)*DAT_1404e5400; DAT_1404e5400 = puVar5, puVar14 != puVar18;
          puVar14 = (undefined8 *)*puVar14) {
        plVar9 = (longlong *)puVar14[6];
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x58))(plVar9,1);
        }
        puVar5 = DAT_1404e5400;
      }
      for (puVar18 = (undefined8 *)*puVar5; puVar18 != puVar5; puVar18 = (undefined8 *)*puVar18) {
        plVar9 = (longlong *)puVar18[6];
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x58))(plVar9,0);
        }
      }
    }
    func_0x0001401355a0(&DAT_1404e54b0,0);
    if ((DAT_1404e54e0 == 0) && (DAT_1404e5510 == DAT_1404e5518)) {
      DAT_1404e53c1 = 0;
    }
    else {
      DAT_1404e53c1 = 1;
    }
  }
  bVar25 = false;
  local_res20[0] = local_res20[0] & 0xffffff00;
  local_res8 = local_res8 & 0xffffffffffffff00;
  puVar18 = DAT_1404e55e8;
  if (DAT_1404e55e8 != DAT_1404e55f0) {
    do {
      puVar5 = DAT_1404e55f0;
      puVar14 = puVar18;
      if (*(int *)((longlong)puVar18 + 0x24) != 4) goto joined_r0x00014006d098;
      if (7 < (ulonglong)puVar18[3]) {
        puVar14 = (undefined8 *)*puVar18;
      }
      uVar12 = 0;
      uVar20 = 0xcbf29ce484222325;
      if (puVar18[2] * 2 != 0) {
        do {
          pbVar1 = (byte *)(uVar12 + (longlong)puVar14);
          uVar12 = uVar12 + 1;
          uVar20 = (uVar20 ^ *pbVar1) * 0x100000001b3;
        } while (uVar12 < (ulonglong)(puVar18[2] * 2));
      }
      lVar8 = FUN_14007cca0(&DAT_1404e5600,&local_e0,puVar18,uVar20);
      puVar5 = DAT_1404e55f0;
      puVar14 = puVar18 + 5;
      if ((*(longlong *)(lVar8 + 8) == 0) || (*(longlong *)(lVar8 + 8) == DAT_1404e5608))
      goto joined_r0x00014006d146;
      puVar18 = puVar14;
    } while (puVar14 != DAT_1404e55f0);
    param_2 = (char)local_res10[0];
  }
  bVar24 = false;
  func_0x00014003d120(&DAT_1404e53c0);
  if (DAT_1404e53b0 != 0) {
    DAT_1404e53d4 = DAT_1404e53d4 | DAT_1404e53d8;
  }
  uVar16 = DAT_1404e53d8;
  if (DAT_1404e5498 == 1) {
    bVar25 = DAT_1404e53d8 != 0;
    local_res8 = CONCAT71(local_res8._1_7_,bVar25);
    uVar22 = 0;
  }
  else if (DAT_1404e5498 == 2) {
    if (((DAT_1404e53b0 == 1) || (uVar22 = DAT_1404e53d8, DAT_1404e53b0 == 2)) &&
       (uVar22 = 0, DAT_1404e53bc == DAT_1404e53d8)) {
      uVar22 = 0xffffffff;
    }
  }
  else if (DAT_1404e5498 == 3) {
    uVar22 = -(uint)(DAT_1404e53d8 != 0);
    uVar16 = -DAT_1404e53d8;
  }
  else {
    uVar22 = 0;
    if (DAT_1404e5498 == 4) {
      bVar24 = DAT_1404e53d8 != 0;
      local_res20[0] = CONCAT31(local_res20[0]._1_3_,bVar24);
    }
  }
  if (DAT_1404e5494 == 1) {
    if ((bVar25) || (local_res8 = local_res8 & 0xffffffffffffff00, DAT_1404e53d4 != 0)) {
      local_res8 = CONCAT71(local_res8._1_7_,1);
    }
  }
  else if (DAT_1404e5494 == 2) {
    if ((DAT_1404e53b0 == 1) || (DAT_1404e53b0 == 2)) {
      uVar11 = 0;
      if (DAT_1404e53bc == DAT_1404e53d4) {
        uVar11 = 0xffffffff;
      }
      uVar22 = uVar22 | uVar11;
    }
    else {
      uVar22 = uVar22 | DAT_1404e53d4;
    }
  }
  else if (DAT_1404e5494 == 3) {
    uVar22 = uVar22 | -(uint)(DAT_1404e53d4 != 0);
  }
  else if (DAT_1404e5494 == 4) {
    if ((bVar24) || (DAT_1404e53d4 != 0)) {
      local_res20[0] = CONCAT31(local_res20[0]._1_3_,1);
    }
    else {
      local_res20[0] = (uint)local_res20[0]._1_3_ << 8;
    }
  }
  if (_DAT_1404e53d0 != 0) {
    if (iRam00000001404e5490 == 1) {
      local_res8 = CONCAT71(local_res8._1_7_,1);
    }
    else if (iRam00000001404e5490 == 2) {
      uVar11 = _DAT_1404e53d0;
      if (DAT_1404e53b0 != 0) {
        uVar11 = -(uint)(_DAT_1404e53d0 != 0);
      }
      uVar22 = uVar22 | uVar11;
    }
    else if (iRam00000001404e5490 == 3) {
      uVar22 = 0xffffffff;
    }
  }
  if (cRam00000001404e61f8 != '\0') {
    cVar7 = cRam00000001404e6268;
    if (param_2 != '\0') {
      cVar7 = FUN_140138c50(0x1404e61f8,&DAT_1404e54b0,uVar16);
    }
    if (cVar7 != '\0') {
      if (iRam00000001404e54a4 == 1) {
        local_res8 = CONCAT71(local_res8._1_7_,1);
      }
      else if (iRam00000001404e54a4 == 2) {
        uVar22 = 0xffffffff;
      }
    }
  }
  if ((DAT_1404e53b4 >> 1 & 1) != 0) {
    uVar22 = 0;
  }
  if ((DAT_1404e53b4 >> 0x16 & 1) != 0) {
    uVar22 = 0xffffffff;
  }
  local_res10[0] = uVar22;
  if ((DAT_1404e53b4 >> 4 & 1) != 0) {
    if (iRam00000001404e54a0 == 4) {
      local_res20[0] = CONCAT31(local_res20[0]._1_3_,1);
    }
    else if (iRam00000001404e54a0 == 2) {
      local_res10[0] = 0xffffffff;
    }
  }
  FUN_140135a90(&DAT_1404e54b0,&local_res8,local_res20,local_res10);
  if (param_2 == '\0') {
code_r0x00014006d4cd:
    uVar12 = (ulonglong)DAT_1404e53b4;
  }
  else {
    uVar12 = (ulonglong)DAT_1404e53b4;
    if (((DAT_1404e53b4 >> 9 & 1) != 0) && (lRam00000001404e64e0 != 0)) {
      plVar9 = *(longlong **)(lRam00000001404e64e0 + 0x20);
      uVar20 = *(longlong *)(lRam00000001404e64e0 + 0x28) - (longlong)plVar9;
      if ((1 < (ulonglong)((longlong)uVar20 >> 3)) &&
         (uVar16 = *(uint *)(((uVar20 & 0xfffffffffffffff8) - 8) + (longlong)plVar9),
         uVar16 - 0x801 < 0x1f7ff)) {
        fVar27 = (float)uVar16;
        fVar28 = (float)(*plVar9 / 1000000 & 0xffffffff);
        if (fVar28 < fVar27 * _UNK_1404927b4) {
          if ((DAT_1404e53b4 >> 10 & 1) != 0) {
            FUN_1400577f0(0x1404e64e8);
            if (((fRam00000001404e64f8 <= _UNK_140492958) || (fVar27 * _UNK_1404927a4 <= fVar28)) &&
               (fVar27 * _UNK_140492770 <= fVar28)) goto code_r0x00014006d4cd;
            DAT_1404e53b4 = DAT_1404e53b4 & 0xfffffbff;
            uVar12 = (ulonglong)DAT_1404e53b4;
          }
        }
        else {
          if ((DAT_1404e53b4 >> 10 & 1) == 0) {
            FUN_140098830("VRAM exhausted (%u of %u).\n");
          }
          DAT_1404e53b4 = DAT_1404e53b4 | 0x400;
          uVar12 = (ulonglong)DAT_1404e53b4;
          fRam00000001404e64f8 = 0.0;
        }
      }
    }
  }
  uVar16 = local_res20[0] & 0xff;
  if ((uVar12 & 0x408) != 0) {
    uVar16 = 1;
  }
  bVar15 = (byte)uVar16;
  local_res20[0] = uVar16;
  if (((byte)(uVar12 >> 2) & 1) != bVar15) {
    if (bVar15 == 0) {
      DAT_1404e53b4 = (uint)uVar12 & 0xfffffffb;
    }
    else {
      DAT_1404e53b4 = (uint)uVar12 | 4;
    }
    FUN_140073b90();
    uVar12 = (ulonglong)DAT_1404e53b4;
  }
  uVar22 = local_res10[0];
  uVar11 = (uint)uVar12;
  puVar19 = auStack_158;
  if ((bVar15 == 0) && (puVar19 = auStack_158, (uVar12 >> 5 & 1) == 0)) {
    if ((local_res10[0] != DAT_1404e53b8) || ((byte)local_res8 != ((byte)(uVar12 >> 7) & 1))) {
      DAT_1404e53b8 = local_res10[0];
      if ((byte)local_res8 == 0) {
        DAT_1404e53b4 = uVar11 & 0xffffff7f;
      }
      else {
        DAT_1404e53b4 = uVar11 | 0x80;
      }
      FUN_140073a70();
      uVar11 = DAT_1404e53b4;
    }
    puVar19 = auStack_158;
    if (param_2 == '\0') goto code_r0x00014006e04b;
    uStack_c8 = 0xf;
    param_2 = '\0';
    uStack_d8 = 0;
    local_e0 = (undefined8 *******)0x0;
    uStack_d0 = 0;
    cVar7 = func_0x000140135d10(&DAT_1404e54b0,&local_res8,local_138,&local_e0);
    pppppppuVar21 = local_e0;
    uVar26 = extraout_XMM0_Da;
    if (cVar7 == '\0') {
      if ((iRam00000001404e64d8 != -1) && (iRam00000001404e64d8 = -1, cRam00000001404df6e8 == '\a'))
      {
        func_0x000140084ea0(&plStack_130,0);
        FUN_1400855f0(&plStack_130,0x1404df6e0);
        uStack_b8 = (uStack_b8 >> 8 & 0xfffffe) << 8;
        uStack_a0 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        func_0x0001400856e0(0x1404df6e0,auStack_c0);
        func_0x000140085510(auStack_c0);
                    /* WARNING: Subroutine does not return */
        FUN_140086eb0(&DAT_1404df6b8,"general","");
      }
    }
    else {
      if (iRam00000001404e64d8 == -1) {
        for (puVar18 = (undefined8 *)*DAT_1404e5400; puVar18 != DAT_1404e5400;
            puVar18 = (undefined8 *)*puVar18) {
          lVar8 = puVar18[6];
          if (lVar8 != 0) {
            if (puVar18 != (undefined8 *)(lVar8 + 0x40)) {
              plVar9 = (longlong *)(lVar8 + 0xe0);
              if (0xf < *(ulonglong *)(lVar8 + 0xf8)) {
                plVar9 = (longlong *)*plVar9;
              }
                    /* WARNING: Subroutine does not return */
              FUN_14000f950(puVar18 + 0x14,plVar9,*(undefined8 *)(lVar8 + 0xf0));
            }
            lVar8 = puVar18[6];
            if (puVar18 != (undefined8 *)(lVar8 + 0x60)) {
              plVar9 = (longlong *)(lVar8 + 0x120);
              if (0xf < *(ulonglong *)(lVar8 + 0x138)) {
                plVar9 = (longlong *)*plVar9;
              }
                    /* WARNING: Subroutine does not return */
              FUN_14000f950(puVar18 + 0x18,plVar9,*(undefined8 *)(lVar8 + 0x130));
            }
          }
        }
      }
      iVar17 = (int)local_res8;
      uVar16 = local_res20[0];
      if (iRam00000001404e64d8 != (int)local_res8) {
        if (cRam00000001404df6e8 != '\a') {
          FUN_1400855f0(0x1404df6e0,&DAT_1404e6448);
        }
        uStack_90 = CONCAT31(uStack_90._1_3_,7);
        uStack_90 = uStack_90 & 0xfffffeff;
        uStack_88 = 0;
        uStack_80 = 0;
        iRam00000001404e64d8 = iVar17;
        uStack_78 = 0;
        plVar9 = (longlong *)func_0x00014028aff0(0x10);
        *plVar9 = 0;
        plVar9[1] = 0;
        lVar8 = func_0x00014028aff0(0x58);
        *(longlong *)lVar8 = lVar8;
        *(longlong *)(lVar8 + 8) = lVar8;
        *(longlong *)(lVar8 + 0x10) = lVar8;
        *(undefined2 *)(lVar8 + 0x18) = 0x101;
        *plVar9 = lVar8;
        plStack_98 = plVar9;
        if (local_138[0] == 0) {
          uStack_128 = CONCAT31(uStack_128._1_3_,7);
          uStack_128 = uStack_128 & 0xfffffeff;
          uStack_120 = 0;
          uStack_118 = 0;
          uStack_110 = 0;
          plVar9 = (longlong *)func_0x00014028aff0(0x10);
          *plVar9 = 0;
          plVar9[1] = 0;
          lVar8 = func_0x00014028aff0(0x58);
          *(longlong *)lVar8 = lVar8;
          *(longlong *)(lVar8 + 8) = lVar8;
          *(longlong *)(lVar8 + 0x10) = lVar8;
          *(undefined2 *)(lVar8 + 0x18) = 0x101;
          *plVar9 = lVar8;
          plStack_130 = plVar9;
          if ((int)(DAT_1404e8fa0 - DAT_1404e8f98 >> 3) * -0xf0f0f0f < 1) {
                    /* WARNING: Subroutine does not return */
            FUN_140086eb0(&plStack_98,"selectedwallpapers","");
          }
          uVar26 = (undefined4)uStack_d0;
          uVar12 = uStack_d0 & 0xffffffff;
          uStack_100 = CONCAT31(uStack_100._1_3_,7);
          uStack_100 = uStack_100 & 0xfffffeff;
          uStack_f8 = 0;
          uStack_f0 = 0;
          uStack_e8 = 0;
          plVar9 = (longlong *)func_0x00014028aff0(0x10);
          *plVar9 = 0;
          plVar9[1] = 0;
          lVar8 = func_0x00014028aff0(0x58);
          uStack_a0 = 0;
          uStack_b8 = CONCAT31(uStack_b8._1_3_,4);
          uStack_b8 = uStack_b8 | 0x100;
          *(longlong *)lVar8 = lVar8;
          pppppppuVar21 = &local_e0;
          if (0xf < uStack_c8) {
            pppppppuVar21 = local_e0;
          }
          *(longlong *)(lVar8 + 8) = lVar8;
          *(longlong *)(lVar8 + 0x10) = lVar8;
          *(undefined2 *)(lVar8 + 0x18) = 0x101;
          *plVar9 = lVar8;
          uStack_b0 = 0;
          uStack_a8 = 0;
          plStack_108 = plVar9;
          puVar10 = (undefined4 *)thunk_FUN_1402da070(uVar12 + 5);
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = uVar26;
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(puVar10 + 1,pppppppuVar21,uVar12);
          }
          func_0x000140017240(&plStack_108,
                              "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                             );
                    /* WARNING: Subroutine does not return */
          FUN_140084c90(&plStack_108);
        }
        if (local_138[0] == 1) {
          func_0x000140084ea0(auStack_c0,0);
                    /* WARNING: Subroutine does not return */
          FUN_140086eb0(&DAT_1404df6b8,"general","");
        }
        if (local_138[0] == 2) {
          uStack_128 = (uStack_128._1_3_ & 0xfffffe) << 8;
          uStack_110 = 0;
          uStack_120 = 0;
          uStack_118 = 0;
                    /* WARNING: Subroutine does not return */
          FUN_140086eb0(&DAT_1404df6b8,"general","");
        }
        FUN_1400855f0(&DAT_1404e6470,&plStack_98);
        FUN_14006a560(&DAT_1404e53b0,&plStack_98);
        uVar26 = func_0x000140085510(&plStack_98);
        uVar16 = local_res20[0];
      }
    }
    cVar7 = (char)uVar16;
    FUN_140076cb0(uVar26,uVar22);
    if (0xf < uStack_c8) {
      uVar12 = uStack_c8 + 1;
      pppppppuVar23 = pppppppuVar21;
      if (0xfff < uVar12) {
        pppppppuVar23 = (undefined8 *******)pppppppuVar21[-1];
        if (0x1f < (ulonglong)((longlong)pppppppuVar21 + (-8 - (longlong)pppppppuVar23))) {
          uVar12 = 5;
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)();
          puVar19 = auStack_150;
          goto code_r0x00014006df8e;
        }
        uVar12 = uStack_c8 + 0x28;
      }
      func_0x00014028b040(pppppppuVar23,uVar12);
    }
    uVar12 = (ulonglong)DAT_1404e53b4;
    puVar19 = auStack_158;
  }
  else {
code_r0x00014006df8e:
    cVar7 = (char)uVar16;
    uVar11 = (uint)uVar12;
    if (param_2 == '\0') goto code_r0x00014006e04b;
  }
  uVar11 = (uint)uVar12;
  if (((((uVar12 >> 0x11 & 1) == 0) || ((uVar12 & 0x2d) != 0)) || (DAT_1404e53b8 == DAT_1404e53bc))
     || (cVar7 != '\0')) {
    bVar15 = 0;
  }
  else {
    bVar15 = 1;
  }
  uVar20 = uVar12 >> 4;
  uVar4 = uVar12 >> 0x13;
  if (((byte)(uVar12 >> 0x12) & 1) == bVar15) {
    if ((bVar15 == 0) || (((byte)uVar20 & 1) == ((byte)uVar4 & 1))) goto code_r0x00014006e04b;
    uVar13 = 1;
    if ((uVar4 & 1) != 0) {
      uVar13 = 8;
    }
    *(undefined **)(puVar19 + -8) = &UNK_14006dff7;
    (*_DAT_140426b10)(uVar13);
code_r0x00014006e003:
    uVar26 = 1;
    if ((uVar20 & 1) != 0) {
      uVar26 = 8;
    }
    *(undefined **)(puVar19 + -8) = &UNK_14006e012;
    (*DAT_140426b18)(uVar26);
    uVar11 = DAT_1404e53b4 | 0x40000;
  }
  else {
    if (bVar15 != 0) goto code_r0x00014006e003;
    uVar26 = 1;
    if ((uVar4 & 1) != 0) {
      uVar26 = 8;
    }
    *(undefined **)(puVar19 + -8) = &UNK_14006e02d;
    (*_DAT_140426b10)(uVar26);
    uVar11 = DAT_1404e53b4 & 0xfffbffff;
  }
  if ((uVar20 & 1) == 0) {
    uVar11 = uVar11 & 0xfff7ffff;
    DAT_1404e53b4 = uVar11;
  }
  else {
    uVar11 = uVar11 | 0x80000;
    DAT_1404e53b4 = uVar11;
  }
code_r0x00014006e04b:
  if (DAT_1404e53e0 != DAT_1404e53e8) {
    if ((uVar11 >> 0x17 & 1) != 0) {
      *(undefined **)(puVar19 + -8) = &UNK_14006e071;
      FUN_14006a100(uVar11 >> 0x17,0);
    }
    iVar17 = 0;
    if (DAT_1404e53e8 - DAT_1404e53e0 >> 3 != 0) {
      do {
        lVar8 = (longlong)iVar17;
        if (*(char *)(*(longlong *)(DAT_1404e53e0 + lVar8 * 8) + 0x3a) != '\0') {
          lVar2 = *(longlong *)(DAT_1404e53e0 + lVar8 * 8);
          if (lVar2 != 0) {
            *(undefined **)(puVar19 + -8) = &UNK_14006e0b8;
            FUN_140058200(lVar2);
            *(undefined **)(puVar19 + -8) = &UNK_14006e0c5;
            func_0x00014028b040(lVar2,0xf0);
          }
          lVar2 = DAT_1404e53e0 + lVar8 * 8;
          lVar8 = lVar2 + 8;
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar19 + -8) = 0x14006e0e3;
          FUN_1404211c0(lVar2,lVar8,DAT_1404e53e8 - lVar8);
        }
        iVar17 = iVar17 + 1;
      } while ((ulonglong)(longlong)iVar17 < (ulonglong)(DAT_1404e53e8 - DAT_1404e53e0 >> 3));
    }
  }
  return;
joined_r0x00014006d098:
  while (puVar6 = puVar14 + 5, puVar6 != puVar5) {
    func_0x000140016630(puVar18,puVar6);
    *(undefined4 *)(puVar18 + 4) = *(undefined4 *)(puVar6 + 4);
    *(undefined4 *)((longlong)puVar18 + 0x24) = *(undefined4 *)((longlong)puVar14 + 0x4c);
    puVar18 = puVar18 + 5;
    puVar14 = puVar6;
  }
  goto LAB_14006d17b;
joined_r0x00014006d146:
  for (; puVar14 != puVar5; puVar14 = puVar14 + 5) {
    func_0x000140016630(puVar18,puVar14);
    *(undefined4 *)(puVar18 + 4) = *(undefined4 *)(puVar14 + 4);
    *(undefined4 *)((longlong)puVar18 + 0x24) = *(undefined4 *)((longlong)puVar14 + 0x24);
    puVar18 = puVar18 + 5;
  }
LAB_14006d17b:
                    /* WARNING: Subroutine does not return */
  FUN_140016840(DAT_1404e55f0 + -5);
}

