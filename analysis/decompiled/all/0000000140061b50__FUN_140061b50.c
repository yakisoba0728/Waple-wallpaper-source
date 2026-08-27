// Function: FUN_140061b50
// Addr: 140061b50
// Size: 4479 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_140061b50(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  undefined8 ******ppppppuVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  size_t sVar17;
  undefined8 *puVar18;
  undefined8 *******pppppppuVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined8 *******_Buf1;
  undefined8 *******pppppppuVar22;
  int iVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong *plVar27;
  longlong *plVar28;
  longlong *plVar29;
  undefined1 *puVar30;
  ulonglong *puVar31;
  char *_Str;
  longlong *plVar32;
  char cVar33;
  bool bVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  uint local_res18 [2];
  char local_res20;
  undefined1 auStack_318 [8];
  undefined1 auStack_310 [24];
  byte local_2f8;
  char local_2f7;
  byte local_2f6;
  char local_2f5;
  char local_2f4;
  char local_2f3;
  char local_2f2;
  int local_2f0;
  int local_2ec;
  int local_2e8;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  longlong *local_2c8;
  longlong *local_2c0;
  undefined8 *******local_2b8;
  ulonglong uStack_2b0;
  ulonglong local_2a8;
  ulonglong local_2a0;
  undefined8 *******local_298;
  undefined8 uStack_290;
  size_t local_288;
  ulonglong local_280;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  undefined8 *******local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  ulonglong local_250;
  char local_248;
  byte local_247;
  undefined2 local_246;
  int local_244;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 ******local_220;
  undefined8 ******ppppppuStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 *******local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  ulonglong local_1e8;
  undefined4 local_1e0;
  undefined8 ******local_1d8;
  undefined8 *******local_1c8 [2];
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  ulonglong local_190;
  ulonglong *local_188;
  undefined4 local_178 [2];
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  ulonglong local_148;
  undefined8 local_140;
  undefined8 *******local_138;
  undefined8 uStack_130;
  ulonglong local_128;
  longlong *local_120;
  undefined8 local_118;
  ulonglong *local_110;
  ulonglong *local_108;
  ulonglong local_100;
  ulonglong *local_f8;
  ulonglong *local_f0;
  longlong local_e8;
  undefined1 local_d8 [8];
  undefined1 local_d0 [16];
  undefined1 local_c0 [40];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [56];
  
  puVar30 = auStack_318;
  FUN_140088360(param_1,&local_f8);
  local_188 = local_f8;
  local_108 = local_f8;
  local_110 = local_f0;
  if (local_f8 != local_f0) {
    cVar33 = '\0';
    local_2f7 = '\0';
    do {
      pppppppuVar19 = (undefined8 *******)0x0;
      uVar24 = local_f8[2];
      local_2b8 = (undefined8 *******)0x0;
      uStack_2b0 = 0;
      local_2a8 = 0;
      local_2a0 = 0;
      puVar31 = local_f8;
      if (0xf < local_f8[3]) {
        puVar31 = (ulonglong *)*local_f8;
      }
      local_188 = local_f8;
      if (0x7fffffffffffffff < uVar24) goto LAB_140062cc5;
      if (uVar24 < 0x10) {
        local_2a0 = 0xf;
        local_2b8 = (undefined8 *******)*puVar31;
        uStack_2b0 = puVar31[1];
        local_2a8 = uVar24;
      }
      else {
        uVar25 = uVar24 | 0xf;
        if (uVar25 < 0x8000000000000000) {
          if (uVar25 < 0x16) {
            uVar25 = 0x16;
          }
          uVar26 = uVar25 + 1;
          if (uVar26 != 0) {
            if (0xfff < uVar26) {
              uVar21 = uVar25 + 0x28;
              if (uVar21 <= uVar26) {
                    /* WARNING: Subroutine does not return */
                FUN_140017370();
              }
              goto LAB_140061c65;
            }
            pppppppuVar19 = (undefined8 *******)FUN_14028af20(uVar26);
          }
        }
        else {
          uVar25 = 0x7fffffffffffffff;
          uVar21 = 0x8000000000000027;
LAB_140061c65:
          ppppppuVar11 = (undefined8 ******)FUN_14028af20(uVar21);
          if (ppppppuVar11 == (undefined8 ******)0x0) goto LAB_140062cbe;
          pppppppuVar19 = (undefined8 *******)((longlong)ppppppuVar11 + 0x27U & 0xffffffffffffffe0);
          pppppppuVar19[-1] = ppppppuVar11;
        }
        local_2b8 = pppppppuVar19;
        local_2a8 = uVar24;
        local_2a0 = uVar25;
        FUN_1404210f0(pppppppuVar19,puVar31,uVar24 + 1);
      }
      pppppppuVar19 = &local_2b8;
      if (0xf < local_2a0) {
        pppppppuVar19 = local_2b8;
      }
      lVar12 = FUN_140086de0(param_1,pppppppuVar19,(longlong)pppppppuVar19 + local_2a8);
      if (*(char *)(lVar12 + 8) == '\a') {
        plVar13 = (longlong *)FUN_140087490(lVar12,"monitors","");
        if (plVar13 == (longlong *)0x0) {
          local_2c0 = plVar13;
          plVar13 = (longlong *)FUN_140084ac0();
        }
        local_2c0 = plVar13;
        if ((char)plVar13[1] != '\x06') goto LAB_140061cd8;
        lVar14 = FUN_140087490(lVar12,"monitorconfig","");
        if (lVar14 == 0) {
          lVar14 = FUN_140084ac0();
        }
        lVar15 = FUN_140087490(lVar12,"layout","");
        if (lVar15 == 0) {
          lVar15 = FUN_140084ac0();
        }
        cVar7 = FUN_1400886e0(lVar15);
        if (cVar7 == '\0') {
          local_2d0 = 1;
        }
        else {
          local_2d0 = FUN_140085ee0(lVar15);
        }
        local_258 = 0;
        uStack_260 = 0;
        local_268 = (undefined8 *******)0x0;
        local_250 = 0xf;
        local_220 = (undefined8 ******)0x0;
        ppppppuStack_218 = (undefined8 ******)0x0;
        local_210 = 0;
        uStack_208 = 0;
        local_118 = 0;
        local_1f0 = 0;
        local_100 = 0xf;
        local_1e8 = 0xf;
        local_1d8 = (undefined8 ******)0x0;
        local_2f8 = 3;
        local_246 = 0x300;
        local_240 = 0x1fffffff1fffffff;
        local_2f0 = 0x1fffffff;
        local_2ec = 0x1fffffff;
        uStack_238 = 0xe0000000e0000000;
        local_240._0_4_ = 0x1fffffff;
        iVar35 = (int)local_240;
        local_240._4_4_ = 0x1fffffff;
        iVar36 = local_240._4_4_;
        uStack_238._0_4_ = -0x20000000;
        iVar37 = (int)uStack_238;
        uStack_238._4_4_ = -0x20000000;
        iVar38 = uStack_238._4_4_;
        local_1e0 = 0;
        uStack_1f8 = 0;
        local_200 = (undefined8 *******)0x0;
        local_2f6 = 0xff;
        local_230 = 0x1fffffff1fffffff;
        uStack_228 = 0xe0000000e0000000;
        local_247 = 0xff;
        local_2e8 = -0x20000000;
        local_2e4 = -0x20000000;
        local_2f2 = cVar33;
        local_248 = cVar33;
        local_244 = local_2d0;
        lVar12 = FUN_140087490(lVar12,"source","");
        if (lVar12 == 0) {
          lVar12 = FUN_140084ac0();
        }
        if (*(char *)(lVar12 + 8) == '\x04') {
          FUN_140085cc0(lVar12,&local_298);
        }
        else {
          local_280 = 0xf;
          local_288 = 0;
          uStack_290 = 0;
          local_298 = (undefined8 *******)0x0;
        }
        plVar29 = (longlong *)0x0;
        local_res18[0] = 0;
        FUN_140033970(local_d8,local_res18);
        uVar20 = *(uint *)(plVar13 + 1) & 0xff;
        if (((uVar20 == 6) || (uVar20 == 7)) && ((undefined8 *)*plVar13 != (undefined8 *)0x0)) {
          bVar3 = false;
          plVar28 = (longlong *)**(undefined8 **)*plVar13;
        }
        else {
          bVar3 = true;
          plVar28 = plVar29;
        }
        if (((uVar20 == 6) || (uVar20 == 7)) && ((undefined8 *)*plVar13 != (undefined8 *)0x0)) {
          plVar29 = *(longlong **)*plVar13;
          bVar34 = false;
        }
        else {
          bVar34 = true;
        }
        while( true ) {
          bVar4 = bVar34;
          if (!bVar3) {
            bVar4 = plVar28 == plVar29;
          }
          if (bVar4) break;
          if ((char)plVar28[7] == '\x04') {
            uVar16 = FUN_140085cc0(plVar28 + 6,&local_1a8);
            FUN_140032960(local_d8,local_98,uVar16);
            if (0xf < local_190) {
              uVar25 = local_190 + 1;
              uVar24 = local_1a8;
              if (0xfff < uVar25) {
                uVar24 = *(ulonglong *)(local_1a8 - 8);
                if (0x1f < (local_1a8 - uVar24) - 8) goto LAB_140062cbe;
                uVar25 = local_190 + 0x28;
              }
              thunk_FUN_14028af80(uVar24,uVar25);
            }
          }
          plVar32 = (longlong *)plVar28[2];
          if (*(char *)((longlong)plVar32 + 0x19) == '\0') {
            cVar33 = *(char *)(*plVar32 + 0x19);
            plVar28 = plVar32;
            while (cVar33 == '\0') {
              plVar28 = (longlong *)*plVar28;
              cVar33 = *(char *)(*plVar28 + 0x19);
            }
          }
          else {
            cVar33 = *(char *)(plVar28[1] + 0x19);
            plVar27 = (longlong *)plVar28[1];
            plVar32 = plVar28;
            while ((plVar28 = plVar27, cVar33 == '\0' && (plVar32 == (longlong *)plVar28[2]))) {
              cVar33 = *(char *)(plVar28[1] + 0x19);
              plVar27 = (longlong *)plVar28[1];
              plVar32 = plVar28;
            }
          }
        }
        local_178[0] = 0;
        local_170 = 0;
        local_168 = 0;
        local_170 = FUN_14028af20(0x30);
        *(longlong *)local_170 = local_170;
        *(longlong *)(local_170 + 8) = local_170;
        local_160 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_148 = 7;
        local_140 = 8;
        local_178[0] = 0x3f800000;
        FUN_140037600(&local_160,0x10,local_170);
        FUN_140061a10(local_d8,lVar14,local_178);
        uVar20 = *(uint *)(plVar13 + 1) & 0xff;
        local_res18[0] = local_res18[0] & 0xffffff00;
        local_2f3 = '\0';
        if (((uVar20 == 6) || (uVar20 == 7)) && ((undefined8 *)*plVar13 != (undefined8 *)0x0)) {
          local_res20 = '\0';
          plVar29 = (longlong *)**(undefined8 **)*plVar13;
        }
        else {
          plVar29 = (longlong *)0x0;
          local_res20 = '\x01';
        }
        if (((uVar20 == 6) || (uVar20 == 7)) && ((undefined8 *)*plVar13 != (undefined8 *)0x0)) {
          plVar13 = *(longlong **)*plVar13;
          local_2f5 = '\0';
        }
        else {
          plVar13 = (longlong *)0x0;
          local_2f5 = '\x01';
        }
        local_2d4 = -0x20000000;
        local_2dc = 0x1fffffff;
        local_2d8 = -0x20000000;
        local_2e0 = 0x1fffffff;
        iVar39 = iVar35;
        iVar40 = iVar36;
        iVar41 = iVar37;
        iVar42 = iVar38;
        cVar33 = '\0';
        local_2c8 = plVar13;
        cVar7 = local_res20;
        while( true ) {
          cVar8 = local_2f5;
          if (cVar7 == '\0') {
            cVar8 = plVar29 == plVar13;
          }
          if (cVar8 != '\0') break;
          if ((char)plVar29[7] == '\x04') {
            FUN_140085cc0(plVar29 + 6);
            uVar24 = local_1b8;
            pppppppuVar19 = local_1c8[0];
            uVar25 = 0xcbf29ce484222325;
            pppppppuVar22 = local_1c8;
            if (0xf < local_1b0) {
              pppppppuVar22 = local_1c8[0];
            }
            uVar26 = 0;
            if (local_1b8 != 0) {
              do {
                pbVar1 = (byte *)((longlong)pppppppuVar22 + uVar26);
                uVar26 = uVar26 + 1;
                uVar25 = (uVar25 ^ *pbVar1) * 0x100000001b3;
                plVar13 = local_2c8;
              } while (uVar26 < local_1b8);
            }
            uVar25 = uVar25 & *(ulonglong *)(param_2 + 0x30);
            lVar12 = *(longlong *)(param_2 + 8);
            lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 8 + uVar25 * 0x10);
            uVar26 = local_1b0;
            if (lVar14 != lVar12) {
              lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x18) + uVar25 * 0x10);
              while( true ) {
                puVar18 = (undefined8 *)(lVar14 + 0x10);
                if (0xf < *(ulonglong *)(lVar14 + 0x28)) {
                  puVar18 = (undefined8 *)*puVar18;
                }
                pppppppuVar22 = local_1c8;
                if (0xf < uVar26) {
                  pppppppuVar22 = pppppppuVar19;
                }
                if ((uVar24 == *(ulonglong *)(lVar14 + 0x20)) &&
                   ((uVar24 == 0 ||
                    (iVar10 = memcmp(pppppppuVar22,puVar18,uVar24), uVar26 = local_1b0, iVar10 == 0)
                    ))) {
                  cVar33 = (char)local_res18[0];
                  goto LAB_140062247;
                }
                if (lVar14 == lVar15) break;
                lVar14 = *(longlong *)(lVar14 + 8);
              }
              cVar33 = (char)local_res18[0];
            }
            lVar14 = 0;
LAB_140062247:
            if (((lVar14 != 0) && (lVar14 != lVar12)) && ((*(byte *)(lVar14 + 0x53) & 1) == 0)) {
              bVar9 = local_2f8 & 0xfe;
              local_1e0 = *(undefined4 *)(lVar14 + 0xb8);
              local_246 = CONCAT11(local_2f8,(undefined1)local_246) & 0xfeff;
              if (*(byte *)(lVar14 + 0x51) < local_2f6) {
                local_2f6 = *(byte *)(lVar14 + 0x51);
              }
              local_1d8 = *(undefined8 *******)(lVar14 + 0xc0);
              local_2f8 = bVar9;
              local_247 = local_2f6;
              if (local_2d0 == 2) {
                iVar10 = *(int *)(lVar14 + 0x60) - *(int *)(lVar14 + 0x58);
                local_274 = iVar10;
                if (iVar10 < 1) {
                  local_274 = 0;
                }
                iVar23 = *(int *)(lVar14 + 100) - *(int *)(lVar14 + 0x5c);
                local_278 = iVar23;
                if (iVar23 < 1) {
                  local_278 = 0;
                }
                local_26c = local_2e8 - local_2f0;
                if (local_26c < 1) {
                  local_26c = 0;
                }
                local_270 = local_2e4 - local_2ec;
                if (local_270 < 1) {
                  local_270 = 0;
                }
                if (iVar10 < 1) {
                  iVar10 = 0;
                }
                if (iVar23 < 1) {
                  iVar23 = 0;
                }
                if ((cVar33 == '\0') && (iVar23 <= iVar10)) {
                  bVar3 = true;
LAB_140062310:
                  if (iVar23 <= iVar10) {
LAB_140062335:
                    local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
                    goto LAB_14006233c;
                  }
                  local_2f4 = '\0';
                  local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
                }
                else {
                  bVar3 = false;
                  if (cVar33 != '\0') goto LAB_140062310;
                  if (iVar23 <= iVar10) goto LAB_140062335;
                  local_res18[0] = (uint)local_res18[0]._1_3_ << 8;
LAB_14006233c:
                  local_2f4 = '\x01';
                }
                pppppppuVar22 = local_1c8;
                if (0xf < uVar26) {
                  pppppppuVar22 = pppppppuVar19;
                }
                _Buf1 = &local_298;
                if (0xf < local_280) {
                  _Buf1 = local_298;
                }
                if (local_288 == uVar24) {
                  if (local_288 == 0) {
                    iVar39 = *(int *)(lVar14 + 0x58);
                    iVar40 = *(int *)(lVar14 + 0x5c);
                    local_240 = *(undefined8 *)(lVar14 + 0x58);
                    iVar41 = *(int *)(lVar14 + 0x60);
                    iVar42 = *(int *)(lVar14 + 100);
                    uStack_238 = *(undefined8 *)(lVar14 + 0x60);
                    iVar35 = *(int *)(lVar14 + 0x68);
                    iVar36 = *(int *)(lVar14 + 0x6c);
                    local_230 = *(undefined8 *)(lVar14 + 0x68);
                    iVar37 = *(int *)(lVar14 + 0x70);
                    iVar38 = *(int *)(lVar14 + 0x74);
                    uStack_228 = *(undefined8 *)(lVar14 + 0x70);
                  }
                  else {
                    iVar10 = memcmp(_Buf1,pppppppuVar22,local_288);
                    bVar34 = iVar10 == 0;
                    uVar25 = local_1b0;
                    if (!bVar34) goto LAB_14006239b;
LAB_14006244b:
                    iVar39 = *(int *)(lVar14 + 0x58);
                    iVar40 = *(int *)(lVar14 + 0x5c);
                    local_240 = *(undefined8 *)(lVar14 + 0x58);
                    iVar41 = *(int *)(lVar14 + 0x60);
                    iVar42 = *(int *)(lVar14 + 100);
                    uStack_238 = *(undefined8 *)(lVar14 + 0x60);
                    iVar35 = *(int *)(lVar14 + 0x68);
                    iVar36 = *(int *)(lVar14 + 0x6c);
                    local_230 = *(undefined8 *)(lVar14 + 0x68);
                    iVar37 = *(int *)(lVar14 + 0x70);
                    iVar38 = *(int *)(lVar14 + 0x74);
                    uStack_228 = *(undefined8 *)(lVar14 + 0x70);
                    uVar26 = local_1b0;
                    local_2f0 = iVar39;
                    local_2ec = iVar40;
                    local_2e8 = iVar41;
                    local_2e4 = iVar42;
                    local_2e0 = iVar35;
                    local_2dc = iVar36;
                    local_2d8 = iVar37;
                    local_2d4 = iVar38;
                    if (!bVar34) goto joined_r0x0001400625a6;
                  }
                  local_2f3 = '\x01';
                  uVar26 = local_1b0;
                  local_2f0 = iVar39;
                  local_2ec = iVar40;
                  local_2e8 = iVar41;
                  local_2e4 = iVar42;
                  local_2e0 = iVar35;
                  local_2dc = iVar36;
                  local_2d8 = iVar37;
                  local_2d4 = iVar38;
                }
                else {
                  bVar34 = false;
                  uVar25 = uVar26;
LAB_14006239b:
                  uVar26 = local_1b0;
                  if (local_2f3 == '\0') {
                    uVar26 = 0xcbf29ce484222325;
                    pppppppuVar22 = local_1c8;
                    if (0xf < uVar25) {
                      pppppppuVar22 = pppppppuVar19;
                    }
                    uVar25 = 0;
                    if (uVar24 != 0) {
                      do {
                        pbVar1 = (byte *)(uVar25 + (longlong)pppppppuVar22);
                        uVar25 = uVar25 + 1;
                        uVar26 = (uVar26 ^ *pbVar1) * 0x100000001b3;
                        plVar13 = local_2c8;
                      } while (uVar25 < uVar24);
                    }
                    lVar12 = FUN_1400110a0(local_178,local_88,local_1c8,uVar26);
                    uVar26 = local_1b0;
                    if (((*(longlong *)(lVar12 + 8) == 0) ||
                        (*(longlong *)(lVar12 + 8) == local_170)) &&
                       ((bVar3 || (((local_270 * local_26c < local_278 * local_274 ||
                                    ((local_278 * local_274 == local_270 * local_26c &&
                                     (local_2f6 == *(byte *)(lVar14 + 0x51))))) &&
                                   (local_2f4 != '\0')))))) goto LAB_14006244b;
                  }
                }
              }
              else {
                iVar39 = local_2f0;
                if (*(int *)(lVar14 + 0x58) < local_2f0) {
                  iVar39 = *(int *)(lVar14 + 0x58);
                }
                iVar40 = local_2ec;
                if (*(int *)(lVar14 + 0x5c) < local_2ec) {
                  iVar40 = *(int *)(lVar14 + 0x5c);
                }
                local_240 = CONCAT44(iVar40,iVar39);
                iVar41 = local_2e8;
                if (local_2e8 < *(int *)(lVar14 + 0x60)) {
                  iVar41 = *(int *)(lVar14 + 0x60);
                }
                iVar42 = local_2e4;
                if (local_2e4 < *(int *)(lVar14 + 100)) {
                  iVar42 = *(int *)(lVar14 + 100);
                }
                uStack_238 = CONCAT44(iVar42,iVar41);
                iVar35 = local_2e0;
                if (*(int *)(lVar14 + 0x68) < local_2e0) {
                  iVar35 = *(int *)(lVar14 + 0x68);
                }
                iVar36 = local_2dc;
                if (*(int *)(lVar14 + 0x6c) < local_2dc) {
                  iVar36 = *(int *)(lVar14 + 0x6c);
                }
                local_230 = CONCAT44(iVar36,iVar35);
                iVar37 = local_2d8;
                if (local_2d8 < *(int *)(lVar14 + 0x70)) {
                  iVar37 = *(int *)(lVar14 + 0x70);
                }
                iVar38 = local_2d4;
                if (local_2d4 < *(int *)(lVar14 + 0x74)) {
                  iVar38 = *(int *)(lVar14 + 0x74);
                }
                uStack_228 = CONCAT44(iVar38,iVar37);
                uVar26 = local_1b0;
                local_2f0 = iVar39;
                local_2ec = iVar40;
                local_2e8 = iVar41;
                local_2e4 = iVar42;
                local_2e0 = iVar35;
                local_2dc = iVar36;
                local_2d8 = iVar37;
                local_2d4 = iVar38;
              }
            }
joined_r0x0001400625a6:
            cVar7 = local_res20;
            if (0xf < uVar26) {
              uVar24 = uVar26 + 1;
              pppppppuVar22 = pppppppuVar19;
              if (0xfff < uVar24) {
                pppppppuVar22 = (undefined8 *******)pppppppuVar19[-1];
                if (0x1f < (ulonglong)((longlong)pppppppuVar19 + (-8 - (longlong)pppppppuVar22)))
                goto LAB_140062cbe;
                uVar24 = uVar26 + 0x28;
              }
              thunk_FUN_14028af80(pppppppuVar22,uVar24);
              cVar7 = local_res20;
            }
          }
          plVar28 = (longlong *)plVar29[2];
          cVar33 = (char)local_res18[0];
          if (*(char *)((longlong)plVar28 + 0x19) == '\0') {
            cVar8 = *(char *)(*plVar28 + 0x19);
            plVar29 = plVar28;
            while (cVar8 == '\0') {
              plVar29 = (longlong *)*plVar29;
              cVar8 = *(char *)(*plVar29 + 0x19);
            }
          }
          else {
            cVar8 = *(char *)(plVar29[1] + 0x19);
            plVar32 = (longlong *)plVar29[1];
            plVar28 = plVar29;
            while ((plVar29 = plVar32, cVar8 == '\0' && (plVar28 == (longlong *)plVar29[2]))) {
              cVar8 = *(char *)(plVar29[1] + 0x19);
              plVar32 = (longlong *)plVar29[1];
              plVar28 = plVar29;
            }
          }
        }
        if ((local_2f8 & 1) == 0) {
          uVar20 = *(uint *)(local_2c0 + 1) & 0xff;
          if (((uVar20 == 6) || (uVar20 == 7)) && ((undefined8 *)*local_2c0 != (undefined8 *)0x0)) {
            cVar33 = '\0';
            plVar13 = (longlong *)**(undefined8 **)*local_2c0;
          }
          else {
            plVar13 = (longlong *)0x0;
            cVar33 = '\x01';
          }
          if (((uVar20 == 6) || (uVar20 == 7)) && ((undefined8 *)*local_2c0 != (undefined8 *)0x0)) {
            plVar29 = *(longlong **)*local_2c0;
            cVar7 = '\0';
          }
          else {
            plVar29 = (longlong *)0x0;
            cVar7 = '\x01';
          }
          local_res18[0] = CONCAT31(local_res18[0]._1_3_,cVar7);
          local_res20 = cVar33;
          while( true ) {
            if (cVar33 == '\0') {
              cVar7 = plVar13 == plVar29;
            }
            if (cVar7 != '\0') break;
            if ((char)*(uint *)(plVar13 + 7) == '\x04') {
              _Str = (char *)plVar13[6];
              if ((_Str != (char *)0x0) && ((*(uint *)(plVar13 + 7) >> 8 & 1) != 0)) {
                _Str = _Str + 4;
              }
              local_198 = 0;
              local_190 = 0;
              local_1a8 = 0;
              uStack_1a0 = 0;
              sVar17 = strlen(_Str);
              FUN_140017480(&local_1a8,_Str,sVar17);
              puVar18 = (undefined8 *)FUN_14007bf30(param_2,local_78,&local_1a8);
              plVar28 = (longlong *)*puVar18;
              local_2c0 = plVar28;
              if (0xf < local_190) {
                uVar25 = local_190 + 1;
                uVar24 = local_1a8;
                if (0xfff < uVar25) {
                  uVar24 = *(ulonglong *)(local_1a8 - 8);
                  if (0x1f < (local_1a8 - uVar24) - 8) goto LAB_140062cbe;
                  uVar25 = local_190 + 0x28;
                }
                thunk_FUN_14028af80(uVar24,uVar25);
              }
              uVar26 = 0;
              local_190 = 0xf;
              local_198 = 0;
              local_1a8 = local_1a8 & 0xffffffffffffff00;
              *(byte *)((longlong)plVar28 + 0x53) = *(byte *)((longlong)plVar28 + 0x53) | 1;
              local_138 = (undefined8 *******)0x0;
              uStack_130 = 0;
              local_128 = 0;
              local_120 = (longlong *)0x0;
              sVar17 = strlen(_Str);
              FUN_140017480(&local_138,_Str,sVar17);
              uVar24 = local_128;
              pppppppuVar19 = local_138;
              lVar12 = local_170;
              uVar25 = 0xcbf29ce484222325;
              pppppppuVar22 = &local_138;
              if ((longlong *)0xf < local_120) {
                pppppppuVar22 = local_138;
              }
              local_2c8 = local_120;
              if (local_128 != 0) {
                do {
                  pbVar1 = (byte *)((longlong)pppppppuVar22 + uVar26);
                  uVar26 = uVar26 + 1;
                  uVar25 = (uVar25 ^ *pbVar1) * 0x100000001b3;
                } while (uVar26 < local_128);
              }
              lVar14 = *(longlong *)(local_160 + 8 + (uVar25 & local_148) * 0x10);
              plVar32 = local_120;
              if (lVar14 != local_170) {
                lVar15 = *(longlong *)(local_160 + (uVar25 & local_148) * 0x10);
                while( true ) {
                  puVar18 = (undefined8 *)(lVar14 + 0x10);
                  if (0xf < *(ulonglong *)(lVar14 + 0x28)) {
                    puVar18 = (undefined8 *)*puVar18;
                  }
                  pppppppuVar22 = &local_138;
                  if ((longlong *)0xf < plVar32) {
                    pppppppuVar22 = pppppppuVar19;
                  }
                  if ((uVar24 == *(ulonglong *)(lVar14 + 0x20)) &&
                     ((plVar28 = local_2c0, uVar24 == 0 ||
                      (iVar10 = memcmp(pppppppuVar22,puVar18,uVar24), plVar32 = local_2c8,
                      plVar28 = local_2c0, iVar10 == 0)))) goto LAB_140062a38;
                  plVar28 = local_2c0;
                  if (lVar14 == lVar15) break;
                  lVar14 = *(longlong *)(lVar14 + 8);
                }
              }
              lVar14 = 0;
LAB_140062a38:
              if ((lVar14 == 0) || (lVar14 == lVar12)) {
                bVar9 = *(byte *)((longlong)plVar28 + 0x53) & 0xfb;
              }
              else {
                bVar9 = *(byte *)((longlong)plVar28 + 0x53) | 4;
              }
              *(byte *)((longlong)plVar28 + 0x53) = bVar9;
              if ((longlong *)0xf < plVar32) {
                plVar27 = (longlong *)((longlong)plVar32 + 1);
                pppppppuVar22 = pppppppuVar19;
                if ((longlong *)0xfff < plVar27) {
                  pppppppuVar22 = (undefined8 *******)pppppppuVar19[-1];
                  if (0x1f < (ulonglong)((longlong)pppppppuVar19 + (-8 - (longlong)pppppppuVar22)))
                  goto LAB_140062cbe;
                  plVar27 = plVar32 + 5;
                }
                thunk_FUN_14028af80(pppppppuVar22,plVar27);
              }
              *(char *)(plVar28 + 10) = local_2f7;
              cVar33 = local_res20;
            }
            plVar28 = (longlong *)plVar13[2];
            cVar7 = (char)local_res18[0];
            if (*(char *)((longlong)plVar28 + 0x19) == '\0') {
              cVar8 = *(char *)(*plVar28 + 0x19);
              plVar13 = plVar28;
              while (cVar8 == '\0') {
                plVar13 = (longlong *)*plVar13;
                cVar8 = *(char *)(*plVar13 + 0x19);
              }
            }
            else {
              cVar8 = *(char *)(plVar13[1] + 0x19);
              plVar32 = (longlong *)plVar13[1];
              plVar28 = plVar13;
              while ((plVar13 = plVar32, cVar8 == '\0' && (plVar28 == (longlong *)plVar13[2]))) {
                cVar8 = *(char *)(plVar13[1] + 0x19);
                plVar32 = (longlong *)plVar13[1];
                plVar28 = plVar13;
              }
            }
          }
          pppppppuVar19 = (undefined8 *******)FUN_1400790b0(param_2,&local_2b8);
          uVar16 = local_118;
          uVar24 = local_100;
          cVar33 = local_2f2;
          bVar9 = local_2f6;
          if ((undefined8 ********)pppppppuVar19 != &local_268) {
            pppppppuVar22 = &local_268;
            if (0xf < local_250) {
              pppppppuVar22 = local_268;
            }
            FUN_14000f880(pppppppuVar19,pppppppuVar22,local_258);
            local_2d0 = local_244;
            local_2f8 = local_246._1_1_;
            uVar16 = local_1f0;
            uVar24 = local_1e8;
            iVar35 = (int)local_230;
            iVar36 = local_230._4_4_;
            iVar37 = (int)uStack_228;
            iVar38 = uStack_228._4_4_;
            iVar39 = (int)local_240;
            iVar40 = local_240._4_4_;
            iVar41 = (int)uStack_238;
            iVar42 = uStack_238._4_4_;
            cVar33 = local_248;
            bVar9 = local_247;
          }
          *(char *)(pppppppuVar19 + 4) = cVar33;
          *(undefined1 *)((longlong)pppppppuVar19 + 0x22) = (undefined1)local_246;
          *(byte *)((longlong)pppppppuVar19 + 0x23) = local_2f8;
          *(int *)((longlong)pppppppuVar19 + 0x24) = local_2d0;
          *(byte *)((longlong)pppppppuVar19 + 0x21) = bVar9;
          *(int *)(pppppppuVar19 + 5) = iVar39;
          *(int *)((longlong)pppppppuVar19 + 0x2c) = iVar40;
          *(int *)(pppppppuVar19 + 6) = iVar41;
          *(int *)((longlong)pppppppuVar19 + 0x34) = iVar42;
          *(int *)(pppppppuVar19 + 7) = iVar35;
          *(int *)((longlong)pppppppuVar19 + 0x3c) = iVar36;
          *(int *)(pppppppuVar19 + 8) = iVar37;
          *(int *)((longlong)pppppppuVar19 + 0x44) = iVar38;
          pppppppuVar19[9] = local_220;
          pppppppuVar19[10] = ppppppuStack_218;
          *(undefined4 *)(pppppppuVar19 + 0xb) = (undefined4)local_210;
          *(undefined4 *)((longlong)pppppppuVar19 + 0x5c) = local_210._4_4_;
          *(undefined4 *)(pppppppuVar19 + 0xc) = (undefined4)uStack_208;
          *(undefined4 *)((longlong)pppppppuVar19 + 100) = uStack_208._4_4_;
          if ((undefined8 ********)(pppppppuVar19 + 0xd) != &local_200) {
            pppppppuVar22 = &local_200;
            if (0xf < uVar24) {
              pppppppuVar22 = local_200;
            }
            FUN_14000f880(pppppppuVar19 + 0xd,pppppppuVar22,uVar16);
          }
          *(undefined4 *)(pppppppuVar19 + 0x11) = local_1e0;
          pppppppuVar19[0x12] = local_1d8;
          FUN_14000d9e0(&local_160);
          FUN_140031340(&local_170);
          FUN_14000d9e0(local_c0);
          FUN_140031340(local_d0);
          if (0xf < local_280) {
            uVar24 = local_280 + 1;
            pppppppuVar19 = local_298;
            if (0xfff < uVar24) {
              pppppppuVar19 = (undefined8 *******)local_298[-1];
              if (0x1f < (ulonglong)((longlong)local_298 + (-8 - (longlong)pppppppuVar19)))
              goto LAB_140062cbe;
              uVar24 = local_280 + 0x28;
            }
            thunk_FUN_14028af80(pppppppuVar19,uVar24);
          }
          local_280 = 0xf;
          cVar33 = local_2f7 + '\x01';
          local_288 = 0;
          local_298 = (undefined8 *******)((ulonglong)local_298 & 0xffffffffffffff00);
          local_2f7 = cVar33;
          FUN_140017240(&local_200);
          FUN_140017240(&local_268);
          if (0xf < local_2a0) {
            uVar24 = local_2a0 + 1;
            pppppppuVar19 = local_2b8;
            if (0xfff < uVar24) {
              pppppppuVar19 = (undefined8 *******)local_2b8[-1];
              if (0x1f < (ulonglong)((longlong)local_2b8 + (-8 - (longlong)pppppppuVar19)))
              goto LAB_140062cbe;
              uVar24 = local_2a0 + 0x28;
            }
            thunk_FUN_14028af80(pppppppuVar19,uVar24);
          }
        }
        else {
          FUN_14000d9e0(&local_160);
          FUN_140031340(&local_170);
          FUN_14000d9e0(local_c0);
          FUN_140031340(local_d0);
          if (0xf < local_280) {
            uVar24 = local_280 + 1;
            pppppppuVar19 = local_298;
            if (0xfff < uVar24) {
              pppppppuVar19 = (undefined8 *******)local_298[-1];
              if (0x1f < (ulonglong)((longlong)local_298 + (-8 - (longlong)pppppppuVar19)))
              goto LAB_140062cbe;
              uVar24 = local_280 + 0x28;
            }
            thunk_FUN_14028af80(pppppppuVar19,uVar24);
          }
          local_280 = 0xf;
          local_288 = 0;
          local_298 = (undefined8 *******)((ulonglong)local_298 & 0xffffffffffffff00);
          FUN_140017240(&local_200);
          FUN_140017240(&local_268);
          cVar33 = local_2f7;
          if (0xf < local_2a0) {
            uVar24 = local_2a0 + 1;
            pppppppuVar19 = local_2b8;
            if (0xfff < uVar24) {
              pppppppuVar19 = (undefined8 *******)local_2b8[-1];
              if (0x1f < (ulonglong)((longlong)local_2b8 + (-8 - (longlong)pppppppuVar19)))
              goto LAB_140062cbe;
              uVar24 = local_2a0 + 0x28;
            }
            thunk_FUN_14028af80(pppppppuVar19,uVar24);
            cVar33 = local_2f7;
          }
        }
      }
      else {
LAB_140061cd8:
        if (0xf < local_2a0) {
          uVar24 = local_2a0 + 1;
          pppppppuVar19 = local_2b8;
          if (0xfff < uVar24) {
            pppppppuVar19 = (undefined8 *******)local_2b8[-1];
            if (0x1f < (ulonglong)((longlong)local_2b8 + (-8 - (longlong)pppppppuVar19)))
            goto LAB_140062cbe;
            uVar24 = local_2a0 + 0x28;
          }
          thunk_FUN_14028af80(pppppppuVar19,uVar24);
        }
      }
      local_f8 = local_188 + 4;
      local_188 = local_f8;
    } while (local_f8 != local_110);
  }
  puVar6 = local_108;
  puVar5 = local_110;
  puVar31 = local_108;
  if (local_108 != (ulonglong *)0x0) {
    for (; puVar31 != puVar5; puVar31 = puVar31 + 4) {
      FUN_140017240(puVar31);
    }
    uVar24 = local_e8 - (longlong)puVar6 & 0xffffffffffffffe0;
    puVar31 = puVar6;
    if (0xfff < uVar24) {
      puVar31 = (ulonglong *)puVar6[-1];
      if (0x1f < (ulonglong)((longlong)puVar6 + (-8 - (longlong)puVar31))) {
LAB_140062cbe:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar30 = auStack_310;
LAB_140062cc5:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar30 + -8) = &UNK_140062cca;
        FUN_1400172e0();
      }
      uVar24 = uVar24 + 0x27;
    }
    thunk_FUN_14028af80(puVar31,uVar24);
  }
  return;
}

