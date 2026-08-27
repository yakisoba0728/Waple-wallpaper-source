// Function: FUN_1403d3ee0
// Addr: 1403d3ee0
// Size: 2910 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1403d3ee0(longlong param_1,uint param_2,int *param_3,longlong param_4)

{
  uint *puVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ushort uVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  ulonglong *puVar18;
  int *piVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  undefined4 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  uint local_88;
  uint local_84;
  longlong local_78;
  undefined8 local_68;
  
  param_3[1] = 0;
  *(undefined4 *)(param_4 + 4) = 0;
  uVar6 = 0;
  local_68 = 0;
  uVar10 = 0;
  lVar5 = 0;
  local_78 = 0;
  uVar23 = 0;
  if (param_2 != 0) {
    lVar22 = 0;
    do {
      puVar24 = (undefined4 *)(lVar22 * 0x10 + param_1);
      uVar4 = (ushort)((uint)*puVar24 >> 0x10);
      uVar7 = (ushort)*puVar24;
      uVar20 = CONCAT22(uVar7 >> 8 | uVar7 << 8,uVar4 >> 8 | uVar4 << 8);
      uVar8 = puVar24[1];
      uVar15 = (int)uVar10 + 1;
      if ((int)uVar15 < 0) {
        uVar15 = 0;
      }
      uVar16 = (uint)uVar6;
      if ((int)uVar16 < 0) {
LAB_1403d40a5:
        DAT_1404e4f20 = DAT_14045dd10;
        _DAT_1404e4f28 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
        _DAT_1404e4f30 = CONCAT44(DAT_1404e4f34,(undefined4)DAT_14045dd20);
        puVar17 = &DAT_1404e4f20;
      }
      else {
        uVar13 = uVar6;
        if (uVar16 < uVar15) {
          do {
            uVar11 = (int)uVar13 + 8 + (int)(uVar13 >> 1);
            uVar13 = (ulonglong)uVar11;
          } while (uVar11 < uVar15);
          if ((((int)uVar16 < 0) || (uVar11 < uVar15)) || (0xccccccb < uVar11)) {
            uVar6 = (ulonglong)(-uVar16 - 1);
            local_68 = CONCAT44(local_68._4_4_,-uVar16 - 1);
            goto LAB_1403d40a5;
          }
          if (uVar11 == 0) {
            if (1 < uVar16 + 1) {
              thunk_FUN_1402d9040(lVar5);
            }
            local_78 = 0;
            lVar5 = local_78;
          }
          else if ((uVar16 == 0) && (lVar5 != 0)) {
            lVar5 = _malloc_base((ulonglong)uVar11 * 0x14);
            if (lVar5 == 0) {
              uVar6 = local_68 & 0xffffffff;
LAB_1403d408b:
              uVar10 = (ulonglong)local_68._4_4_;
              lVar5 = local_78;
              if (uVar11 <= (uint)uVar6) goto LAB_1403d404c;
              uVar15 = -(uint)uVar6 - 1;
              uVar6 = (ulonglong)uVar15;
              local_68 = CONCAT44(local_68._4_4_,uVar15);
              goto LAB_1403d40a5;
            }
            if ((ulonglong)local_68._4_4_ * 5 != 0) {
              FUN_1404210f0(lVar5,local_78);
            }
          }
          else {
            lVar5 = _realloc_base(lVar5,(ulonglong)uVar11 * 0x14);
            if (lVar5 == 0) goto LAB_1403d408b;
          }
          local_78 = lVar5;
          uVar6 = (ulonglong)uVar11;
          local_68 = CONCAT44(local_68._4_4_,uVar11);
          uVar10 = (ulonglong)local_68._4_4_;
          lVar5 = local_78;
        }
LAB_1403d404c:
        if (((uint)uVar10 < uVar15) && (((uVar15 - (uint)uVar10) * 5 & 0x3fffffff) != 0)) {
          FUN_1404217a0(lVar5 + uVar10 * 0x14,0);
          lVar5 = local_78;
        }
        uVar10 = (ulonglong)uVar15;
        local_68 = CONCAT44(uVar15,(uint)local_68);
        puVar17 = (undefined8 *)(lVar5 + (ulonglong)(uVar15 - 1) * 0x14);
      }
      *(undefined4 *)puVar17 = puVar24[2];
      *(undefined1 *)((longlong)puVar17 + 4) = 1;
      *(undefined4 *)(puVar17 + 1) = uVar20;
      *(undefined4 *)((longlong)puVar17 + 0xc) = uVar8;
      *(uint *)(puVar17 + 2) = uVar23;
      uVar15 = (int)uVar10 + 1;
      if ((int)uVar15 < 0) {
        uVar15 = 0;
      }
      uVar16 = (uint)uVar6;
      if ((int)uVar16 < 0) {
LAB_1403d4239:
        DAT_1404e4f20 = DAT_14045dd10;
        _DAT_1404e4f28 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
        _DAT_1404e4f30 = CONCAT44(DAT_1404e4f34,(undefined4)DAT_14045dd20);
        puVar17 = &DAT_1404e4f20;
      }
      else {
        uVar13 = uVar6;
        if (uVar16 < uVar15) {
          do {
            uVar11 = (int)uVar13 + 8 + (int)(uVar13 >> 1);
            uVar13 = (ulonglong)uVar11;
          } while (uVar11 < uVar15);
          if ((((int)uVar16 < 0) || (uVar11 < uVar15)) || (0xccccccb < uVar11)) {
            uVar6 = (ulonglong)(-uVar16 - 1);
            local_68 = CONCAT44(local_68._4_4_,-uVar16 - 1);
            goto LAB_1403d4239;
          }
          if (uVar11 == 0) {
            if (1 < uVar16 + 1) {
              thunk_FUN_1402d9040(lVar5);
            }
            local_78 = 0;
            lVar5 = local_78;
          }
          else if ((uVar16 == 0) && (lVar5 != 0)) {
            lVar5 = _malloc_base((ulonglong)uVar11 * 0x14);
            if (lVar5 == 0) {
              uVar6 = local_68 & 0xffffffff;
LAB_1403d421f:
              uVar10 = (ulonglong)local_68._4_4_;
              lVar5 = local_78;
              if (uVar11 <= (uint)uVar6) goto LAB_1403d41e0;
              uVar15 = -(uint)uVar6 - 1;
              uVar6 = (ulonglong)uVar15;
              local_68 = CONCAT44(local_68._4_4_,uVar15);
              goto LAB_1403d4239;
            }
            if ((ulonglong)local_68._4_4_ * 5 != 0) {
              FUN_1404210f0(lVar5,local_78);
            }
          }
          else {
            lVar5 = _realloc_base(lVar5,(ulonglong)uVar11 * 0x14);
            if (lVar5 == 0) goto LAB_1403d421f;
          }
          local_78 = lVar5;
          uVar6 = (ulonglong)uVar11;
          local_68 = CONCAT44(local_68._4_4_,uVar11);
          uVar10 = (ulonglong)local_68._4_4_;
          lVar5 = local_78;
        }
LAB_1403d41e0:
        if (((uint)uVar10 < uVar15) && (((uVar15 - (uint)uVar10) * 5 & 0x3fffffff) != 0)) {
          FUN_1404217a0(lVar5 + uVar10 * 0x14,0);
          lVar5 = local_78;
        }
        uVar10 = (ulonglong)uVar15;
        local_68 = CONCAT44(uVar15,(uint)local_68);
        puVar17 = (undefined8 *)(lVar5 + (ulonglong)(uVar15 - 1) * 0x14);
      }
      *(undefined4 *)puVar17 = puVar24[3];
      *(undefined1 *)((longlong)puVar17 + 4) = 0;
      *(undefined4 *)(puVar17 + 1) = uVar20;
      *(undefined4 *)((longlong)puVar17 + 0xc) = uVar8;
      *(uint *)(puVar17 + 2) = uVar23;
      uVar23 = uVar23 + 1;
      lVar22 = lVar22 + 1;
    } while (uVar23 < param_2);
  }
  uVar23 = (uint)uVar6;
  if ((int)uVar10 != 0) {
    FUN_14036a260(lVar5,uVar10 * 0x14 + lVar5);
    uVar10 = (ulonglong)local_68._4_4_;
  }
  uVar15 = (uint)uVar10;
  uVar16 = uVar15 + 1;
  if ((int)uVar16 < 0) {
    uVar16 = 0;
  }
  uVar11 = (uint)local_68;
  if ((int)uVar23 < 0) {
LAB_1403d444f:
    uVar16 = uVar15;
    DAT_1404e4f20 = DAT_14045dd10;
    puVar17 = &DAT_1404e4f20;
  }
  else {
    if (uVar23 < uVar16) {
      do {
        uVar12 = (int)uVar6 + 8 + (int)(uVar6 >> 1);
        uVar6 = (ulonglong)uVar12;
      } while (uVar12 < uVar16);
      if ((((int)uVar23 < 0) || (uVar12 < uVar16)) || (0xccccccb < uVar12)) {
LAB_1403d43fc:
        local_68 = CONCAT44(local_68._4_4_,-uVar23 - 1);
        uVar11 = -uVar23 - 1;
        goto LAB_1403d444f;
      }
      uVar11 = uVar12;
      uVar15 = local_68._4_4_;
      if (uVar12 == 0) {
        if (1 < uVar23 + 1) {
          thunk_FUN_1402d9040(local_78);
        }
        local_78 = 0;
        local_68 = 0;
      }
      else if ((uVar23 == 0) && (local_78 != 0)) {
        lVar5 = _malloc_base((ulonglong)uVar12 * 0x14);
        uVar23 = (uint)local_68;
        if (lVar5 == 0) {
LAB_1403d43f5:
          uVar11 = (uint)local_68;
          if (uVar23 < uVar12) goto LAB_1403d43fc;
        }
        else {
          if ((ulonglong)local_68._4_4_ * 5 != 0) {
            FUN_1404210f0(lVar5,local_78);
          }
          local_68 = CONCAT44(local_68._4_4_,uVar12);
          local_78 = lVar5;
        }
      }
      else {
        lVar5 = _realloc_base(local_78,(ulonglong)uVar12 * 0x14);
        if (lVar5 == 0) goto LAB_1403d43f5;
        local_68 = CONCAT44(local_68._4_4_,uVar12);
        local_78 = lVar5;
      }
    }
    if ((uVar15 < uVar16) && (((uVar16 - uVar15) * 5 & 0x3fffffff) != 0)) {
      FUN_1404217a0(local_78 + (ulonglong)uVar15 * 0x14,0);
    }
    local_68 = CONCAT44(uVar16,(uint)local_68);
    puVar17 = (undefined8 *)(local_78 + (ulonglong)(uVar16 - 1) * 0x14);
  }
  *(undefined4 *)puVar17 = 0;
  *(undefined1 *)((longlong)puVar17 + 4) = 0;
  puVar17[1] = 0;
  *(uint *)(puVar17 + 2) = param_2 + 1;
  uVar21 = 0;
  iVar9 = 0;
  uVar23 = 0;
  uVar13 = 0;
  lVar5 = 0;
  local_88 = 0;
  uVar6 = 0;
  local_84 = 0;
  uVar25 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
  uVar26 = CONCAT44(DAT_14045dd20._4_4_,(undefined4)DAT_14045dd20);
  uVar10 = DAT_14045dd10;
  if (uVar16 != 0) {
    uVar8 = (undefined4)DAT_14045dd18;
    if (uVar16 != 0) goto LAB_1403d44e1;
    DAT_1404e4f20 = DAT_14045dd10;
    _DAT_1404e4f30 = CONCAT44(DAT_1404e4f34,(undefined4)DAT_14045dd20);
    puVar14 = (uint *)&DAT_1404e4f20;
    uVar6 = DAT_14045dd10 & 0xffffffff;
    _DAT_1404e4f28 = uVar25;
    do {
      uVar15 = (uint)uVar13;
      if ((uint)uVar6 != local_88) {
        uVar16 = *(int *)(param_4 + 4) + 1;
        if ((int)uVar16 < 0) {
          uVar16 = 0;
        }
        cVar3 = FUN_1403a4a30(param_4,uVar16,0);
        if (cVar3 == '\0') {
          DAT_1404e4f20 = DAT_14045dd10;
          _DAT_1404e4f28 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
          _DAT_1404e4f30 = CONCAT44(DAT_14045dd20._4_4_,(undefined4)DAT_14045dd20);
          puVar18 = &DAT_1404e4f20;
        }
        else {
          uVar11 = *(uint *)(param_4 + 4);
          if ((uVar11 < uVar16) && (((uVar16 - uVar11) * 3 & 0x1fffffff) != 0)) {
            FUN_1404217a0(*(longlong *)(param_4 + 8) + (ulonglong)uVar11 * 0x18,0,
                          (uVar16 - uVar11) * 0x18);
          }
          *(uint *)(param_4 + 4) = uVar16;
          puVar18 = (ulonglong *)(*(longlong *)(param_4 + 8) + (ulonglong)(uVar16 - 1) * 0x18);
        }
        uVar16 = param_3[1];
        if (uVar15 != 0) {
          FUN_140369f00(lVar5,uVar13 * 0xc + lVar5,(longlong)((uVar13 * 0xc) / 6) >> 1);
        }
        uVar10 = 0;
        if (uVar15 != 0) {
          do {
            uVar11 = (uint)uVar10;
            if (uVar11 == 0) {
LAB_1403d468d:
              if (uVar11 < uVar15) {
                puVar17 = (undefined8 *)(uVar10 * 0xc + lVar5);
              }
              else {
                _DAT_1404e4f28 = CONCAT44(_DAT_1404e4f2c,(undefined4)DAT_14045dd18);
                puVar17 = &DAT_1404e4f20;
                DAT_1404e4f20 = DAT_14045dd10;
              }
              if ((param_3[1] < *param_3) ||
                 (cVar3 = FUN_1403a46a0(param_3,param_3[1] + 1,0), cVar3 != '\0')) {
                uVar12 = param_3[1];
                param_3[1] = uVar12 + 1;
                *(undefined8 *)(*(longlong *)(param_3 + 2) + (ulonglong)uVar12 * 8) = *puVar17;
              }
              else {
                DAT_1404e4f20 = DAT_14045dd10;
              }
            }
            else {
              if (uVar11 < uVar15) {
                piVar19 = (int *)(uVar10 * 0xc + lVar5);
              }
              else {
                _DAT_1404e4f28 = CONCAT44(_DAT_1404e4f2c,(undefined4)DAT_14045dd18);
                piVar19 = (int *)&DAT_1404e4f20;
                DAT_1404e4f20 = DAT_14045dd10;
              }
              uVar12 = param_3[1] - 1;
              iVar9 = (int)DAT_14045dd10;
              uVar6 = DAT_14045dd10;
              if (uVar12 < (uint)param_3[1]) {
                iVar9 = *(int *)(*(longlong *)(param_3 + 2) + (ulonglong)uVar12 * 8);
                uVar6 = DAT_1404e4f20;
              }
              DAT_1404e4f20 = uVar6;
              if (*piVar19 != iVar9) goto LAB_1403d468d;
              if (uVar11 < uVar15) {
                puVar17 = (undefined8 *)(lVar5 + uVar10 * 0xc);
              }
              else {
                _DAT_1404e4f28 = CONCAT44(_DAT_1404e4f2c,(undefined4)DAT_14045dd18);
                puVar17 = &DAT_1404e4f20;
                DAT_1404e4f20 = DAT_14045dd10;
              }
              uVar12 = param_3[1] - 1;
              if (uVar12 < (uint)param_3[1]) {
                *(undefined4 *)(*(longlong *)(param_3 + 2) + (ulonglong)uVar12 * 8 + 4) =
                     *(undefined4 *)((longlong)puVar17 + 4);
              }
              else {
                DAT_1404e4f20 = CONCAT44(*(undefined4 *)((longlong)puVar17 + 4),(int)DAT_14045dd10);
              }
            }
            uVar10 = (ulonglong)(uVar11 + 1);
          } while (uVar11 + 1 < uVar15);
        }
        *puVar18 = (ulonglong)uVar16;
        *(uint *)(puVar18 + 1) = param_3[1] - uVar16;
        *(uint *)(puVar18 + 2) = local_88;
        *(uint *)((longlong)puVar18 + 0x14) = *puVar14 - 1;
        local_88 = *puVar14;
        uVar25 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
        uVar26 = CONCAT44(DAT_14045dd20._4_4_,(undefined4)DAT_14045dd20);
        uVar21 = (ulonglong)uVar23;
        uVar10 = DAT_14045dd10;
        uVar8 = (undefined4)DAT_14045dd18;
      }
      if ((char)puVar14[1] == '\0') {
        if (uVar15 != 0) {
          uVar6 = 0;
LAB_1403d48d0:
          puVar1 = (uint *)(lVar5 + uVar6 * 0xc);
          if ((((puVar14[2] < *puVar1) || (puVar14[2] != *puVar1)) || (puVar14[4] < puVar1[2])) ||
             (puVar14[4] != puVar1[2])) goto LAB_1403d48f5;
          if ((puVar14[3] < puVar1[1]) || (puVar1[1] < puVar14[3])) goto LAB_1403d48f5;
          uVar16 = (uint)(((longlong)puVar1 - lVar5) / 0xc);
          if (uVar16 < uVar15) {
            uVar16 = uVar16 + 1;
            if (uVar16 < uVar15) {
              do {
                puVar17 = (undefined8 *)(lVar5 + (ulonglong)(uVar16 - 1) * 0xc);
                *puVar17 = *(undefined8 *)(lVar5 + (ulonglong)uVar16 * 0xc);
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(lVar5 + 8 + (ulonglong)uVar16 * 0xc);
                uVar16 = uVar16 + 1;
              } while (uVar16 < uVar15);
              uVar25 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
              uVar26 = CONCAT44(DAT_14045dd20._4_4_,(undefined4)DAT_14045dd20);
              uVar10 = DAT_14045dd10;
              uVar8 = (undefined4)DAT_14045dd18;
            }
            uVar15 = uVar15 - 1;
            goto LAB_1403d4976;
          }
        }
      }
      else {
        uVar11 = (uint)uVar21;
        lVar22 = lVar5;
        uVar16 = uVar23;
        if ((int)uVar11 <= (int)uVar15) {
          if ((int)uVar11 < 0) {
LAB_1403d485e:
            _DAT_1404e4f28 = CONCAT44(_DAT_1404e4f2c,uVar8);
            DAT_1404e4f20 = uVar10;
            goto LAB_1403d4979;
          }
          uVar12 = uVar15 + 1;
          uVar6 = uVar21;
          if (uVar11 < uVar12) {
            do {
              uVar16 = (int)uVar6 + 8 + (int)(uVar6 >> 1);
              uVar6 = (ulonglong)uVar16;
            } while (uVar16 < uVar12);
            if ((((int)uVar11 < 0) || (uVar16 < uVar12)) || (0x15555554 < uVar16)) {
LAB_1403d4850:
              uVar23 = -uVar11 - 1;
              uVar21 = (ulonglong)uVar23;
              goto LAB_1403d485e;
            }
            if (uVar16 == 0) {
              if (1 < uVar11 + 1) {
                thunk_FUN_1402d9040(lVar5);
              }
              uVar21 = 0;
              lVar22 = 0;
              uVar16 = 0;
            }
            else if ((uVar11 == 0) && (lVar5 != 0)) {
              lVar22 = _malloc_base((ulonglong)uVar16 * 0xc);
              if (lVar22 == 0) {
LAB_1403d4831:
                bVar2 = uVar11 < uVar16;
                lVar22 = lVar5;
                uVar16 = uVar23;
                if (bVar2) {
                  uVar25 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
                  uVar26 = CONCAT44(DAT_14045dd20._4_4_,(undefined4)DAT_14045dd20);
                  uVar10 = DAT_14045dd10;
                  uVar8 = (undefined4)DAT_14045dd18;
                  goto LAB_1403d4850;
                }
              }
              else {
                if (uVar13 * 0xc != 0) {
                  FUN_1404210f0(lVar22,lVar5);
                }
                uVar21 = (ulonglong)uVar16;
              }
            }
            else {
              lVar22 = _realloc_base(lVar5,(ulonglong)uVar16 * 0xc);
              if (lVar22 == 0) goto LAB_1403d4831;
              uVar21 = (ulonglong)uVar16;
            }
          }
        }
        puVar17 = (undefined8 *)(lVar22 + uVar13 * 0xc);
        uVar15 = uVar15 + 1;
        *puVar17 = *(undefined8 *)(puVar14 + 2);
        *(uint *)(puVar17 + 1) = puVar14[4];
        uVar25 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
        uVar26 = CONCAT44(DAT_14045dd20._4_4_,(undefined4)DAT_14045dd20);
        uVar10 = DAT_14045dd10;
        lVar5 = lVar22;
        uVar8 = (undefined4)DAT_14045dd18;
        uVar23 = uVar16;
LAB_1403d4976:
        uVar13 = (ulonglong)uVar15;
      }
LAB_1403d4979:
      iVar9 = (int)uVar21;
      local_84 = local_84 + 1;
      uVar6 = (ulonglong)local_84;
      if (local_68._4_4_ <= local_84) goto code_r0x0001403d4990;
LAB_1403d44e1:
      puVar14 = (uint *)(local_78 + uVar6 * 0x14);
      uVar6 = (ulonglong)*puVar14;
    } while( true );
  }
LAB_1403d4994:
  uVar23 = *(uint *)(param_4 + 4);
  uVar15 = 0;
  if (uVar23 != 0) {
    uVar6 = 0;
    while( true ) {
      if ((uint)uVar6 < uVar23) {
        puVar18 = (ulonglong *)(*(longlong *)(param_4 + 8) + uVar6 * 0x18);
        uVar10 = *puVar18;
      }
      else {
        puVar18 = &DAT_1404e4f20;
        DAT_1404e4f20 = uVar10;
        _DAT_1404e4f28 = uVar25;
        _DAT_1404e4f30 = uVar26;
      }
      *puVar18 = *(longlong *)(param_3 + 2) + uVar10 * 8;
      uVar16 = (uint)uVar6 + 1;
      uVar6 = (ulonglong)uVar16;
      uVar23 = *(uint *)(param_4 + 4);
      uVar15 = param_2;
      if (uVar23 <= uVar16) break;
      uVar25 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
      uVar26 = CONCAT44(DAT_14045dd20._4_4_,(undefined4)DAT_14045dd20);
      uVar10 = DAT_14045dd10;
    }
  }
  if (1 < iVar9 + 1U) {
    thunk_FUN_1402d9040(lVar5);
  }
  if (1 < uVar11 + 1) {
    thunk_FUN_1402d9040(local_78);
  }
  return uVar15 != 0;
LAB_1403d48f5:
  uVar16 = (int)uVar6 + 1;
  uVar6 = (ulonglong)uVar16;
  if (uVar15 <= uVar16) goto LAB_1403d4979;
  goto LAB_1403d48d0;
code_r0x0001403d4990:
  uVar11 = (uint)local_68;
  goto LAB_1403d4994;
}

