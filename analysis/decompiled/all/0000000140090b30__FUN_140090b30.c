// Function: FUN_140090b30
// Addr: 140090b30
// Size: 2722 bytes


ulonglong FUN_140090b30(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                       longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  char *pcVar3;
  code *pcVar4;
  char *****pppppcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  char cVar13;
  int iVar14;
  undefined1 *puVar15;
  char *pcVar16;
  char *pcVar17;
  size_t sVar18;
  undefined8 *****pppppuVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  char ******ppppppcVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined1 *puVar28;
  undefined8 ******ppppppuVar29;
  ulonglong uVar30;
  longlong lVar31;
  undefined8 ******ppppppuVar32;
  char *pcVar33;
  int iVar34;
  char ******ppppppcVar35;
  ulonglong uVar36;
  undefined8 ******ppppppuVar37;
  ulonglong local_res8;
  longlong local_res10;
  ulonglong local_res18;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  ulonglong local_128;
  longlong local_120;
  longlong local_118;
  undefined8 *****local_108;
  undefined8 uStack_100;
  longlong local_f8;
  ulonglong local_f0;
  char *****local_e8;
  longlong lStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  undefined8 *****local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined8 *****local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  longlong local_88;
  ulonglong local_80;
  char local_78 [64];
  
  puVar28 = auStack_148;
  *(undefined8 *)(param_1 + 0x80) = param_2;
  uVar12 = 0;
  if (*(char *)(param_1 + 0xd0) != '\0') {
    uVar12 = *(undefined1 *)(param_1 + 8);
  }
  *(longlong *)(param_1 + 0x88) = param_3;
  *(undefined1 *)(param_1 + 0xe8) = uVar12;
  *(undefined8 *)(param_1 + 0x90) = param_2;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(ulonglong *)(param_1 + 200) < 0x10) {
    puVar15 = (undefined1 *)(param_1 + 0xb0);
  }
  else {
    puVar15 = *(undefined1 **)(param_1 + 0xb0);
  }
  *puVar15 = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    do {
      FUN_140017240(*(longlong *)
                     (*(longlong *)(param_1 + 0x40) +
                     (*(longlong *)(param_1 + 0x48) - 1U &
                     *(longlong *)(param_1 + 0x50) + *(longlong *)(param_1 + 0x58) + -1) * 8) + 0x18
                   );
      plVar20 = (longlong *)(param_1 + 0x58);
      *plVar20 = *plVar20 + -1;
    } while (*plVar20 != 0);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar31 = *(longlong *)(param_1 + 0x48);
    while (0 < lVar31) {
      lVar27 = lVar31 + -1;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + lVar31 * 8);
      lVar31 = lVar27;
      if (lVar2 != 0) {
        thunk_FUN_14028af80(lVar2,0x40);
      }
    }
    lVar31 = *(longlong *)(param_1 + 0x40);
    uVar25 = *(longlong *)(param_1 + 0x48) * 8;
    if (0xfff < uVar25) {
      if (0x1f < (lVar31 - *(longlong *)(lVar31 + -8)) - 8U) goto LAB_1400915bc;
      uVar25 = uVar25 + 0x27;
      lVar31 = *(longlong *)(lVar31 + -8);
    }
    thunk_FUN_14028af80(lVar31,uVar25);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    do {
      plVar20 = (longlong *)(param_1 + 0x30);
      *plVar20 = *plVar20 + -1;
    } while (*plVar20 != 0);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  local_res8 = param_4;
  FUN_140092720(param_1 + 0x10,&local_res8);
  if (((*(char *)(param_1 + 0xd9) != '\0') &&
      (pcVar33 = *(char **)(param_1 + 0x80), 2 < *(longlong *)(param_1 + 0x88) - (longlong)pcVar33))
     && (iVar14 = strncmp(pcVar33,&DAT_14048547c,3), iVar14 == 0)) {
    *(char **)(param_1 + 0x80) = pcVar33 + 3;
    *(char **)(param_1 + 0x90) = pcVar33 + 3;
  }
  uVar12 = FUN_14008d530(param_1 + 0x10);
  plVar20 = (longlong *)(param_1 + 0x30);
  *plVar20 = *plVar20 + -1;
  local_res8 = CONCAT71(local_res8._1_7_,uVar12);
  if (*plVar20 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  cVar13 = FUN_14008e780(param_1 + 0x10,&local_108);
  if (*(char *)(param_1 + 0xd0) != '\0') {
    while (cVar13 != '\0') {
      if ((int)local_108 != 0xf) goto LAB_140090d41;
      cVar13 = FUN_14008e780(param_1 + 0x10,&local_108);
    }
  }
LAB_140090d41:
  if ((*(char *)(param_1 + 0xd6) == '\0') || ((int)local_108 == 0)) {
    if ((*(char *)(param_1 + 0xe8) != '\0') && (*(longlong *)(param_1 + 0xc0) != 0)) {
      uVar22 = FUN_140016fc0(local_78,param_1 + 0xb0);
      FUN_1400888c0(param_4,uVar22,2);
    }
    if ((*(char *)(param_1 + 0xd2) != '\0') && (1 < *(byte *)(param_4 + 8) - 6)) {
      local_108 = (undefined8 *****)CONCAT44(local_108._4_4_,0x10);
      lStack_e0 = 0;
      uStack_100 = param_2;
      local_f8 = param_3;
      local_e8 = (char *****)FUN_14028af20(0x50);
      uVar7 = s_A_valid_JSON_document_must_be_ei_140485070._24_8_;
      uVar6 = s_A_valid_JSON_document_must_be_ei_140485070._16_8_;
      uVar22 = s_A_valid_JSON_document_must_be_ei_140485070._8_8_;
      *local_e8 = (char ****)s_A_valid_JSON_document_must_be_ei_140485070._0_8_;
      local_e8[1] = (char ****)uVar22;
      uVar11 = s_A_valid_JSON_document_must_be_ei_140485070._44_4_;
      uVar10 = s_A_valid_JSON_document_must_be_ei_140485070._40_4_;
      uVar9 = s_A_valid_JSON_document_must_be_ei_140485070._36_4_;
      uVar8 = s_A_valid_JSON_document_must_be_ei_140485070._32_4_;
      local_d8 = 0x41;
      local_e8[2] = (char ****)uVar6;
      local_e8[3] = (char ****)uVar7;
      uVar6 = s_A_valid_JSON_document_must_be_ei_140485070._56_8_;
      uVar22 = s_A_valid_JSON_document_must_be_ei_140485070._48_8_;
      uStack_d0 = 0x4f;
      *(undefined4 *)(local_e8 + 4) = uVar8;
      *(undefined4 *)((longlong)local_e8 + 0x24) = uVar9;
      *(undefined4 *)(local_e8 + 5) = uVar10;
      *(undefined4 *)((longlong)local_e8 + 0x2c) = uVar11;
      local_e8[6] = (char ****)uVar22;
      local_e8[7] = (char ****)uVar6;
      *(char *)(local_e8 + 8) = s_A_valid_JSON_document_must_be_ei_140485070[0x40];
      *(char *)((longlong)local_e8 + 0x41) = '\0';
      goto LAB_140090da6;
    }
  }
  else {
    lStack_e0 = 0;
    local_e8 = (char *****)FUN_14028af20(0x30);
    uVar6 = s_Extra_non_whitespace_after_JSON_v_140485420._16_8_;
    uVar22 = s_Extra_non_whitespace_after_JSON_v_140485420._8_8_;
    pppppcVar5 = (char *****)
                 CONCAT26(s_Extra_non_whitespace_after_JSON_v_140485420._30_2_,
                          s_Extra_non_whitespace_after_JSON_v_140485420._24_6_);
    local_d8 = 0x26;
    *local_e8 = (char ****)s_Extra_non_whitespace_after_JSON_v_140485420._0_8_;
    local_e8[1] = (char ****)uVar22;
    uStack_d0 = 0x2f;
    uVar22 = CONCAT62(s_Extra_non_whitespace_after_JSON_v_140485420._32_6_,
                      s_Extra_non_whitespace_after_JSON_v_140485420._30_2_);
    local_e8[2] = (char ****)uVar6;
    local_e8[3] = (char ****)pppppcVar5;
    *(undefined8 *)((longlong)local_e8 + 0x1e) = uVar22;
    *(char *)((longlong)local_e8 + 0x26) = '\0';
LAB_140090da6:
    FUN_1400904e0(param_1 + 0x10,&local_e8,&local_108,0);
    if (0xf < uStack_d0) {
      uVar25 = uStack_d0 + 1;
      ppppppcVar24 = (char ******)local_e8;
      if (0xfff < uVar25) {
        ppppppcVar24 = (char ******)local_e8[-1];
        if ((char *)0x1f < (char *)((longlong)local_e8 + (-8 - (longlong)ppppppcVar24)))
        goto LAB_1400915bc;
        uVar25 = uStack_d0 + 0x28;
      }
      thunk_FUN_14028af80(ppppppcVar24,uVar25);
    }
    local_res8 = local_res8 & 0xffffffffffffff00;
  }
  uVar25 = local_res8;
  if (param_5 != 0) {
    local_res18 = *(ulonglong *)(param_1 + 0x50);
    local_f8 = 0;
    local_f0 = 0xf;
    local_80 = *(longlong *)(param_1 + 0x58) + local_res18;
    uStack_100 = 0;
    local_108 = (undefined8 ******)0x0;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      do {
        ppppppuVar37 = (undefined8 ******)0x0;
        iVar34 = 0;
        local_res10 = *(longlong *)
                       (*(longlong *)(param_1 + 0x40) +
                       (*(longlong *)(param_1 + 0x48) - 1U & local_res18) * 8);
        pcVar33 = *(char **)(param_1 + 0x80);
        iVar14 = (int)pcVar33;
        pcVar3 = *(char **)(local_res10 + 8);
        if (pcVar33 < pcVar3) {
          pcVar16 = pcVar33;
          ppppppuVar29 = ppppppuVar37;
          do {
            iVar34 = (int)ppppppuVar29;
            iVar14 = (int)pcVar33;
            if (pcVar16 == *(char **)(param_1 + 0x88)) break;
            pcVar17 = pcVar16 + 1;
            if (*pcVar16 == '\r') {
              if ((pcVar17 != *(char **)(param_1 + 0x88)) && (*pcVar17 == '\n')) {
                pcVar17 = pcVar16 + 2;
              }
LAB_140090f85:
              ppppppuVar29 = (undefined8 ******)(ulonglong)(iVar34 + 1);
              pcVar33 = pcVar17;
            }
            else if (*pcVar16 == '\n') goto LAB_140090f85;
            iVar34 = (int)ppppppuVar29;
            iVar14 = (int)pcVar33;
            pcVar16 = pcVar17;
          } while (pcVar17 < pcVar3);
        }
        local_128 = CONCAT44(local_128._4_4_,((int)pcVar3 - iVar14) + 1);
        FUN_1400899e0(local_78,0x33,"Line %d, Column %d",iVar34 + 1);
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = (undefined8 ******)0x0;
        uStack_c0 = 0;
        sVar18 = strlen(local_78);
        FUN_140017480(&local_c8,local_78,sVar18);
        uVar36 = uStack_b0;
        uVar26 = local_b8;
        if (uStack_b0 - local_b8 < 2) {
          if (0x7fffffffffffffff - local_b8 < 2) goto LAB_1400915c3;
          uVar30 = local_b8 + 2 | 0xf;
          if (uVar30 < 0x8000000000000000) {
            if (0x7fffffffffffffff - (uStack_b0 >> 1) < uStack_b0) {
              uVar30 = 0x7fffffffffffffff;
              uVar23 = 0x8000000000000027;
              goto LAB_1400910e9;
            }
            uVar23 = (uStack_b0 >> 1) + uStack_b0;
            if (uVar30 < uVar23) {
              uVar30 = uVar23;
            }
            uVar1 = uVar30 + 1;
            if (uVar1 != 0) {
              if (0xfff < uVar1) {
                uVar23 = uVar30 + 0x28;
                if (uVar23 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_140017370();
                }
                goto LAB_1400910e9;
              }
              ppppppuVar37 = (undefined8 ******)FUN_14028af20(uVar1);
            }
          }
          else {
            uVar30 = 0x7fffffffffffffff;
            uVar23 = 0x8000000000000027;
LAB_1400910e9:
            pppppuVar19 = (undefined8 *****)FUN_14028af20(uVar23);
            if (pppppuVar19 == (undefined8 *****)0x0) goto LAB_1400915bc;
            ppppppuVar37 = (undefined8 ******)((longlong)pppppuVar19 + 0x27U & 0xffffffffffffffe0);
            ppppppuVar37[-1] = pppppuVar19;
          }
          pppppuVar19 = local_c8;
          local_b8 = uVar26 + 2;
          lVar31 = uVar26 + 1;
          uStack_b0 = uVar30;
          if (uVar36 < 0x10) {
            *(undefined2 *)ppppppuVar37 = DAT_1404853e8;
            FUN_1404210f0((undefined2 *)((longlong)ppppppuVar37 + 2),&local_c8,lVar31);
            local_c8 = ppppppuVar37;
          }
          else {
            *(undefined2 *)ppppppuVar37 = DAT_1404853e8;
            FUN_1404210f0((undefined2 *)((longlong)ppppppuVar37 + 2),local_c8,lVar31);
            if (uVar36 + 1 < 0x1000) {
              thunk_FUN_14028af80(pppppuVar19);
              local_c8 = ppppppuVar37;
            }
            else {
              if (0x1f < (ulonglong)((longlong)pppppuVar19 + (-8 - (longlong)pppppuVar19[-1])))
              goto LAB_1400915bc;
              thunk_FUN_14028af80(pppppuVar19[-1],uVar36 + 0x28);
              local_c8 = ppppppuVar37;
            }
          }
        }
        else {
          ppppppuVar29 = &local_c8;
          if (0xf < uStack_b0) {
            ppppppuVar29 = (undefined8 ******)local_c8;
          }
          if (((undefined8 ******)((longlong)&DAT_1404853e8 + 1) < ppppppuVar29) ||
             ((undefined2 *)((longlong)ppppppuVar29 + local_b8) < &DAT_1404853e8)) {
            ppppppuVar37 = (undefined8 ******)0x2;
          }
          else if (&DAT_1404853e8 < ppppppuVar29) {
            ppppppuVar37 = ppppppuVar29 + -0x28090a7d;
          }
          lVar31 = local_b8 + 1;
          local_b8 = local_b8 + 2;
          FUN_1404210f0((undefined2 *)((longlong)ppppppuVar29 + 2),ppppppuVar29,lVar31);
          FUN_1404210f0(ppppppuVar29,&DAT_1404853e8,ppppppuVar37);
          FUN_1404210f0((longlong)ppppppuVar37 + (longlong)ppppppuVar29,
                        (undefined2 *)((longlong)ppppppuVar37 + 0x1404853ea),
                        2 - (longlong)ppppppuVar37);
        }
        local_a8 = local_c8;
        uStack_a0 = uStack_c0;
        local_98 = local_b8;
        uStack_90 = uStack_b0;
        plVar20 = (longlong *)FUN_1400532a0(&local_a8,&DAT_1404736e4,1);
        uVar26 = plVar20[2];
        uVar36 = plVar20[3];
        ppppppcVar24 = (char ******)*plVar20;
        lStack_e0 = plVar20[1];
        plVar20[2] = 0;
        plVar20[3] = 0xf;
        *(undefined1 *)plVar20 = 0;
        ppppppcVar35 = &local_e8;
        if (0xf < uVar36) {
          ppppppcVar35 = ppppppcVar24;
        }
        local_e8 = (char *****)ppppppcVar24;
        local_d8 = uVar26;
        uStack_d0 = uVar36;
        if (local_f0 - local_f8 < uVar26) {
          local_128 = uVar26;
          FUN_140053110(&local_108,uVar26,uVar25 & 0xff);
          uVar36 = uStack_d0;
          ppppppcVar24 = (char ******)local_e8;
        }
        else {
          ppppppuVar37 = &local_108;
          if (0xf < local_f0) {
            ppppppuVar37 = (undefined8 ******)local_108;
          }
          lVar31 = (longlong)ppppppuVar37 + local_f8;
          local_f8 = local_f8 + uVar26;
          FUN_1404210f0(lVar31,ppppppcVar35,uVar26);
          *(undefined1 *)(uVar26 + lVar31) = 0;
        }
        if (0xf < uVar36) {
          uVar26 = uVar36 + 1;
          ppppppcVar35 = ppppppcVar24;
          if (0xfff < uVar26) {
            ppppppcVar35 = (char ******)ppppppcVar24[-1];
            if ((char *)0x1f < (char *)((longlong)ppppppcVar24 + (-8 - (longlong)ppppppcVar35)))
            goto LAB_1400915bc;
            uVar26 = uVar36 + 0x28;
          }
          thunk_FUN_14028af80(ppppppcVar35,uVar26);
        }
        if (0xf < uStack_90) {
          uVar26 = uStack_90 + 1;
          ppppppuVar37 = (undefined8 ******)local_a8;
          if (0xfff < uVar26) {
            ppppppuVar37 = (undefined8 ******)local_a8[-1];
            if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)ppppppuVar37)))
            goto LAB_1400915bc;
            uVar26 = uStack_90 + 0x28;
          }
          thunk_FUN_14028af80(ppppppuVar37,uVar26);
        }
        lVar31 = local_res10;
        if (0x7fffffffffffffffU - *(longlong *)(local_res10 + 0x28) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_1400172e0();
        }
        local_120 = local_res10 + 0x18;
        if (0xf < *(ulonglong *)(local_res10 + 0x30)) {
          local_120 = *(longlong *)local_120;
        }
        local_128 = 2;
        local_118 = *(longlong *)(local_res10 + 0x28);
        FUN_14003a790(&local_e8);
        puVar21 = (undefined8 *)FUN_1400532a0(&local_e8,&DAT_1404736e4,1);
        uVar26 = puVar21[2];
        uVar36 = puVar21[3];
        ppppppuVar37 = (undefined8 ******)*puVar21;
        uStack_a0 = puVar21[1];
        puVar21[2] = 0;
        puVar21[3] = 0xf;
        *(undefined1 *)puVar21 = 0;
        local_88 = local_f8;
        ppppppuVar29 = &local_a8;
        if (0xf < uVar36) {
          ppppppuVar29 = ppppppuVar37;
        }
        local_a8 = ppppppuVar37;
        local_98 = uVar26;
        uStack_90 = uVar36;
        if (local_f0 - local_f8 < uVar26) {
          local_128 = uVar26;
          FUN_140053110(&local_108,uVar26,uVar25 & 0xff);
          uVar36 = uStack_90;
          ppppppuVar37 = (undefined8 ******)local_a8;
        }
        else {
          ppppppuVar32 = &local_108;
          if (0xf < local_f0) {
            ppppppuVar32 = (undefined8 ******)local_108;
          }
          lVar31 = local_f8 + (longlong)ppppppuVar32;
          local_f8 = uVar26 + local_f8;
          FUN_1404210f0(lVar31,ppppppuVar29,uVar26);
          *(undefined1 *)((longlong)ppppppuVar32 + local_88 + uVar26) = 0;
          lVar31 = local_res10;
        }
        if (0xf < uVar36) {
          uVar26 = uVar36 + 1;
          ppppppuVar29 = ppppppuVar37;
          if (0xfff < uVar26) {
            ppppppuVar29 = (undefined8 ******)ppppppuVar37[-1];
            if (0x1f < (ulonglong)((longlong)ppppppuVar37 + (-8 - (longlong)ppppppuVar29)))
            goto LAB_1400915bc;
            uVar26 = uVar36 + 0x28;
          }
          thunk_FUN_14028af80(ppppppuVar29,uVar26);
        }
        if (0xf < uStack_d0) {
          uVar26 = uStack_d0 + 1;
          ppppppcVar24 = (char ******)local_e8;
          if (0xfff < uVar26) {
            ppppppcVar24 = (char ******)local_e8[-1];
            if ((char *)0x1f < (char *)((longlong)local_e8 + (-8 - (longlong)ppppppcVar24)))
            goto LAB_1400915bc;
            uVar26 = uStack_d0 + 0x28;
          }
          thunk_FUN_14028af80(ppppppcVar24,uVar26);
        }
        if (*(longlong *)(lVar31 + 0x38) != 0) {
          uVar22 = FUN_140090a70(param_1 + 0x10,local_78);
          uVar22 = FUN_14002fd20(&local_e8,&DAT_140485448,uVar22);
          puVar21 = (undefined8 *)FUN_1400532a0(uVar22," for detail.\n",0xd);
          local_98 = puVar21[2];
          uStack_90 = puVar21[3];
          local_a8 = (undefined8 *****)*puVar21;
          uStack_a0 = puVar21[1];
          puVar21[2] = 0;
          puVar21[3] = 0xf;
          *(undefined1 *)puVar21 = 0;
          ppppppuVar37 = &local_a8;
          if (0xf < uStack_90) {
            ppppppuVar37 = (undefined8 ******)local_a8;
          }
          FUN_1400532a0(&local_108,ppppppuVar37,local_98);
          if (0xf < uStack_90) {
            uVar26 = uStack_90 + 1;
            ppppppuVar37 = (undefined8 ******)local_a8;
            if (0xfff < uVar26) {
              ppppppuVar37 = (undefined8 ******)local_a8[-1];
              if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)ppppppuVar37)))
              goto LAB_1400915bc;
              uVar26 = uStack_90 + 0x28;
            }
            thunk_FUN_14028af80(ppppppuVar37,uVar26);
          }
          FUN_140017240(&local_e8);
          FUN_140017240(local_78);
        }
        local_res18 = local_res18 + 1;
      } while (local_res18 != local_80);
    }
    FUN_14000de40(param_5,&local_108);
    if (0xf < local_f0) {
      uVar25 = local_f0 + 1;
      ppppppuVar37 = (undefined8 ******)local_108;
      if (0xfff < uVar25) {
        ppppppuVar37 = (undefined8 ******)local_108[-1];
        if (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)ppppppuVar37))) {
LAB_1400915bc:
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          puVar28 = auStack_140;
LAB_1400915c3:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar28 + -8) = &UNK_1400915c8;
          FUN_1400172e0();
        }
        uVar25 = local_f0 + 0x28;
      }
      thunk_FUN_14028af80(ppppppuVar37,uVar25);
    }
  }
  return local_res8 & 0xff;
}

