// Function: FUN_140090090
// Addr: 140090090
// Size: 510 bytes


ulonglong FUN_140090090(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                       uint *param_5)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  byte bVar15;
  uint uVar16;
  ulonglong uVar17;
  char *pcVar18;
  char *pcVar19;
  uint local_68 [2];
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  uVar17 = FUN_140090290(param_1,param_2,param_3,param_4,param_5);
  if ((char)uVar17 == '\0') {
LAB_14009027f:
    return uVar17 & 0xffffffffffffff00;
  }
  uVar16 = *param_5 - 0xd800;
  if (0x3ff < uVar16) {
LAB_140090206:
    return CONCAT71((uint7)(uint3)(uVar16 >> 8),1);
  }
  pcVar18 = (char *)*param_3;
  if (param_4 - (longlong)pcVar18 < 6) {
    local_58 = 0;
    local_60 = (char *)FUN_14028af20(0x50);
    uVar6 = s_additional_six_characters_expect_140485310._24_8_;
    uVar5 = s_additional_six_characters_expect_140485310._16_8_;
    uVar4 = s_additional_six_characters_expect_140485310._8_8_;
    *(undefined8 *)local_60 = s_additional_six_characters_expect_140485310._0_8_;
    *(undefined8 *)(local_60 + 8) = uVar4;
    uVar10 = s_additional_six_characters_expect_140485310._44_4_;
    uVar9 = s_additional_six_characters_expect_140485310._40_4_;
    uVar8 = s_additional_six_characters_expect_140485310._36_4_;
    uVar3 = s_additional_six_characters_expect_140485310._32_4_;
    local_50 = 0x43;
    *(undefined8 *)(local_60 + 0x10) = uVar5;
    *(undefined8 *)(local_60 + 0x18) = uVar6;
    uVar14 = s_additional_six_characters_expect_140485310._60_4_;
    uVar13 = s_additional_six_characters_expect_140485310._56_4_;
    uVar12 = s_additional_six_characters_expect_140485310._52_4_;
    uVar11 = s_additional_six_characters_expect_140485310._48_4_;
    *(undefined4 *)(local_60 + 0x20) = uVar3;
    *(undefined4 *)(local_60 + 0x24) = uVar8;
    *(undefined4 *)(local_60 + 0x28) = uVar9;
    *(undefined4 *)(local_60 + 0x2c) = uVar10;
    *(undefined4 *)(local_60 + 0x30) = uVar11;
    *(undefined4 *)(local_60 + 0x34) = uVar12;
    *(undefined4 *)(local_60 + 0x38) = uVar13;
    *(undefined4 *)(local_60 + 0x3c) = uVar14;
    *(uint *)(local_60 + 0x3f) =
         CONCAT31(s_additional_six_characters_expect_140485310._64_3_,
                  s_additional_six_characters_expect_140485310[0x3f]);
    local_60[0x43] = '\0';
    pcVar19 = pcVar18;
  }
  else {
    cVar1 = *pcVar18;
    pcVar19 = pcVar18 + 1;
    *param_3 = (longlong)pcVar19;
    if (cVar1 == '\\') {
      cVar1 = *pcVar19;
      *param_3 = (longlong)(pcVar18 + 2);
      pcVar19 = pcVar18 + 2;
      if (cVar1 == 'u') {
        uVar17 = FUN_140090290(param_1,param_2,param_3,param_4,local_68);
        if ((char)uVar17 == '\0') goto LAB_14009027f;
        *param_5 = *param_5 & 0x3ff;
        uVar16 = local_68[0] & 0x3ff;
        *param_5 = (*param_5 + 0x40) * 0x400 | uVar16;
        goto LAB_140090206;
      }
    }
    local_58 = 0;
    local_60 = (char *)FUN_14028af20(0x50);
    uVar6 = s_expecting_another__u_token_to_be_1404852c0._24_8_;
    uVar5 = s_expecting_another__u_token_to_be_1404852c0._16_8_;
    uVar4 = s_expecting_another__u_token_to_be_1404852c0._8_8_;
    *(undefined8 *)local_60 = s_expecting_another__u_token_to_be_1404852c0._0_8_;
    *(undefined8 *)(local_60 + 8) = uVar4;
    uVar7 = s_expecting_another__u_token_to_be_1404852c0._40_8_;
    uVar4 = s_expecting_another__u_token_to_be_1404852c0._32_8_;
    local_50 = 0x4f;
    *(undefined8 *)(local_60 + 0x10) = uVar5;
    *(undefined8 *)(local_60 + 0x18) = uVar6;
    uVar11 = s_expecting_another__u_token_to_be_1404852c0._60_4_;
    uVar10 = s_expecting_another__u_token_to_be_1404852c0._56_4_;
    uVar9 = s_expecting_another__u_token_to_be_1404852c0._52_4_;
    uVar8 = s_expecting_another__u_token_to_be_1404852c0._48_4_;
    *(undefined8 *)(local_60 + 0x20) = uVar4;
    *(undefined8 *)(local_60 + 0x28) = uVar7;
    uVar14 = s_expecting_another__u_token_to_be_1404852c0._75_4_;
    uVar13 = s_expecting_another__u_token_to_be_1404852c0._71_4_;
    uVar12 = s_expecting_another__u_token_to_be_1404852c0._67_4_;
    uVar3 = CONCAT31(s_expecting_another__u_token_to_be_1404852c0._64_3_,
                     s_expecting_another__u_token_to_be_1404852c0[0x3f]);
    *(undefined4 *)(local_60 + 0x30) = uVar8;
    *(undefined4 *)(local_60 + 0x34) = uVar9;
    *(undefined4 *)(local_60 + 0x38) = uVar10;
    *(undefined4 *)(local_60 + 0x3c) = uVar11;
    *(undefined4 *)(local_60 + 0x3f) = uVar3;
    *(undefined4 *)(local_60 + 0x43) = uVar12;
    *(undefined4 *)(local_60 + 0x47) = uVar13;
    *(undefined4 *)(local_60 + 0x4b) = uVar14;
    local_60[0x4f] = '\0';
  }
  local_48 = 0x4f;
  bVar15 = FUN_1400904e0(param_1,&local_60,param_2,pcVar19);
  if (0xf < local_48) {
    uVar17 = local_48 + 1;
    pcVar18 = local_60;
    if (0xfff < uVar17) {
      pcVar18 = *(char **)(local_60 + -8);
      if ((char *)0x1f < local_60 + (-8 - (longlong)pcVar18)) {
        pcVar2 = (code *)swi(0x29);
        uVar17 = (*pcVar2)(5);
        goto LAB_14009027f;
      }
      uVar17 = local_48 + 0x28;
    }
    thunk_FUN_14028af80(pcVar18,uVar17);
  }
  return (ulonglong)bVar15;
}

