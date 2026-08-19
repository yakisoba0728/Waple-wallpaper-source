// Function: FUN_14036cc00
// Addr: 14036cc00
// Size: 1983 bytes


void FUN_14036cc00(undefined8 param_1,longlong param_2,undefined2 *param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
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
  ulonglong *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  ulonglong local_238;
  int *piStack_230;
  ulonglong *local_228;
  ulonglong local_218;
  int *piStack_210;
  ulonglong *local_208;
  ulonglong local_1f8;
  int *piStack_1f0;
  ulonglong *local_1e8;
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
  ulonglong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int local_128 [4];
  undefined4 local_118;
  undefined4 local_110;
  undefined1 local_f8 [176];
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_2c8;
  puVar12 = (ulonglong *)0x0;
  local_284 = 0;
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
  local_2a8 = puVar12;
  if (lVar6 != 0) {
    local_2a8 = *(ulonglong **)(lVar6 + 0x10);
  }
  local_264[1] = param_4;
  iVar5 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                    (param_2,*(undefined8 *)(param_2 + 0x98),*param_3,&local_284);
  if (iVar5 == 0) goto LAB_14036d3e0;
  local_288 = 0;
  local_278 = (char)((uint)local_284 >> 8);
  local_277 = (char)local_284;
  local_27c = 0;
  local_264[0] = 0;
  local_270 = 0;
  local_268 = 0;
  do {
    local_2a8 = (ulonglong *)0x0;
    uVar14 = (ulonglong)local_264[local_270];
    local_284 = 0;
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
    if (lVar6 != 0) {
      local_2a8 = *(ulonglong **)(lVar6 + 0x10);
    }
    iVar5 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                      (param_2,*(undefined8 *)(param_2 + 0x98),param_3[uVar14 * 10 + 3],&local_284);
    if (iVar5 != 0) {
      uVar10 = 0;
      do {
        if (param_3[uVar10 + uVar14 * 10 + 1] == 0) goto LAB_14036cdd2;
        local_280 = 0;
        lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
        local_2a8 = (ulonglong *)0x0;
        if (lVar6 != 0) {
          local_2a8 = *(ulonglong **)(lVar6 + 0x10);
        }
        iVar5 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                          (param_2,*(undefined8 *)(param_2 + 0x98),param_3[uVar10 + uVar14 * 10 + 1]
                           ,&local_280);
        if (iVar5 == 0) goto LAB_14036cdd2;
        lVar6 = (longlong)puVar12 * 2;
        puVar12 = (ulonglong *)(ulonglong)((int)puVar12 + 1);
        *(char *)((longlong)&local_110 + lVar6) = (char)((uint)local_280 >> 8);
        *(char *)((longlong)&local_110 + lVar6 + 1) = (char)local_280;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < 2);
      local_128[local_288] = 3;
      lVar6 = (ulonglong)local_288 * 2;
      *(char *)((longlong)&local_118 + lVar6) = (char)((uint)local_284 >> 8);
      *(char *)((longlong)&local_118 + lVar6 + 1) = (char)local_284;
      (&local_27c)[local_270] = (&local_27c)[local_270] + 1;
      local_288 = local_288 + 1;
    }
LAB_14036cdd2:
    local_284 = 0;
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
    local_2a8 = (ulonglong *)0x0;
    if (lVar6 != 0) {
      local_2a8 = *(ulonglong **)(lVar6 + 0x10);
    }
    iVar5 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                      (param_2,*(undefined8 *)(param_2 + 0x98),param_3[uVar14 * 10 + 6],&local_284);
    if (iVar5 != 0) {
      uVar10 = 0;
      do {
        if (param_3[uVar10 + uVar14 * 10 + 4] == 0) goto LAB_14036ced3;
        local_280 = 0;
        lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
        local_2a8 = (ulonglong *)0x0;
        if (lVar6 != 0) {
          local_2a8 = *(ulonglong **)(lVar6 + 0x10);
        }
        iVar5 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                          (param_2,*(undefined8 *)(param_2 + 0x98),param_3[uVar10 + uVar14 * 10 + 4]
                           ,&local_280);
        if (iVar5 == 0) goto LAB_14036ced3;
        lVar6 = (longlong)puVar12 * 2;
        puVar12 = (ulonglong *)(ulonglong)((int)puVar12 + 1);
        *(char *)((longlong)&local_110 + lVar6) = (char)((uint)local_280 >> 8);
        *(char *)((longlong)&local_110 + lVar6 + 1) = (char)local_280;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < 2);
      local_128[local_288] = 3;
      lVar6 = (ulonglong)local_288 * 2;
      *(char *)((longlong)&local_118 + lVar6) = (char)((uint)local_284 >> 8);
      *(char *)((longlong)&local_118 + lVar6 + 1) = (char)local_284;
      (&local_27c)[local_270] = (&local_27c)[local_270] + 1;
      local_288 = local_288 + 1;
    }
LAB_14036ced3:
    puVar13 = (ulonglong *)0x0;
    local_284 = 0;
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
    local_2a8 = puVar13;
    if (lVar6 != 0) {
      local_2a8 = *(ulonglong **)(lVar6 + 0x10);
    }
    iVar5 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                      (param_2,*(undefined8 *)(param_2 + 0x98),param_3[uVar14 * 10 + 9],&local_284);
    if (iVar5 != 0) {
      puVar11 = puVar13;
      do {
        if (param_3[(longlong)puVar11 + uVar14 * 10 + 7] == 0) goto LAB_14036cfef;
        local_280 = 0;
        lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
        local_2a8 = puVar13;
        if (lVar6 != 0) {
          local_2a8 = *(ulonglong **)(lVar6 + 0x10);
        }
        iVar5 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                          (param_2,*(undefined8 *)(param_2 + 0x98),
                           param_3[(longlong)puVar11 + uVar14 * 10 + 7],&local_280);
        if (iVar5 == 0) goto LAB_14036cfef;
        lVar6 = (longlong)puVar12 * 2;
        puVar12 = (ulonglong *)(ulonglong)((int)puVar12 + 1);
        *(char *)((longlong)&local_110 + lVar6) = (char)((uint)local_280 >> 8);
        *(char *)((longlong)&local_110 + lVar6 + 1) = (char)local_280;
        uVar9 = (int)puVar11 + 1;
        puVar11 = (ulonglong *)(ulonglong)uVar9;
      } while (uVar9 < 2);
      local_128[local_288] = 3;
      lVar6 = (ulonglong)local_288 * 2;
      *(char *)((longlong)&local_118 + lVar6) = (char)((uint)local_284 >> 8);
      *(char *)((longlong)&local_118 + lVar6 + 1) = (char)local_284;
      (&local_27c)[local_270] = (&local_27c)[local_270] + 1;
      local_288 = local_288 + 1;
    }
LAB_14036cfef:
    uVar9 = local_288;
    local_268 = local_268 + 1;
    local_270 = local_270 + 1;
  } while (local_268 == 0);
  if (local_288 == 0) goto LAB_14036d3e0;
  FUN_140395b40(&local_1d8,local_f8,0xb0);
  lVar6 = FUN_14038e580(&local_1d8);
  local_258 = local_258 & 0xffffffffffffff00;
  piStack_250 = (int *)&local_278;
  local_248 = (ulonglong *)0x1;
  local_2a8 = (ulonglong *)CONCAT44(local_2a8._4_4_,1);
  cVar4 = FUN_14040b0d0(lVar6,&local_1d8,4,local_264[1]);
  if (cVar4 == '\0') {
LAB_14036d3c4:
    FUN_1403bf190(&local_1d8);
  }
  else {
    local_238 = local_258;
    piStack_230 = &local_110;
    local_218 = local_258;
    piStack_210 = local_128;
    local_208 = (ulonglong *)(ulonglong)uVar9;
    local_1f8 = local_258;
    piStack_1f0 = &local_118;
    local_1e8 = (ulonglong *)(ulonglong)uVar9;
    local_148 = local_258;
    piStack_140 = &local_27c;
    local_138 = (ulonglong *)0x1;
    local_228 = puVar12;
    if (local_1ac == 0) {
      piVar7 = (int *)FUN_1403a3560(local_1a8);
      if (piVar7 == (int *)0x0) {
        if (local_1ac == 0) {
          local_1ac = 1;
        }
      }
      else {
        *(undefined2 **)piVar7 = local_1d0;
        *(longlong *)(piVar7 + 2) = local_1c8;
        *(int **)(piVar7 + 0xc) = local_190;
        local_190 = piVar7;
      }
    }
    puVar2 = local_1d0;
    puVar12 = local_248;
    piVar7 = piStack_250;
    uVar14 = local_258;
    puVar1 = local_1d0;
    if ((local_1ac != 0) || (local_1d0 + 1 < local_1d0)) {
LAB_14036d363:
      local_1d0 = puVar1;
      piVar7 = local_190;
      if (((local_190 != (int *)0x0) && (local_1ac < 0x11)) &&
         ((0x10105U >> (local_1ac & 0x1f) & 1) != 0)) {
        if (local_1b8 == (undefined2 *)0x0) {
          local_1b8 = *(undefined2 **)local_190;
        }
        piVar3 = *(int **)(local_190 + 0xc);
        if (local_1ac == 0) {
          local_1c8 = *(longlong *)(local_190 + 2);
          local_1d0 = local_1b8;
          local_190 = *(int **)(local_190 + 0xc);
          FUN_1403bdff0(&local_1d8);
          piVar3 = local_190;
        }
        local_190 = piVar3;
        local_1b8 = (undefined2 *)0x0;
        FUN_1403c2ab0(piVar7);
        *(int **)piVar7 = local_1a8[0];
        local_1a8[0] = piVar7;
      }
      goto LAB_14036d3c4;
    }
    if (local_1c8 - (longlong)local_1d0 < 2) {
      local_1ac = 4;
      goto LAB_14036d363;
    }
    *local_1d0 = 0;
    puVar1 = local_1d0 + 1;
    if ((local_1d0 == (undefined2 *)0x0) || (local_1d0 == (undefined2 *)0x0)) goto LAB_14036d363;
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
    local_148 = uVar14;
    piStack_140 = piVar7;
    local_138 = puVar12;
    uStack_130 = uStack_240;
    uStack_12c = uStack_23c;
    local_298 = &local_258;
    local_2a0 = &local_238;
    local_2a8 = &local_218;
    local_1d0 = puVar1;
    cVar4 = FUN_14040ac20(puVar2,&local_1d8,&local_148,&local_1f8);
    puVar1 = local_1d0;
    if (cVar4 == '\0') goto LAB_14036d363;
    if ((uint)*(byte *)(lVar6 + 5) + (uint)*(byte *)(lVar6 + 4) * 0x100 == 0) {
      DAT_1404e4ff0._0_2_ = (undefined2)DAT_14045dde0;
      iVar5 = 0x404e4ff0;
    }
    else {
      iVar5 = (int)lVar6 + 6;
    }
    uVar9 = FUN_1403f0e00(&local_1d8,1);
    if ((local_1ac == 0) && (uVar9 != 0)) {
      puVar8 = (uint *)FUN_1403f5650(local_190 + 4);
      if (local_190[4] < 0) {
        local_1ac = local_1ac | 1;
      }
      puVar8[2] = uVar9;
      *puVar8 = *puVar8 & 0xffffffc2 | 2;
      puVar8[1] = iVar5 - *local_190;
      *puVar8 = 2;
    }
    FUN_1403bf190(&local_1d8);
    if (local_1ac == 0) {
      iVar5 = (((int)local_1d0 - (int)local_1c8) - local_1d8) + local_1c0;
      if ((iVar5 != 0) && (lVar6 = thunk_FUN_1402da070(iVar5), lVar6 != 0)) {
        puVar1 = (undefined2 *)CONCAT44(uStack_1d4,local_1d8);
        if (local_1d0 != puVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(lVar6,puVar1);
        }
        if (CONCAT44(uStack_1bc,local_1c0) != local_1c8) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0((longlong)local_1d0 + (lVar6 - (longlong)puVar1));
        }
      }
    }
  }
  func_0x000140397770(&local_1d8);
LAB_14036d3e0:
  func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_2c8);
  return;
}

