// Function: FUN_14008fe30
// Addr: 14008fe30
// Size: 575 bytes


undefined1 FUN_14008fe30(undefined8 param_1,longlong param_2,uint *param_3)

{
  uint *puVar1;
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
  char cVar15;
  undefined1 uVar16;
  byte bVar17;
  uint uVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  uint uVar21;
  longlong lVar22;
  uint *puVar23;
  char *pcVar24;
  uint *puVar25;
  ulonglong uVar26;
  uint *puVar27;
  char *pcVar28;
  longlong *plVar29;
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
  longlong local_48;
  uint *local_40;
  ulonglong local_30;
  
  puStack_80 = (uint *)0x14008fe66;
  FUN_140053080(param_3,(*(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8)) + -2);
  puVar1 = (uint *)(*(longlong *)(param_2 + 0x10) + -1);
  puVar25 = (uint *)(*(longlong *)(param_2 + 8) + 1);
  if (*(longlong *)(param_2 + 8) != *(longlong *)(param_2 + 0x10) + -2) {
    do {
      bVar17 = (byte)*puVar25;
      puVar27 = (uint *)((longlong)puVar25 + 1);
      if (bVar17 == 0x22) {
        return 1;
      }
      if (bVar17 != 0x5c) {
        if (bVar17 < 0x20) {
          local_40 = (uint *)0x0;
          puStack_80 = (uint *)&UNK_1400900b3;
          uVar16 = func_0x00014028aff0(0x20);
          return uVar16;
        }
        goto LAB_14008ffa9;
      }
      if (puVar27 == puVar1) {
        local_40 = (uint *)0x0;
        puStack_80 = (uint *)&UNK_140090020;
        uVar16 = func_0x00014028aff0(0x20);
        return uVar16;
      }
      cVar15 = *(char *)puVar27;
      puVar27 = (uint *)((longlong)puVar25 + 2);
      local_res20 = puVar27;
      switch(cVar15) {
      case '\"':
        bVar17 = 0x22;
        break;
      default:
        local_40 = (uint *)0x0;
        puStack_80 = (uint *)&UNK_14008ffeb;
        uVar16 = func_0x00014028aff0(0x20);
        return uVar16;
      case '/':
        bVar17 = 0x2f;
        break;
      case '\\':
        bVar17 = 0x5c;
        break;
      case 'b':
        bVar17 = 8;
        break;
      case 'f':
        bVar17 = 0xc;
        break;
      case 'n':
        bVar17 = 10;
        break;
      case 'r':
        bVar17 = 0xd;
        break;
      case 't':
        bVar17 = 9;
        break;
      case 'u':
        local_58 = local_res10;
        puStack_80 = (uint *)0x14008ff32;
        puVar30 = puVar1;
        cVar15 = FUN_140090160(param_1,param_2,&local_res20);
        if (cVar15 == '\0') {
          return 0;
        }
        puStack_80 = (uint *)0x14008ff46;
        puVar19 = (undefined8 *)FUN_14008d390(&local_48,local_res10[0]);
        plVar29 = (longlong *)puVar19[2];
        if (0xf < (ulonglong)puVar19[3]) {
          puVar19 = (undefined8 *)*puVar19;
        }
        puStack_80 = (uint *)0x14008ff5f;
        func_0x000140053370(param_3,puVar19);
        puVar25 = local_res20;
        if (0xf < local_30) {
          puVar25 = (uint *)(local_30 + 1);
          lVar22 = local_48;
          if ((uint *)0xfff < puVar25) {
            lVar22 = *(longlong *)(local_48 + -8);
            if (0x1f < (local_48 - lVar22) - 8U) {
              puVar23 = (uint *)&DAT_00000005;
              pcVar2 = (code *)swi(0x29);
              pbVar20 = (byte *)(*pcVar2)();
              *(char *)puVar1 = *(char *)puVar1 + (char)puVar25;
              *pbVar20 = *pbVar20 - 1;
              DAT_1640909ef = DAT_1640909ef + (char)puVar27;
              *pbVar20 = *pbVar20 - 1;
              *(char *)puVar27 = *(char *)puVar27 + (char)((ulonglong)puVar23 >> 8);
              *pbVar20 = *pbVar20 - 1;
              *(char *)puVar25 = (char)*puVar25 + (char)((ulonglong)puVar25 >> 8);
              *pbVar20 = *pbVar20 - 1;
              *(char *)puVar23 = (char)*puVar23 + (char)((ulonglong)puVar27 >> 8);
              *pbVar20 = *pbVar20 - 1;
              bVar17 = (byte)pbVar20;
              pbVar20[-2] = pbVar20[-2] + bVar17;
              *pbVar20 = *pbVar20 | bVar17;
              *(char *)plVar29 = (char)*plVar29 + -1;
              *(char *)puVar23 = (char)*puVar23 + (char)puVar23;
              *(int *)pbVar20 = *(int *)pbVar20 + -1;
              *pbVar20 = *pbVar20 + bVar17;
              uVar21 = (uint)puVar23;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 + uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              uVar18 = (uint)pbVar20;
              *puVar25 = *puVar25 | uVar18;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar27 = *puVar27 | uVar18;
              *puVar23 = *puVar23 | uVar21;
              *(uint *)((longlong)puVar23 * 2) = *(uint *)((longlong)puVar23 * 2) | uVar18;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              *puVar23 = *puVar23 | uVar21;
              uVar18 = uVar18 + 0x6090909;
              *param_3 = *param_3 | uVar18;
              *(byte *)((ulonglong)uVar18 + 0x53) =
                   *(byte *)((ulonglong)uVar18 + 0x53) | (byte)uVar18;
              puVar27 = local_40;
              uStack_98 = param_1;
              lStack_90 = param_2;
              puStack_88 = param_3;
              puStack_80 = puVar1;
              puStack_78 = &stack0xffffffffffffffd8;
              cVar15 = FUN_140090360();
              if (cVar15 == '\0') {
                return 0;
              }
              if (0x3ff < *local_40 - 0xd800) {
                return 1;
              }
              pcVar24 = (char *)*plVar29;
              if ((longlong)puVar30 - (longlong)pcVar24 < 6) {
                uStack_c0 = 0;
                pcStack_c8 = (char *)func_0x00014028aff0(0x50);
                uVar6 = s_additional_six_characters_expect_1404853e0._24_8_;
                uVar5 = s_additional_six_characters_expect_1404853e0._16_8_;
                uVar4 = s_additional_six_characters_expect_1404853e0._8_8_;
                *(undefined8 *)pcStack_c8 = s_additional_six_characters_expect_1404853e0._0_8_;
                *(undefined8 *)(pcStack_c8 + 8) = uVar4;
                uVar10 = s_additional_six_characters_expect_1404853e0._44_4_;
                uVar9 = s_additional_six_characters_expect_1404853e0._40_4_;
                uVar8 = s_additional_six_characters_expect_1404853e0._36_4_;
                uVar3 = s_additional_six_characters_expect_1404853e0._32_4_;
                uStack_b8 = 0x43;
                *(undefined8 *)(pcStack_c8 + 0x10) = uVar5;
                *(undefined8 *)(pcStack_c8 + 0x18) = uVar6;
                uVar14 = s_additional_six_characters_expect_1404853e0._60_4_;
                uVar13 = s_additional_six_characters_expect_1404853e0._56_4_;
                uVar12 = s_additional_six_characters_expect_1404853e0._52_4_;
                uVar11 = s_additional_six_characters_expect_1404853e0._48_4_;
                *(undefined4 *)(pcStack_c8 + 0x20) = uVar3;
                *(undefined4 *)(pcStack_c8 + 0x24) = uVar8;
                *(undefined4 *)(pcStack_c8 + 0x28) = uVar9;
                *(undefined4 *)(pcStack_c8 + 0x2c) = uVar10;
                *(undefined4 *)(pcStack_c8 + 0x30) = uVar11;
                *(undefined4 *)(pcStack_c8 + 0x34) = uVar12;
                *(undefined4 *)(pcStack_c8 + 0x38) = uVar13;
                *(undefined4 *)(pcStack_c8 + 0x3c) = uVar14;
                *(uint *)(pcStack_c8 + 0x3f) =
                     CONCAT31(s_additional_six_characters_expect_1404853e0._64_3_,
                              s_additional_six_characters_expect_1404853e0[0x3f]);
                pcStack_c8[0x43] = '\0';
                pcVar28 = pcVar24;
              }
              else {
                cVar15 = *pcVar24;
                pcVar28 = pcVar24 + 1;
                *plVar29 = (longlong)pcVar28;
                if (cVar15 == '\\') {
                  cVar15 = *pcVar28;
                  *plVar29 = (longlong)(pcVar24 + 2);
                  pcVar28 = pcVar24 + 2;
                  if (cVar15 == 'u') {
                    cVar15 = FUN_140090360(puVar23,puVar25,plVar29,puVar30,auStack_d0);
                    if (cVar15 == '\0') {
                      return 0;
                    }
                    *local_40 = *local_40 & 0x3ff;
                    *local_40 = (*local_40 + 0x40) * 0x400 | auStack_d0[0] & 0x3ff;
                    return 1;
                  }
                }
                uStack_c0 = 0;
                pcStack_c8 = (char *)func_0x00014028aff0(0x50);
                uVar6 = s_expecting_another__u_token_to_be_140485390._24_8_;
                uVar5 = s_expecting_another__u_token_to_be_140485390._16_8_;
                uVar4 = s_expecting_another__u_token_to_be_140485390._8_8_;
                *(undefined8 *)pcStack_c8 = s_expecting_another__u_token_to_be_140485390._0_8_;
                *(undefined8 *)(pcStack_c8 + 8) = uVar4;
                uVar7 = s_expecting_another__u_token_to_be_140485390._40_8_;
                uVar4 = s_expecting_another__u_token_to_be_140485390._32_8_;
                uStack_b8 = 0x4f;
                *(undefined8 *)(pcStack_c8 + 0x10) = uVar5;
                *(undefined8 *)(pcStack_c8 + 0x18) = uVar6;
                uVar11 = s_expecting_another__u_token_to_be_140485390._60_4_;
                uVar10 = s_expecting_another__u_token_to_be_140485390._56_4_;
                uVar9 = s_expecting_another__u_token_to_be_140485390._52_4_;
                uVar8 = s_expecting_another__u_token_to_be_140485390._48_4_;
                *(undefined8 *)(pcStack_c8 + 0x20) = uVar4;
                *(undefined8 *)(pcStack_c8 + 0x28) = uVar7;
                uVar14 = s_expecting_another__u_token_to_be_140485390._75_4_;
                uVar13 = s_expecting_another__u_token_to_be_140485390._71_4_;
                uVar12 = s_expecting_another__u_token_to_be_140485390._67_4_;
                uVar3 = CONCAT31(s_expecting_another__u_token_to_be_140485390._64_3_,
                                 s_expecting_another__u_token_to_be_140485390[0x3f]);
                *(undefined4 *)(pcStack_c8 + 0x30) = uVar8;
                *(undefined4 *)(pcStack_c8 + 0x34) = uVar9;
                *(undefined4 *)(pcStack_c8 + 0x38) = uVar10;
                *(undefined4 *)(pcStack_c8 + 0x3c) = uVar11;
                *(undefined4 *)(pcStack_c8 + 0x3f) = uVar3;
                *(undefined4 *)(pcStack_c8 + 0x43) = uVar12;
                *(undefined4 *)(pcStack_c8 + 0x47) = uVar13;
                *(undefined4 *)(pcStack_c8 + 0x4b) = uVar14;
                pcStack_c8[0x4f] = '\0';
              }
              uStack_b0 = 0x4f;
              uVar16 = FUN_1400905b0(puVar23,&pcStack_c8,puVar25,pcVar28,puVar27);
              if (0xf < uStack_b0) {
                uVar26 = uStack_b0 + 1;
                pcVar24 = pcStack_c8;
                if (0xfff < uVar26) {
                  pcVar24 = *(char **)(pcStack_c8 + -8);
                  if ((char *)0x1f < pcStack_c8 + (-8 - (longlong)pcVar24)) {
                    pcVar2 = (code *)swi(0x29);
                    (*pcVar2)(5);
                    return 0;
                  }
                  uVar26 = uStack_b0 + 0x28;
                }
                func_0x00014028b040(pcVar24,uVar26);
              }
              return uVar16;
            }
            puVar25 = (uint *)(local_30 + 0x28);
          }
          puStack_80 = (uint *)0x14008ff9a;
          func_0x00014028b040(lVar22,puVar25);
          puVar25 = local_res20;
        }
        goto LAB_14008ffb1;
      }
LAB_14008ffa9:
      puStack_80 = (uint *)0x14008ffb1;
      FUN_1400535a0(param_3,bVar17);
      puVar25 = puVar27;
LAB_14008ffb1:
    } while (puVar25 != puVar1);
  }
  return 1;
}

