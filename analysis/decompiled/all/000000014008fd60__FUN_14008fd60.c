// Function: FUN_14008fd60
// Addr: 14008fd60
// Size: 781 bytes


uint * FUN_14008fd60(undefined8 param_1,longlong param_2,uint *param_3)

{
  uint *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  uint *puVar15;
  byte bVar16;
  char cVar17;
  uint uVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  uint uVar21;
  longlong *plVar22;
  longlong *plVar23;
  uint *puVar24;
  char *pcVar25;
  uint *puVar26;
  ulonglong uVar27;
  uint *puVar28;
  char *pcVar29;
  uint *puVar30;
  undefined4 local_res10 [2];
  uint *local_res20;
  uint auStack_d0 [2];
  char *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulonglong uStack_b0;
  undefined8 uStack_98;
  longlong lStack_90;
  uint *puStack_88;
  uint *puStack_80;
  undefined1 *puStack_78;
  undefined4 *local_58;
  longlong *local_48;
  uint *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  puStack_80 = (uint *)0x14008fd96;
  FUN_140052fb0(param_3,(*(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8)) + -2);
  puVar1 = (uint *)(*(longlong *)(param_2 + 0x10) + -1);
  puVar26 = (uint *)(*(longlong *)(param_2 + 8) + 1);
  if (*(longlong *)(param_2 + 8) != *(longlong *)(param_2 + 0x10) + -2) {
    do {
      bVar16 = (byte)*puVar26;
      puVar28 = (uint *)((longlong)puVar26 + 1);
      if (bVar16 == 0x22) {
        return (uint *)0x1;
      }
      if (bVar16 != 0x5c) {
        if (0x1f < bVar16) goto LAB_14008fed9;
        local_40 = (uint *)0x0;
        puStack_80 = (uint *)0x14008ffe3;
        local_48 = (longlong *)FUN_14028af20(0x20);
        uVar9 = s_Control_character_in_string_140485278._23_4_;
        uVar8 = s_Control_character_in_string_140485278._19_4_;
        uVar7 = s_Control_character_in_string_140485278._12_4_;
        uVar6 = s_Control_character_in_string_140485278._8_4_;
        uVar5 = s_Control_character_in_string_140485278._4_4_;
        local_38 = 0x1b;
        uVar3 = CONCAT31(s_Control_character_in_string_140485278._12_3_,
                         s_Control_character_in_string_140485278[0xb]);
        uVar4 = CONCAT31(s_Control_character_in_string_140485278._16_3_,
                         s_Control_character_in_string_140485278[0xf]);
        *(undefined4 *)local_48 = s_Control_character_in_string_140485278._0_4_;
        *(undefined4 *)((longlong)local_48 + 4) = uVar5;
        *(undefined4 *)(local_48 + 1) = uVar6;
        *(undefined4 *)((longlong)local_48 + 0xc) = uVar7;
        *(undefined4 *)((longlong)local_48 + 0xb) = uVar3;
        *(undefined4 *)((longlong)local_48 + 0xf) = uVar4;
        *(undefined4 *)((longlong)local_48 + 0x13) = uVar8;
        *(undefined4 *)((longlong)local_48 + 0x17) = uVar9;
        *(undefined1 *)((longlong)local_48 + 0x1b) = 0;
        puVar30 = puVar26;
LAB_14008ff74:
        local_30 = 0x1f;
        puStack_80 = (uint *)0x14008ff8f;
        bVar16 = FUN_1400904e0(param_1,&local_48,param_2);
        puVar28 = (uint *)(ulonglong)bVar16;
        if (local_30 < 0x10) {
          return puVar28;
        }
        puVar26 = (uint *)(local_30 + 1);
        plVar23 = local_48;
        if ((uint *)0xfff < puVar26) {
          plVar23 = (longlong *)local_48[-1];
          if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)plVar23))) {
LAB_14009000d:
            puVar24 = (uint *)&DAT_00000005;
            pcVar2 = (code *)swi(0x29);
            pbVar20 = (byte *)(*pcVar2)();
            puVar15 = local_40;
            *(char *)puVar1 = *(char *)puVar1 + (char)puVar26;
            *pbVar20 = *pbVar20 - 1;
            DAT_16409091f = DAT_16409091f + (char)puVar28;
            *pbVar20 = *pbVar20 - 1;
            *(char *)puVar28 = (char)*puVar28 + (char)((ulonglong)puVar24 >> 8);
            *pbVar20 = *pbVar20 - 1;
            *(char *)puVar26 = (char)*puVar26 + (char)((ulonglong)puVar26 >> 8);
            *pbVar20 = *pbVar20 - 1;
            *(char *)puVar24 = (char)*puVar24 + (char)((ulonglong)puVar28 >> 8);
            *pbVar20 = *pbVar20 - 1;
            bVar16 = (byte)pbVar20;
            pbVar20[-2] = pbVar20[-2] + bVar16;
            *pbVar20 = *pbVar20 | bVar16;
            *(char *)plVar23 = (char)*plVar23 + -1;
            *(char *)puVar24 = (char)*puVar24 + (char)puVar24;
            *(int *)pbVar20 = *(int *)pbVar20 + -1;
            *pbVar20 = *pbVar20 + bVar16;
            uVar21 = (uint)puVar24;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 + uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            uVar18 = (uint)pbVar20;
            *puVar26 = *puVar26 | uVar18;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar28 = *puVar28 | uVar18;
            *puVar24 = *puVar24 | uVar21;
            *(uint *)((longlong)puVar24 * 2) = *(uint *)((longlong)puVar24 * 2) | uVar18;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            *puVar24 = *puVar24 | uVar21;
            uVar18 = uVar18 + 0x6090909;
            *param_3 = *param_3 | uVar18;
            *(byte *)((ulonglong)uVar18 + 0x53) = *(byte *)((ulonglong)uVar18 + 0x53) | (byte)uVar18
            ;
            puVar28 = local_40;
            uStack_98 = param_1;
            lStack_90 = param_2;
            puStack_88 = param_3;
            puStack_80 = puVar1;
            puStack_78 = &stack0xffffffffffffffd8;
            cVar17 = FUN_140090290();
            if (cVar17 == '\0') {
              return (uint *)0x0;
            }
            if (0x3ff < *puVar15 - 0xd800) {
              return (uint *)0x1;
            }
            pcVar25 = (char *)*plVar23;
            if ((longlong)puVar30 - (longlong)pcVar25 < 6) {
              uStack_c0 = 0;
              pcStack_c8 = (char *)FUN_14028af20(0x50);
              uVar12 = s_additional_six_characters_expect_140485310._24_8_;
              uVar11 = s_additional_six_characters_expect_140485310._16_8_;
              uVar10 = s_additional_six_characters_expect_140485310._8_8_;
              *(undefined8 *)pcStack_c8 = s_additional_six_characters_expect_140485310._0_8_;
              *(undefined8 *)(pcStack_c8 + 8) = uVar10;
              uVar6 = s_additional_six_characters_expect_140485310._44_4_;
              uVar5 = s_additional_six_characters_expect_140485310._40_4_;
              uVar4 = s_additional_six_characters_expect_140485310._36_4_;
              uVar3 = s_additional_six_characters_expect_140485310._32_4_;
              uStack_b8 = 0x43;
              *(undefined8 *)(pcStack_c8 + 0x10) = uVar11;
              *(undefined8 *)(pcStack_c8 + 0x18) = uVar12;
              uVar14 = s_additional_six_characters_expect_140485310._60_4_;
              uVar9 = s_additional_six_characters_expect_140485310._56_4_;
              uVar8 = s_additional_six_characters_expect_140485310._52_4_;
              uVar7 = s_additional_six_characters_expect_140485310._48_4_;
              *(undefined4 *)(pcStack_c8 + 0x20) = uVar3;
              *(undefined4 *)(pcStack_c8 + 0x24) = uVar4;
              *(undefined4 *)(pcStack_c8 + 0x28) = uVar5;
              *(undefined4 *)(pcStack_c8 + 0x2c) = uVar6;
              *(undefined4 *)(pcStack_c8 + 0x30) = uVar7;
              *(undefined4 *)(pcStack_c8 + 0x34) = uVar8;
              *(undefined4 *)(pcStack_c8 + 0x38) = uVar9;
              *(undefined4 *)(pcStack_c8 + 0x3c) = uVar14;
              *(uint *)(pcStack_c8 + 0x3f) =
                   CONCAT31(s_additional_six_characters_expect_140485310._64_3_,
                            s_additional_six_characters_expect_140485310[0x3f]);
              pcStack_c8[0x43] = '\0';
              pcVar29 = pcVar25;
            }
            else {
              cVar17 = *pcVar25;
              pcVar29 = pcVar25 + 1;
              *plVar23 = (longlong)pcVar29;
              if (cVar17 == '\\') {
                cVar17 = *pcVar29;
                *plVar23 = (longlong)(pcVar25 + 2);
                pcVar29 = pcVar25 + 2;
                if (cVar17 == 'u') {
                  cVar17 = FUN_140090290(puVar24,puVar26,plVar23,puVar30,auStack_d0);
                  if (cVar17 == '\0') {
                    return (uint *)0x0;
                  }
                  *puVar15 = *puVar15 & 0x3ff;
                  *puVar15 = (*puVar15 + 0x40) * 0x400 | auStack_d0[0] & 0x3ff;
                  return (uint *)0x1;
                }
              }
              uStack_c0 = 0;
              pcStack_c8 = (char *)FUN_14028af20(0x50);
              uVar12 = s_expecting_another__u_token_to_be_1404852c0._24_8_;
              uVar11 = s_expecting_another__u_token_to_be_1404852c0._16_8_;
              uVar10 = s_expecting_another__u_token_to_be_1404852c0._8_8_;
              *(undefined8 *)pcStack_c8 = s_expecting_another__u_token_to_be_1404852c0._0_8_;
              *(undefined8 *)(pcStack_c8 + 8) = uVar10;
              uVar13 = s_expecting_another__u_token_to_be_1404852c0._40_8_;
              uVar10 = s_expecting_another__u_token_to_be_1404852c0._32_8_;
              uStack_b8 = 0x4f;
              *(undefined8 *)(pcStack_c8 + 0x10) = uVar11;
              *(undefined8 *)(pcStack_c8 + 0x18) = uVar12;
              uVar7 = s_expecting_another__u_token_to_be_1404852c0._60_4_;
              uVar6 = s_expecting_another__u_token_to_be_1404852c0._56_4_;
              uVar5 = s_expecting_another__u_token_to_be_1404852c0._52_4_;
              uVar4 = s_expecting_another__u_token_to_be_1404852c0._48_4_;
              *(undefined8 *)(pcStack_c8 + 0x20) = uVar10;
              *(undefined8 *)(pcStack_c8 + 0x28) = uVar13;
              uVar14 = s_expecting_another__u_token_to_be_1404852c0._75_4_;
              uVar9 = s_expecting_another__u_token_to_be_1404852c0._71_4_;
              uVar8 = s_expecting_another__u_token_to_be_1404852c0._67_4_;
              uVar3 = CONCAT31(s_expecting_another__u_token_to_be_1404852c0._64_3_,
                               s_expecting_another__u_token_to_be_1404852c0[0x3f]);
              *(undefined4 *)(pcStack_c8 + 0x30) = uVar4;
              *(undefined4 *)(pcStack_c8 + 0x34) = uVar5;
              *(undefined4 *)(pcStack_c8 + 0x38) = uVar6;
              *(undefined4 *)(pcStack_c8 + 0x3c) = uVar7;
              *(undefined4 *)(pcStack_c8 + 0x3f) = uVar3;
              *(undefined4 *)(pcStack_c8 + 0x43) = uVar8;
              *(undefined4 *)(pcStack_c8 + 0x47) = uVar9;
              *(undefined4 *)(pcStack_c8 + 0x4b) = uVar14;
              pcStack_c8[0x4f] = '\0';
            }
            uStack_b0 = 0x4f;
            bVar16 = FUN_1400904e0(puVar24,&pcStack_c8,puVar26,pcVar29,puVar28);
            if (0xf < uStack_b0) {
              uVar27 = uStack_b0 + 1;
              pcVar25 = pcStack_c8;
              if (0xfff < uVar27) {
                pcVar25 = *(char **)(pcStack_c8 + -8);
                if ((char *)0x1f < pcStack_c8 + (-8 - (longlong)pcVar25)) {
                  pcVar2 = (code *)swi(0x29);
                  (*pcVar2)(5);
                  return (uint *)0x0;
                }
                uVar27 = uStack_b0 + 0x28;
              }
              thunk_FUN_14028af80(pcVar25,uVar27);
            }
            return (uint *)(ulonglong)bVar16;
          }
          puVar26 = (uint *)(local_30 + 0x28);
        }
        puStack_80 = (uint *)0x14008ffc9;
        thunk_FUN_14028af80(plVar23,puVar26);
        return puVar28;
      }
      if (puVar28 == puVar1) {
        local_40 = (uint *)0x0;
        puStack_80 = (uint *)0x14008ff50;
        local_48 = (longlong *)FUN_14028af20(0x20);
        uVar9 = s_Empty_escape_sequence_in_string_140485250._27_4_;
        uVar8 = s_Empty_escape_sequence_in_string_140485250._23_4_;
        uVar7 = s_Empty_escape_sequence_in_string_140485250._19_4_;
        uVar6 = s_Empty_escape_sequence_in_string_140485250._12_4_;
        uVar5 = s_Empty_escape_sequence_in_string_140485250._8_4_;
        uVar4 = s_Empty_escape_sequence_in_string_140485250._4_4_;
        local_38 = 0x1f;
        uVar3 = CONCAT31(s_Empty_escape_sequence_in_string_140485250._16_3_,
                         s_Empty_escape_sequence_in_string_140485250[0xf]);
        *(undefined4 *)local_48 = s_Empty_escape_sequence_in_string_140485250._0_4_;
        *(undefined4 *)((longlong)local_48 + 4) = uVar4;
        *(undefined4 *)(local_48 + 1) = uVar5;
        *(undefined4 *)((longlong)local_48 + 0xc) = uVar6;
        *(undefined4 *)((longlong)local_48 + 0xf) = uVar3;
        *(undefined4 *)((longlong)local_48 + 0x13) = uVar7;
        *(undefined4 *)((longlong)local_48 + 0x17) = uVar8;
        *(undefined4 *)((longlong)local_48 + 0x1b) = uVar9;
        *(undefined1 *)((longlong)local_48 + 0x1f) = 0;
        puVar30 = puVar28;
        goto LAB_14008ff74;
      }
      cVar17 = *(char *)puVar28;
      puVar28 = (uint *)((longlong)puVar26 + 2);
      local_res20 = puVar28;
      switch(cVar17) {
      case '\"':
        bVar16 = 0x22;
        break;
      default:
        local_40 = (uint *)0x0;
        puStack_80 = (uint *)0x14008ff1b;
        local_48 = (longlong *)FUN_14028af20(0x20);
        uVar9 = s_Bad_escape_sequence_in_string_140485298._25_4_;
        uVar8 = s_Bad_escape_sequence_in_string_140485298._21_4_;
        uVar7 = s_Bad_escape_sequence_in_string_140485298._17_4_;
        uVar6 = s_Bad_escape_sequence_in_string_140485298._12_4_;
        uVar5 = s_Bad_escape_sequence_in_string_140485298._8_4_;
        uVar4 = s_Bad_escape_sequence_in_string_140485298._4_4_;
        local_38 = 0x1d;
        uVar3 = CONCAT13(s_Bad_escape_sequence_in_string_140485298[0x10],
                         s_Bad_escape_sequence_in_string_140485298._13_3_);
        *(undefined4 *)local_48 = s_Bad_escape_sequence_in_string_140485298._0_4_;
        *(undefined4 *)((longlong)local_48 + 4) = uVar4;
        *(undefined4 *)(local_48 + 1) = uVar5;
        *(undefined4 *)((longlong)local_48 + 0xc) = uVar6;
        *(undefined4 *)((longlong)local_48 + 0xd) = uVar3;
        *(undefined4 *)((longlong)local_48 + 0x11) = uVar7;
        *(undefined4 *)((longlong)local_48 + 0x15) = uVar8;
        *(undefined4 *)((longlong)local_48 + 0x19) = uVar9;
        *(undefined1 *)((longlong)local_48 + 0x1d) = 0;
        puVar30 = puVar28;
        goto LAB_14008ff74;
      case '/':
        bVar16 = 0x2f;
        break;
      case '\\':
        bVar16 = 0x5c;
        break;
      case 'b':
        bVar16 = 8;
        break;
      case 'f':
        bVar16 = 0xc;
        break;
      case 'n':
        bVar16 = 10;
        break;
      case 'r':
        bVar16 = 0xd;
        break;
      case 't':
        bVar16 = 9;
        break;
      case 'u':
        local_58 = local_res10;
        puStack_80 = (uint *)0x14008fe62;
        puVar30 = puVar1;
        cVar17 = FUN_140090090(param_1,param_2,&local_res20);
        if (cVar17 == '\0') {
          return (uint *)0x0;
        }
        puStack_80 = (uint *)0x14008fe76;
        puVar19 = (undefined8 *)FUN_14008d2c0(&local_48,local_res10[0]);
        plVar23 = (longlong *)puVar19[2];
        if (0xf < (ulonglong)puVar19[3]) {
          puVar19 = (undefined8 *)*puVar19;
        }
        puStack_80 = (uint *)0x14008fe8f;
        FUN_1400532a0(param_3,puVar19);
        puVar26 = local_res20;
        if (0xf < local_30) {
          puVar26 = (uint *)(local_30 + 1);
          plVar22 = local_48;
          if ((uint *)0xfff < puVar26) {
            plVar22 = (longlong *)local_48[-1];
            if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)plVar22)))
            goto LAB_14009000d;
            puVar26 = (uint *)(local_30 + 0x28);
          }
          puStack_80 = (uint *)0x14008feca;
          thunk_FUN_14028af80(plVar22,puVar26);
          puVar26 = local_res20;
        }
        goto LAB_14008fee1;
      }
LAB_14008fed9:
      puStack_80 = (uint *)0x14008fee1;
      FUN_1400534d0(param_3,bVar16);
      puVar26 = puVar28;
LAB_14008fee1:
    } while (puVar26 != puVar1);
  }
  return (uint *)0x1;
}

