// Function: FUN_14036d340
// Addr: 14036d340
// Size: 1523 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

longlong FUN_14036d340(undefined8 param_1,longlong param_2,undefined2 *param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined2 *puVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  undefined2 *puVar9;
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
  undefined2 *local_1e8;
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
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_2f8;
  local_2d8 = (ulonglong *)0x0;
  local_2b8 = 0;
  lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
  if (lVar15 != 0) {
    local_2d8 = *(ulonglong **)(lVar15 + 0x10);
  }
  local_298[1] = param_4;
  iVar5 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                    (param_2,*(undefined8 *)(param_2 + 0x98),*param_3,&local_2b8);
  if (iVar5 == 0) {
    return 0;
  }
  uVar14 = 0;
  uVar13 = 0;
  local_2b4 = (undefined1)((uint)local_2b8 >> 8);
  local_2b3 = (undefined1)local_2b8;
  local_2b0[0] = 0;
  local_298[0] = 0;
  local_2a0 = 0;
  local_2b0[2] = 0;
  do {
    uVar6 = local_298[local_2a0];
    local_158 = (ulonglong)uVar6 * 0x16;
    lVar15 = 0;
    do {
      local_2b0[1] = 0;
      lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
      local_2d8 = (ulonglong *)0x0;
      if (lVar10 != 0) {
        local_2d8 = *(ulonglong **)(lVar10 + 0x10);
      }
      iVar5 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                        (param_2,*(undefined8 *)(param_2 + 0x98),
                         *(undefined2 *)((longlong)param_3 + local_158 + lVar15 * 4 + 4),
                         local_2b0 + 1);
      lVar10 = local_2a0;
      if (iVar5 != 0) {
        uVar12 = 0;
        do {
          lVar10 = local_2a0;
          if (param_3[(ulonglong)uVar6 * 0xb + lVar15 * 2 + uVar12 + 1] == 0) goto LAB_14036d504;
          local_2b8 = 0;
          lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
          local_2d8 = (ulonglong *)0x0;
          if (lVar10 != 0) {
            local_2d8 = *(ulonglong **)(lVar10 + 0x10);
          }
          iVar5 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                            (param_2,*(undefined8 *)(param_2 + 0x98),
                             param_3[(ulonglong)uVar6 * 0xb + lVar15 * 2 + uVar12 + 1],&local_2b8);
          lVar10 = local_2a0;
          if (iVar5 == 0) goto LAB_14036d504;
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
LAB_14036d504:
      lVar15 = lVar15 + 1;
    } while (lVar15 != 5);
    local_2b0[2] = local_2b0[2] + 1;
    local_2a0 = lVar10 + 1;
  } while (local_2b0[2] == 0);
  if ((int)uVar14 == 0) {
    return 0;
  }
  FUN_140395a70(&local_208,local_118,0xd0);
  lVar15 = FUN_14038e4b0(&local_208);
  local_288 = local_288 & 0xffffffffffffff00;
  piStack_280 = (int *)&local_2b4;
  local_278 = 1;
  local_2d8 = (ulonglong *)CONCAT44(local_2d8._4_4_,1);
  cVar4 = FUN_14040b000(lVar15,&local_208,4,local_298[1]);
  if (cVar4 == '\0') {
LAB_14036d8ed:
    FUN_1403bf0c0(&local_208);
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
      piVar7 = (int *)FUN_1403a3490(local_1d8);
      if (piVar7 == (int *)0x0) {
        if (local_1dc == 0) {
          local_1dc = 1;
        }
      }
      else {
        *(undefined2 **)piVar7 = local_200;
        *(longlong *)(piVar7 + 2) = local_1f8;
        *(int **)(piVar7 + 0xc) = local_1c0;
        local_1c0 = piVar7;
      }
    }
    puVar2 = local_200;
    uVar14 = local_278;
    piVar7 = piStack_280;
    uVar13 = local_288;
    puVar9 = local_200;
    if ((local_1dc != 0) || (local_200 + 1 < local_200)) {
LAB_14036d88c:
      local_200 = puVar9;
      piVar7 = local_1c0;
      if (((local_1c0 != (int *)0x0) && (local_1dc < 0x11)) &&
         ((0x10105U >> (local_1dc & 0x1f) & 1) != 0)) {
        if (local_1e8 == (undefined2 *)0x0) {
          local_1e8 = *(undefined2 **)local_1c0;
        }
        piVar3 = *(int **)(local_1c0 + 0xc);
        if (local_1dc == 0) {
          local_1f8 = *(longlong *)(local_1c0 + 2);
          local_200 = local_1e8;
          local_1c0 = *(int **)(local_1c0 + 0xc);
          FUN_1403bdf20(&local_208);
          piVar3 = local_1c0;
        }
        local_1c0 = piVar3;
        local_1e8 = (undefined2 *)0x0;
        FUN_1403c29e0(piVar7);
        *(int **)piVar7 = local_1d8[0];
        local_1d8[0] = piVar7;
      }
      goto LAB_14036d8ed;
    }
    if (local_1f8 - (longlong)local_200 < 2) {
      local_1dc = 4;
      goto LAB_14036d88c;
    }
    *local_200 = 0;
    puVar9 = local_200 + 1;
    if ((local_200 == (undefined2 *)0x0) || (local_200 == (undefined2 *)0x0)) goto LAB_14036d88c;
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
    piStack_170 = piVar7;
    local_168 = uVar14;
    uStack_160 = uStack_270;
    uStack_15c = uStack_26c;
    local_2c8 = &local_288;
    local_2d0 = &local_268;
    local_2d8 = &local_248;
    local_200 = puVar9;
    cVar4 = FUN_14040ab50(puVar2,&local_208,&local_178,&local_228);
    puVar9 = local_200;
    if (cVar4 == '\0') goto LAB_14036d88c;
    if ((uint)*(byte *)(lVar15 + 5) + (uint)*(byte *)(lVar15 + 4) * 0x100 == 0) {
      DAT_1404e4f20._0_2_ = (undefined2)DAT_14045dd10;
      iVar5 = 0x404e4f20;
    }
    else {
      iVar5 = (int)lVar15 + 6;
    }
    uVar6 = FUN_1403f0d30(&local_208,1);
    if ((local_1dc == 0) && (uVar6 != 0)) {
      puVar8 = (uint *)FUN_1403f5580(local_1c0 + 4);
      if (local_1c0[4] < 0) {
        local_1dc = local_1dc | 1;
      }
      puVar8[2] = uVar6;
      *puVar8 = *puVar8 & 0xffffffc2 | 2;
      puVar8[1] = iVar5 - *local_1c0;
      *puVar8 = 2;
    }
    FUN_1403bf0c0(&local_208);
    if (local_1dc == 0) {
      iVar5 = (((int)local_200 - (int)local_1f8) - local_208) + local_1f0;
      if ((iVar5 != 0) && (lVar15 = _malloc_base(iVar5), lVar15 != 0)) {
        puVar9 = (undefined2 *)CONCAT44(uStack_204,local_208);
        if (local_200 != puVar9) {
          FUN_1404210f0(lVar15,puVar9);
          puVar9 = (undefined2 *)CONCAT44(uStack_204,local_208);
        }
        if (CONCAT44(uStack_1ec,local_1f0) != local_1f8) {
          FUN_1404210f0((longlong)local_200 + (lVar15 - (longlong)puVar9));
        }
        goto LAB_14036d8f9;
      }
    }
  }
  lVar15 = 0;
LAB_14036d8f9:
  FUN_1403976a0(&local_208);
  return lVar15;
}

