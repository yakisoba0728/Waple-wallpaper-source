// Function: FUN_1400c0710
// Addr: 1400c0710
// Size: 1389 bytes


undefined8
FUN_1400c0710(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,longlong *param_5)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  int *piVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong uVar7;
  byte bVar8;
  ulonglong uVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint local_118;
  undefined4 local_114;
  uint local_110;
  uint local_10c;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  char local_d0;
  longlong local_c8;
  char *local_c0;
  uint local_b8;
  undefined4 local_b4;
  uint local_b0;
  uint local_ac;
  longlong local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  piVar4 = (int *)_calloc_base(0xae58,1);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  if (*piVar4 != 0) {
LAB_1400c0c6e:
    thunk_FUN_1402d9040(piVar4);
    return 0;
  }
  *(undefined1 **)(piVar4 + 0x4c) = &LAB_1400b61c0;
  *(code **)(piVar4 + 0x4e) = FUN_1400b6320;
  *(code **)(piVar4 + 0x50) = FUN_1400b6710;
  *(code **)(piVar4 + 0x66) = FUN_1400bcfa0;
  piVar1 = piVar4 + 0x68;
  if ((piVar1 == (int *)0x0) || (*piVar1 != 0)) goto LAB_1400c0c6e;
  *piVar1 = 0x3ccb6c71;
  *(code **)(piVar4 + 0x74) = FUN_1400aa900;
  *(char **)(piVar4 + 0x6a) = "{vtable}wuffs_base__hasher_u32";
  *(undefined ***)(piVar4 + 0x6c) = &PTR_FUN_14047aab0;
  lVar5 = FUN_1400b5890(piVar4 + 0x76);
  if (lVar5 != 0) goto LAB_1400c0c6e;
  *piVar4 = 0x3ccb6c71;
  *(char **)(piVar4 + 2) = "{vtable}wuffs_base__image_decoder";
  *(undefined ***)(piVar4 + 4) = &PTR_FUN_140479800;
  if (*piVar4 == 0x3ccb6c71) {
    *(undefined1 *)((longlong)piVar4 + 0x5f) = 1;
    if ((piVar4 + 0x76 != (int *)0x0) && (piVar4[0x76] == 0x3ccb6c71)) {
      if (*(char *)((longlong)piVar4 + 0x201) == '\0') {
        *(undefined1 *)((longlong)piVar4 + 0x205) = 1;
      }
      else {
        *(undefined1 *)(piVar4 + 0x80) = 1;
      }
    }
  }
  pcVar11 = (char *)0x0;
  pcVar10 = "#base: initialize not called";
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = '\x01';
  local_f8 = param_1;
  local_f0 = param_2;
  local_e8 = param_2;
  if (*piVar4 == 0x3ccb6c71) {
    if (1 < (uint)piVar4[1]) {
      *piVar4 = 0x75ae3d2;
      goto LAB_1400c08c6;
    }
    piVar4[1] = 0;
    if ((piVar4[0x52] == 0) || (piVar4[0x52] == 1)) {
      pcVar6 = (char *)FUN_1400b7510(piVar4,&local_118,&local_f8);
      if ((pcVar6 != "$base: short read") || (local_d0 == '\0')) {
        if (pcVar6 == (char *)0x0) {
          piVar4[0x52] = 0;
          goto LAB_1400c0910;
        }
        if (*pcVar6 == '$') {
          piVar4[0x52] = 1;
          if (*pcVar6 != '$') goto LAB_1400c08f8;
          bVar8 = 1;
          goto LAB_1400c08fa;
        }
        goto LAB_1400c0905;
      }
      pcVar6 = "#png: truncated input";
LAB_1400c090a:
      *piVar4 = 0x75ae3d2;
      goto LAB_1400c0910;
    }
    piVar4[0x52] = 0;
    pcVar6 = pcVar11;
LAB_1400c08f8:
    bVar8 = 0;
LAB_1400c08fa:
    piVar4[1] = (uint)bVar8;
    if (pcVar6 != (char *)0x0) {
LAB_1400c0905:
      if (*pcVar6 != '#') goto LAB_1400c0910;
      goto LAB_1400c090a;
    }
  }
  else {
    pcVar6 = "#base: initialize not called";
    if (*piVar4 == 0x75ae3d2) {
      pcVar6 = "#base: disabled by previous error";
    }
LAB_1400c0910:
    if (pcVar6 != (char *)0x0) goto LAB_1400c08c6;
  }
  if ((*param_3 == 0) || (*param_4 == 0)) {
    *param_3 = local_110;
    *param_4 = local_10c;
    if ((*param_3 == 0) || (local_10c == 0)) goto LAB_1400c08c6;
    lVar5 = thunk_FUN_14028af20(*param_3 * local_10c * 4);
    *param_5 = lVar5;
  }
  local_110 = *param_3;
  local_10c = *param_4;
  local_118 = 0xa1008888;
  local_114 = 0;
  if ((*piVar4 == 0x3ccb6c71) || (*piVar4 == 0x75ae3d2)) {
    pcVar11 = *(char **)(piVar4 + 0x12);
  }
  lVar5 = _malloc_base(pcVar11);
  if (lVar5 == 0) {
LAB_1400c08c6:
    thunk_FUN_1402d9040(piVar4);
    return 0;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  if ((((local_118 & 0x30000) != 0) ||
      (uVar12 = (&DAT_140482a50)[local_118 & 0xf] +
                (&DAT_140482a50)[local_118 >> 0xc & 0xf] + (&DAT_140482a50)[local_118 >> 8 & 0xf] +
                (&DAT_140482a50)[local_118 >> 4 & 0xf], uVar12 == 0)) || ((uVar12 & 7) != 0))
  goto LAB_1400c0b6a;
  lVar2 = *param_5;
  uVar14 = (ulonglong)*param_3 * (ulonglong)*param_4 * 4;
  lVar15 = lVar2;
  if ((local_118 >> 0x12 & 1) != 0) {
    if (uVar14 < 0x400) goto LAB_1400c0b6a;
    lVar15 = lVar2 + 0x400;
    uVar14 = uVar14 - 0x400;
    uStack_40 = 0x400;
    local_38 = 1;
    uStack_30 = 0x400;
    local_48 = lVar2;
  }
  uVar17 = (ulonglong)local_10c;
  uVar9 = (ulonglong)local_110;
  uVar16 = CONCAT44(0,uVar12 >> 3);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar16;
  uVar7 = SUB168((ZEXT416(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar3,0);
  uVar13 = uVar17 * uVar9;
  if (((uVar7 <= uVar13 && uVar13 - uVar7 != 0) || (uVar7 < uVar9)) ||
     (uVar14 <= uVar13 * uVar16 && uVar13 * uVar16 - uVar14 != 0)) goto LAB_1400c0b6a;
  local_a0 = uVar9 * uVar16;
  local_b4 = local_114;
  local_b0 = local_110;
  local_b8 = local_118;
  local_ac = local_10c;
  local_a8 = lVar15;
  local_98 = uVar17;
  local_90 = local_a0;
  if (*piVar4 == 0x3ccb6c71) {
    if ((piVar4[1] != 0) && (piVar4[1] != 3)) {
      *piVar4 = 0x75ae3d2;
      goto LAB_1400c0b6a;
    }
    pcVar10 = (char *)0x0;
    piVar4[1] = 0;
    if ((piVar4[0x61] == 0) || (piVar4[0x61] == 1)) {
      local_c8 = lVar5;
      local_c0 = pcVar11;
      pcVar10 = (char *)FUN_1400baf30(piVar4,&local_b8,&local_f8,0,&local_c8,0);
      if ((pcVar10 != "$base: short read") || (local_d0 == '\0')) {
        if (pcVar10 == (char *)0x0) {
          piVar4[0x61] = 0;
          goto LAB_1400c0bdf;
        }
        if (*pcVar10 == '$') {
          piVar4[0x61] = 1;
          if (*pcVar10 != '$') goto LAB_1400c0bc3;
          bVar8 = 1;
          goto LAB_1400c0bc5;
        }
        goto LAB_1400c0bd4;
      }
      pcVar10 = "#png: truncated input";
    }
    else {
      piVar4[0x61] = 0;
LAB_1400c0bc3:
      bVar8 = 0;
LAB_1400c0bc5:
      piVar4[1] = -(uint)bVar8 & 3;
      if (pcVar10 == (char *)0x0) goto LAB_1400c0be4;
LAB_1400c0bd4:
      if (*pcVar10 != '#') goto LAB_1400c0bdf;
    }
    *piVar4 = 0x75ae3d2;
  }
  else if (*piVar4 == 0x75ae3d2) {
    pcVar10 = "#base: disabled by previous error";
  }
LAB_1400c0bdf:
  if (pcVar10 != (char *)0x0) {
LAB_1400c0b6a:
    thunk_FUN_1402d9040(lVar5);
    thunk_FUN_1402d9040(piVar4);
    return 0;
  }
LAB_1400c0be4:
  thunk_FUN_1402d9040(lVar5);
  thunk_FUN_1402d9040(piVar4);
  return 1;
}

