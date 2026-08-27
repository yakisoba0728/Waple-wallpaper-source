// Function: FUN_140062ed0
// Addr: 140062ed0
// Size: 2530 bytes


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140062ed0(HWND param_1,float param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *puVar13;
  byte bVar14;
  undefined8 *******pppppppuVar15;
  LPWSTR pWVar16;
  longlong lVar17;
  longlong *plVar18;
  int *in_RDX;
  ulonglong uVar19;
  longlong *plVar20;
  longlong *plVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  undefined1 *puVar24;
  LPWSTR pWVar25;
  undefined8 *puVar26;
  int iVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  float fVar30;
  ulonglong local_res18;
  LPWSTR local_res20;
  undefined1 auStack_358 [8];
  undefined1 auStack_350 [24];
  undefined8 *******local_338;
  undefined8 uStack_330;
  longlong local_328;
  ulonglong local_320;
  tagRECT local_318;
  undefined8 *local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  WCHAR local_258 [268];
  
  puVar24 = auStack_358;
  FUN_1404217a0(local_258,0,0x200);
  GetClassNameW(param_1,local_258,0x100);
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e913c) &&
     (FUN_14028b140(&DAT_1404e913c), DAT_1404e913c == -1)) {
    local_2e8 = 0;
    local_2e0 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    FUN_140016170(&local_2f8,L"WPEDesktopDX11Window",0x14);
    local_2c8 = 0;
    local_2c0 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    FUN_140016170(&local_2d8,L"WPEDesktopGLWindow",0x12);
    local_2a8 = 0;
    local_2a0 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    FUN_140016170(&local_2b8,L"WPEVideoWallpaper",0x11);
    local_288 = 0;
    local_280 = 0;
    local_298 = 0;
    uStack_290 = 0;
    FUN_140016170(&local_298,L"WPEDesktopCEFWindow",0x13);
    local_268 = 0;
    local_260 = 0;
    local_278 = 0;
    uStack_270 = 0;
    FUN_140016170(&local_278,L"WPEAppIntermediateWorker",0x18);
    DAT_1404e9140 = 0.0;
    DAT_1404e9148 = (undefined8 *)0x0;
    DAT_1404e9150 = 0;
    DAT_1404e9148 = (undefined8 *)FUN_14028af20(0x30);
    *DAT_1404e9148 = DAT_1404e9148;
    DAT_1404e9148[1] = DAT_1404e9148;
    DAT_1404e9158 = 0;
    _DAT_1404e9160 = 0;
    uRam00000001404e9168 = 0;
    DAT_1404e9170 = 7;
    DAT_1404e9178 = 8;
    DAT_1404e9140 = 1.0;
    FUN_14003e510(&DAT_1404e9158,0x10,DAT_1404e9148);
    fVar8 = DAT_140492974;
    pWVar25 = (LPWSTR)&local_2f8;
    do {
      pWVar16 = pWVar25;
      if (7 < *(ulonglong *)(pWVar25 + 0xc)) {
        pWVar16 = *(LPWSTR *)pWVar25;
      }
      uVar28 = 0;
      local_res18 = 0xcbf29ce484222325;
      uVar19 = 0xcbf29ce484222325;
      if (*(longlong *)(pWVar25 + 8) * 2 != 0) {
        do {
          pbVar1 = (byte *)((longlong)pWVar16 + uVar28);
          uVar28 = uVar28 + 1;
          uVar19 = (uVar19 ^ *pbVar1) * 0x100000001b3;
          local_res18 = uVar19;
        } while (uVar28 < (ulonglong)(*(longlong *)(pWVar25 + 8) * 2));
      }
      uVar28 = local_res18;
      puVar13 = *(undefined8 **)(DAT_1404e9158 + 8 + (local_res18 & DAT_1404e9170) * 0x10);
      puVar26 = DAT_1404e9148;
      local_res20 = pWVar25;
      if (puVar13 != DAT_1404e9148) {
        puVar23 = *(undefined8 **)(DAT_1404e9158 + (local_res18 & DAT_1404e9170) * 0x10);
        while( true ) {
          plVar20 = puVar13 + 2;
          if (7 < (ulonglong)puVar13[5]) {
            plVar20 = (longlong *)*plVar20;
          }
          pWVar16 = pWVar25;
          if (7 < *(ulonglong *)(pWVar25 + 0xc)) {
            pWVar16 = *(LPWSTR *)pWVar25;
          }
          if ((*(longlong *)(pWVar25 + 8) == puVar13[4]) &&
             ((*(longlong *)(pWVar25 + 8) == 0 ||
              (iVar9 = FUN_1400158b0(pWVar16,plVar20), iVar9 == 0)))) goto LAB_140063821;
          puVar26 = puVar13;
          if (puVar13 == puVar23) break;
          puVar13 = (undefined8 *)puVar13[1];
        }
      }
      if (DAT_1404e9150 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("unordered_map/set too long");
      }
      puVar13 = (undefined8 *)FUN_14028af20(0x30);
      plVar20 = puVar13 + 2;
      local_308 = puVar13;
      FUN_140016600(plVar20,pWVar25);
      uVar19 = DAT_1404e9178;
      param_2 = (float)(DAT_1404e9150 + 1) / (float)DAT_1404e9178;
      if (DAT_1404e9140 < param_2) {
        fVar30 = (float)FUN_140419fa0((float)(DAT_1404e9150 + 1) / DAT_1404e9140);
        puVar26 = DAT_1404e9148;
        lVar17 = 0;
        if ((fVar8 <= fVar30) && (fVar30 = fVar30 - fVar8, fVar30 < fVar8)) {
          lVar17 = -0x8000000000000000;
        }
        uVar29 = 8;
        if (8 < (ulonglong)((longlong)fVar30 + lVar17)) {
          uVar29 = (longlong)fVar30 + lVar17;
        }
        uVar22 = uVar19;
        if ((uVar19 < uVar29) && ((0x1ff < uVar19 || (uVar22 = uVar19 * 8, uVar19 * 8 < uVar29)))) {
          uVar22 = uVar29;
        }
        for (lVar17 = 0x3f; 0xfffffffffffffffU >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
        if ((ulonglong)(1L << ((byte)lVar17 & 0x3f)) < uVar22) {
                    /* WARNING: Subroutine does not return */
          FUN_14028c2e0("invalid hash bucket count");
        }
        uVar19 = uVar22 - 1 | 1;
        lVar17 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        bVar14 = (char)lVar17 + 1;
        uVar19 = 1L << (bVar14 & 0x3f);
        FUN_14003e510(&DAT_1404e9158,2L << (bVar14 & 0x3f),DAT_1404e9148);
        DAT_1404e9170 = uVar19 - 1;
        DAT_1404e9178 = uVar19;
        puVar23 = (undefined8 *)*DAT_1404e9148;
        lVar17 = DAT_1404e9158;
joined_r0x000140063565:
        DAT_1404e9158 = lVar17;
        if (puVar23 != puVar26) {
          uVar28 = puVar23[5];
          puVar13 = puVar23 + 2;
          puVar2 = (undefined8 *)*puVar23;
          lVar3 = puVar23[4];
          if (7 < uVar28) {
            puVar13 = (undefined8 *)puVar23[2];
          }
          uVar19 = 0;
          uVar29 = 0xcbf29ce484222325;
          if (lVar3 * 2 != 0) {
            do {
              pbVar1 = (byte *)((longlong)puVar13 + uVar19);
              uVar19 = uVar19 + 1;
              uVar29 = (uVar29 ^ *pbVar1) * 0x100000001b3;
            } while (uVar19 < (ulonglong)(lVar3 * 2));
            uVar28 = puVar23[5];
          }
          uVar29 = uVar29 & DAT_1404e9170;
          if (*(undefined8 **)(lVar17 + uVar29 * 0x10) == puVar26) {
            *(undefined8 **)(lVar17 + uVar29 * 0x10) = puVar23;
            *(undefined8 **)(lVar17 + 8 + uVar29 * 0x10) = puVar23;
            puVar23 = puVar2;
            puVar13 = local_308;
            lVar17 = DAT_1404e9158;
            uVar28 = local_res18;
          }
          else {
            plVar18 = *(longlong **)(lVar17 + 8 + uVar29 * 0x10);
            plVar21 = plVar18 + 2;
            if (7 < (ulonglong)plVar18[5]) {
              plVar21 = (longlong *)*plVar21;
            }
            puVar13 = puVar23 + 2;
            if (7 < uVar28) {
              puVar13 = (undefined8 *)puVar23[2];
            }
            if ((lVar3 == plVar18[4]) &&
               ((lVar3 == 0 || (iVar9 = FUN_1400158b0(puVar13,plVar21,lVar3), iVar9 == 0)))) {
              puVar13 = (undefined8 *)*plVar18;
              if (puVar13 != puVar23) {
                puVar4 = (undefined8 *)puVar23[1];
                *puVar4 = puVar2;
                puVar5 = (undefined8 *)puVar2[1];
                *puVar5 = puVar13;
                puVar6 = (undefined8 *)puVar13[1];
                *puVar6 = puVar23;
                puVar13[1] = puVar5;
                puVar2[1] = puVar4;
                puVar23[1] = puVar6;
              }
              *(undefined8 **)(lVar17 + 8 + uVar29 * 0x10) = puVar23;
              puVar23 = puVar2;
              puVar13 = local_308;
              lVar17 = DAT_1404e9158;
              uVar28 = local_res18;
            }
            else {
              if (*(longlong **)(lVar17 + uVar29 * 0x10) != plVar18) {
                do {
                  plVar18 = (longlong *)plVar18[1];
                  plVar21 = plVar18 + 2;
                  if (7 < (ulonglong)plVar18[5]) {
                    plVar21 = (longlong *)*plVar21;
                  }
                  if ((ulonglong)puVar23[5] < 8) {
                    puVar13 = puVar23 + 2;
                  }
                  else {
                    puVar13 = (undefined8 *)puVar23[2];
                  }
                  if ((puVar23[4] == plVar18[4]) &&
                     ((puVar23[4] == 0 || (iVar9 = FUN_1400158b0(puVar13,plVar21), iVar9 == 0)))) {
                    lVar17 = *plVar18;
                    puVar13 = (undefined8 *)puVar23[1];
                    *puVar13 = puVar2;
                    plVar21 = (longlong *)puVar2[1];
                    *plVar21 = lVar17;
                    puVar4 = *(undefined8 **)(lVar17 + 8);
                    *puVar4 = puVar23;
                    *(longlong **)(lVar17 + 8) = plVar21;
                    puVar2[1] = puVar13;
                    puVar23[1] = puVar4;
                    puVar23 = puVar2;
                    puVar13 = local_308;
                    lVar17 = DAT_1404e9158;
                    uVar28 = local_res18;
                    goto joined_r0x000140063565;
                  }
                } while (*(longlong **)(lVar17 + uVar29 * 0x10) != plVar18);
              }
              puVar13 = (undefined8 *)puVar23[1];
              *puVar13 = puVar2;
              puVar4 = (undefined8 *)puVar2[1];
              *puVar4 = plVar18;
              puVar5 = (undefined8 *)plVar18[1];
              *puVar5 = puVar23;
              plVar18[1] = (longlong)puVar4;
              puVar2[1] = puVar13;
              puVar23[1] = puVar5;
              *(undefined8 **)(lVar17 + uVar29 * 0x10) = puVar23;
              puVar23 = puVar2;
              puVar13 = local_308;
              lVar17 = DAT_1404e9158;
              uVar28 = local_res18;
            }
          }
          goto joined_r0x000140063565;
        }
        local_res18 = 0;
        FUN_14007fc80(&local_res18);
        puVar23 = *(undefined8 **)(DAT_1404e9158 + 8 + (uVar28 & DAT_1404e9170) * 0x10);
        pWVar25 = local_res20;
        puVar26 = DAT_1404e9148;
        if (puVar23 != DAT_1404e9148) {
          puVar2 = *(undefined8 **)(DAT_1404e9158 + (uVar28 & DAT_1404e9170) * 0x10);
          while( true ) {
            plVar21 = puVar23 + 2;
            if (7 < (ulonglong)puVar23[5]) {
              plVar21 = (longlong *)*plVar21;
            }
            plVar18 = plVar20;
            if (7 < (ulonglong)puVar13[5]) {
              plVar18 = (longlong *)*plVar20;
            }
            if ((puVar13[4] == puVar23[4]) &&
               ((puVar13[4] == 0 || (iVar9 = FUN_1400158b0(plVar18,plVar21), iVar9 == 0)))) break;
            pWVar25 = local_res20;
            puVar26 = puVar23;
            if (puVar23 == puVar2) goto LAB_1400637b5;
            puVar23 = (undefined8 *)puVar23[1];
          }
          pWVar25 = local_res20;
          puVar26 = (undefined8 *)*puVar23;
        }
      }
LAB_1400637b5:
      puVar23 = (undefined8 *)puVar26[1];
      DAT_1404e9150 = DAT_1404e9150 + 1;
      *puVar13 = puVar26;
      puVar13[1] = puVar23;
      *puVar23 = puVar13;
      puVar26[1] = puVar13;
      lVar17 = DAT_1404e9158;
      uVar28 = uVar28 & DAT_1404e9170;
      puVar2 = *(undefined8 **)(DAT_1404e9158 + uVar28 * 0x10);
      if (puVar2 == DAT_1404e9148) {
        *(undefined8 **)(DAT_1404e9158 + uVar28 * 0x10) = puVar13;
LAB_140063812:
        *(undefined8 **)(lVar17 + 8 + uVar28 * 0x10) = puVar13;
      }
      else if (puVar2 == puVar26) {
        *(undefined8 **)(DAT_1404e9158 + uVar28 * 0x10) = puVar13;
      }
      else if (*(undefined8 **)(DAT_1404e9158 + 8 + uVar28 * 0x10) == puVar23) goto LAB_140063812;
LAB_140063821:
      pWVar25 = pWVar25 + 0x10;
    } while (pWVar25 != local_258);
    local_res20 = pWVar25;
    FUN_140016770(&local_278);
    FUN_140016770(&local_298);
    FUN_140016770(&local_2b8);
    FUN_140016770(&local_2d8);
    FUN_140016770(&local_2f8);
    FUN_14028b410(FUN_140424720);
    _Init_thread_footer(&DAT_1404e913c);
  }
  uVar28 = 0xcbf29ce484222325;
  local_328 = 0;
  local_320 = 0;
  local_338 = (undefined8 *******)0x0;
  uStack_330 = 0;
  uVar11 = FUN_1402d6aa0(local_258);
  FUN_140016170(&local_338,local_258,uVar11);
  pppppppuVar15 = &local_338;
  if (7 < local_320) {
    pppppppuVar15 = local_338;
  }
  uVar19 = 0;
  if (local_328 * 2 != 0) {
    do {
      pbVar1 = (byte *)((longlong)pppppppuVar15 + uVar19);
      uVar19 = uVar19 + 1;
      uVar28 = (uVar28 ^ *pbVar1) * 0x100000001b3;
    } while (uVar19 < (ulonglong)(local_328 * 2));
  }
  puVar13 = *(undefined8 **)(DAT_1404e9158 + 8 + (uVar28 & DAT_1404e9170) * 0x10);
  pppppppuVar15 = local_338;
  uVar19 = local_320;
  if (puVar13 != DAT_1404e9148) {
    puVar26 = *(undefined8 **)(DAT_1404e9158 + (uVar28 & DAT_1404e9170) * 0x10);
    lVar17 = local_328;
    while( true ) {
      plVar20 = puVar13 + 2;
      if (7 < (ulonglong)puVar13[5]) {
        plVar20 = (longlong *)*plVar20;
      }
      pppppppuVar12 = &local_338;
      if (7 < uVar19) {
        pppppppuVar12 = pppppppuVar15;
      }
      if ((lVar17 == puVar13[4]) &&
         ((lVar17 == 0 ||
          (iVar9 = FUN_1400158b0(pppppppuVar12,plVar20), pppppppuVar15 = local_338,
          lVar17 = local_328, uVar19 = local_320, iVar9 == 0)))) goto LAB_14006308f;
      if (puVar13 == puVar26) break;
      puVar13 = (undefined8 *)puVar13[1];
    }
  }
  puVar13 = (undefined8 *)0x0;
LAB_14006308f:
  puVar26 = DAT_1404e9148;
  puVar23 = DAT_1404e9148;
  if (puVar13 != (undefined8 *)0x0) {
    puVar23 = puVar13;
  }
  if (uVar19 < 8) {
LAB_1400630d1:
    if (puVar23 == puVar26) {
      return 1;
    }
    local_318.left = 0;
    local_318.top = 0;
    local_318.right = 0;
    local_318.bottom = 0;
    GetWindowRect(param_1,&local_318);
    iVar27 = (local_318.left + local_318.right) / 2 - *in_RDX;
    iVar9 = (local_318.top + local_318.bottom) / 2 - in_RDX[1];
    param_2 = (float)(iVar9 * iVar9 + iVar27 * iVar27);
    if (0.0 <= param_2) {
      param_2 = SQRT(param_2);
      puVar24 = auStack_358;
      goto LAB_140063146;
    }
  }
  else {
    uVar28 = uVar19 * 2 + 2;
    pppppppuVar12 = pppppppuVar15;
    if (uVar28 < 0x1000) {
LAB_1400630cc:
      thunk_FUN_14028af80(pppppppuVar12,uVar28);
      goto LAB_1400630d1;
    }
    pppppppuVar12 = (undefined8 *******)pppppppuVar15[-1];
    if ((ulonglong)((longlong)pppppppuVar15 + (-8 - (longlong)pppppppuVar12)) < 0x20) {
      uVar28 = uVar19 * 2 + 0x29;
      goto LAB_1400630cc;
    }
    pcVar7 = (code *)swi(0x29);
    (*pcVar7)(5);
    puVar24 = auStack_350;
  }
  *(undefined8 *)(puVar24 + -8) = 0x140063146;
  param_2 = (float)FUN_14041ad10(param_2);
LAB_140063146:
  if ((float)in_RDX[2] <= param_2) {
    return 1;
  }
  *(HWND *)(in_RDX + 4) = param_1;
  *(undefined8 *)(puVar24 + -8) = 0x140063163;
  uVar10 = GetWindowLongW(param_1,-0x14);
  if ((uVar10 >> 0x13 & 1) == 0) {
    *(undefined8 *)(puVar24 + -8) = 0x14006317e;
    SetWindowLongW(param_1,-0x14,uVar10 | 0x80000);
  }
  return 0;
}

