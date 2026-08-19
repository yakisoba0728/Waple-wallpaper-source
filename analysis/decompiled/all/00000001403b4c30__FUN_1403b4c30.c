// Function: FUN_1403b4c30
// Addr: 1403b4c30
// Size: 2211 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b4c30(longlong param_1,longlong param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  int *piVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  int *piVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_78;
  uint uStack_64;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_1403d0eb0();
    return;
  }
  uVar12 = 0;
  local_60 = 0;
  local_res20 = *(int *)(param_1 + 0x2c) * 2 + 1;
  uVar13 = (ulonglong)local_res20;
  if (local_res20 < 0xaaaaaaa) {
    lVar4 = func_0x0001402cb2b0(0,uVar13 * 0x18);
    if (lVar4 == 0) {
      uVar13 = 0xffffffff;
      local_res20 = 0xffffffff;
      lVar4 = local_60;
    }
  }
  else {
    uVar13 = 0xffffffff;
    local_res20 = 0xffffffff;
    lVar4 = local_60;
  }
  local_60 = lVar4;
  uStack_64 = 0;
  uVar18 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    do {
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + uVar18 * 0x18);
      if (*(int *)(puVar5 + 2) != *(int *)((longlong)puVar5 + 0x14)) {
        uVar16 = uVar12 + 1;
        if ((int)(uVar12 + 1) < 0) {
          uVar16 = 0;
        }
        uVar6 = (uint)uVar13;
        if ((int)uVar6 < 0) {
LAB_1403b4e10:
          DAT_1404e4ff0 = CONCAT44(DAT_14045dde0._4_4_,(undefined4)DAT_14045dde0);
          DAT_1404e4ff8 = CONCAT44(_DAT_14045ddec,_DAT_14045dde8);
          _DAT_1404e5000 = DAT_14045ddf0;
          puVar7 = &DAT_1404e4ff0;
        }
        else {
          uVar9 = uVar13;
          if (uVar6 < uVar16) {
            do {
              uVar11 = (int)uVar9 + 8 + (int)(uVar9 >> 1);
              uVar9 = (ulonglong)uVar11;
            } while (uVar11 < uVar16);
            if ((((int)uVar6 < 0) || (uVar11 < uVar16)) || (0xaaaaaa9 < uVar11)) {
LAB_1403b4e04:
              uVar13 = (ulonglong)(-uVar6 - 1);
              goto LAB_1403b4e10;
            }
            if (uVar11 == 0) {
              if (1 < uVar6 + 1) {
                func_0x0001402bf8e0(local_60);
                return;
              }
              lVar4 = 0;
            }
            else if ((uVar6 == 0) && (local_60 != 0)) {
              lVar4 = thunk_FUN_1402da070((ulonglong)uVar11 * 0x18);
              uVar12 = uStack_64;
              if (lVar4 == 0) {
LAB_1403b4e00:
                if (uVar11 <= uVar6) goto LAB_1403b4dc0;
                goto LAB_1403b4e04;
              }
              if ((ulonglong)uStack_64 * 3 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1404211c0(lVar4,local_60);
              }
            }
            else {
              lVar4 = func_0x0001402cb2b0(local_60,(ulonglong)uVar11 * 0x18);
              if (lVar4 == 0) goto LAB_1403b4e00;
            }
            uVar13 = (ulonglong)uVar11;
            local_60 = lVar4;
          }
LAB_1403b4dc0:
          if ((uVar12 < uVar16) && (((uVar16 - uVar12) * 3 & 0x1fffffff) != 0)) {
            func_0x000140421870(local_60 + (ulonglong)uVar12 * 0x18,0,(uVar16 - uVar12) * 0x18);
            return;
          }
          puVar7 = (undefined8 *)(local_60 + (ulonglong)(uVar16 - 1) * 0x18);
          uVar12 = uVar16;
          uStack_64 = uVar16;
        }
        *(undefined4 *)puVar7 = *(undefined4 *)(puVar5 + 2);
        *(undefined1 *)((longlong)puVar7 + 4) = 1;
        uVar24 = puVar5[1];
        puVar7[1] = *puVar5;
        puVar7[2] = uVar24;
        uVar16 = uVar12 + 1;
        if ((int)(uVar12 + 1) < 0) {
          uVar16 = 0;
        }
        uVar6 = (uint)uVar13;
        if ((int)uVar6 < 0) {
LAB_1403b4f6d:
          DAT_1404e4ff0 = CONCAT44(DAT_14045dde0._4_4_,(undefined4)DAT_14045dde0);
          DAT_1404e4ff8 = CONCAT44(_DAT_14045ddec,_DAT_14045dde8);
          _DAT_1404e5000 = DAT_14045ddf0;
          puVar7 = &DAT_1404e4ff0;
        }
        else {
          uVar9 = uVar13;
          if (uVar6 < uVar16) {
            do {
              uVar11 = (int)uVar9 + 8 + (int)(uVar9 >> 1);
              uVar9 = (ulonglong)uVar11;
            } while (uVar11 < uVar16);
            if ((((int)uVar6 < 0) || (uVar11 < uVar16)) || (0xaaaaaa9 < uVar11)) {
LAB_1403b4f61:
              uVar13 = (ulonglong)(-uVar6 - 1);
              goto LAB_1403b4f6d;
            }
            if (uVar11 == 0) {
              if (1 < uVar6 + 1) {
                func_0x0001402bf8e0(local_60);
                return;
              }
              lVar4 = 0;
            }
            else if ((uVar6 == 0) && (local_60 != 0)) {
              lVar4 = thunk_FUN_1402da070((ulonglong)uVar11 * 0x18);
              uVar12 = uStack_64;
              if (lVar4 == 0) {
LAB_1403b4f5d:
                if (uVar11 <= uVar6) goto LAB_1403b4f1d;
                goto LAB_1403b4f61;
              }
              if ((ulonglong)uStack_64 * 3 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1404211c0(lVar4,local_60);
              }
            }
            else {
              lVar4 = func_0x0001402cb2b0(local_60,(ulonglong)uVar11 * 0x18);
              if (lVar4 == 0) goto LAB_1403b4f5d;
            }
            uVar13 = (ulonglong)uVar11;
            local_60 = lVar4;
          }
LAB_1403b4f1d:
          if ((uVar12 < uVar16) && (((uVar16 - uVar12) * 3 & 0x1fffffff) != 0)) {
            func_0x000140421870(local_60 + (ulonglong)uVar12 * 0x18,0,(uVar16 - uVar12) * 0x18);
            return;
          }
          puVar7 = (undefined8 *)(local_60 + (ulonglong)(uVar16 - 1) * 0x18);
          uVar12 = uVar16;
          uStack_64 = uVar16;
        }
        *(undefined4 *)puVar7 = *(undefined4 *)((longlong)puVar5 + 0x14);
        *(undefined1 *)((longlong)puVar7 + 4) = 0;
        uVar24 = puVar5[1];
        puVar7[1] = *puVar5;
        puVar7[2] = uVar24;
      }
      uVar16 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar16;
    } while (uVar16 < *(uint *)(param_1 + 0x2c));
    local_res20 = (uint)uVar13;
  }
  uVar16 = (uint)uVar13;
  local_res18[0] = 0;
  if (uVar12 != 0) {
    FUN_140368fd0(local_60,(ulonglong)uVar12 * 0x18 + local_60,
                  (longlong)(((ulonglong)uVar12 * 0x18) / 6) >> 2,local_res18);
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  uVar6 = uVar12 + 1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  uVar11 = uVar16;
  if ((int)uVar16 < 0) {
LAB_1403b513a:
    DAT_1404e4ff0 = CONCAT44(DAT_14045dde0._4_4_,(undefined4)DAT_14045dde0);
    DAT_1404e4ff8 = CONCAT44(_DAT_14045ddec,_DAT_14045dde8);
    _DAT_1404e5000 = DAT_14045ddf0;
    puVar5 = &DAT_1404e4ff0;
  }
  else {
    lVar4 = local_60;
    uVar2 = local_res20;
    if (uVar16 < uVar6) {
      do {
        uVar11 = (int)uVar13 + 8 + (int)(uVar13 >> 1);
        uVar13 = (ulonglong)uVar11;
      } while (uVar11 < uVar6);
      if ((((int)uVar16 < 0) || (uVar11 < uVar6)) || (0xaaaaaa9 < uVar11)) {
        uVar11 = -uVar16 - 1;
        local_res20 = uVar11;
        goto LAB_1403b513a;
      }
      uVar2 = uVar11;
      if (uVar11 == 0) {
        if (1 < uVar16 + 1) {
          func_0x0001402bf8e0(local_60);
          return;
        }
        lVar4 = 0;
      }
      else if ((uVar16 == 0) && (local_60 != 0)) {
        lVar4 = thunk_FUN_1402da070((ulonglong)uVar11 * 0x18);
        uVar12 = uStack_64;
        if (lVar4 == 0) {
LAB_1403b5123:
          bVar1 = uVar16 < uVar11;
          lVar4 = local_60;
          uVar11 = uVar16;
          uVar2 = local_res20;
          if (bVar1) {
            uVar11 = -uVar16 - 1;
            local_res20 = uVar11;
            goto LAB_1403b513a;
          }
        }
        else if ((ulonglong)uStack_64 * 3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(lVar4,local_60);
        }
      }
      else {
        lVar4 = func_0x0001402cb2b0(local_60,(ulonglong)uVar11 * 0x18);
        if (lVar4 == 0) goto LAB_1403b5123;
      }
    }
    local_res20 = uVar2;
    if ((uVar12 < uVar6) && (((uVar6 - uVar12) * 3 & 0x1fffffff) != 0)) {
      func_0x000140421870(lVar4 + (ulonglong)uVar12 * 0x18,0,(uVar6 - uVar12) * 0x18);
      return;
    }
    puVar5 = (undefined8 *)(lVar4 + (ulonglong)(uVar6 - 1) * 0x18);
    local_60 = lVar4;
    uStack_64 = uVar6;
  }
  *(undefined4 *)puVar5 = 0xffffffff;
  *(undefined1 *)((longlong)puVar5 + 4) = 0;
  puVar5[1] = local_58;
  *(undefined4 *)(puVar5 + 2) = local_50;
  *(int *)((longlong)puVar5 + 0x14) = iVar3 + 1;
  uVar18 = 0;
  iVar17 = 0;
  uVar13 = 0;
  lVar4 = 0;
  iVar3 = 0;
  local_78 = 0;
  uVar20 = (undefined4)DAT_14045dde0;
  uVar21 = DAT_14045dde0._4_4_;
  uVar22 = _DAT_14045dde8;
  if (uStack_64 == 0) {
UNWIND_INFO_1403b54c5_UnwindCodes_26__OffsetInProlog:
    lVar10 = *(longlong *)(param_2 + 8);
    lVar14 = (ulonglong)*(uint *)(param_2 + 4) * 0x10 + lVar10;
    for (; lVar10 != lVar14; lVar10 = lVar10 + 0x10) {
      uVar12 = *(uint *)(lVar10 + 4) - 1;
      if (uVar12 < *(uint *)(lVar10 + 4)) {
        puVar5 = (undefined8 *)(*(longlong *)(lVar10 + 8) + (ulonglong)uVar12 * 0xc);
      }
      else {
        DAT_1404e4ff0 = CONCAT44(uVar21,uVar20);
        uVar13 = (ulonglong)DAT_1404e4ff8 >> 0x20;
        DAT_1404e4ff8 = CONCAT44((int)uVar13,uVar22);
        puVar5 = &DAT_1404e4ff0;
      }
      *(undefined4 *)(puVar5 + 1) = 0xffffffff;
      uVar20 = (undefined4)DAT_14045dde0;
      uVar21 = DAT_14045dde0._4_4_;
      uVar22 = _DAT_14045dde8;
    }
    if (1 < iVar17 + 1U) {
      func_0x0001402bf8e0(lVar4);
    }
    if (1 < uVar11 + 1) {
      func_0x0001402bf8e0(local_60);
    }
    return;
  }
  uVar24 = DAT_14045ddf0;
  uVar23 = _DAT_14045ddec;
  if (uStack_64 != 0) goto LAB_1403b51e2;
  DAT_1404e4ff0 = CONCAT44(DAT_14045dde0._4_4_,(undefined4)DAT_14045dde0);
  DAT_1404e4ff8 = CONCAT44(_DAT_14045ddec,_DAT_14045dde8);
  _DAT_1404e5000 = DAT_14045ddf0;
  piVar19 = (int *)&DAT_1404e4ff0;
LAB_1403b51ea:
  uVar12 = (uint)uVar13;
  if (*piVar19 != iVar3) {
    if ((int)*(uint *)(param_1 + 0x38) < 0) {
      *(uint *)(param_1 + 0x38) = ~*(uint *)(param_1 + 0x38);
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    FUN_1403a4c30(param_1 + 0x38,uVar24,1);
    if (-1 < *(int *)(param_1 + 0x38)) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
      if ((uVar13 & 0xfffffff) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(*(undefined8 *)(param_1 + 0x40),lVar4,uVar12 << 4);
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + uVar12;
    }
    *(int *)(param_1 + 0x48) = iVar3;
    *(int *)(param_1 + 0x4c) = *piVar19 + -1;
    uVar16 = *(uint *)(param_1 + 0x3c);
    if (uVar16 != 0) {
      local_res18[0] = 0;
      FUN_140369280(*(longlong *)(param_1 + 0x40),
                    (ulonglong)uVar16 * 0x10 + *(longlong *)(param_1 + 0x40),uVar16);
      uVar15 = 0;
      uVar9 = 1;
      if (1 < *(uint *)(param_1 + 0x3c)) {
        do {
          lVar10 = *(longlong *)(param_1 + 0x40);
          piVar8 = (int *)(uVar9 * 0x10 + lVar10);
          if ((*piVar8 != *(int *)(lVar10 + uVar15 * 0x10)) ||
             (((char)piVar8[2] == '\0' &&
              (((*(uint *)(lVar10 + 4 + uVar15 * 0x10) ^ piVar8[1]) & 0xfffffffe) != 0)))) {
            uVar15 = (ulonglong)((int)uVar15 + 1);
            uVar24 = *(undefined8 *)(piVar8 + 2);
            puVar5 = (undefined8 *)(lVar10 + uVar15 * 0x10);
            *puVar5 = *(undefined8 *)piVar8;
            puVar5[1] = uVar24;
          }
          uVar16 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar16;
        } while (uVar16 < *(uint *)(param_1 + 0x3c));
      }
      uVar16 = (int)uVar15 + 1;
      if ((int)uVar16 < 0) {
        uVar16 = 0;
      }
      if ((uVar16 < *(uint *)(param_1 + 0x3c)) &&
         (*(uint *)(param_1 + 0x3c) = uVar16, 1 < *(int *)(param_1 + 0x38) + 1U)) {
        FUN_1403a4c30(param_1 + 0x38,uVar16,1);
      }
    }
    FUN_1403d0eb0(param_1,param_2);
    iVar3 = *piVar19;
    uVar24 = DAT_14045ddf0;
    uVar20 = (undefined4)DAT_14045dde0;
    uVar21 = DAT_14045dde0._4_4_;
    uVar22 = _DAT_14045dde8;
    uVar23 = _DAT_14045ddec;
  }
  if ((char)piVar19[1] != '\0') {
    uVar16 = (uint)uVar18;
    if ((int)uVar16 <= (int)uVar12) {
      if ((int)uVar16 < 0) {
LAB_1403b544f:
        DAT_1404e4ff0 = CONCAT44(uVar21,uVar20);
        DAT_1404e4ff8 = CONCAT44(uVar23,uVar22);
        goto UNWIND_INFO_1403b54c5_UnwindCodes_14__UnwindOpCode;
      }
      uVar6 = uVar12 + 1;
      uVar9 = uVar18;
      if (uVar16 < uVar6) {
        do {
          uVar11 = (int)uVar9 + 8 + (int)(uVar9 >> 1);
          uVar9 = (ulonglong)uVar11;
        } while (uVar11 < uVar6);
        if ((((int)uVar16 < 0) || (uVar11 < uVar6)) || (0xffffffe < uVar11)) {
LAB_1403b5441:
          uVar18 = (ulonglong)(-uVar16 - 1);
          goto LAB_1403b544f;
        }
        if (uVar11 == 0) {
          if (1 < uVar16 + 1) {
            func_0x0001402bf8e0(lVar4);
            return;
          }
          lVar10 = 0;
        }
        else if ((uVar16 == 0) && (lVar4 != 0)) {
          lVar10 = thunk_FUN_1402da070((ulonglong)uVar11 << 4);
          if (lVar10 == 0) {
LAB_1403b542d:
            uVar24 = DAT_14045ddf0;
            uVar20 = (undefined4)DAT_14045dde0;
            uVar21 = DAT_14045dde0._4_4_;
            uVar22 = _DAT_14045dde8;
            uVar23 = _DAT_14045ddec;
            if (uVar11 <= uVar16) goto LAB_1403b5404;
            goto LAB_1403b5441;
          }
          if (uVar13 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(lVar10,lVar4);
          }
        }
        else {
          lVar10 = func_0x0001402cb2b0(lVar4,(ulonglong)uVar11 << 4);
          if (lVar10 == 0) goto LAB_1403b542d;
        }
        uVar18 = (ulonglong)uVar11;
        lVar4 = lVar10;
      }
    }
LAB_1403b5404:
    uVar12 = uVar12 + 1;
    uVar24 = *(undefined8 *)(piVar19 + 4);
    puVar5 = (undefined8 *)(lVar4 + uVar13 * 0x10);
    *puVar5 = *(undefined8 *)(piVar19 + 2);
    puVar5[1] = uVar24;
    uVar24 = DAT_14045ddf0;
    uVar20 = (undefined4)DAT_14045dde0;
    uVar21 = DAT_14045dde0._4_4_;
    uVar22 = _DAT_14045dde8;
    uVar23 = _DAT_14045ddec;
    goto UNWIND_INFO_1403b54c5_UnwindCodes_11__UnwindOpCode;
  }
  if (uVar12 != 0) {
    uVar16 = 0;
    do {
      piVar8 = (int *)((ulonglong)uVar16 * 0x10 + lVar4);
      if ((piVar19[2] == *piVar8) && (piVar19[3] == piVar8[1])) {
        uVar16 = (uint)((longlong)piVar8 - lVar4 >> 4);
        if (uVar16 < uVar12) goto joined_r0x0001403b54a3;
        break;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar12);
  }
  goto UNWIND_INFO_1403b54c5_UnwindCodes_14__UnwindOpCode;
joined_r0x0001403b54a3:
  while (uVar6 = uVar16 + 1, uVar6 < uVar12) {
    puVar5 = (undefined8 *)(lVar4 + (ulonglong)uVar6 * 0x10);
    uVar24 = puVar5[1];
    puVar7 = (undefined8 *)(lVar4 + (ulonglong)uVar16 * 0x10);
    *puVar7 = *puVar5;
    puVar7[1] = uVar24;
    uVar24 = DAT_14045ddf0;
    uVar20 = (undefined4)DAT_14045dde0;
    uVar21 = DAT_14045dde0._4_4_;
    uVar22 = _DAT_14045dde8;
    uVar23 = _DAT_14045ddec;
    uVar16 = uVar6;
  }
  uVar12 = uVar12 - 1;
UNWIND_INFO_1403b54c5_UnwindCodes_11__UnwindOpCode:
  uVar13 = (ulonglong)uVar12;
UNWIND_INFO_1403b54c5_UnwindCodes_14__UnwindOpCode:
  iVar17 = (int)uVar18;
  local_78 = local_78 + 1;
  uVar11 = local_res20;
  if (uStack_64 <= local_78) goto UNWIND_INFO_1403b54c5_UnwindCodes_26__OffsetInProlog;
LAB_1403b51e2:
  piVar19 = (int *)(local_60 + (ulonglong)local_78 * 0x18);
  goto LAB_1403b51ea;
}

