// Function: FUN_140126900
// Addr: 140126900
// Size: 81 bytes


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140126900(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  byte bVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  longlong lVar19;
  undefined8 *******pppppppuVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  ulonglong uVar23;
  longlong *plVar24;
  longlong *plVar25;
  longlong lVar26;
  int iVar27;
  ulonglong unaff_R13;
  ulonglong uVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  longlong local_res8;
  undefined1 auStack_338 [8];
  undefined1 auStack_330 [24];
  int iStack_318;
  int iStack_310;
  undefined8 uStack_308;
  undefined8 *******pppppppuStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  longlong *plStack_2d8;
  longlong *plStack_2d0;
  undefined8 *******pppppppuStack_2c8;
  longlong lStack_2c0;
  longlong lStack_2b8;
  ulonglong uStack_2b0;
  undefined8 *******pppppppuStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulonglong uStack_290;
  undefined8 *******pppppppuStack_288;
  longlong lStack_280;
  longlong lStack_278;
  ulonglong uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulonglong uStack_258;
  longlong lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  wchar_t *pwStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [32];
  longlong *plStack_138;
  longlong *plStack_130;
  longlong *plStack_118;
  longlong *plStack_110;
  uint uStack_e0;
  undefined1 auStack_68 [64];
  
  puVar22 = auStack_338;
  local_res8 = param_1;
  if (0 < DAT_1404e8d68) {
    DAT_1404e8d68 = DAT_1404e8d68 + -1;
    if (DAT_1404e8d68 == 0) {
      (*DAT_140426978)(DAT_1404e8ec0);
      DAT_1404e8ec0 = 0;
    }
    iVar10 = (*DAT_140426af0)(*(undefined8 *)(param_1 + 0x188));
    if (iVar10 != 0) {
      (*DAT_140426968)(*(undefined8 *)(param_1 + 0x188),0xffffffeb,0);
      (*DAT_140426808)(*(undefined8 *)(param_1 + 0x188));
      *(undefined8 *)(param_1 + 0x188) = 0;
    }
  }
  FUN_140127dd0(param_1);
  if (((*(byte *)(param_1 + 0xa6) & 2) != 0) &&
     (iVar10 = DAT_1404e8d68 + 1, bVar29 = DAT_1404e8d68 == 0, DAT_1404e8d68 = iVar10, bVar29)) {
    uVar13 = (*DAT_140426438)(0);
    DAT_1404e8ec0 = (*_UNK_140426890)(0xe,&UNK_140126710,uVar13,0);
  }
  FUN_14010a5f0(param_1,param_2,param_3,param_4);
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < iRam00000001404e93b4) &&
     (FUN_14028b210(0x1404e93b4), iRam00000001404e93b4 == -1)) {
    (*DAT_1404266f8)();
    FUN_14028b1a0(0x1404e93b4);
  }
  uVar28 = uRam00000001404e8f68;
  plVar14 = plRam00000001404e8f58;
  if (uRam00000001404e8f60 != 0) {
    if (uRam00000001404e8f60 < uRam00000001404e8f88 >> 3) {
      plVar24 = (longlong *)*plRam00000001404e8f58;
      if (plVar24 != plRam00000001404e8f58) {
        plStack_2d8 = (longlong *)plVar24[1];
        uVar23 = (((((ulonglong)*(byte *)(plVar24 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar24 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar24 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar24 + 0x13)) * 0x100000001b3 &
                 uRam00000001404e8f80;
        lStack_250 = *(longlong *)(uRam00000001404e8f68 + uVar23 * 0x10);
        plStack_2d0 = *(longlong **)(uRam00000001404e8f68 + 8 + uVar23 * 0x10);
        plVar15 = plVar24;
code_r0x000140126ad0:
        plVar25 = (longlong *)*plVar15;
        func_0x00014028b040(plVar15,0x18);
        uRam00000001404e8f60 = uRam00000001404e8f60 - 1;
        if (plVar15 != plStack_2d0) goto code_r0x000140126af5;
        plVar15 = plStack_2d8;
        if ((longlong *)lStack_250 == plVar24) {
          *(longlong **)(uVar28 + uVar23 * 0x10) = plVar14;
          plVar15 = plVar14;
        }
        *(longlong **)(uVar28 + 8 + uVar23 * 0x10) = plVar15;
        while (plVar25 != plVar14) {
          uVar23 = (((((ulonglong)*(byte *)(plVar25 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar25 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar25 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar25 + 0x13)) * 0x100000001b3 &
                   uRam00000001404e8f80;
          plVar24 = *(longlong **)(uVar28 + 8 + uVar23 * 0x10);
          plVar15 = plVar25;
          while( true ) {
            plVar25 = (longlong *)*plVar15;
            func_0x00014028b040(plVar15,0x18);
            uRam00000001404e8f60 = uRam00000001404e8f60 - 1;
            if (plVar15 == plVar24) break;
            plVar15 = plVar25;
            if (plVar25 == plVar14) goto code_r0x000140126b00;
          }
          *(longlong **)(uVar28 + uVar23 * 0x10) = plVar14;
          *(longlong **)(uVar28 + 8 + uVar23 * 0x10) = plVar14;
        }
        goto code_r0x000140126b05;
      }
    }
    else {
      *(undefined8 *)plRam00000001404e8f58[1] = 0;
      puVar7 = (undefined8 *)*plVar14;
      while (puVar7 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*puVar7;
        func_0x00014028b040(puVar7,0x18);
        puVar7 = puVar5;
      }
      *plRam00000001404e8f58 = (longlong)plRam00000001404e8f58;
      plRam00000001404e8f58[1] = (longlong)plRam00000001404e8f58;
      plStack_2d0 = plRam00000001404e8f58;
      uRam00000001404e8f60 = 0;
      func_0x00014000f8a0(uRam00000001404e8f68,uRam00000001404e8f70,&plStack_2d0);
    }
  }
code_r0x000140126b14:
  lVar26 = 0;
  if (sRam00000001404e90b8 == 0) {
    uStack_228 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    puStack_220 = &UNK_140128870;
    pwStack_1e8 = (wchar_t *)0x0;
    uStack_210 = (*DAT_140426438)(0);
    pwStack_1e8 = L"WPEAppIntermediateWorker";
    sRam00000001404e90b8 = (*DAT_140426800)(&uStack_228);
  }
  FUN_140128560(param_1);
  iVar10 = (*DAT_140426af0)(*(undefined8 *)(param_1 + 0x188));
  if (iVar10 != 0) {
    (*DAT_140426808)(*(undefined8 *)(param_1 + 0x188));
  }
  *(undefined1 *)(param_1 + 0x192) = 0;
  plVar14 = (longlong *)FUN_140005950(&pppppppuStack_2a8,param_1 + 0x100);
  pppppppuStack_288 = (undefined8 *******)*plVar14;
  lStack_280 = plVar14[1];
  lStack_278 = plVar14[2];
  uStack_270 = plVar14[3];
  plVar14[2] = 0;
  plVar14[3] = 7;
  *(undefined2 *)plVar14 = 0;
  if (uStack_290 < 8) {
code_r0x000140126c1e:
    unaff_R13 = 1;
    uStack_298 = 0;
    iVar27 = 1;
    uStack_290 = 7;
    pppppppuStack_2a8 = (undefined8 *******)((ulonglong)pppppppuStack_2a8 & 0xffffffffffff0000);
    LOCK();
    iVar10 = *(int *)(param_1 + 0x140);
    *(int *)(param_1 + 0x140) = 1;
    UNLOCK();
    while (iVar10 != 0) {
      iVar10 = *(int *)(param_1 + 0x140);
      while (iVar10 != 0) {
        iVar10 = iVar27;
        if (iVar27 == 0) {
code_r0x000140126dba:
          iVar27 = iVar27 * 2;
        }
        else {
          do {
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          if (iVar27 < 0x40) goto code_r0x000140126dba;
          iVar27 = 0x40;
        }
        iVar10 = *(int *)(param_1 + 0x140);
      }
      LOCK();
      iVar10 = *(int *)(param_1 + 0x140);
      *(int *)(param_1 + 0x140) = 1;
      UNLOCK();
    }
    iVar10 = *(int *)(param_1 + 0x144);
    iVar27 = *(int *)(param_1 + 0x148);
    iVar1 = *(int *)(param_1 + 0x14c);
    iVar2 = *(int *)(param_1 + 0x150);
    *(undefined4 *)(param_1 + 0x140) = 0;
    uStack_2e8 = (*DAT_140426438)(0);
    uStack_2e0 = 0;
    puStack_2f8 = *(undefined8 **)(param_1 + 0x60);
    puStack_2f0 = (undefined8 *)0x0;
    pppppppuStack_300 = (undefined8 *******)CONCAT44(pppppppuStack_300._4_4_,iVar2 - iVar27);
    uStack_308 = CONCAT44(uStack_308._4_4_,iVar1 - iVar10);
    iStack_318 = iVar10;
    iStack_310 = iVar27;
    uVar13 = (*DAT_1404267d0)(0x8080000,sRam00000001404e90b8,&DAT_140474608,0x40000000);
    *(undefined8 *)(param_1 + 0x188) = uVar13;
    iVar10 = (*DAT_140426af0)(uVar13);
    if (iVar10 == 0) {
code_r0x000140126e69:
      if (uStack_270 < 8) {
        return 0;
      }
      uVar28 = uStack_270 * 2 + 2;
      pppppppuVar18 = pppppppuStack_288;
      if (uVar28 < 0x1000) {
code_r0x000140126ea8:
        func_0x00014028b040(pppppppuVar18,uVar28);
        return 0;
      }
      pppppppuVar18 = (undefined8 *******)pppppppuStack_288[-1];
      if ((ulonglong)((longlong)pppppppuStack_288 + (-8 - (longlong)pppppppuVar18)) < 0x20) {
        uVar28 = uStack_270 * 2 + 0x29;
        goto code_r0x000140126ea8;
      }
      goto code_r0x000140127279;
    }
    (*DAT_140426968)(*(undefined8 *)(param_1 + 0x188),0xffffffeb,param_1);
    lVar26 = 2;
    (*_UNK_140426840)(*(undefined8 *)(param_1 + 0x188),0,0xff,2);
    (*_UNK_1404269e0)(*(undefined8 *)(param_1 + 0x188),L"WallpaperEngineWallpaper",1);
    uVar13 = *(undefined8 *)(param_1 + 0x188);
    uVar11 = (*DAT_1404269d8)(uVar13,0xfffffff0);
    (*DAT_140426990)(uVar13,0xfffffff0,uVar11 & 0xde33ffff);
    (*DAT_140426af8)(*(undefined8 *)(param_1 + 0x188),1);
    (*DAT_140426818)(*(undefined8 *)(param_1 + 0x188),100,1000,0);
    uStack_1d0 = 0;
    uStack_1d8 = 0x68;
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_178 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    func_0x00014011c9e0(auStack_68,&UNK_140489a00,*(undefined8 *)(param_1 + 0x188));
    FUN_14000e050(auStack_168);
    FUN_14000d210(auStack_158,"-WINDOWED -parentHWND ");
    FUN_14000d210(auStack_158,auStack_68);
    uStack_308 = CONCAT44(uStack_308._4_4_,2);
    iStack_310 = 0;
    iStack_318 = 0;
    uVar13 = (*DAT_140426ae8)(0x8000,0x8001,0,&UNK_140125510);
    *(undefined8 *)(param_1 + 0x160) = uVar13;
    plVar14 = (longlong *)FUN_140005950(&pppppppuStack_2a8,param_1 + 0x100);
    pppppppuStack_2c8 = (undefined8 *******)*plVar14;
    lStack_2c0 = plVar14[1];
    lStack_2b8 = plVar14[2];
    uStack_2b0 = plVar14[3];
    plVar14[2] = 0;
    plVar14[3] = 7;
    *(undefined2 *)plVar14 = 0;
    if (7 < uStack_290) {
      uVar28 = uStack_290 * 2 + 2;
      pppppppuVar18 = pppppppuStack_2a8;
      if (0xfff < uVar28) {
        pppppppuVar18 = (undefined8 *******)pppppppuStack_2a8[-1];
        if (0x1f < (ulonglong)((longlong)pppppppuStack_2a8 + (-8 - (longlong)pppppppuVar18)))
        goto code_r0x000140127279;
        uVar28 = uStack_290 * 2 + 0x29;
      }
      func_0x00014028b040(pppppppuVar18,uVar28);
    }
    FUN_14003ff50(&pppppppuStack_2c8);
    pppppppuVar18 = &pppppppuStack_2c8;
    if (7 < uStack_2b0) {
      pppppppuVar18 = pppppppuStack_2c8;
    }
    uStack_298 = 0;
    uStack_290 = 7;
    uStack_2a0 = 0;
    pppppppuStack_2a8 = (undefined8 *******)0x0;
    uStack_248 = 0;
    uStack_240 = 0;
    if ((((byte)uStack_e0 & 0x22) == 2) || (*plStack_110 == 0)) {
      if ((uStack_e0 & 4) == 0) {
        if (*plStack_118 == 0) {
          lVar19 = 0;
        }
        else {
          lVar19 = *plStack_138;
        }
        goto code_r0x00014012714c;
      }
    }
    else {
      lVar19 = *plStack_130;
code_r0x00014012714c:
      if (lVar19 != 0) {
        FUN_140016bb0(&pppppppuStack_2a8,lVar19);
      }
    }
    puStack_2f0 = &uStack_268;
    pppppppuVar20 = &pppppppuStack_2a8;
    if (7 < uStack_290) {
      pppppppuVar20 = pppppppuStack_2a8;
    }
    puStack_2f8 = &uStack_1d8;
    pppppppuVar17 = &pppppppuStack_288;
    if (7 < uStack_270) {
      pppppppuVar17 = pppppppuStack_288;
    }
    uStack_308 = 0;
    iStack_310 = 0x24;
    iStack_318 = 0;
    pppppppuStack_300 = pppppppuVar18;
    iVar10 = (*DAT_140426218)(pppppppuVar17,pppppppuVar20,0,0);
    if (7 < uStack_290) {
      uVar28 = uStack_290 * 2 + 2;
      pppppppuVar18 = pppppppuStack_2a8;
      if (0xfff < uVar28) {
        pppppppuVar18 = (undefined8 *******)pppppppuStack_2a8[-1];
        if (0x1f < (ulonglong)((longlong)pppppppuStack_2a8 + (-8 - (longlong)pppppppuVar18)))
        goto code_r0x000140127279;
        uVar28 = uStack_290 * 2 + 0x29;
      }
      func_0x00014028b040(pppppppuVar18,uVar28);
    }
    if (iVar10 == 0) {
      *(undefined4 *)(param_1 + 0x168) = 0;
      uVar12 = (*DAT_1404266a8)();
      FUN_140098830("Application shell execute failed with: %u\n",uVar12);
      if (7 < uStack_2b0) {
        uVar28 = uStack_2b0 * 2 + 2;
        pppppppuVar18 = pppppppuStack_2c8;
        if (0xfff < uVar28) {
          pppppppuVar18 = (undefined8 *******)pppppppuStack_2c8[-1];
          if (0x1f < (ulonglong)((longlong)pppppppuStack_2c8 + (-8 - (longlong)pppppppuVar18)))
          goto code_r0x000140127279;
          uVar28 = uStack_2b0 * 2 + 0x29;
        }
        func_0x00014028b040(pppppppuVar18,uVar28);
      }
      lStack_2b8 = 0;
      uStack_2b0 = 7;
      pppppppuStack_2c8 = (undefined8 *******)((ulonglong)pppppppuStack_2c8 & 0xffffffffffff0000);
      func_0x000140005c20(auStack_168);
      goto code_r0x000140126e69;
    }
  }
  else {
    uVar28 = uStack_290 * 2 + 2;
    pppppppuVar18 = pppppppuStack_2a8;
    if (uVar28 < 0x1000) {
code_r0x000140126c19:
      func_0x00014028b040(pppppppuVar18,uVar28);
      goto code_r0x000140126c1e;
    }
    pppppppuVar18 = (undefined8 *******)pppppppuStack_2a8[-1];
    if ((ulonglong)((longlong)pppppppuStack_2a8 + (-8 - (longlong)pppppppuVar18)) < 0x20) {
      uVar28 = uStack_290 * 2 + 0x29;
      goto code_r0x000140126c19;
    }
code_r0x000140127279:
    pcVar8 = (code *)swi(0x29);
    (*pcVar8)(5);
    puVar22 = auStack_330;
  }
  *(undefined8 *)(puVar22 + 0x68) = *(undefined8 *)(param_1 + 0x188);
  *(int *)(param_1 + 0x168) = (int)uStack_258;
  uVar28 = ((((uStack_258 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uStack_258 >> 8 & 0xff) *
             0x100000001b3 ^ uStack_258 >> 0x10 & 0xff) * 0x100000001b3 ^ uStack_258 >> 0x18 & 0xff)
           * 0x100000001b3;
  plVar14 = *(longlong **)(DAT_1404e8ee8 + 8 + (uVar28 & DAT_1404e8f00) * 0x10);
  plVar24 = DAT_1404e8ed8;
  if (plVar14 != DAT_1404e8ed8) {
    iVar10 = (int)plVar14[2];
    plVar24 = plVar14;
    while (plVar14 = plVar24, (int)uStack_258 != iVar10) {
      if (plVar24 == *(longlong **)(DAT_1404e8ee8 + (uVar28 & DAT_1404e8f00) * 0x10))
      goto code_r0x000140127326;
      plVar24 = (longlong *)plVar24[1];
      iVar10 = (int)plVar24[2];
    }
    goto code_r0x0001401276a4;
  }
code_r0x000140127326:
  if (_DAT_1404e8ee0 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar22 + -8) = 0x1401277ae;
    FUN_14028c3b0("unordered_map/set too long");
  }
  *(undefined **)(puVar22 + -8) = &UNK_140127347;
  plVar14 = (longlong *)func_0x00014028aff0(0x20);
  *(undefined4 *)(plVar14 + 2) = (undefined4)uStack_258;
  plVar14[3] = 0;
  uVar9 = _DAT_1404e8f08;
  uVar23 = _DAT_1404e8ee0 + 1;
  if ((longlong)uVar23 < 0) {
    fVar30 = (float)(uVar23 >> 1 | (ulonglong)((uint)uVar23 & (uint)unaff_R13));
    fVar30 = fVar30 + fVar30;
  }
  else {
    fVar30 = (float)(longlong)uVar23;
  }
  if ((longlong)_DAT_1404e8f08 < 0) {
    fVar31 = (float)(_DAT_1404e8f08 >> 1 | (ulonglong)((uint)_DAT_1404e8f08 & (uint)unaff_R13));
    fVar31 = fVar31 + fVar31;
  }
  else {
    fVar31 = (float)(longlong)_DAT_1404e8f08;
  }
  if (_DAT_1404e8ed0 < fVar30 / fVar31) {
    *(undefined **)(puVar22 + -8) = &UNK_1401273d6;
    fVar30 = (float)func_0x00014041a070(fVar30 / _DAT_1404e8ed0);
    plVar24 = DAT_1404e8ed8;
    lVar19 = 0;
    if ((DAT_140492a44 <= fVar30) && (fVar30 = fVar30 - DAT_140492a44, fVar30 < DAT_140492a44)) {
      lVar19 = -0x8000000000000000;
    }
    uVar23 = 8;
    if (8 < (ulonglong)((longlong)fVar30 + lVar19)) {
      uVar23 = (longlong)fVar30 + lVar19;
    }
    uVar21 = uVar9;
    if ((uVar9 < uVar23) && ((0x1ff < uVar9 || (uVar21 = uVar9 * 8, uVar9 * 8 < uVar23)))) {
      uVar21 = uVar23;
    }
    for (lVar19 = 0x3f; 0xfffffffffffffffU >> lVar19 == 0; lVar19 = lVar19 + -1) {
    }
    if (unaff_R13 << ((byte)lVar19 & 0x3f) < uVar21) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar22 + -8) = &UNK_140127771;
      FUN_14028c3b0("invalid hash bucket count");
    }
    uVar23 = uVar21 - 1 | unaff_R13;
    lVar19 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    bVar16 = (char)lVar19 + 1;
    uVar23 = unaff_R13 << (bVar16 & 0x3f);
    *(undefined **)(puVar22 + -8) = &UNK_140127476;
    FUN_14003e5e0(&DAT_1404e8ee8,lVar26 << (bVar16 & 0x3f),DAT_1404e8ed8);
    DAT_1404e8f00 = uVar23 - 1;
    _DAT_1404e8f08 = uVar23;
    plVar15 = (longlong *)*DAT_1404e8ed8;
    lVar26 = DAT_1404e8ee8;
joined_r0x000140127498:
    DAT_1404e8ee8 = lVar26;
    if (plVar15 != plVar24) {
      plVar25 = (longlong *)*plVar15;
      uVar23 = (((((ulonglong)*(byte *)(plVar15 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar15 + 0x11)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar15 + 0x12)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar15 + 0x13)) * 0x100000001b3 & DAT_1404e8f00;
      plVar3 = *(longlong **)(lVar26 + uVar23 * 0x10);
      param_1 = local_res8;
      if (plVar3 == plVar24) {
        *(longlong **)(lVar26 + uVar23 * 0x10) = plVar15;
        *(longlong **)(lVar26 + 8 + uVar23 * 0x10) = plVar15;
        plVar15 = plVar25;
        lVar26 = DAT_1404e8ee8;
      }
      else {
        plVar4 = *(longlong **)(lVar26 + 8 + uVar23 * 0x10);
        if ((int)plVar15[2] == (int)plVar4[2]) {
          plVar4 = (longlong *)*plVar4;
          if (plVar4 != plVar15) {
            puVar7 = (undefined8 *)plVar15[1];
            *puVar7 = plVar25;
            puVar5 = (undefined8 *)plVar25[1];
            *puVar5 = plVar4;
            puVar6 = (undefined8 *)plVar4[1];
            *puVar6 = plVar15;
            plVar4[1] = (longlong)puVar5;
            plVar25[1] = (longlong)puVar7;
            plVar15[1] = (longlong)puVar6;
          }
          *(longlong **)(lVar26 + 8 + uVar23 * 0x10) = plVar15;
          plVar15 = plVar25;
          lVar26 = DAT_1404e8ee8;
        }
        else {
          do {
            if (plVar3 == plVar4) {
              puVar7 = (undefined8 *)plVar15[1];
              *puVar7 = plVar25;
              puVar5 = (undefined8 *)plVar25[1];
              *puVar5 = plVar4;
              puVar6 = (undefined8 *)plVar4[1];
              *puVar6 = plVar15;
              plVar4[1] = (longlong)puVar5;
              plVar25[1] = (longlong)puVar7;
              plVar15[1] = (longlong)puVar6;
              *(longlong **)(lVar26 + uVar23 * 0x10) = plVar15;
              plVar15 = plVar25;
              lVar26 = DAT_1404e8ee8;
              goto joined_r0x000140127498;
            }
            plVar4 = (longlong *)plVar4[1];
          } while ((int)plVar15[2] != (int)plVar4[2]);
          lVar26 = *plVar4;
          puVar7 = (undefined8 *)plVar15[1];
          *puVar7 = plVar25;
          plVar3 = (longlong *)plVar25[1];
          *plVar3 = lVar26;
          puVar5 = *(undefined8 **)(lVar26 + 8);
          *puVar5 = plVar15;
          *(longlong **)(lVar26 + 8) = plVar3;
          plVar25[1] = (longlong)puVar7;
          plVar15[1] = (longlong)puVar5;
          plVar15 = plVar25;
          lVar26 = DAT_1404e8ee8;
        }
      }
      goto joined_r0x000140127498;
    }
    local_res8 = 0;
    *(undefined **)(puVar22 + -8) = &UNK_1401275f6;
    func_0x0001400501c0(&local_res8);
    plVar15 = *(longlong **)(DAT_1404e8ee8 + 8 + (uVar28 & DAT_1404e8f00) * 0x10);
    plVar24 = DAT_1404e8ed8;
    if (plVar15 != DAT_1404e8ed8) {
      iVar10 = (int)plVar15[2];
      plVar24 = plVar15;
      while ((int)plVar14[2] != iVar10) {
        if (plVar24 == *(longlong **)(DAT_1404e8ee8 + (uVar28 & DAT_1404e8f00) * 0x10))
        goto code_r0x000140127648;
        plVar24 = (longlong *)plVar24[1];
        iVar10 = (int)plVar24[2];
      }
      plVar24 = (longlong *)*plVar24;
    }
  }
code_r0x000140127648:
  puVar7 = (undefined8 *)plVar24[1];
  _DAT_1404e8ee0 = _DAT_1404e8ee0 + 1;
  *plVar14 = (longlong)plVar24;
  plVar14[1] = (longlong)puVar7;
  *puVar7 = plVar14;
  plVar24[1] = (longlong)plVar14;
  lVar26 = DAT_1404e8ee8;
  uVar28 = uVar28 & DAT_1404e8f00;
  plVar15 = *(longlong **)(DAT_1404e8ee8 + uVar28 * 0x10);
  if (plVar15 == DAT_1404e8ed8) {
    *(longlong **)(DAT_1404e8ee8 + uVar28 * 0x10) = plVar14;
  }
  else {
    if (plVar15 == plVar24) {
      *(longlong **)(DAT_1404e8ee8 + uVar28 * 0x10) = plVar14;
      goto code_r0x0001401276a4;
    }
    if (*(undefined8 **)(DAT_1404e8ee8 + 8 + uVar28 * 0x10) != puVar7) goto code_r0x0001401276a4;
  }
  *(longlong **)(lVar26 + 8 + uVar28 * 0x10) = plVar14;
code_r0x0001401276a4:
  plVar14[3] = *(longlong *)(puVar22 + 0x68);
  uVar12 = 0x20;
  if (*(char *)(param_1 + 0x191) != '\0') {
    uVar12 = 0x4000;
  }
  *(undefined8 *)(param_1 + 0x158) = uStack_268;
  *(undefined8 *)(puVar22 + -8) = 0x1401276d5;
  (*_UNK_140426668)(uStack_268,uVar12);
  *(undefined8 *)(puVar22 + -8) = 0x1401276df;
  (*_UNK_140426350)(uStack_260);
  *(undefined8 *)(puVar22 + -8) = 0x1401276e9;
  (*DAT_140426368)(uStack_260);
  if (7 < uStack_2b0) {
    *(undefined8 *)(puVar22 + -8) = 0x140127702;
    FUN_140016b60(puVar22 + 0x70,*(undefined8 *)(puVar22 + 0x70));
  }
  lStack_2b8 = 0;
  *(undefined2 *)(puVar22 + 0x70) = 0;
  uStack_2b0 = 7;
  *(undefined8 *)(puVar22 + -8) = 0x140127725;
  func_0x000140005c20(auStack_168);
  if (7 < uStack_270) {
    *(undefined **)(puVar22 + -8) = &UNK_14012773c;
    FUN_140016b60(&pppppppuStack_288,pppppppuStack_288);
  }
  return 1;
code_r0x000140126af5:
  plVar15 = plVar25;
  if (plVar25 == plVar14) goto code_r0x000140126afa;
  goto code_r0x000140126ad0;
code_r0x000140126afa:
  if ((longlong *)lStack_250 == plVar24) {
code_r0x000140126b00:
    *(longlong **)(uVar28 + uVar23 * 0x10) = plVar25;
  }
code_r0x000140126b05:
  *plStack_2d8 = (longlong)plVar25;
  plVar25[1] = (longlong)plStack_2d8;
  unaff_R13 = uVar28;
  goto code_r0x000140126b14;
}

