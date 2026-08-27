// Function: FUN_1401b3b60
// Addr: 1401b3b60
// Size: 1050 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401b3b60(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  uVar12 = 0;
  lVar1 = *(longlong *)*param_1;
  if (*(float *)(lVar1 + 0x1c) < DAT_140492704) {
    uVar13 = 2;
  }
  else {
    local_58 = 0xf;
    local_50 = 0xf;
    local_68 = (char *)s_OUTLINE_ENABLED_14048f0f8._0_8_;
    uStack_60 = (ulonglong)
                CONCAT16(s_OUTLINE_ENABLED_14048f0f8[0xe],
                         CONCAT24(s_OUTLINE_ENABLED_14048f0f8._12_2_,
                                  s_OUTLINE_ENABLED_14048f0f8._8_4_));
    puVar9 = (undefined4 *)FUN_14015a440(param_1[1],&local_68);
    *puVar9 = 1;
    if (0xf < local_50) {
      uVar11 = local_50 + 1;
      pcVar10 = local_68;
      if (0xfff < uVar11) {
        pcVar10 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_1401b3f72;
        uVar11 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar10,uVar11);
    }
    uVar12 = 1;
    uVar13 = 3;
  }
  if (0.0 < *(float *)(lVar1 + 0x2c)) {
    local_58 = 0xc;
    local_68 = (char *)s_BLUR_ENABLED_14048f108._0_8_;
    local_50 = 0xf;
    uStack_60 = (ulonglong)(uint)s_BLUR_ENABLED_14048f108._8_4_;
    puVar9 = (undefined4 *)FUN_14015a440(param_1[1],&local_68);
    *puVar9 = 1;
    uVar12 = uVar13;
    if (0xf < local_50) {
      uVar11 = local_50 + 1;
      pcVar10 = local_68;
      if (0xfff < uVar11) {
        pcVar10 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) goto LAB_1401b3f72;
        uVar11 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar10,uVar11);
    }
  }
  if ((0.0 < *(float *)(lVar1 + 0x30)) ||
     (DAT_1404925e0 <
      *(float *)(lVar1 + 0x48) * *(float *)(lVar1 + 0x48) +
      *(float *)(lVar1 + 0x44) * *(float *)(lVar1 + 0x44))) {
    uVar2 = param_1[1];
    local_58 = 0;
    local_68 = (char *)0x0;
    uStack_60 = 0;
    local_50 = 0;
    local_68 = (char *)FUN_14028af20(0x20);
    uVar8 = s_DROP_SHADOW_ENABLED_14048f118._12_4_;
    uVar7 = s_DROP_SHADOW_ENABLED_14048f118._8_4_;
    uVar6 = s_DROP_SHADOW_ENABLED_14048f118._4_4_;
    uVar5 = CONCAT31(s_DROP_SHADOW_ENABLED_14048f118._16_3_,s_DROP_SHADOW_ENABLED_14048f118[0xf]);
    local_58 = 0x13;
    local_50 = 0x1f;
    *(undefined4 *)local_68 = s_DROP_SHADOW_ENABLED_14048f118._0_4_;
    *(undefined4 *)(local_68 + 4) = uVar6;
    *(undefined4 *)(local_68 + 8) = uVar7;
    *(undefined4 *)(local_68 + 0xc) = uVar8;
    *(undefined4 *)(local_68 + 0xf) = uVar5;
    local_68[0x13] = '\0';
    puVar9 = (undefined4 *)FUN_14015a440(uVar2,&local_68);
    *puVar9 = 1;
    if (0xf < local_50) {
      uVar11 = local_50 + 1;
      pcVar10 = local_68;
      if (0xfff < uVar11) {
        pcVar10 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) {
LAB_1401b3f72:
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return uVar11;
        }
        uVar11 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pcVar10,uVar11);
    }
    uVar12 = uVar12 | 4;
  }
  fVar16 = DAT_1404928a8 / *(float *)(*(longlong *)*param_1 + 0xa8);
  *(undefined4 *)(*(longlong *)param_1[2] + 0xa8) = 0x41c00000;
  fVar16 = fVar16 * _DAT_140492688;
  *(float *)(*(longlong *)param_1[2] + 0xac) = fVar16 * *(float *)(lVar1 + 0x1c);
  *(float *)(*(longlong *)param_1[2] + 0xb0) = fVar16 * *(float *)(lVar1 + 0x2c);
  *(float *)(*(longlong *)param_1[2] + 0xb4) = fVar16 * *(float *)(lVar1 + 0x30);
  *(float *)(*(longlong *)param_1[2] + 0xc4) = fVar16 * *(float *)(lVar1 + 0x44);
  fVar15 = DAT_14049285c;
  *(float *)(*(longlong *)param_1[2] + 0xd4) = fVar16 * *(float *)(lVar1 + 0x48);
  lVar3 = *(longlong *)param_1[2];
  *(undefined8 *)(lVar3 + 0xb8) = *(undefined8 *)(lVar1 + 0x20);
  *(undefined4 *)(lVar3 + 0xc0) = *(undefined4 *)(lVar1 + 0x28);
  lVar3 = *(longlong *)param_1[2];
  *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(lVar1 + 0x38);
  *(undefined4 *)(lVar3 + 0xd0) = *(undefined4 *)(lVar1 + 0x40);
  fVar16 = *(float *)(*(longlong *)param_1[2] + 0xac);
  fVar14 = fVar15;
  if (fVar16 <= fVar15) {
    fVar14 = fVar16;
  }
  *(float *)(*(longlong *)param_1[2] + 0xac) = fVar14;
  fVar14 = DAT_140492860;
  fVar16 = *(float *)(*(longlong *)param_1[2] + 0xb0);
  if (DAT_140492860 < fVar16) {
    fVar16 = DAT_140492860;
  }
  *(float *)(*(longlong *)param_1[2] + 0xb0) = fVar16;
  fVar16 = *(float *)(*(longlong *)param_1[2] + 0xb4);
  if (fVar14 < fVar16) {
    fVar16 = fVar14;
  }
  *(float *)(*(longlong *)param_1[2] + 0xb4) = fVar16;
  fVar16 = *(float *)(*(longlong *)param_1[2] + 0xc4);
  if (fVar14 < fVar16) {
    fVar16 = fVar14;
  }
  *(float *)(*(longlong *)param_1[2] + 0xc4) = fVar16;
  fVar16 = *(float *)(*(longlong *)param_1[2] + 0xd4);
  if (fVar16 <= fVar14) {
    fVar14 = fVar16;
  }
  *(float *)(*(longlong *)param_1[2] + 0xd4) = fVar14;
  lVar3 = *(longlong *)param_1[2];
  if (fVar15 < *(float *)(lVar3 + 0xb0) + *(float *)(lVar3 + 0xac)) {
    fVar15 = fVar15 - *(float *)(lVar3 + 0xb0);
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    *(float *)(lVar3 + 0xac) = fVar15;
  }
  *(undefined4 *)(*(longlong *)param_1[2] + 0xd8) = *(undefined4 *)(lVar1 + 0x34);
  return (ulonglong)uVar12;
}

