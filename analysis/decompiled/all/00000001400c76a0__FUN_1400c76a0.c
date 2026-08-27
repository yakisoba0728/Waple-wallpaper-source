// Function: FUN_1400c76a0
// Addr: 1400c76a0
// Size: 2768 bytes


undefined4 FUN_1400c76a0(longlong param_1,longlong *param_2,char param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  byte bVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  ulonglong local_res8;
  undefined1 auStack_408 [8];
  undefined1 auStack_400 [24];
  ulonglong *local_3e8;
  longlong *local_360;
  longlong local_358 [7];
  longlong *local_320;
  char local_318;
  longlong local_308 [7];
  longlong *local_2d0;
  uint local_2c8 [2];
  undefined1 local_2c0 [40];
  undefined1 local_298 [32];
  undefined1 local_278 [32];
  undefined1 local_258 [32];
  undefined1 local_238 [32];
  undefined1 local_218 [32];
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [32];
  ulonglong local_1b8;
  ulonglong uStack_1b0;
  longlong local_1a8;
  undefined8 local_180;
  int local_160;
  undefined4 local_15c;
  float local_158;
  undefined1 local_154;
  _OSVERSIONINFOW local_148;
  
  puVar22 = auStack_408;
  puVar24 = auStack_408;
  puVar23 = auStack_408;
  local_148.dwOSVersionInfoSize = 0x114;
  GetVersionExW(&local_148);
  iVar10 = FUN_140290d80(param_1 + 0x450);
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x49c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x49c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  *(int *)(param_1 + 0x4a0) = *(int *)(param_1 + 0x4a0) + 1;
  cVar9 = FUN_140015180(10,0,0);
  if (((cVar9 == '\0') || (local_148.dwBuildNumber < 0x4563)) ||
     ((*(byte *)(param_1 + 0xb60) & 1) == 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  uVar26 = 0;
  if (*(longlong *)(param_1 + 0x4b8) == 0) {
    if (!bVar8) {
LAB_1400c7771:
      FUN_1400c1390(local_2c8);
      plVar12 = (longlong *)param_2[7];
      local_2c8[0] = local_2c8[0] | 0x10;
      local_154 = 0;
      if (plVar12 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2c0();
      }
LAB_1400c7a39:
      pcVar2 = *(code **)(*plVar12 + 0x10);
      *(undefined8 *)(puVar24 + -8) = 0x1400c7a43;
      (*pcVar2)(plVar12,local_2c8);
      goto LAB_1400c7a43;
    }
    FUN_1400c8b60(param_1);
    puVar24 = auStack_408;
  }
  else {
    if (!bVar8) goto LAB_1400c7771;
    FUN_1400c1390(local_2c8);
    local_2c8[0] = 0x10;
    if (*(longlong *)(param_1 + 0x530) != 0) {
      local_2c8[0] = 0x11;
      FUN_1400c2030(local_298,param_1 + 0x520);
    }
    puVar24 = auStack_408;
    if (*(longlong *)(param_1 + 0x600) != *(longlong *)(param_1 + 0x608)) {
      local_2c8[0] = local_2c8[0] | 2;
      FUN_1400c2130(&local_1b8,param_1 + 0x600);
      puVar24 = auStack_408;
      if (param_3 != '\0') {
        if (local_1b8 != uStack_1b0) {
          uStack_1b0 = local_1b8;
        }
        local_3e8 = &local_res8;
        local_res8 = 0;
        local_180 = 0;
        cVar9 = FUN_1400c0710(*(longlong *)(param_1 + 0x600),
                              *(longlong *)(param_1 + 0x608) - *(longlong *)(param_1 + 0x600),
                              &local_180,(longlong)&local_180 + 4);
        uVar17 = local_res8;
        puVar24 = auStack_408;
        if (cVar9 != '\0') {
          uVar19 = local_1a8 - local_1b8;
          uVar11 = local_180._4_4_ * (int)local_180 * 4;
          uVar21 = (ulonglong)uVar11;
          if (uVar19 < uVar21) {
            if (0x7fffffffffffffff < uVar21) {
                    /* WARNING: Subroutine does not return */
              FUN_140013050();
            }
            uVar20 = 0x7fffffffffffffff;
            if ((uVar19 <= 0x7fffffffffffffff - (uVar19 >> 1)) &&
               (uVar20 = (uVar19 >> 1) + uVar19, uVar20 < uVar21)) {
              uVar20 = uVar21;
            }
            if (local_1b8 == 0) {
LAB_1400c7902:
              puVar23 = auStack_408;
              if (uVar20 != 0) {
                if (0xfff < uVar20) {
                  if (uVar20 + 0x27 <= uVar20) {
                    /* WARNING: Subroutine does not return */
                    FUN_140017370();
                  }
                  lVar18 = FUN_14028af20();
                  if (lVar18 == 0) goto LAB_1400c7927;
                  goto LAB_1400c792e;
                }
                uVar26 = FUN_14028af20(uVar20);
                puVar23 = auStack_408;
              }
            }
            else {
              uVar16 = local_1b8;
              if (uVar19 < 0x1000) {
LAB_1400c78eb:
                thunk_FUN_14028af80(uVar16,uVar19);
                local_1a8 = 0;
                local_1b8 = 0;
                uStack_1b0 = 0;
                goto LAB_1400c7902;
              }
              uVar16 = *(ulonglong *)(local_1b8 - 8);
              if ((local_1b8 - uVar16) - 8 < 0x20) {
                uVar19 = uVar19 + 0x27;
                goto LAB_1400c78eb;
              }
LAB_1400c7927:
              pcVar2 = (code *)swi(0x29);
              lVar18 = (*pcVar2)(5);
              puVar22 = auStack_400;
LAB_1400c792e:
              uVar26 = lVar18 + 0x27U & 0xffffffffffffffe0;
              *(longlong *)(uVar26 - 8) = lVar18;
              puVar23 = puVar22;
            }
            local_1a8 = uVar26 + uVar20;
            *(undefined8 *)(puVar23 + -8) = 0x1400c796e;
            local_1b8 = uVar26;
            uStack_1b0 = uVar26;
            FUN_1404210f0(uVar26,uVar17,uVar21);
            uStack_1b0 = uVar21 + uVar26;
          }
          else {
            uVar26 = uStack_1b0 - local_1b8;
            if (uVar26 < uVar21) {
              FUN_1404210f0(local_1b8,local_res8,uVar26);
              uVar19 = uStack_1b0;
              FUN_1404210f0(uStack_1b0,uVar26 + uVar17,uVar21 - uVar26);
              puVar23 = auStack_408;
              uStack_1b0 = (uVar21 - uVar26) + uVar19;
            }
            else {
              uVar26 = local_1b8 + uVar11;
              FUN_1404210f0(local_1b8,local_res8,uVar21);
              uStack_1b0 = uVar26;
            }
          }
          *(undefined8 *)(puVar23 + -8) = 0x1400c79d6;
          thunk_FUN_14028af80(uVar17);
          puVar24 = puVar23;
        }
      }
    }
    if (*(int *)(param_1 + 0x658) != 0) {
      local_2c8[0] = local_2c8[0] | 4;
      local_160 = *(int *)(param_1 + 0x658);
    }
    if (*(float *)(param_1 + 0x660) != 0.0) {
      local_15c = *(undefined4 *)(param_1 + 0x65c);
      local_2c8[0] = local_2c8[0] | 8;
      local_158 = *(float *)(param_1 + 0x660);
    }
    if (local_2c8[0] != 0) {
      plVar12 = (longlong *)param_2[7];
      if (plVar12 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar24 + -8) = &UNK_1400c816a;
        FUN_14028c2c0();
      }
      goto LAB_1400c7a39;
    }
LAB_1400c7a43:
    *(undefined8 *)(puVar24 + -8) = 0x1400c7a4f;
    FUN_1400c1530(&local_1b8);
    *(undefined8 *)(puVar24 + -8) = 0x1400c7a5b;
    FUN_140017240(local_1d8);
    *(undefined8 *)(puVar24 + -8) = 0x1400c7a67;
    FUN_140017240(local_1f8);
    *(undefined8 *)(puVar24 + -8) = 0x1400c7a73;
    FUN_140017240(local_218);
    *(undefined8 *)(puVar24 + -8) = 0x1400c7a7f;
    FUN_140017240(local_238);
    *(undefined8 *)(puVar24 + -8) = 0x1400c7a8b;
    FUN_140017240(local_258);
    *(undefined8 *)(puVar24 + -8) = 0x1400c7a97;
    FUN_140017240(local_278);
    *(undefined8 *)(puVar24 + -8) = 0x1400c7aa0;
    FUN_140017240(local_298);
    *(undefined8 *)(puVar24 + -8) = 0x1400c7aa9;
    FUN_140017240(local_2c0);
  }
  plVar12 = (longlong *)0x0;
  *(int *)(param_1 + 0x4e8) = *(int *)(param_1 + 0x4e8) + 1;
  puVar14 = (undefined8 *)param_2[7];
  local_360 = (longlong *)0x0;
  local_320 = (longlong *)0x0;
  local_318 = 0;
  *(undefined8 *)(puVar24 + 0x68) = 0;
  if (puVar14 != (undefined8 *)0x0) {
    pcVar2 = *(code **)*puVar14;
    *(undefined8 *)(puVar24 + -8) = 0x1400c7adc;
    plVar12 = (longlong *)(*pcVar2)(puVar14,puVar24 + 0x30);
    *(longlong **)(puVar24 + 0x68) = plVar12;
  }
  if ((plVar12 == (longlong *)(puVar24 + 0x30)) || (local_360 == (longlong *)(puVar24 + 0x70))) {
    local_2d0 = (longlong *)0x0;
    if (plVar12 != (longlong *)0x0) {
      if (plVar12 == (longlong *)(puVar24 + 0x30)) {
        pcVar2 = *(code **)(*plVar12 + 8);
        *(undefined8 *)(puVar24 + -8) = 0x1400c7b30;
        local_2d0 = (longlong *)(*pcVar2)(plVar12,local_308);
        plVar12 = *(longlong **)(puVar24 + 0x68);
        if (plVar12 == (longlong *)0x0) goto LAB_1400c7b71;
        pcVar2 = *(code **)(*plVar12 + 0x20);
        *(undefined8 *)(puVar24 + -8) = 0x1400c7b52;
        (*pcVar2)(plVar12,CONCAT71((int7)((ulonglong)(puVar24 + 0x30) >> 8),
                                   plVar12 != (longlong *)(puVar24 + 0x30)));
        plVar12 = local_2d0;
      }
      local_2d0 = plVar12;
      *(undefined8 *)(puVar24 + 0x68) = 0;
    }
LAB_1400c7b71:
    plVar13 = (longlong *)0x0;
    if (local_360 != (longlong *)0x0) {
      if (local_360 == (longlong *)(puVar24 + 0x70)) {
        pcVar2 = *(code **)(*local_360 + 8);
        *(undefined8 *)(puVar24 + -8) = 0x1400c7b8e;
        plVar13 = (longlong *)(*pcVar2)(local_360,puVar24 + 0x30);
        *(longlong **)(puVar24 + 0x68) = plVar13;
        if (local_360 == (longlong *)0x0) goto LAB_1400c7bcd;
        pcVar2 = *(code **)(*local_360 + 0x20);
        *(undefined8 *)(puVar24 + -8) = 0x1400c7bb3;
        (*pcVar2)(local_360,local_360 != (longlong *)(puVar24 + 0x70));
        plVar13 = *(longlong **)(puVar24 + 0x68);
      }
      else {
        *(longlong **)(puVar24 + 0x68) = local_360;
        plVar13 = local_360;
      }
      local_360 = (longlong *)0x0;
    }
LAB_1400c7bcd:
    plVar12 = local_360;
    if ((local_2d0 != (longlong *)0x0) && (plVar12 = local_2d0, local_2d0 == local_308)) {
      pcVar2 = *(code **)(*local_2d0 + 8);
      *(undefined8 *)(puVar24 + -8) = 0x1400c7be9;
      local_360 = (longlong *)(*pcVar2)(local_2d0,puVar24 + 0x70);
      if (local_2d0 != (longlong *)0x0) {
        pcVar2 = *(code **)(*local_2d0 + 0x20);
        *(undefined8 *)(puVar24 + -8) = 0x1400c7c06;
        (*pcVar2)(local_2d0,CONCAT71((int7)((ulonglong)local_308 >> 8),local_2d0 != local_308));
      }
      plVar13 = *(longlong **)(puVar24 + 0x68);
      plVar12 = local_360;
    }
  }
  else {
    *(longlong **)(puVar24 + 0x68) = local_360;
    plVar13 = local_360;
  }
  local_360 = plVar12;
  if (plVar13 != (longlong *)0x0) {
    pcVar2 = *(code **)(*plVar13 + 0x20);
    *(undefined8 *)(puVar24 + -8) = 0x1400c7c27;
    (*pcVar2)(plVar13,CONCAT71((int7)((ulonglong)(puVar24 + 0x30) >> 8),
                               plVar13 != (longlong *)(puVar24 + 0x30)));
  }
  local_res8 = 0xcbf29ce484222325;
  uVar26 = (((((ulonglong)*(byte *)(param_1 + 0x4a0) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)*(byte *)(param_1 + 0x4a1)) * 0x100000001b3 ^
            (ulonglong)*(byte *)(param_1 + 0x4a2)) * 0x100000001b3 ^
           (ulonglong)*(byte *)(param_1 + 0x4a3)) * 0x100000001b3;
  uVar17 = uVar26 & *(ulonglong *)(param_1 + 0x4d8);
  puVar14 = *(undefined8 **)(*(longlong *)(param_1 + 0x4c0) + 8 + uVar17 * 0x10);
  puVar25 = *(undefined8 **)(param_1 + 0x4b0);
  local_318 = param_3;
  if (puVar14 != *(undefined8 **)(param_1 + 0x4b0)) {
    iVar10 = *(int *)(puVar14 + 2);
    while (*(int *)(param_1 + 0x4a0) != iVar10) {
      puVar25 = puVar14;
      if (puVar14 == *(undefined8 **)(*(longlong *)(param_1 + 0x4c0) + uVar17 * 0x10))
      goto LAB_1400c7cd6;
      puVar14 = (undefined8 *)puVar14[1];
      iVar10 = *(int *)(puVar14 + 2);
    }
    goto LAB_1400c8066;
  }
LAB_1400c7cd6:
  if (*(longlong *)(param_1 + 0x4b8) == 0x199999999999999) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar24 + -8) = &UNK_1400c8177;
    FUN_14028c2e0("unordered_map/set too long");
  }
  *(undefined8 *)(puVar24 + -8) = 0x1400c7cf7;
  puVar14 = (undefined8 *)FUN_14028af20(0xa0);
  *(undefined4 *)(puVar14 + 2) = *(undefined4 *)(param_1 + 0x4a0);
  puVar14[3] = 0;
  puVar14[4] = 0;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[8] = 0;
  puVar14[9] = 0;
  puVar14[10] = 0;
  puVar14[0xb] = 0;
  puVar14[0xc] = 0;
  puVar14[0xd] = 0;
  puVar14[0xe] = 0;
  puVar14[0xf] = 0;
  puVar14[0x10] = 0;
  puVar14[0x11] = 0;
  puVar14[0x12] = 0;
  puVar14[0x13] = 0;
  fVar28 = *(float *)(param_1 + 0x4a8);
  fVar27 = (float)(*(longlong *)(param_1 + 0x4b8) + 1);
  uVar17 = *(ulonglong *)(param_1 + 0x4e0);
  if (fVar28 < fVar27 / (float)uVar17) {
    *(undefined8 *)(puVar24 + -8) = 0x1400c7dad;
    fVar28 = (float)FUN_140419fa0(fVar27 / fVar28);
    lVar18 = 0;
    if ((DAT_140492974 <= fVar28) && (fVar28 = fVar28 - DAT_140492974, fVar28 < DAT_140492974)) {
      lVar18 = -0x8000000000000000;
    }
    uVar19 = 8;
    if (8 < (ulonglong)((longlong)fVar28 + lVar18)) {
      uVar19 = (longlong)fVar28 + lVar18;
    }
    uVar21 = uVar17;
    if ((uVar17 < uVar19) && ((0x1ff < uVar17 || (uVar21 = uVar17 * 8, uVar17 * 8 < uVar19)))) {
      uVar21 = uVar19;
    }
    for (lVar18 = 0x3f; 0xfffffffffffffffU >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
    if ((ulonglong)(1L << ((byte)lVar18 & 0x3f)) < uVar21) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar24 + -8) = &UNK_1400c8134;
      FUN_14028c2e0("invalid hash bucket count");
    }
    plVar12 = *(longlong **)(param_1 + 0x4b0);
    uVar17 = uVar21 - 1 | 1;
    lVar18 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    bVar15 = (char)lVar18 + 1;
    lVar18 = 1L << (bVar15 & 0x3f);
    *(undefined8 *)(puVar24 + -8) = 0x1400c7e55;
    FUN_14004f190(param_1 + 0x4c0,2L << (bVar15 & 0x3f),plVar12);
    *(longlong *)(param_1 + 0x4e0) = lVar18;
    *(longlong *)(param_1 + 0x4d8) = lVar18 + -1;
    plVar13 = (longlong *)**(undefined8 **)(param_1 + 0x4b0);
joined_r0x0001400c7e77:
    if (plVar13 != plVar12) {
      lVar18 = *(longlong *)(param_1 + 0x4c0);
      plVar3 = (longlong *)*plVar13;
      uVar17 = ((((*(byte *)(plVar13 + 2) ^ local_res8) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar13 + 0x11)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar13 + 0x12)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar13 + 0x13)) * 0x100000001b3 &
               *(ulonglong *)(param_1 + 0x4d8);
      plVar4 = *(longlong **)(lVar18 + uVar17 * 0x10);
      if (plVar4 == plVar12) {
        *(longlong **)(lVar18 + uVar17 * 0x10) = plVar13;
        *(longlong **)(lVar18 + 8 + uVar17 * 0x10) = plVar13;
        plVar13 = plVar3;
      }
      else {
        plVar5 = *(longlong **)(lVar18 + 8 + uVar17 * 0x10);
        if ((int)plVar13[2] == (int)plVar5[2]) {
          plVar5 = (longlong *)*plVar5;
          if (plVar5 != plVar13) {
            plVar4 = (longlong *)plVar13[1];
            *plVar4 = (longlong)plVar3;
            puVar25 = (undefined8 *)plVar3[1];
            *puVar25 = plVar5;
            puVar6 = (undefined8 *)plVar5[1];
            *puVar6 = plVar13;
            plVar5[1] = (longlong)puVar25;
            plVar3[1] = (longlong)plVar4;
            plVar13[1] = (longlong)puVar6;
          }
          *(longlong **)(lVar18 + 8 + uVar17 * 0x10) = plVar13;
          plVar13 = plVar3;
        }
        else {
          do {
            if (plVar4 == plVar5) {
              plVar4 = (longlong *)plVar13[1];
              *plVar4 = (longlong)plVar3;
              puVar25 = (undefined8 *)plVar3[1];
              *puVar25 = plVar5;
              puVar6 = (undefined8 *)plVar5[1];
              *puVar6 = plVar13;
              plVar5[1] = (longlong)puVar25;
              plVar3[1] = (longlong)plVar4;
              plVar13[1] = (longlong)puVar6;
              *(longlong **)(lVar18 + uVar17 * 0x10) = plVar13;
              plVar13 = plVar3;
              goto joined_r0x0001400c7e77;
            }
            plVar5 = (longlong *)plVar5[1];
          } while ((int)plVar13[2] != (int)plVar5[2]);
          lVar18 = *plVar5;
          plVar4 = (longlong *)plVar13[1];
          *plVar4 = (longlong)plVar3;
          plVar5 = (longlong *)plVar3[1];
          *plVar5 = lVar18;
          puVar25 = *(undefined8 **)(lVar18 + 8);
          *puVar25 = plVar13;
          *(longlong **)(lVar18 + 8) = plVar5;
          plVar3[1] = (longlong)plVar4;
          plVar13[1] = (longlong)puVar25;
          plVar13 = plVar3;
        }
      }
      goto joined_r0x0001400c7e77;
    }
    local_res8 = 0;
    *(undefined8 *)(puVar24 + -8) = 0x1400c7f97;
    FUN_1400cdac0(&local_res8);
    uVar17 = uVar26 & *(ulonglong *)(param_1 + 0x4d8);
    puVar25 = *(undefined8 **)(param_1 + 0x4b0);
    puVar6 = *(undefined8 **)(*(longlong *)(param_1 + 0x4c0) + 8 + uVar17 * 0x10);
    if (puVar6 != puVar25) {
      iVar10 = *(int *)(puVar6 + 2);
      puVar25 = puVar6;
      while (*(int *)(puVar14 + 2) != iVar10) {
        if (puVar25 == *(undefined8 **)(*(longlong *)(param_1 + 0x4c0) + uVar17 * 0x10))
        goto LAB_1400c7fe1;
        puVar25 = (undefined8 *)puVar25[1];
        iVar10 = *(int *)(puVar25 + 2);
      }
      puVar25 = (undefined8 *)*puVar25;
    }
  }
LAB_1400c7fe1:
  puVar6 = (undefined8 *)puVar25[1];
  *(longlong *)(param_1 + 0x4b8) = *(longlong *)(param_1 + 0x4b8) + 1;
  *puVar14 = puVar25;
  puVar14[1] = puVar6;
  *puVar6 = puVar14;
  puVar25[1] = puVar14;
  lVar18 = *(longlong *)(param_1 + 0x4c0);
  uVar26 = *(ulonglong *)(param_1 + 0x4d8) & uVar26;
  puVar7 = *(undefined8 **)(lVar18 + uVar26 * 0x10);
  if (puVar7 == *(undefined8 **)(param_1 + 0x4b0)) {
    *(undefined8 **)(lVar18 + uVar26 * 0x10) = puVar14;
  }
  else {
    if (puVar7 == puVar25) {
      *(undefined8 **)(lVar18 + uVar26 * 0x10) = puVar14;
      goto LAB_1400c8066;
    }
    if (*(undefined8 **)(lVar18 + 8 + uVar26 * 0x10) != puVar6) goto LAB_1400c8066;
  }
  *(undefined8 **)(lVar18 + 8 + uVar26 * 0x10) = puVar14;
LAB_1400c8066:
  *(undefined8 *)(puVar24 + -8) = 0x1400c8074;
  FUN_1400cb010(puVar14 + 3,puVar24 + 0x70);
  *(undefined8 *)(puVar24 + -8) = 0x1400c8081;
  FUN_1400cb010(puVar14 + 0xb,local_358);
  *(char *)(puVar14 + 0x13) = local_318;
  uVar1 = *(undefined4 *)(param_1 + 0x4a0);
  if (local_320 != (longlong *)0x0) {
    pcVar2 = *(code **)(*local_320 + 0x20);
    *(undefined8 *)(puVar24 + -8) = 0x1400c80aa;
    (*pcVar2)(local_320,local_320 != local_358);
    local_320 = (longlong *)0x0;
  }
  if (local_360 != (longlong *)0x0) {
    pcVar2 = *(code **)(*local_360 + 0x20);
    *(undefined8 *)(puVar24 + -8) = 0x1400c80ce;
    (*pcVar2)(local_360,local_360 != (longlong *)(puVar24 + 0x70));
    local_360 = (longlong *)0x0;
  }
  *(undefined8 *)(puVar24 + -8) = 0x1400c80de;
  FUN_140290ea0(param_1 + 0x450);
  plVar12 = (longlong *)param_2[7];
  if (plVar12 != (longlong *)0x0) {
    pcVar2 = *(code **)(*plVar12 + 0x20);
    *(undefined8 *)(puVar24 + -8) = 0x1400c80f4;
    (*pcVar2)(plVar12,plVar12 != param_2);
    param_2[7] = 0;
  }
  return uVar1;
}

