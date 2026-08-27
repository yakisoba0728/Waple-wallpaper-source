// Function: FUN_1401e3620
// Addr: 1401e3620
// Size: 2052 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401e3620(ulonglong *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  longlong lVar8;
  size_t _Size;
  undefined8 *puVar9;
  ulonglong *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 ****ppppuVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  ulonglong *puVar21;
  longlong *plVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  float fVar25;
  longlong *local_res18;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  undefined4 local_e8;
  undefined4 *local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 ***local_98 [2];
  ulonglong local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  size_t local_68;
  undefined8 *local_60;
  ulonglong local_58;
  undefined8 local_50;
  
  puVar18 = auStack_108;
  iVar5 = FUN_140290d80(&DAT_1404dfb40);
  puVar19 = auStack_108;
  if (iVar5 != 0) goto LAB_1401e3dbe;
  if (DAT_1404dfb8c == 0x7fffffff) {
    DAT_1404dfb8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_140290ea0(&DAT_1404dfb40);
  if (DAT_1404e8358 != 0) {
    DVar6 = GetCurrentThreadId();
    puVar19 = auStack_108;
    if (DAT_1404e8358 == DVar6) goto LAB_1401e3dbe;
    local_c8 = _DAT_1404e8350;
    puStack_c0 = _DAT_1404e8358;
    iVar5 = FUN_140291150(&local_c8,0);
    if (iVar5 != 0) goto LAB_1401e3e25;
    _DAT_1404e8350 = (undefined8 *)0x0;
    _DAT_1404e8358 = (undefined8 *)0x0;
  }
  iVar5 = FUN_140290d80(&DAT_1404dfb40);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404dfb8c == 0x7fffffff) {
    DAT_1404dfb8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  puVar18 = auStack_108;
  if ((param_1[7] != 0) && (puVar18 = auStack_108, DAT_1404e8358 == 0)) {
    plVar2 = (longlong *)param_1[6];
    plVar22 = (longlong *)0x0;
    local_d8 = 0;
    local_res18 = (longlong *)0x0;
    local_d0 = (longlong *)0x0;
    plVar20 = (longlong *)*plVar2;
    if (plVar20 != plVar2) {
      uVar24 = local_c8._4_4_;
      do {
        uVar23 = local_d8;
        plVar22 = (longlong *)plVar20[2];
        *(undefined1 *)((longlong)plVar22 + 0x84) = 1;
        puVar7 = (undefined8 *)FUN_14028af20();
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
        puVar7[9] = 0;
        puVar7[10] = 0;
        puVar7[0xb] = 0;
        puVar7[0xc] = 0;
        puVar7[0xd] = 0;
        puVar7[0xe] = 0;
        puVar7[0xf] = 0;
        puVar7[0x10] = 0;
        lVar8 = FUN_1401e2b10(puVar7);
        if ((longlong *)lVar8 != plVar22) {
          plVar15 = plVar22;
          if (0xf < (ulonglong)plVar22[3]) {
            plVar15 = (longlong *)*plVar22;
          }
          FUN_14000f880(lVar8,plVar15,plVar22[2]);
          plVar15 = plVar22 + 4;
          if (0xf < (ulonglong)plVar22[7]) {
            plVar15 = (longlong *)*plVar15;
          }
          FUN_14000f880(lVar8 + 0x20,plVar15,plVar22[6]);
        }
        *(undefined1 *)(lVar8 + 0x84) = *(undefined1 *)((longlong)plVar22 + 0x84);
        *(int *)(lVar8 + 0x80) = (int)plVar22[0x10];
        plVar22 = (longlong *)plVar22[9];
        plVar15 = (longlong *)*plVar22;
        if (plVar15 != plVar22) {
          local_b8 = (undefined8 *)(lVar8 + 0x40);
          do {
            puVar7 = local_b8;
            FUN_140016fc0(local_98,plVar15 + 2);
            local_74 = *(undefined4 *)((longlong)plVar15 + 0x34);
            local_78 = (undefined4)plVar15[6];
            local_70 = plVar15[7];
            local_50 = thunk_FUN_14028af20();
            FUN_1404210f0(local_50,local_70,local_78);
            uVar4 = local_78;
            uVar23 = 0xcbf29ce484222325;
            ppppuVar16 = local_98;
            if (0xf < local_80) {
              ppppuVar16 = (undefined8 ****)local_98[0];
            }
            uVar12 = 0;
            if (local_88 != 0) {
              do {
                pbVar1 = (byte *)(uVar12 + (longlong)ppppuVar16);
                uVar12 = uVar12 + 1;
                uVar23 = (uVar23 ^ *pbVar1) * 0x100000001b3;
              } while (uVar12 < local_88);
              uVar24 = local_c8._4_4_;
            }
            FUN_1400110a0(puVar7,&local_c8,local_98,uVar23);
            puVar7 = puStack_c0;
            if (puStack_c0 == (undefined8 *)0x0) {
              if (*(longlong *)(lVar8 + 0x50) == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                FUN_14028c2e0("unordered_map/set too long");
              }
              puVar7 = (undefined8 *)FUN_14028af20(0x40);
              local_a8 = puVar7 + 2;
              local_a0 = puVar7;
              FUN_140016fc0(local_a8,local_98);
              puVar7[6] = 0;
              puVar7[7] = 0;
              fVar25 = (float)(*(longlong *)(lVar8 + 0x50) + 1) /
                       (float)*(ulonglong *)(lVar8 + 0x78);
              if (*(float *)(lVar8 + 0x40) <= fVar25 && fVar25 != *(float *)(lVar8 + 0x40)) {
                FUN_1401e4d60();
                uVar12 = uVar23 & *(ulonglong *)(lVar8 + 0x70);
                puVar7 = *(undefined8 **)(*(longlong *)(lVar8 + 0x58) + 8 + uVar12 * 0x10);
                puVar9 = *(undefined8 **)(lVar8 + 0x48);
                if (puVar7 != puVar9) {
                  local_60 = *(undefined8 **)(*(longlong *)(lVar8 + 0x58) + uVar12 * 0x10);
                  local_58 = local_a0[5];
                  _Size = local_a0[4];
                  puVar9 = puVar7;
                  local_68 = _Size;
                  while( true ) {
                    puVar7 = puVar9 + 2;
                    if (0xf < (ulonglong)puVar9[5]) {
                      puVar7 = (undefined8 *)*puVar7;
                    }
                    puVar13 = local_a8;
                    if (0xf < local_58) {
                      puVar13 = (undefined8 *)*local_a8;
                    }
                    if ((_Size == puVar9[4]) &&
                       ((_Size == 0 ||
                        (iVar5 = memcmp(puVar13,puVar7,_Size), _Size = local_68, iVar5 == 0)))) {
                      local_c8 = (undefined8 *)*puVar9;
                      puVar7 = local_a0;
                      puStack_c0 = puVar9;
                      goto LAB_1401e39ec;
                    }
                    if (puVar9 == local_60) break;
                    puVar9 = (undefined8 *)puVar9[1];
                  }
                }
                puVar7 = local_a0;
                local_c8 = puVar9;
                puStack_c0 = (undefined8 *)0x0;
              }
LAB_1401e39ec:
              puVar9 = (undefined8 *)local_c8[1];
              *(longlong *)(lVar8 + 0x50) = *(longlong *)(lVar8 + 0x50) + 1;
              *puVar7 = local_c8;
              puVar7[1] = puVar9;
              *puVar9 = puVar7;
              local_c8[1] = puVar7;
              uVar23 = uVar23 & *(ulonglong *)(lVar8 + 0x70);
              lVar11 = *(longlong *)(lVar8 + 0x58);
              puVar13 = *(undefined8 **)(lVar11 + uVar23 * 0x10);
              if (puVar13 == *(undefined8 **)(lVar8 + 0x48)) {
                *(undefined8 **)(lVar11 + uVar23 * 0x10) = puVar7;
LAB_1401e3a3a:
                *(undefined8 **)(lVar11 + 8 + uVar23 * 0x10) = puVar7;
              }
              else if (puVar13 == local_c8) {
                *(undefined8 **)(lVar11 + uVar23 * 0x10) = puVar7;
              }
              else if (*(undefined8 **)(lVar11 + 8 + uVar23 * 0x10) == puVar9) goto LAB_1401e3a3a;
            }
            *(undefined4 *)(puVar7 + 6) = uVar4;
            *(undefined4 *)((longlong)puVar7 + 0x34) = uVar24;
            puVar7[7] = local_50;
            FUN_140017240(local_98);
            plVar15 = (longlong *)*plVar15;
            uVar23 = local_d8;
          } while (plVar15 != plVar22);
        }
        if (local_res18 == local_d0) {
          lVar11 = (longlong)((longlong)local_res18 - uVar23) >> 3;
          if (lVar11 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_140013050();
          }
          local_d0 = (longlong *)((longlong)((longlong)local_d0 - uVar23) >> 3);
          if ((longlong *)(0x1fffffffffffffff - ((ulonglong)local_d0 >> 1)) < local_d0) {
LAB_1401e3e0d:
                    /* WARNING: Subroutine does not return */
            FUN_140017370();
          }
          uVar12 = lVar11 + 1;
          uVar17 = ((ulonglong)local_d0 >> 1) + (longlong)local_d0;
          uVar14 = uVar12;
          if (uVar12 <= uVar17) {
            uVar14 = uVar17;
          }
          if (0x1fffffffffffffff < uVar14) goto LAB_1401e3e0d;
          puVar21 = (ulonglong *)(uVar14 * 8);
          if (puVar21 == (ulonglong *)0x0) {
            uVar17 = 0;
          }
          else if (puVar21 < (ulonglong *)0x1000) {
            uVar17 = FUN_14028af20(puVar21);
          }
          else {
            if ((ulonglong *)((longlong)puVar21 + 0x27U) <= puVar21) goto LAB_1401e3e0d;
            lVar11 = FUN_14028af20();
            if (lVar11 == 0) goto LAB_1401e3d1f;
            uVar17 = lVar11 + 0x27U & 0xffffffffffffffe0;
            *(longlong *)(uVar17 - 8) = lVar11;
          }
          uVar14 = local_d8;
          *(longlong *)(uVar17 + ((longlong)local_res18 - uVar23 & 0xfffffffffffffff8)) = lVar8;
          FUN_1404210f0(uVar17,local_d8);
          if (uVar14 != 0) {
            uVar23 = (longlong)local_d0 * 8;
            if (0xfff < uVar23) {
              if (0x1f < (uVar14 - *(ulonglong *)(uVar14 - 8)) - 8) goto LAB_1401e3d1f;
              uVar23 = uVar23 + 0x27;
              uVar14 = *(ulonglong *)(uVar14 - 8);
            }
            thunk_FUN_14028af80(uVar14,uVar23);
          }
          plVar22 = (longlong *)(uVar17 + uVar12 * 8);
          local_d0 = (longlong *)((longlong)puVar21 + uVar17);
          local_d8 = uVar17;
        }
        else {
          *local_res18 = lVar8;
          plVar22 = local_res18 + 1;
        }
        plVar20 = (longlong *)*plVar20;
        local_res18 = plVar22;
      } while (plVar20 != plVar2);
    }
    plVar2 = local_d0;
    uVar23 = local_d8;
    puVar10 = (ulonglong *)FUN_14028af20(0x30);
    uVar12 = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    lVar8 = (longlong)plVar22 - uVar23;
    puVar21 = param_1;
    if (lVar8 == 0) {
LAB_1401e3c7d:
      puVar10[3] = *param_1;
      puVar10[4] = (ulonglong)param_1;
      puVar10[5] = (ulonglong)FUN_1401e2bc0;
      local_e0 = &local_b0;
      local_e8 = 0;
      local_b8 = (undefined8 *)FUN_1402ca17c(0,0,FUN_1401e4ca0,puVar10);
      if (local_b8 == (undefined8 *)0x0) {
        local_b0 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(6);
      }
      if (DAT_1404e8358 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140015110();
      }
      _DAT_1404e8358 = (undefined8 *)CONCAT44(local_ac,local_b0);
      puVar18 = auStack_108;
      _DAT_1404e8350 = local_b8;
      if (uVar23 == 0) goto LAB_1401e3d2e;
      puVar18 = auStack_108;
      if (0xfff < (ulonglong)(((longlong)((longlong)plVar2 - uVar23) >> 3) * 8)) {
        uVar12 = (uVar23 - *(ulonglong *)(uVar23 - 8)) - 8;
        uVar23 = *(ulonglong *)(uVar23 - 8);
        puVar18 = auStack_108;
        if (0x1f < uVar12) goto LAB_1401e3d1f;
      }
    }
    else {
      if (0x1fffffffffffffff < (ulonglong)(lVar8 >> 3)) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar17 = (lVar8 >> 3) * 8;
      if (uVar17 == 0) {
LAB_1401e3c54:
        *puVar10 = uVar12;
        puVar10[1] = uVar12;
        puVar10[2] = uVar17 + uVar12;
        FUN_1404210f0(uVar12,uVar23,lVar8);
        puVar10[1] = uVar17 + uVar12;
        goto LAB_1401e3c7d;
      }
      if (uVar17 < 0x1000) {
        uVar12 = FUN_14028af20(uVar17);
        goto LAB_1401e3c54;
      }
      if (uVar17 + 0x27 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_140017370();
      }
      lVar11 = FUN_14028af20();
      uVar12 = uVar23;
      if (lVar11 != 0) {
        uVar12 = lVar11 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar12 - 8) = lVar11;
        goto LAB_1401e3c54;
      }
LAB_1401e3d1f:
      uVar23 = uVar12;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar18 = auStack_100;
      param_1 = puVar21;
    }
    *(undefined8 *)(puVar18 + -8) = 0x1401e3d2e;
    thunk_FUN_14028af80(uVar23);
  }
LAB_1401e3d2e:
  *(undefined8 *)(puVar18 + -8) = 0x1401e3d3a;
  FUN_140290ea0(&DAT_1404dfb40);
  if (DAT_1404e8358 != 0) {
    *(undefined8 *)(puVar18 + -8) = 0x1401e3d48;
    DVar6 = GetCurrentThreadId();
    puVar19 = puVar18;
    if (DAT_1404e8358 == DVar6) {
LAB_1401e3dbe:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar19 + -8) = &UNK_1401e3dc8;
      FUN_140290d30(5);
    }
    local_c8 = _DAT_1404e8350;
    puStack_c0 = _DAT_1404e8358;
    *(undefined8 *)(puVar18 + -8) = 0x1401e3d66;
    iVar5 = FUN_140291150(&local_c8,0);
    if (iVar5 != 0) {
LAB_1401e3e25:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar18 + -8) = &UNK_1401e3e2f;
      FUN_140290d30(2);
    }
    _DAT_1404e8350 = (undefined8 *)0x0;
    _DAT_1404e8358 = (undefined8 *)0x0;
  }
  pcVar3 = *(code **)(*(longlong *)*param_1 + 8);
  *(undefined8 *)(puVar18 + -8) = 0x1401e3d81;
  (*pcVar3)();
  *(undefined8 *)(puVar18 + -8) = 0x1401e3d8a;
  FUN_14000d9e0(param_1 + 8);
  *(undefined8 *)(puVar18 + -8) = 0x1401e3d93;
  FUN_140049340(param_1 + 6);
  FUN_14000d9e0(param_1 + 2);
  return;
}

