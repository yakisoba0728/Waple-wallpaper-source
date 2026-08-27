// Function: FUN_14038ef80
// Addr: 14038ef80
// Size: 3504 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_14038ef80(int *param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  int *piVar17;
  ulonglong uVar18;
  undefined1 uVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  undefined8 *puVar23;
  undefined1 auStack_2148 [32];
  undefined8 local_2128;
  undefined8 local_2120;
  char *local_2118;
  char *local_2110;
  char *local_2108;
  undefined8 local_2100;
  char *local_20f8;
  undefined8 local_20f0;
  char *local_20e8;
  int *local_20d8;
  undefined1 local_20d0 [8];
  int iStack_20c8;
  undefined4 uStack_20c4;
  uint local_20c0;
  undefined8 *local_20b8;
  int *local_20b0;
  int local_20a8 [4];
  uint local_2098;
  undefined4 local_2094;
  undefined1 local_2090;
  undefined4 local_208c;
  undefined8 local_2088 [513];
  undefined8 local_1080;
  int local_1078 [2];
  undefined8 *local_1070;
  int local_1068;
  undefined4 local_1064;
  undefined1 local_1060;
  undefined4 local_105c;
  undefined8 local_1058 [514];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14038efa2;
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_2148;
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  if (param_2 == 0) {
    return param_1;
  }
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = -1;
  param_1[0x2f] = -1;
  param_1[0x30] = -1;
  param_1[0x31] = -1;
  param_1[0x32] = -1;
  param_1[0x33] = -1;
  param_1[0x34] = -1;
  param_1[0x35] = -1;
  param_1[0x36] = -1;
  param_1[0x37] = -1;
  param_1[0x38] = -1;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x2210;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  local_20b0 = param_1;
  if ((char)param_1[0xf] == '\0') {
    iVar12 = *(int *)(param_2 + 0x18);
    if (iVar12 == -1) {
      lVar5 = FUN_140398a10(param_2 + 0x80);
      iVar12 = (uint)*(byte *)(lVar5 + 5) + (uint)*(byte *)(lVar5 + 4) * 0x100;
      if (iVar12 == 0) {
        iVar12 = 0;
      }
      *(int *)(param_2 + 0x18) = iVar12;
    }
    param_1[0xe] = iVar12;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  if (*(code **)(param_2 + 0x20) == (code *)0x0) {
    piVar17 = (int *)&DAT_14045dd10;
  }
  else {
    piVar6 = (int *)(**(code **)(param_2 + 0x20))
                              (param_2,0x43464620,*(undefined8 *)(param_2 + 0x28));
    piVar17 = (int *)&DAT_14045dd10;
    if (piVar6 != (int *)0x0) {
      piVar17 = piVar6;
    }
  }
  if (*piVar17 != 0) {
    LOCK();
    *piVar17 = *piVar17 + 1;
    UNLOCK();
  }
  *(int **)(param_1 + 0xc) = piVar17;
  *(undefined1 *)(param_1 + 10) = 0;
  lVar5 = *(longlong *)(piVar17 + 4);
  *(longlong *)(param_1 + 2) = lVar5;
  uVar20 = piVar17[6];
  *(ulonglong *)(param_1 + 4) = (ulonglong)uVar20 + lVar5;
  uVar20 = (int)((ulonglong)uVar20 + lVar5) - (int)lVar5;
  param_1[6] = uVar20;
  if (uVar20 < 0x3ffffff) {
    uVar13 = 0x4000;
    if (0x3fff < uVar20 * 0x40) {
      uVar13 = uVar20 * 0x40;
    }
    uVar16 = 0x3fffffff;
    if (uVar13 < 0x40000000) {
      uVar16 = uVar13;
    }
  }
  else {
    uVar16 = 0x3fffffff;
  }
  param_1[7] = uVar16;
  *param_1 = 0;
  param_1[9] = 0;
  local_2110 = *(char **)(param_1 + 2);
  local_2100 = CONCAT44(local_2100._4_4_,uVar20);
  local_2108 = *(char **)(param_1 + 4);
  local_2118 = "start [%p..%p] (%lu bytes)";
  local_2120._0_4_ = 1;
  local_2128 = 0;
  iVar12 = 1;
  FUN_1402fc370("SANITIZE",local_2110,0);
  local_2108 = *(char **)(param_1 + 2);
  if (local_2108 == (char *)0x0) {
    local_2110 = (char *)0x0;
    local_2118 = "end [%p..%p]";
    local_2120 = CONCAT44(local_2120._4_4_,0xffffffff);
    local_2128 = 0;
    local_2108 = (char *)*(undefined8 *)(param_1 + 4);
    FUN_1402fc370("SANITIZE",0,0);
    piVar6 = *(int **)(param_1 + 0xc);
    if ((piVar6 != (int *)0x0) && (*piVar6 != 0)) {
      LOCK();
      iVar22 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar22 == iVar12) {
        *piVar6 = -0xdead;
        lVar5 = *(longlong *)(piVar6 + 2);
        if (lVar5 != 0) {
          FUN_1403c3220(lVar5);
          thunk_FUN_1402d9040(lVar5);
          piVar6[2] = 0;
          piVar6[3] = 0;
        }
        if (*(code **)(piVar6 + 10) != (code *)0x0) {
          (**(code **)(piVar6 + 10))(*(undefined8 *)(piVar6 + 8));
          piVar6[8] = 0;
          piVar6[9] = 0;
          piVar6[10] = 0;
          piVar6[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar6);
      }
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[6] = 0;
LAB_14038f408:
    *(int **)(param_1 + 0x10) = piVar17;
    if (piVar17 != (int *)0x0) goto LAB_14038f435;
LAB_14038f44d:
    *(int **)(param_1 + 0xc) = piVar17;
    *(undefined1 *)(param_1 + 10) = 0;
    if (piVar17 != (int *)0x0) goto LAB_14038f45d;
  }
  else {
    local_2110 = local_2108 + 4;
    uVar20 = param_1[6];
    local_20f8 = "OUT-OF-RANGE";
    if (3 < uVar20) {
      local_20f8 = "OK";
    }
    local_2118 = "check_point [%p] in [%p..%p] -> %s";
    local_2120 = 0;
    local_2128 = CONCAT44(local_2128._4_4_,*param_1 + 1);
    local_2100 = *(undefined8 *)(param_1 + 4);
    FUN_1402fc370("SANITIZE",local_2110,0);
    if ((uVar20 < 4) || (cVar4 = (char)iVar12, *local_2108 != cVar4)) {
      cVar4 = '\0';
    }
    local_2110 = *(char **)(param_1 + 2);
    local_2108 = *(char **)(param_1 + 4);
    local_2118 = "end [%p..%p]";
    iVar22 = -1;
    local_2120 = CONCAT44(local_2120._4_4_,0xffffffff);
    local_2128 = 0;
    FUN_1402fc370("SANITIZE");
    piVar6 = *(int **)(param_1 + 0xc);
    if ((piVar6 != (int *)0x0) && (*piVar6 != 0)) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + iVar22;
      UNLOCK();
      if (iVar3 == iVar12) {
        *piVar6 = -0xdead;
        lVar5 = *(longlong *)(piVar6 + 2);
        if (lVar5 != 0) {
          FUN_1403c3220(lVar5);
          thunk_FUN_1402d9040(lVar5);
          piVar6[2] = 0;
          piVar6[3] = 0;
        }
        if (*(code **)(piVar6 + 10) != (code *)0x0) {
          (**(code **)(piVar6 + 10))(*(undefined8 *)(piVar6 + 8));
          piVar6[8] = 0;
          piVar6[9] = 0;
          piVar6[10] = 0;
          piVar6[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar6);
      }
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[6] = 0;
    if (cVar4 != '\0') {
      if ((char)piVar17[1] != '\0') {
        *(undefined1 *)(piVar17 + 1) = 0;
      }
      goto LAB_14038f408;
    }
    FUN_140414150(piVar17);
    piVar17 = (int *)&DAT_14045dd10;
    *(undefined8 **)(param_1 + 0x10) = &DAT_14045dd10;
LAB_14038f435:
    if (*piVar17 == 0) goto LAB_14038f44d;
    LOCK();
    *piVar17 = *piVar17 + 1;
    UNLOCK();
    *(int **)(param_1 + 0xc) = piVar17;
    *(undefined1 *)(param_1 + 10) = 0;
LAB_14038f45d:
    lVar5 = *(longlong *)(piVar17 + 4);
    *(longlong *)(param_1 + 2) = lVar5;
    *(ulonglong *)(param_1 + 4) = (ulonglong)(uint)piVar17[6] + lVar5;
  }
  uVar13 = param_1[4] - param_1[2];
  param_1[6] = uVar13;
  uVar20 = 0x3fffffff;
  if (uVar13 < 0x3ffffff) {
    uVar16 = 0x4000;
    if (0x3fff < uVar13 * 0x40) {
      uVar16 = uVar13 * 0x40;
    }
    uVar20 = 0x3fffffff;
    if (uVar16 < 0x40000000) {
      uVar20 = uVar16;
    }
  }
  param_1[7] = uVar20;
  *param_1 = 0;
  param_1[9] = 0;
  local_2110 = *(char **)(param_1 + 2);
  local_2100 = CONCAT44(local_2100._4_4_,uVar13);
  local_2108 = *(char **)(param_1 + 4);
  local_2118 = "start [%p..%p] (%lu bytes)";
  local_2120 = CONCAT44(local_2120._4_4_,1);
  local_2128 = 0;
  FUN_1402fc370("SANITIZE",local_2110,0,1);
  if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x18) < 4) ||
     (puVar23 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x10), local_20b8 = puVar23,
     puVar23 == &DAT_14045dd10)) goto LAB_14038f7ba;
  puVar14 = (undefined8 *)((ulonglong)*(byte *)((longlong)puVar23 + 2) + (longlong)puVar23);
  *(undefined8 **)(param_1 + 0x16) = puVar14;
  if ((puVar14 == &DAT_14045dd10) || (cVar4 = FUN_1403fb230(puVar14,param_1), cVar4 == '\0'))
  goto LAB_14038f7ba;
  uVar7 = FUN_1403ce660(*(undefined8 *)(param_1 + 0x16));
  pbVar8 = (byte *)FUN_140362110(*(undefined8 *)(param_1 + 0x16),uVar7,param_1);
  *(byte **)(param_1 + 0x18) = pbVar8;
  if ((pbVar8 == (byte *)&DAT_14045dd10) || ((uint)pbVar8[1] + (uint)*pbVar8 * 0x100 == 0))
  goto LAB_14038f7ba;
  FUN_140397910(pbVar8,local_20d0,0);
  cVar4 = FUN_14038c340(local_20d0,param_1);
  if (cVar4 == '\0') goto LAB_14038f7ba;
  local_2090 = 0;
  local_208c = 0;
  lVar5 = 0x40;
  puVar14 = local_2088;
  do {
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14[2] = 0;
    puVar11 = puVar14 + 8;
    puVar14[3] = 0;
    puVar14[4] = 0;
    puVar14[5] = 0;
    puVar14[6] = 0;
    puVar14[7] = 0;
    lVar5 = lVar5 + -1;
    puVar14 = puVar11;
  } while (lVar5 != 0);
  *puVar11 = 0;
  local_2098 = local_20c0;
  local_2094 = 0;
  local_1080 = 0;
  local_20d8 = local_20a8;
  cVar4 = FUN_1403e5bb0(&local_20d8,param_1 + 0x26);
  if (cVar4 == '\0') goto LAB_14038f7ba;
  if (param_1[0x3d] < 3) {
    *(undefined8 **)(param_1 + 0x14) = &DAT_14045dd10;
  }
  else {
    local_20d8 = param_1 + 0x4b;
    puVar14 = (undefined8 *)FUN_1403627a0(puVar23,param_1[0x3d],param_1,&local_20d8);
    *(undefined8 **)(param_1 + 0x14) = puVar14;
    if (puVar14 == &DAT_14045dd10) goto LAB_14038f7ba;
  }
  param_1[0x24] = 1;
  if (param_1[0x37] == -1) {
    *(undefined8 **)(param_1 + 0x20) = &DAT_14045dd10;
    *(undefined8 **)(param_1 + 0x22) = &DAT_14045dd10;
  }
  else {
    uVar7 = FUN_140362110(puVar23,param_1[0x2d],param_1);
    *(undefined8 *)(param_1 + 0x20) = uVar7;
    puVar14 = (undefined8 *)FUN_1403622b0(puVar23,param_1[0x3e],param_1,uVar7);
    *(undefined8 **)(param_1 + 0x22) = puVar14;
    pbVar8 = *(byte **)(param_1 + 0x20);
    if ((pbVar8 == (byte *)&DAT_14045dd10) || (puVar14 == &DAT_14045dd10)) goto LAB_14038f7ba;
    param_1[0x24] = (uint)pbVar8[1] + (uint)*pbVar8 * 0x100;
  }
  *(undefined8 **)(param_1 + 0x12) = &DAT_14045dd10;
  if (param_1[0x37] == -1) {
    if (1 < param_1[0x3c]) {
      puVar14 = (undefined8 *)FUN_140362880(puVar23,param_1[0x3c],param_1);
      *(undefined8 **)(param_1 + 0x12) = puVar14;
      goto LAB_14038f6f4;
    }
  }
  else {
    puVar14 = *(undefined8 **)(param_1 + 0x14);
LAB_14038f6f4:
    if (puVar14 == &DAT_14045dd10) goto LAB_14038f7ba;
  }
  uVar7 = FUN_1403ce660(*(undefined8 *)(param_1 + 0x18));
  puVar14 = (undefined8 *)FUN_140362110(*(undefined8 *)(param_1 + 0x18),uVar7,param_1);
  *(undefined8 **)(param_1 + 0x1a) = puVar14;
  if (puVar14 != &DAT_14045dd10) {
    uVar7 = FUN_1403ce660(puVar14);
    uVar7 = FUN_140362110(puVar14,uVar7,param_1);
    *(undefined8 *)(param_1 + 0x1c) = uVar7;
    pbVar8 = (byte *)FUN_140362110(puVar23,param_1[0x2c],param_1);
    *(byte **)(param_1 + 0x1e) = pbVar8;
    if ((pbVar8 != (byte *)&DAT_14045dd10) &&
       (iVar12 = (uint)*pbVar8 * 0x100 + (uint)pbVar8[1], param_1[0x4a] = iVar12,
       iVar12 == param_1[0xe])) {
      puVar2 = (uint *)(param_1 + 0x46);
      uVar20 = param_1[0x24];
      if (param_1[0x24] < 0) {
        uVar20 = 0;
      }
      uVar13 = *puVar2;
      if (-1 < (int)uVar13) {
        uVar16 = uVar13;
        if (uVar13 < uVar20) {
          do {
            uVar16 = uVar16 + 8 + (uVar16 >> 1);
          } while (uVar16 < uVar20);
          if (0x6666665 < uVar16) {
            *puVar2 = ~uVar13;
            goto LAB_14038f7ba;
          }
          lVar5 = FUN_1403a1ca0(puVar2,uVar16);
          if ((uVar16 == 0) || (lVar5 != 0)) {
            *(longlong *)(param_1 + 0x48) = lVar5;
            *puVar2 = uVar16;
          }
          else if (*puVar2 < uVar16) {
            *puVar2 = -*puVar2 - 1;
            goto LAB_14038f7ba;
          }
        }
        uVar18 = 0;
        uVar13 = param_1[0x47];
        if (uVar13 < uVar20) {
          do {
            uVar9 = (ulonglong)uVar13;
            lVar5 = *(longlong *)(param_1 + 0x48);
            *(undefined8 *)(lVar5 + uVar9 * 0x28) = 0;
            *(undefined8 *)(lVar5 + 0x18 + uVar9 * 0x28) = 0;
            *(undefined8 *)(lVar5 + 0x20 + uVar9 * 0x28) = 0;
            *(undefined8 *)(lVar5 + 8 + uVar9 * 0x28) = 0;
            *(undefined8 *)(lVar5 + 0x10 + uVar9 * 0x28) = 0;
            uVar13 = param_1[0x47] + 1;
            param_1[0x47] = uVar13;
          } while (uVar13 < uVar20);
        }
        else if (uVar20 < uVar13) {
          FUN_14040bdf0(puVar2,uVar20);
        }
        param_1[0x47] = uVar20;
        puVar23 = &DAT_1404e4f20;
        uVar20 = 0;
        uVar9 = uVar18;
        if (param_1[0x24] != 0) {
          do {
            if ((uint)uVar9 < (uint)param_1[0x47]) {
              puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + uVar9 * 0x28);
            }
            else {
              DAT_1404e4f20 = DAT_14045dd10;
              _DAT_1404e4f28 = DAT_14045dd18;
              _DAT_1404e4f30 = DAT_14045dd20;
              _DAT_1404e4f38 = _DAT_14045dd28;
              _DAT_1404e4f40 = DAT_14045dd30;
              puVar14 = &DAT_1404e4f20;
            }
            *(undefined4 *)puVar14 = 0;
            puVar14[1] = 0;
            puVar14[2] = 0;
            *(undefined4 *)(puVar14 + 3) = 0;
            puVar14[4] = &DAT_14045dd10;
            uVar13 = (uint)uVar9 + 1;
            uVar20 = param_1[0x24];
            uVar9 = (ulonglong)uVar13;
          } while (uVar13 < uVar20);
        }
        if (param_1[0x37] == -1) {
          if (param_1[0x47] == 0) {
            DAT_1404e4f20 = DAT_14045dd10;
            _DAT_1404e4f28 = DAT_14045dd18;
            _DAT_1404e4f30 = DAT_14045dd20;
            _DAT_1404e4f38 = _DAT_14045dd28;
            _DAT_1404e4f40 = DAT_14045dd30;
          }
          else {
            puVar23 = *(undefined8 **)(param_1 + 0x48);
          }
          iVar12 = param_1[0x40];
          puVar14 = (undefined8 *)FUN_1403629e0(local_20b8,param_1[0x3f],param_1,param_1 + 0x40);
          if ((param_1[0x40] == 0) || (puVar14 != &DAT_14045dd10)) {
            local_1060 = 0;
            local_105c = 0;
            lVar5 = 0x40;
            puVar11 = local_1058;
            do {
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar11[2] = 0;
              puVar1 = puVar11 + 8;
              puVar11[3] = 0;
              puVar11[4] = 0;
              puVar11[5] = 0;
              puVar11[6] = 0;
              puVar11[7] = 0;
              lVar5 = lVar5 + -1;
              puVar11 = puVar1;
            } while (lVar5 != 0);
            *puVar1 = 0;
            local_1064 = 0;
            local_20d8 = local_1078;
            *(undefined4 *)puVar23 = 0;
            puVar23[1] = 0;
            puVar23[2] = 0;
            *(undefined4 *)(puVar23 + 3) = 0;
            puVar23[4] = &DAT_14045dd10;
            local_1070 = puVar14;
            local_1068 = iVar12;
            cVar4 = FUN_1403e59b0(&local_20d8,puVar23);
            if (cVar4 != '\0') {
              uVar7 = FUN_140362110(puVar14,*(undefined4 *)(puVar23 + 3),param_1);
              puVar23[4] = uVar7;
              return param_1;
            }
          }
        }
        else {
          if (uVar20 == 0) {
            return param_1;
          }
          while( true ) {
            FUN_140397910(*(undefined8 *)(param_1 + 0x20),local_20d0,uVar18);
            if (local_20c0 == 0xffffffff) break;
            local_2110 = (char *)CONCAT44(uStack_20c4,iStack_20c8);
            local_20f8 = *(char **)(param_1 + 2);
            if ((((ulonglong)(uint)param_1[6] <
                  (ulonglong)((longlong)local_2110 - (longlong)local_20f8)) ||
                ((uint)(param_1[4] - iStack_20c8) < local_20c0)) ||
               (param_1[7] = param_1[7] - local_20c0, param_1[7] < 1)) {
              cVar4 = '\0';
            }
            else {
              cVar4 = '\x01';
            }
            local_20e8 = "OUT-OF-RANGE";
            if (cVar4 != '\0') {
              local_20e8 = "OK";
            }
            local_2108 = (char *)((longlong)local_2110 + (ulonglong)local_20c0);
            local_20f0 = *(undefined8 *)(param_1 + 4);
            local_2100 = CONCAT44(local_2100._4_4_,local_20c0);
            local_2118 = "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s";
            local_2120 = 0;
            local_2128 = CONCAT44(local_2128._4_4_,*param_1 + 1);
            lVar5 = 1;
            uVar19 = 0;
            uVar20 = local_20c0;
            FUN_1402fc370("SANITIZE",local_2110);
            if (cVar4 == '\0') break;
            local_208c = 0;
            lVar15 = 0x201;
            lVar21 = 0x40;
            puVar23 = local_2088;
            do {
              *puVar23 = 0;
              puVar23[1] = 0;
              puVar23[2] = 0;
              puVar14 = puVar23 + 8;
              puVar23[3] = 0;
              puVar23[4] = 0;
              puVar23[5] = 0;
              puVar23[6] = 0;
              puVar23[7] = 0;
              lVar21 = lVar21 - lVar5;
              puVar23 = puVar14;
            } while (lVar21 != 0);
            *puVar14 = 0;
            do {
              lVar15 = lVar15 - lVar5;
            } while (lVar15 != 0);
            local_2094 = 0;
            local_1080 = 0;
            local_20d8 = local_20a8;
            local_2098 = uVar20;
            local_2090 = uVar19;
            puVar10 = (undefined4 *)FUN_1403f52a0(param_1 + 0x42);
            if (param_1[0x42] < 0) break;
            *puVar10 = 0;
            *(undefined8 *)(puVar10 + 2) = 0;
            *(undefined8 *)(puVar10 + 4) = 0;
            piVar17 = puVar10 + 7;
            *piVar17 = 0;
            puVar10[6] = 0;
            puVar10[8] = 0;
            puVar10[9] = 0xffffffff;
            cVar4 = FUN_1403e57a0(&local_20d8,puVar10);
            if (cVar4 == '\0') break;
            if ((uint)uVar18 < (uint)param_1[0x47]) {
              puVar23 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + uVar18 * 0x28);
            }
            else {
              DAT_1404e4f20 = DAT_14045dd10;
              _DAT_1404e4f28 = DAT_14045dd18;
              _DAT_1404e4f30 = DAT_14045dd20;
              _DAT_1404e4f38 = _DAT_14045dd28;
              _DAT_1404e4f40 = DAT_14045dd30;
              puVar23 = &DAT_1404e4f20;
            }
            iVar12 = *piVar17;
            puVar14 = (undefined8 *)FUN_1403629e0(local_20b8,puVar10[6],param_1);
            if ((*piVar17 != 0) && (puVar14 == &DAT_14045dd10)) break;
            local_1060 = 0;
            local_105c = 0;
            lVar5 = 0x201;
            lVar15 = 0x40;
            puVar11 = local_1058;
            do {
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar11[2] = 0;
              puVar1 = puVar11 + 8;
              puVar11[3] = 0;
              puVar11[4] = 0;
              puVar11[5] = 0;
              puVar11[6] = 0;
              puVar11[7] = 0;
              lVar15 = lVar15 + -1;
              puVar11 = puVar1;
            } while (lVar15 != 0);
            *puVar1 = 0;
            do {
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
            local_1064 = 0;
            local_20d8 = local_1078;
            *(undefined4 *)puVar23 = 0;
            puVar23[1] = 0;
            puVar23[2] = 0;
            *(undefined4 *)(puVar23 + 3) = 0;
            puVar23[4] = &DAT_14045dd10;
            local_1070 = puVar14;
            local_1068 = iVar12;
            cVar4 = FUN_1403e59b0(&local_20d8,puVar23);
            if (cVar4 == '\0') break;
            uVar7 = FUN_140362110(puVar14,*(undefined4 *)(puVar23 + 3),param_1);
            puVar23[4] = uVar7;
            uVar20 = (uint)uVar18 + 1;
            uVar18 = (ulonglong)uVar20;
            if ((uint)param_1[0x24] <= uVar20) {
              return param_1;
            }
          }
        }
      }
    }
  }
LAB_14038f7ba:
  FUN_14039aaf0(param_1);
  return param_1;
}

