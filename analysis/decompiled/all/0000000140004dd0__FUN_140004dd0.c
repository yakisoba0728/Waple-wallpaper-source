// Function: FUN_140004dd0
// Addr: 140004dd0
// Size: 661 bytes


undefined8 * FUN_140004dd0(undefined8 *param_1,undefined8 param_2,char param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char local_2c8 [8];
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  uint local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined1 local_280 [8];
  undefined1 local_278 [48];
  undefined1 local_248 [16];
  undefined1 local_238 [32];
  longlong *local_218;
  longlong *local_210;
  longlong *local_1f8;
  ulonglong *local_1f0;
  int *local_1e0;
  ulonglong local_1c8;
  uint local_1c0;
  undefined1 local_148 [16];
  undefined1 local_138 [32];
  longlong *plStack_118;
  longlong *plStack_110;
  longlong *plStack_f8;
  ulonglong *puStack_f0;
  int *piStack_e0;
  ulonglong uStack_c8;
  uint local_c0;
  
  if (param_3 == '\0') {
    lVar2 = *(longlong *)ThreadLocalStoragePointer;
    if ((*(uint *)(lVar2 + 0x148) & 2) == 0) {
      *(uint *)(lVar2 + 0x148) = *(uint *)(lVar2 + 0x148) | 2;
      FUN_14028b100(0x140423fc0);
    }
    if (*(longlong *)(lVar2 + 0x138) == 0) {
      FUN_14008c150(local_280);
      local_2a0 = CONCAT31(local_2a0._1_3_,4);
      local_2a0 = local_2a0 | 0x100;
      local_288 = 0;
      local_298 = 0;
      uStack_290 = 0;
      local_2a8 = FUN_140084c00(&DAT_140472318,4);
      local_2b8 = 0xc;
      local_2b0 = 0xf;
      local_2c8[0] = s_commentStyle_140472308[0];
      local_2c8[1] = s_commentStyle_140472308[1];
      local_2c8[2] = s_commentStyle_140472308[2];
      local_2c8[3] = s_commentStyle_140472308[3];
      local_2c8[4] = s_commentStyle_140472308[4];
      local_2c8[5] = s_commentStyle_140472308[5];
      local_2c8[6] = s_commentStyle_140472308[6];
      local_2c8[7] = s_commentStyle_140472308[7];
      uStack_2c0 = (ulonglong)(uint)s_commentStyle_140472308._8_4_;
                    /* WARNING: Subroutine does not return */
      FUN_140086eb0(local_278,local_2c8,(longlong)&uStack_2c0 + 4);
    }
    FUN_14000efe0(local_148);
    (**(code **)(**(longlong **)(lVar2 + 0x138) + 8))
              (*(longlong **)(lVar2 + 0x138),param_2,local_138);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    if ((((byte)local_c0 & 0x22) == 2) || (uVar3 = *puStack_f0, uVar3 == 0)) {
      if (((local_c0 & 4) == 0) && (*plStack_f8 != 0)) {
        lVar2 = *plStack_118;
        uVar3 = (longlong)*piStack_e0 + *plStack_f8;
        goto code_r0x000140005722;
      }
    }
    else {
      lVar2 = *plStack_110;
      if (uVar3 < uStack_c8) {
        uVar3 = uStack_c8;
      }
code_r0x000140005722:
      if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14000f950(param_1,lVar2,uVar3 - lVar2);
      }
    }
    puVar1 = local_148;
    goto LAB_14000573c;
  }
  lVar2 = *(longlong *)ThreadLocalStoragePointer;
  if ((*(uint *)(lVar2 + 0x148) & 1) == 0) {
    *(uint *)(lVar2 + 0x148) = *(uint *)(lVar2 + 0x148) | 1;
    FUN_14028b100(0x140423ff0);
  }
  if (*(longlong *)(lVar2 + 0x140) == 0) {
    FUN_14008c150(local_280);
    local_2a0 = CONCAT31(local_2a0._1_3_,4);
    local_2a0 = local_2a0 | 0x100;
    local_288 = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_2a8 = FUN_140084c00(&DAT_140472318,4);
    local_2b8 = 0xc;
    local_2b0 = 0xf;
    local_2c8[0] = s_commentStyle_140472308[0];
    local_2c8[1] = s_commentStyle_140472308[1];
    local_2c8[2] = s_commentStyle_140472308[2];
    local_2c8[3] = s_commentStyle_140472308[3];
    local_2c8[4] = s_commentStyle_140472308[4];
    local_2c8[5] = s_commentStyle_140472308[5];
    local_2c8[6] = s_commentStyle_140472308[6];
    local_2c8[7] = s_commentStyle_140472308[7];
    uStack_2c0 = (ulonglong)(uint)s_commentStyle_140472308._8_4_;
                    /* WARNING: Subroutine does not return */
    FUN_140086eb0(local_278,local_2c8,(longlong)&uStack_2c0 + 4);
  }
  FUN_14000efe0(local_248);
  (**(code **)(**(longlong **)(lVar2 + 0x140) + 8))(*(longlong **)(lVar2 + 0x140),param_2,local_238)
  ;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  if ((((byte)local_1c0 & 0x22) == 2) || (uVar3 = *local_1f0, uVar3 == 0)) {
    if (((local_1c0 & 4) == 0) && (*local_1f8 != 0)) {
      lVar2 = *local_218;
      uVar3 = (longlong)*local_1e0 + *local_1f8;
      goto LAB_140005331;
    }
  }
  else {
    lVar2 = *local_210;
    if (uVar3 < local_1c8) {
      uVar3 = local_1c8;
    }
LAB_140005331:
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14000f950(param_1,lVar2,uVar3 - lVar2);
    }
  }
  puVar1 = local_248;
LAB_14000573c:
  FUN_1400057a0(puVar1);
  return param_1;
}

