// Function: FUN_14038fd40
// Addr: 14038fd40
// Size: 3009 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_14038fd40(int *param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  int *piVar18;
  undefined1 uVar19;
  uint uVar20;
  longlong lVar21;
  undefined8 *puVar22;
  undefined1 auStack_2158 [32];
  undefined8 local_2138;
  undefined8 local_2130;
  char *local_2128;
  char *local_2120;
  char *local_2118;
  undefined8 local_2110;
  char *local_2108;
  undefined8 local_2100;
  char *local_20f8;
  char local_20e8;
  undefined8 *local_20e0;
  undefined8 local_20d8;
  longlong local_20d0;
  uint local_20c8;
  uint local_20c4;
  undefined8 *local_20c0;
  int *local_20b8;
  undefined8 local_20a8;
  longlong local_20a0;
  uint local_2098;
  uint local_2094;
  undefined1 local_2090;
  uint local_208c;
  undefined8 local_2088 [514];
  undefined8 local_1078;
  undefined8 *local_1070;
  int local_1068;
  undefined4 local_1064;
  undefined1 local_1060;
  undefined4 local_105c;
  undefined8 local_1058 [513];
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14038fd62;
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_2158;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x10000;
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  if (param_2 == 0) {
    return param_1;
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  local_20b8 = param_1;
  if ((char)param_1[0xf] == '\0') {
    iVar14 = *(int *)(param_2 + 0x18);
    if (iVar14 == -1) {
      lVar8 = FUN_140398a10(param_2 + 0x80);
      iVar14 = (uint)*(byte *)(lVar8 + 5) + (uint)*(byte *)(lVar8 + 4) * 0x100;
      if (iVar14 == 0) {
        iVar14 = 0;
      }
      *(int *)(param_2 + 0x18) = iVar14;
    }
    param_1[0xe] = iVar14;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  if (*(code **)(param_2 + 0x20) == (code *)0x0) {
    piVar18 = (int *)&DAT_14045dd10;
  }
  else {
    piVar9 = (int *)(**(code **)(param_2 + 0x20))
                              (param_2,0x43464632,*(undefined8 *)(param_2 + 0x28));
    piVar18 = (int *)&DAT_14045dd10;
    if (piVar9 != (int *)0x0) {
      piVar18 = piVar9;
    }
  }
  if (*piVar18 != 0) {
    LOCK();
    *piVar18 = *piVar18 + 1;
    UNLOCK();
  }
  *(int **)(param_1 + 0xc) = piVar18;
  *(undefined1 *)(param_1 + 10) = 0;
  lVar8 = *(longlong *)(piVar18 + 4);
  *(longlong *)(param_1 + 2) = lVar8;
  uVar20 = piVar18[6];
  *(ulonglong *)(param_1 + 4) = (ulonglong)uVar20 + lVar8;
  uVar20 = (int)((ulonglong)uVar20 + lVar8) - (int)lVar8;
  param_1[6] = uVar20;
  if (uVar20 < 0x3ffffff) {
    uVar7 = 0x4000;
    if (0x3fff < uVar20 * 0x40) {
      uVar7 = uVar20 * 0x40;
    }
    uVar17 = 0x3fffffff;
    if (uVar7 < 0x40000000) {
      uVar17 = uVar7;
    }
  }
  else {
    uVar17 = 0x3fffffff;
  }
  param_1[7] = uVar17;
  *param_1 = 0;
  param_1[9] = 0;
  local_2120 = *(char **)(param_1 + 2);
  local_2110 = CONCAT44(local_2110._4_4_,uVar20);
  local_2118 = *(char **)(param_1 + 4);
  local_2128 = "start [%p..%p] (%lu bytes)";
  local_2130._0_4_ = 1;
  local_2138 = 0;
  iVar14 = 1;
  FUN_1402fc370("SANITIZE",local_2120,0);
  local_2118 = *(char **)(param_1 + 2);
  if (local_2118 == (char *)0x0) {
    local_2120 = (char *)0x0;
    local_2128 = "end [%p..%p]";
    local_2130 = CONCAT44(local_2130._4_4_,0xffffffff);
    local_2138 = 0;
    local_2118 = (char *)*(undefined8 *)(param_1 + 4);
    FUN_1402fc370("SANITIZE",0,0);
    piVar9 = *(int **)(param_1 + 0xc);
    if ((piVar9 != (int *)0x0) && (*piVar9 != 0)) {
      LOCK();
      iVar2 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar2 == iVar14) {
        *piVar9 = -0xdead;
        lVar8 = *(longlong *)(piVar9 + 2);
        if (lVar8 != 0) {
          FUN_1403c3220(lVar8);
          thunk_FUN_1402d9040(lVar8);
          piVar9[2] = 0;
          piVar9[3] = 0;
        }
        if (*(code **)(piVar9 + 10) != (code *)0x0) {
          (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
          piVar9[8] = 0;
          piVar9[9] = 0;
          piVar9[10] = 0;
          piVar9[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar9);
      }
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[6] = 0;
LAB_140390142:
    *(int **)(param_1 + 0x10) = piVar18;
    if (piVar18 != (int *)0x0) goto LAB_140390463;
LAB_14039014f:
    *(int **)(param_1 + 0xc) = piVar18;
    *(undefined1 *)(param_1 + 10) = 0;
    if (piVar18 != (int *)0x0) goto LAB_14039015c;
  }
  else {
    local_2120 = local_2118 + 5;
    uVar20 = param_1[6];
    local_2108 = "OUT-OF-RANGE";
    if (4 < uVar20) {
      local_2108 = "OK";
    }
    local_2128 = "check_point [%p] in [%p..%p] -> %s";
    local_2130 = 0;
    local_2138 = CONCAT44(local_2138._4_4_,*param_1 + 1);
    cVar6 = '\0';
    local_2110 = *(undefined8 *)(param_1 + 4);
    FUN_1402fc370("SANITIZE");
    if ((uVar20 < 5) || (local_20e8 = (char)iVar14, *local_2118 != '\x02')) {
      local_20e8 = cVar6;
    }
    local_2120 = *(char **)(param_1 + 2);
    local_2118 = *(char **)(param_1 + 4);
    local_2128 = "end [%p..%p]";
    local_2130 = CONCAT44(local_2130._4_4_,0xffffffff);
    local_2138 = 0;
    FUN_1402fc370("SANITIZE");
    piVar9 = *(int **)(param_1 + 0xc);
    if ((piVar9 != (int *)0x0) && (*piVar9 != 0)) {
      LOCK();
      iVar2 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar2 == iVar14) {
        *piVar9 = -0xdead;
        lVar8 = *(longlong *)(piVar9 + 2);
        if (lVar8 != 0) {
          FUN_1403c3220(lVar8);
          thunk_FUN_1402d9040(lVar8);
          piVar9[2] = 0;
          piVar9[3] = 0;
        }
        if (*(code **)(piVar9 + 10) != (code *)0x0) {
          (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
          piVar9[8] = 0;
          piVar9[9] = 0;
          piVar9[10] = 0;
          piVar9[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar9);
      }
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[6] = 0;
    if (local_20e8 != '\0') {
      if ((char)piVar18[1] != '\0') {
        *(undefined1 *)(piVar18 + 1) = 0;
      }
      goto LAB_140390142;
    }
    FUN_140414150(piVar18);
    piVar18 = (int *)&DAT_14045dd10;
    *(undefined8 **)(param_1 + 0x10) = &DAT_14045dd10;
LAB_140390463:
    if (*piVar18 == 0) goto LAB_14039014f;
    LOCK();
    *piVar18 = *piVar18 + 1;
    UNLOCK();
    *(int **)(param_1 + 0xc) = piVar18;
    *(undefined1 *)(param_1 + 10) = 0;
LAB_14039015c:
    lVar8 = *(longlong *)(piVar18 + 4);
    *(longlong *)(param_1 + 2) = lVar8;
    *(ulonglong *)(param_1 + 4) = (ulonglong)(uint)piVar18[6] + lVar8;
  }
  local_2138 = 0;
  uVar7 = param_1[4] - param_1[2];
  param_1[6] = uVar7;
  uVar20 = 0x3fffffff;
  if (uVar7 < 0x3ffffff) {
    uVar17 = 0x4000;
    if (0x3fff < uVar7 * 0x40) {
      uVar17 = uVar7 * 0x40;
    }
    uVar20 = 0x3fffffff;
    if (uVar17 < 0x40000000) {
      uVar20 = uVar17;
    }
  }
  param_1[7] = uVar20;
  uVar20 = 0;
  *param_1 = 0;
  param_1[9] = 0;
  local_2120 = *(char **)(param_1 + 2);
  local_2110 = CONCAT44(local_2110._4_4_,param_1[4] - (int)local_2120);
  local_2118 = *(char **)(param_1 + 4);
  local_2128 = "start [%p..%p] (%lu bytes)";
  local_2130 = CONCAT44(local_2130._4_4_,1);
  FUN_1402fc370("SANITIZE",local_2120,0,1);
  if ((4 < *(uint *)(*(longlong *)(param_1 + 0x10) + 0x18)) &&
     (puVar12 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x10), local_20c0 = puVar12,
     puVar12 != &DAT_14045dd10)) {
    lVar8 = (ulonglong)*(byte *)((longlong)puVar12 + 2) + (longlong)puVar12;
    uVar7 = (uint)*(byte *)((longlong)puVar12 + 3) * 0x100 + (uint)*(byte *)((longlong)puVar12 + 4);
    local_20d0 = lVar8;
    local_20c8 = uVar7;
    local_20c4 = uVar20;
    cVar6 = FUN_14038c340(&local_20d8,param_1);
    if (cVar6 != '\0') {
      local_2090 = 0;
      lVar15 = 0x40;
      puVar13 = local_2088;
      do {
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[2] = 0;
        puVar22 = puVar13 + 8;
        puVar13[3] = 0;
        puVar13[4] = 0;
        puVar13[5] = 0;
        puVar13[6] = 0;
        puVar13[7] = 0;
        lVar15 = lVar15 + -1;
        puVar13 = puVar22;
      } while (lVar15 != 0);
      *puVar22 = 0;
      local_20a8 = local_20d8;
      local_20e0 = &local_20a8;
      param_1[0x12] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      local_20a0 = lVar8;
      local_2098 = uVar7;
      local_2094 = uVar20;
      local_208c = uVar20;
      cVar6 = FUN_1403e60f0(&local_20e0);
      if (cVar6 != '\0') {
        uVar10 = FUN_1403621e0(puVar12,(uint)*(byte *)((longlong)puVar12 + 3) * 0x100 +
                                       (uint)*(byte *)((longlong)puVar12 + 4) +
                                       (uint)*(byte *)((longlong)puVar12 + 2),param_1);
        *(undefined8 *)(param_1 + 0x1c) = uVar10;
        uVar10 = FUN_1403625d0(puVar12,param_1[0x1a],param_1);
        *(undefined8 *)(param_1 + 0x1e) = uVar10;
        uVar10 = FUN_1403621e0(puVar12,param_1[0x18],param_1);
        *(undefined8 *)(param_1 + 0x20) = uVar10;
        uVar10 = FUN_1403621e0(puVar12,param_1[0x19],param_1);
        *(undefined8 *)(param_1 + 0x22) = uVar10;
        uVar10 = FUN_140362430(puVar12,param_1[0x1b],param_1,uVar10);
        *(undefined8 *)(param_1 + 0x24) = uVar10;
        pbVar3 = *(byte **)(param_1 + 0x20);
        if ((((pbVar3 != (byte *)&DAT_14045dd10) &&
             (*(undefined8 **)(param_1 + 0x1c) != &DAT_14045dd10)) &&
            (pbVar4 = *(byte **)(param_1 + 0x22), pbVar4 != (byte *)&DAT_14045dd10)) &&
           (iVar14 = (uint)pbVar3[1] * 0x10000 + (uint)pbVar3[2] * 0x100 + (uint)*pbVar3 * 0x1000000
                     + (uint)pbVar3[3], param_1[0x32] = iVar14, iVar14 == param_1[0xe])) {
          uVar7 = (uint)pbVar4[1] * 0x10000 + (uint)pbVar4[2] * 0x100 + (uint)*pbVar4 * 0x1000000 +
                  (uint)pbVar4[3];
          param_1[0x26] = uVar7;
          puVar1 = (uint *)(param_1 + 0x2c);
          if ((int)uVar7 < 0) {
            uVar7 = uVar20;
          }
          uVar20 = *puVar1;
          if (-1 < (int)uVar20) {
            if (uVar20 < uVar7) {
              uVar11 = (ulonglong)uVar20;
              do {
                uVar17 = (int)uVar11 + 8 + (int)(uVar11 >> 1);
                uVar11 = (ulonglong)uVar17;
              } while (uVar17 < uVar7);
              if (0x5555554 < uVar17) {
                *puVar1 = ~uVar20;
                goto LAB_14039041a;
              }
              lVar8 = FUN_1403a1e20(puVar1,uVar11);
              if ((uVar17 == 0) || (lVar8 != 0)) {
                *(longlong *)(param_1 + 0x2e) = lVar8;
                *puVar1 = uVar17;
              }
              else if (*puVar1 < uVar17) {
                *puVar1 = -*puVar1 - 1;
                goto LAB_14039041a;
              }
            }
            uVar20 = param_1[0x2d];
            if (uVar20 < uVar7) {
              do {
                uVar11 = (ulonglong)uVar20;
                lVar8 = *(longlong *)(param_1 + 0x2e);
                *(undefined8 *)(lVar8 + uVar11 * 0x30) = 0;
                *(undefined8 *)(lVar8 + 0x18 + uVar11 * 0x30) = 0;
                *(undefined8 *)(lVar8 + 0x20 + uVar11 * 0x30) = 0;
                *(undefined8 *)(lVar8 + 0x28 + uVar11 * 0x30) = 0;
                *(undefined8 *)(lVar8 + 8 + uVar11 * 0x30) = 0;
                *(undefined8 *)(lVar8 + 0x10 + uVar11 * 0x30) = 0;
                uVar20 = param_1[0x2d] + 1;
                param_1[0x2d] = uVar20;
                local_20c0 = puVar12;
              } while (uVar20 < uVar7);
            }
            else if (uVar7 < uVar20) {
              FUN_14040bea0(puVar1,uVar7);
            }
            param_1[0x2d] = uVar7;
            uVar11 = 0;
            if (param_1[0x26] == 0) {
              return param_1;
            }
            while( true ) {
              uVar20 = (uint)uVar11;
              FUN_140397a40(*(undefined8 *)(param_1 + 0x22),&local_20d8,uVar11);
              if (local_20c8 == 0xffffffff) break;
              local_2108 = *(char **)(param_1 + 2);
              if ((((ulonglong)(uint)param_1[6] < (ulonglong)(local_20d0 - (longlong)local_2108)) ||
                  ((uint)(param_1[4] - (int)local_20d0) < local_20c8)) ||
                 (param_1[7] = param_1[7] - local_20c8, param_1[7] < 1)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              local_20f8 = "OUT-OF-RANGE";
              if (bVar5) {
                local_20f8 = "OK";
              }
              local_2118 = (char *)(local_20d0 + (ulonglong)local_20c8);
              local_2100 = *(undefined8 *)(param_1 + 4);
              local_2110 = CONCAT44(local_2110._4_4_,local_20c8);
              local_2120 = (char *)local_20d0;
              local_2128 = "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s";
              local_2138 = CONCAT44(local_2138._4_4_,*param_1 + 1);
              lVar15 = 1;
              uVar19 = 0;
              lVar8 = local_20d0;
              uVar7 = local_20c8;
              local_2130 = 0;
              FUN_1402fc370("SANITIZE",local_20d0);
              if (!bVar5) break;
              local_2094 = 0;
              lVar16 = 0x201;
              lVar21 = 0x40;
              puVar12 = local_2088;
              do {
                *puVar12 = 0;
                puVar12[1] = 0;
                puVar12[2] = 0;
                puVar13 = puVar12 + 8;
                puVar12[3] = 0;
                puVar12[4] = 0;
                puVar12[5] = 0;
                puVar12[6] = 0;
                puVar12[7] = 0;
                lVar21 = lVar21 - lVar15;
                puVar12 = puVar13;
              } while (lVar21 != 0);
              *puVar13 = 0;
              do {
                lVar16 = lVar16 - lVar15;
              } while (lVar16 != 0);
              local_20a8 = local_20d8;
              local_20e0 = &local_20a8;
              local_20a0 = lVar8;
              local_2098 = uVar7;
              local_2090 = uVar19;
              local_208c = local_2094;
              puVar12 = (undefined8 *)FUN_1403f53c0(param_1 + 0x28);
              DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
              _DAT_1404e4f28 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
              _DAT_1404e4f30 = CONCAT44(DAT_14045dd20._4_4_,(undefined4)DAT_14045dd20);
              _DAT_1404e4f38 = CONCAT44(_DAT_14045dd2c,DAT_14045dd28);
              DAT_1404e4f40 = (undefined4)DAT_14045dd30;
              uRam00000001404e4f44 = DAT_14045dd30._4_4_;
              if (puVar12 == &DAT_1404e4f20) break;
              *(undefined4 *)puVar12 = 0;
              puVar12[1] = 0;
              puVar12[2] = 0;
              puVar12[3] = 0;
              *(undefined4 *)(puVar12 + 4) = 0;
              cVar6 = FUN_1403e5cc0(&local_20e0,puVar12);
              if (cVar6 == '\0') break;
              iVar14 = *(int *)((longlong)puVar12 + 0x1c);
              puVar13 = (undefined8 *)FUN_1403629e0(local_20c0,*(undefined4 *)(puVar12 + 3),param_1)
              ;
              if ((*(int *)((longlong)puVar12 + 0x1c) != 0) && (puVar13 == &DAT_14045dd10)) break;
              local_1060 = 0;
              local_105c = 0;
              lVar8 = 0x201;
              lVar15 = 0x40;
              puVar12 = local_1058;
              do {
                *puVar12 = 0;
                puVar12[1] = 0;
                puVar12[2] = 0;
                puVar22 = puVar12 + 8;
                puVar12[3] = 0;
                puVar12[4] = 0;
                puVar12[5] = 0;
                puVar12[6] = 0;
                puVar12[7] = 0;
                lVar15 = lVar15 + -1;
                puVar12 = puVar22;
              } while (lVar15 != 0);
              *puVar22 = 0;
              do {
                lVar8 = lVar8 + -1;
              } while (lVar8 != 0);
              local_1078 = local_20d8;
              local_1064 = 0;
              local_50 = 0;
              local_4c = 0;
              local_20e0 = &local_1078;
              lVar8 = uVar11 * 0x30;
              if (uVar20 < (uint)param_1[0x2d]) {
                puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x2e) + lVar8);
              }
              else {
                DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
                _DAT_1404e4f28 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
                _DAT_1404e4f30 = CONCAT44(DAT_14045dd20._4_4_,(undefined4)DAT_14045dd20);
                _DAT_1404e4f38 = CONCAT44(_DAT_14045dd2c,DAT_14045dd28);
                DAT_1404e4f40 = (undefined4)DAT_14045dd30;
                uRam00000001404e4f44 = DAT_14045dd30._4_4_;
                DAT_1404e4f48 = (undefined4)DAT_14045dd38;
                DAT_1404e4f4c = DAT_14045dd38._4_4_;
                puVar12 = &DAT_1404e4f20;
              }
              *(undefined4 *)puVar12 = 0;
              puVar12[1] = 0;
              puVar12[2] = 0;
              *(undefined4 *)(puVar12 + 3) = 0;
              puVar12[4] = &DAT_14045dd10;
              *(undefined4 *)(puVar12 + 5) = 0;
              if (uVar20 < (uint)param_1[0x2d]) {
                puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x2e) + lVar8);
              }
              else {
                DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
                _DAT_1404e4f28 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
                _DAT_1404e4f30 = CONCAT44(DAT_14045dd20._4_4_,(undefined4)DAT_14045dd20);
                _DAT_1404e4f38 = CONCAT44(_DAT_14045dd2c,DAT_14045dd28);
                DAT_1404e4f40 = (undefined4)DAT_14045dd30;
                uRam00000001404e4f44 = DAT_14045dd30._4_4_;
                DAT_1404e4f48 = (undefined4)DAT_14045dd38;
                DAT_1404e4f4c = DAT_14045dd38._4_4_;
                puVar12 = &DAT_1404e4f20;
              }
              local_1070 = puVar13;
              local_1068 = iVar14;
              cVar6 = FUN_1403e5e80(&local_20e0,puVar12);
              if (cVar6 == '\0') break;
              uVar7 = param_1[0x2d];
              if (uVar20 < uVar7) {
                puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x2e) + lVar8);
              }
              else {
                DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
                _DAT_1404e4f28 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
                _DAT_1404e4f30 = CONCAT44(DAT_14045dd20._4_4_,(undefined4)DAT_14045dd20);
                _DAT_1404e4f38 = CONCAT44(_DAT_14045dd2c,DAT_14045dd28);
                DAT_1404e4f40 = (undefined4)DAT_14045dd30;
                uRam00000001404e4f44 = DAT_14045dd30._4_4_;
                DAT_1404e4f48 = (undefined4)DAT_14045dd38;
                DAT_1404e4f4c = DAT_14045dd38._4_4_;
                puVar12 = &DAT_1404e4f20;
                uVar7 = param_1[0x2d];
              }
              puVar22 = &DAT_14045dd10;
              if (iVar14 != 0) {
                puVar22 = puVar13;
              }
              if (uVar20 < uVar7) {
                puVar13 = (undefined8 *)(lVar8 + *(longlong *)(param_1 + 0x2e));
              }
              else {
                DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
                _DAT_1404e4f28 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
                _DAT_1404e4f30 = CONCAT44(DAT_14045dd20._4_4_,(undefined4)DAT_14045dd20);
                _DAT_1404e4f38 = CONCAT44(_DAT_14045dd2c,DAT_14045dd28);
                DAT_1404e4f40 = (undefined4)DAT_14045dd30;
                uRam00000001404e4f44 = DAT_14045dd30._4_4_;
                DAT_1404e4f48 = (undefined4)DAT_14045dd38;
                DAT_1404e4f4c = DAT_14045dd38._4_4_;
                puVar13 = &DAT_1404e4f20;
              }
              uVar10 = FUN_1403621e0(puVar22,*(undefined4 *)(puVar12 + 3),param_1);
              puVar13[4] = uVar10;
              uVar11 = (ulonglong)(uVar20 + 1);
              if ((uint)param_1[0x26] <= uVar20 + 1) {
                return param_1;
              }
            }
          }
        }
      }
    }
  }
LAB_14039041a:
  FUN_14039ac10(param_1);
  return param_1;
}

