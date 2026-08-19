// Function: FUN_14036d410
// Addr: 14036d410
// Size: 1322 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_14036d410(undefined8 param_1,longlong param_2,undefined2 *param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_2f8 [32];
  ulonglong *local_2d8;
  ulonglong *local_2d0;
  ulonglong *local_2c8;
  undefined4 local_2b8;
  undefined1 local_2b4;
  undefined1 local_2b3;
  int local_2b0 [4];
  longlong local_2a0;
  uint local_298 [4];
  ulonglong local_288;
  int *piStack_280;
  ulonglong local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  ulonglong local_268;
  int *piStack_260;
  ulonglong local_258;
  ulonglong local_248;
  int *piStack_240;
  ulonglong local_238;
  ulonglong local_228;
  int *piStack_220;
  ulonglong local_218;
  int local_208;
  undefined4 uStack_204;
  undefined2 *local_200;
  longlong local_1f8;
  int local_1f0;
  undefined4 uStack_1ec;
  undefined2 *puStack_1e8;
  uint local_1dc;
  int *local_1d8 [3];
  int *local_1c0;
  ulonglong local_178;
  int *piStack_170;
  ulonglong local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  int local_150 [6];
  undefined4 local_138;
  undefined4 local_128;
  undefined1 local_118 [208];
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_2f8;
  local_2d8 = (ulonglong *)0x0;
  local_2b8 = 0;
  lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
  if (lVar15 != 0) {
    local_2d8 = *(ulonglong **)(lVar15 + 0x10);
  }
  local_298[1] = param_4;
  iVar6 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                    (param_2,*(undefined8 *)(param_2 + 0x98),*param_3,&local_2b8);
  if (iVar6 == 0) goto code_r0x00014036d9d9;
  uVar14 = 0;
  uVar13 = 0;
  local_2b4 = (undefined1)((uint)local_2b8 >> 8);
  local_2b3 = (undefined1)local_2b8;
  local_2b0[0] = 0;
  local_298[0] = 0;
  local_2a0 = 0;
  local_2b0[2] = 0;
  do {
    uVar7 = local_298[local_2a0];
    local_158 = (ulonglong)uVar7 * 0x16;
    lVar15 = 0;
    do {
      local_2b0[1] = 0;
      lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
      local_2d8 = (ulonglong *)0x0;
      if (lVar10 != 0) {
        local_2d8 = *(ulonglong **)(lVar10 + 0x10);
      }
      iVar6 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                        (param_2,*(undefined8 *)(param_2 + 0x98),
                         *(undefined2 *)((longlong)param_3 + local_158 + lVar15 * 4 + 4),
                         local_2b0 + 1);
      lVar10 = local_2a0;
      if (iVar6 != 0) {
        uVar12 = 0;
        do {
          lVar10 = local_2a0;
          if (param_3[(ulonglong)uVar7 * 0xb + lVar15 * 2 + uVar12 + 1] == 0) goto LAB_14036d5d4;
          local_2b8 = 0;
          lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
          local_2d8 = (ulonglong *)0x0;
          if (lVar10 != 0) {
            local_2d8 = *(ulonglong **)(lVar10 + 0x10);
          }
          iVar6 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                            (param_2,*(undefined8 *)(param_2 + 0x98),
                             param_3[(ulonglong)uVar7 * 0xb + lVar15 * 2 + uVar12 + 1],&local_2b8);
          lVar10 = local_2a0;
          if (iVar6 == 0) goto LAB_14036d5d4;
          lVar1 = uVar13 * 2;
          uVar13 = (ulonglong)((int)uVar13 + 1);
          *(char *)((longlong)&local_138 + lVar1) = (char)((uint)local_2b8 >> 8);
          *(char *)((longlong)&local_138 + lVar1 + 1) = (char)local_2b8;
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 == 0);
        local_150[uVar14] = 2;
        *(char *)((longlong)&local_128 + uVar14 * 2) = (char)((uint)local_2b0[1] >> 8);
        *(char *)((longlong)&local_128 + uVar14 * 2 + 1) = (char)local_2b0[1];
        local_2b0[local_2a0] = local_2b0[local_2a0] + 1;
        uVar14 = (ulonglong)((int)uVar14 + 1);
      }
LAB_14036d5d4:
      lVar15 = lVar15 + 1;
    } while (lVar15 != 5);
    local_2b0[2] = local_2b0[2] + 1;
    local_2a0 = lVar10 + 1;
  } while (local_2b0[2] == 0);
  if ((int)uVar14 == 0) goto code_r0x00014036d9d9;
  FUN_140395b40(&local_208,local_118,0xd0);
  lVar15 = FUN_14038e580(&local_208);
  local_288 = local_288 & 0xffffffffffffff00;
  piStack_280 = (int *)&local_2b4;
  local_278 = 1;
  local_2d8 = (ulonglong *)CONCAT44(local_2d8._4_4_,1);
  cVar5 = FUN_14040b0d0(lVar15,&local_208,4,local_298[1]);
  if (cVar5 == '\0') {
UNWIND_INFO_14036d933_UnwindCodes_67__OffsetInProlog:
    FUN_1403bf190(&local_208);
  }
  else {
    local_268 = local_288;
    piStack_260 = &local_138;
    local_248 = local_288;
    piStack_240 = local_150;
    local_228 = local_288;
    piStack_220 = &local_128;
    local_178 = local_288;
    piStack_170 = local_2b0;
    local_168 = 1;
    local_258 = uVar13;
    local_238 = uVar14;
    local_218 = uVar14;
    if (local_1dc == 0) {
      piVar8 = (int *)FUN_1403a3560(local_1d8);
      if (piVar8 == (int *)0x0) {
        if (local_1dc == 0) {
          local_1dc = 1;
        }
      }
      else {
        *(undefined2 **)piVar8 = local_200;
        *(longlong *)(piVar8 + 2) = local_1f8;
        *(int **)(piVar8 + 0xc) = local_1c0;
        local_1c0 = piVar8;
      }
    }
    puVar3 = local_200;
    uVar14 = local_278;
    piVar8 = piStack_280;
    uVar13 = local_288;
    puVar2 = local_200;
    if ((local_1dc != 0) || (local_200 + 1 < local_200)) {
UNWIND_INFO_14036d933_UnwindCodes_18__UnwindOpCode:
      local_200 = puVar2;
      piVar8 = local_1c0;
      if (((local_1c0 != (int *)0x0) && (local_1dc < 0x11)) &&
         ((0x10105U >> (local_1dc & 0x1f) & 1) != 0)) {
        if (puStack_1e8 == (undefined2 *)0x0) {
          puStack_1e8 = *(undefined2 **)local_1c0;
        }
        piVar4 = *(int **)(local_1c0 + 0xc);
        if (local_1dc == 0) {
          local_1f8 = *(longlong *)(local_1c0 + 2);
          local_200 = puStack_1e8;
          local_1c0 = *(int **)(local_1c0 + 0xc);
          FUN_1403bdff0(&local_208);
          piVar4 = local_1c0;
        }
        local_1c0 = piVar4;
        puStack_1e8 = (undefined2 *)0x0;
        FUN_1403c2ab0(piVar8);
        *(int **)piVar8 = local_1d8[0];
        local_1d8[0] = piVar8;
      }
      goto UNWIND_INFO_14036d933_UnwindCodes_67__OffsetInProlog;
    }
    if (local_1f8 - (longlong)local_200 < 2) {
      local_1dc = 4;
      goto UNWIND_INFO_14036d933_UnwindCodes_18__UnwindOpCode;
    }
    *local_200 = 0;
    puVar2 = local_200 + 1;
    if ((local_200 == (undefined2 *)0x0) || (local_200 == (undefined2 *)0x0))
    goto UNWIND_INFO_14036d933_UnwindCodes_18__UnwindOpCode;
    local_2b8 = CONCAT22(local_2b8._2_2_,0x100);
    *local_200 = 0x100;
    local_288 = local_268;
    piStack_280 = piStack_260;
    local_278 = local_258;
    local_268 = local_248;
    piStack_260 = piStack_240;
    local_258 = local_238;
    local_248 = local_228;
    piStack_240 = piStack_220;
    local_238 = local_218;
    local_228 = local_178;
    piStack_220 = piStack_170;
    local_218 = local_168;
    local_178 = uVar13;
    piStack_170 = piVar8;
    local_168 = uVar14;
    uStack_160 = uStack_270;
    uStack_15c = uStack_26c;
    local_2c8 = &local_288;
    local_2d0 = &local_268;
    local_2d8 = &local_248;
    local_200 = puVar2;
    cVar5 = FUN_14040ac20(puVar3,&local_208,&local_178,&local_228);
    puVar2 = local_200;
    if (cVar5 == '\0') goto UNWIND_INFO_14036d933_UnwindCodes_18__UnwindOpCode;
    if ((uint)*(byte *)(lVar15 + 5) + (uint)*(byte *)(lVar15 + 4) * 0x100 == 0) {
      DAT_1404e4ff0._0_2_ = (undefined2)DAT_14045dde0;
      iVar6 = 0x404e4ff0;
    }
    else {
      iVar6 = (int)lVar15 + 6;
    }
    uVar7 = FUN_1403f0e00(&local_208,1);
    if ((local_1dc == 0) && (uVar7 != 0)) {
      puVar9 = (uint *)FUN_1403f5650(local_1c0 + 4);
      if (local_1c0[4] < 0) {
        local_1dc = local_1dc | 1;
      }
      puVar9[2] = uVar7;
      *puVar9 = *puVar9 & 0xffffffc2 | 2;
      puVar9[1] = iVar6 - *local_1c0;
      *puVar9 = 2;
    }
    FUN_1403bf190(&local_208);
    if (local_1dc == 0) {
      iVar6 = (((int)local_200 - (int)local_1f8) - local_208) + local_1f0;
      if ((iVar6 != 0) && (lVar15 = thunk_FUN_1402da070(iVar6), lVar15 != 0)) {
        puVar2 = (undefined2 *)CONCAT44(uStack_204,local_208);
        if (local_200 != puVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(lVar15,puVar2);
        }
        if (CONCAT44(uStack_1ec,local_1f0) != local_1f8) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0((longlong)local_200 + (lVar15 - (longlong)puVar2));
        }
      }
    }
  }
  func_0x000140397770(&local_208);
code_r0x00014036d9d9:
  func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_2f8);
  return;
}

