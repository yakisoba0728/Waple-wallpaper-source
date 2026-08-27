// Function: FUN_14036cb30
// Addr: 14036cb30
// Size: 2047 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14036cb30(undefined8 param_1,longlong param_2,undefined2 *param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  uint *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_2c8 [32];
  ulonglong *local_2a8;
  ulonglong *local_2a0;
  ulonglong *local_298;
  uint local_288;
  undefined4 local_284;
  undefined4 local_280;
  int local_27c;
  undefined1 local_278;
  undefined1 local_277;
  longlong local_270;
  int local_268;
  uint local_264 [3];
  ulonglong local_258;
  int *piStack_250;
  ulonglong local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  ulonglong local_238;
  int *piStack_230;
  ulonglong local_228;
  ulonglong local_218;
  int *piStack_210;
  ulonglong local_208;
  ulonglong local_1f8;
  int *piStack_1f0;
  ulonglong local_1e8;
  int local_1d8;
  undefined4 uStack_1d4;
  undefined2 *local_1d0;
  longlong local_1c8;
  int local_1c0;
  undefined4 uStack_1bc;
  undefined2 *local_1b8;
  uint local_1ac;
  int *local_1a8 [3];
  int *local_190;
  ulonglong local_148;
  int *piStack_140;
  ulonglong local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int local_128 [4];
  undefined4 local_118;
  undefined4 local_110;
  undefined1 local_f8 [176];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_2c8;
  uVar12 = 0;
  local_284 = 0;
  lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
  local_2a8 = (ulonglong *)uVar12;
  if (lVar5 != 0) {
    local_2a8 = (ulonglong *)*(ulonglong *)(lVar5 + 0x10);
  }
  local_264[1] = param_4;
  iVar4 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                    (param_2,*(undefined8 *)(param_2 + 0x98),*param_3,&local_284);
  if (iVar4 == 0) {
    return 0;
  }
  local_288 = 0;
  local_278 = (char)((uint)local_284 >> 8);
  local_277 = (char)local_284;
  local_27c = 0;
  local_264[0] = 0;
  local_270 = 0;
  local_268 = 0;
  do {
    local_2a8 = (ulonglong *)0x0;
    uVar13 = (ulonglong)local_264[local_270];
    local_284 = 0;
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
    if (lVar5 != 0) {
      local_2a8 = *(ulonglong **)(lVar5 + 0x10);
    }
    iVar4 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                      (param_2,*(undefined8 *)(param_2 + 0x98),param_3[uVar13 * 10 + 3],&local_284);
    if (iVar4 != 0) {
      uVar10 = 0;
      do {
        if (param_3[uVar10 + uVar13 * 10 + 1] == 0) goto LAB_14036cd02;
        local_280 = 0;
        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
        local_2a8 = (ulonglong *)0x0;
        if (lVar5 != 0) {
          local_2a8 = *(ulonglong **)(lVar5 + 0x10);
        }
        iVar4 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                          (param_2,*(undefined8 *)(param_2 + 0x98),param_3[uVar10 + uVar13 * 10 + 1]
                           ,&local_280);
        if (iVar4 == 0) goto LAB_14036cd02;
        lVar5 = uVar12 * 2;
        uVar12 = (ulonglong)((int)uVar12 + 1);
        *(char *)((longlong)&local_110 + lVar5) = (char)((uint)local_280 >> 8);
        *(char *)((longlong)&local_110 + lVar5 + 1) = (char)local_280;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < 2);
      local_128[local_288] = 3;
      lVar5 = (ulonglong)local_288 * 2;
      *(char *)((longlong)&local_118 + lVar5) = (char)((uint)local_284 >> 8);
      *(char *)((longlong)&local_118 + lVar5 + 1) = (char)local_284;
      (&local_27c)[local_270] = (&local_27c)[local_270] + 1;
      local_288 = local_288 + 1;
    }
LAB_14036cd02:
    local_284 = 0;
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
    local_2a8 = (ulonglong *)0x0;
    if (lVar5 != 0) {
      local_2a8 = *(ulonglong **)(lVar5 + 0x10);
    }
    iVar4 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                      (param_2,*(undefined8 *)(param_2 + 0x98),param_3[uVar13 * 10 + 6],&local_284);
    if (iVar4 != 0) {
      uVar10 = 0;
      do {
        if (param_3[uVar10 + uVar13 * 10 + 4] == 0) goto LAB_14036ce03;
        local_280 = 0;
        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
        local_2a8 = (ulonglong *)0x0;
        if (lVar5 != 0) {
          local_2a8 = *(ulonglong **)(lVar5 + 0x10);
        }
        iVar4 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                          (param_2,*(undefined8 *)(param_2 + 0x98),param_3[uVar10 + uVar13 * 10 + 4]
                           ,&local_280);
        if (iVar4 == 0) goto LAB_14036ce03;
        lVar5 = uVar12 * 2;
        uVar12 = (ulonglong)((int)uVar12 + 1);
        *(char *)((longlong)&local_110 + lVar5) = (char)((uint)local_280 >> 8);
        *(char *)((longlong)&local_110 + lVar5 + 1) = (char)local_280;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < 2);
      local_128[local_288] = 3;
      lVar5 = (ulonglong)local_288 * 2;
      *(char *)((longlong)&local_118 + lVar5) = (char)((uint)local_284 >> 8);
      *(char *)((longlong)&local_118 + lVar5 + 1) = (char)local_284;
      (&local_27c)[local_270] = (&local_27c)[local_270] + 1;
      local_288 = local_288 + 1;
    }
LAB_14036ce03:
    uVar10 = 0;
    local_284 = 0;
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
    local_2a8 = (ulonglong *)uVar10;
    if (lVar5 != 0) {
      local_2a8 = (ulonglong *)*(ulonglong *)(lVar5 + 0x10);
    }
    iVar4 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                      (param_2,*(undefined8 *)(param_2 + 0x98),param_3[uVar13 * 10 + 9],&local_284);
    if (iVar4 != 0) {
      uVar11 = uVar10;
      do {
        if (param_3[uVar11 + uVar13 * 10 + 7] == 0) goto LAB_14036cf1f;
        local_280 = 0;
        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
        local_2a8 = (ulonglong *)uVar10;
        if (lVar5 != 0) {
          local_2a8 = (ulonglong *)*(ulonglong *)(lVar5 + 0x10);
        }
        iVar4 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                          (param_2,*(undefined8 *)(param_2 + 0x98),param_3[uVar11 + uVar13 * 10 + 7]
                           ,&local_280);
        if (iVar4 == 0) goto LAB_14036cf1f;
        lVar5 = uVar12 * 2;
        uVar12 = (ulonglong)((int)uVar12 + 1);
        *(char *)((longlong)&local_110 + lVar5) = (char)((uint)local_280 >> 8);
        *(char *)((longlong)&local_110 + lVar5 + 1) = (char)local_280;
        uVar9 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar9;
      } while (uVar9 < 2);
      local_128[local_288] = 3;
      lVar5 = (ulonglong)local_288 * 2;
      *(char *)((longlong)&local_118 + lVar5) = (char)((uint)local_284 >> 8);
      *(char *)((longlong)&local_118 + lVar5 + 1) = (char)local_284;
      (&local_27c)[local_270] = (&local_27c)[local_270] + 1;
      local_288 = local_288 + 1;
    }
LAB_14036cf1f:
    uVar9 = local_288;
    local_268 = local_268 + 1;
    local_270 = local_270 + 1;
  } while (local_268 == 0);
  if (local_288 == 0) {
    return 0;
  }
  FUN_140395a70(&local_1d8,local_f8,0xb0);
  lVar5 = FUN_14038e4b0(&local_1d8);
  local_258 = local_258 & 0xffffffffffffff00;
  piStack_250 = (int *)&local_278;
  local_248 = 1;
  local_2a8 = (ulonglong *)CONCAT44(local_2a8._4_4_,1);
  cVar3 = FUN_14040b000(lVar5,&local_1d8,4,local_264[1]);
  if (cVar3 == '\0') {
LAB_14036d2f4:
    FUN_1403bf0c0(&local_1d8);
  }
  else {
    local_238 = local_258;
    piStack_230 = &local_110;
    local_218 = local_258;
    piStack_210 = local_128;
    local_208 = (ulonglong)uVar9;
    local_1f8 = local_258;
    piStack_1f0 = &local_118;
    local_1e8 = (ulonglong)uVar9;
    local_148 = local_258;
    piStack_140 = &local_27c;
    local_138 = 1;
    local_228 = uVar12;
    if (local_1ac == 0) {
      piVar6 = (int *)FUN_1403a3490(local_1a8);
      if (piVar6 == (int *)0x0) {
        if (local_1ac == 0) {
          local_1ac = 1;
        }
      }
      else {
        *(undefined2 **)piVar6 = local_1d0;
        *(longlong *)(piVar6 + 2) = local_1c8;
        *(int **)(piVar6 + 0xc) = local_190;
        local_190 = piVar6;
      }
    }
    puVar1 = local_1d0;
    uVar13 = local_248;
    piVar6 = piStack_250;
    uVar12 = local_258;
    puVar8 = local_1d0;
    if ((local_1ac != 0) || (local_1d0 + 1 < local_1d0)) {
LAB_14036d293:
      local_1d0 = puVar8;
      piVar6 = local_190;
      if (((local_190 != (int *)0x0) && (local_1ac < 0x11)) &&
         ((0x10105U >> (local_1ac & 0x1f) & 1) != 0)) {
        if (local_1b8 == (undefined2 *)0x0) {
          local_1b8 = *(undefined2 **)local_190;
        }
        piVar2 = *(int **)(local_190 + 0xc);
        if (local_1ac == 0) {
          local_1c8 = *(longlong *)(local_190 + 2);
          local_1d0 = local_1b8;
          local_190 = *(int **)(local_190 + 0xc);
          FUN_1403bdf20(&local_1d8);
          piVar2 = local_190;
        }
        local_190 = piVar2;
        local_1b8 = (undefined2 *)0x0;
        FUN_1403c29e0(piVar6);
        *(int **)piVar6 = local_1a8[0];
        local_1a8[0] = piVar6;
      }
      goto LAB_14036d2f4;
    }
    if (local_1c8 - (longlong)local_1d0 < 2) {
      local_1ac = 4;
      goto LAB_14036d293;
    }
    *local_1d0 = 0;
    puVar8 = local_1d0 + 1;
    if ((local_1d0 == (undefined2 *)0x0) || (local_1d0 == (undefined2 *)0x0)) goto LAB_14036d293;
    local_288 = CONCAT22(local_288._2_2_,0x100);
    *local_1d0 = 0x100;
    local_258 = local_238;
    piStack_250 = piStack_230;
    local_248 = local_228;
    local_238 = local_218;
    piStack_230 = piStack_210;
    local_228 = local_208;
    local_218 = local_1f8;
    piStack_210 = piStack_1f0;
    local_208 = local_1e8;
    local_1f8 = local_148;
    piStack_1f0 = piStack_140;
    local_1e8 = local_138;
    local_148 = uVar12;
    piStack_140 = piVar6;
    local_138 = uVar13;
    uStack_130 = uStack_240;
    uStack_12c = uStack_23c;
    local_298 = &local_258;
    local_2a0 = &local_238;
    local_2a8 = &local_218;
    local_1d0 = puVar8;
    cVar3 = FUN_14040ab50(puVar1,&local_1d8,&local_148,&local_1f8);
    puVar8 = local_1d0;
    if (cVar3 == '\0') goto LAB_14036d293;
    if ((uint)*(byte *)(lVar5 + 5) + (uint)*(byte *)(lVar5 + 4) * 0x100 == 0) {
      DAT_1404e4f20._0_2_ = (undefined2)DAT_14045dd10;
      iVar4 = 0x404e4f20;
    }
    else {
      iVar4 = (int)lVar5 + 6;
    }
    uVar9 = FUN_1403f0d30(&local_1d8,1);
    if ((local_1ac == 0) && (uVar9 != 0)) {
      puVar7 = (uint *)FUN_1403f5580(local_190 + 4);
      if (local_190[4] < 0) {
        local_1ac = local_1ac | 1;
      }
      puVar7[2] = uVar9;
      *puVar7 = *puVar7 & 0xffffffc2 | 2;
      puVar7[1] = iVar4 - *local_190;
      *puVar7 = 2;
    }
    FUN_1403bf0c0(&local_1d8);
    if (local_1ac == 0) {
      iVar4 = (((int)local_1d0 - (int)local_1c8) - local_1d8) + local_1c0;
      if ((iVar4 != 0) && (lVar5 = _malloc_base(iVar4), lVar5 != 0)) {
        puVar8 = (undefined2 *)CONCAT44(uStack_1d4,local_1d8);
        if (local_1d0 != puVar8) {
          FUN_1404210f0(lVar5,puVar8);
          puVar8 = (undefined2 *)CONCAT44(uStack_1d4,local_1d8);
        }
        if (CONCAT44(uStack_1bc,local_1c0) != local_1c8) {
          FUN_1404210f0((longlong)local_1d0 + (lVar5 - (longlong)puVar8));
        }
        goto LAB_14036d300;
      }
    }
  }
  lVar5 = 0;
LAB_14036d300:
  FUN_1403976a0(&local_1d8);
  return lVar5;
}

