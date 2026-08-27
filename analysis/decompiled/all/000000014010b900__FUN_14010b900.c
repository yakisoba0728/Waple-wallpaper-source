// Function: FUN_14010b900
// Addr: 14010b900
// Size: 2573 bytes


void FUN_14010b900(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  size_t sVar16;
  longlong lVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  uint uVar22;
  char *pcVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined8 *local_res8;
  char local_res10;
  int local_res18;
  longlong *local_res20;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [24];
  undefined8 local_168;
  longlong lStack_160;
  longlong local_158;
  ulonglong uStack_150;
  longlong local_148;
  uint local_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 local_120;
  uint local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong *local_f8;
  uint local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 *local_c8;
  uint local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined **local_a0;
  undefined1 local_98 [40];
  longlong local_70 [3];
  ulonglong local_58;
  
  puVar1 = param_1 + 0x15;
  local_res8 = param_1;
  if (puVar1 == param_2) goto LAB_14010badd;
  uVar3 = *param_2;
  uVar20 = *puVar1;
  uVar25 = (longlong)(param_2[1] - uVar3) >> 3;
  uVar19 = (longlong)(param_1[0x17] - uVar20) >> 3;
  if (uVar19 < uVar25) {
    if (0x1fffffffffffffff < uVar25) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    if (0x1fffffffffffffff - (uVar19 >> 1) < uVar19) {
      uVar24 = 0x1fffffffffffffff;
    }
    else {
      uVar24 = (uVar19 >> 1) + uVar19;
      if (uVar24 < uVar25) {
        uVar24 = uVar25;
      }
    }
    if (uVar20 != 0) {
      uVar19 = uVar19 * 8;
      if (uVar19 < 0x1000) {
LAB_14010b9c3:
        thunk_FUN_14028af80(uVar20,uVar19);
        *puVar1 = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        goto LAB_14010b9e5;
      }
      if ((uVar20 - *(ulonglong *)(uVar20 - 8)) - 8 < 0x20) {
        uVar19 = uVar19 + 0x27;
        uVar20 = *(ulonglong *)(uVar20 - 8);
        goto LAB_14010b9c3;
      }
LAB_14010c2fc:
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar21 = auStack_180;
LAB_14010c303:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar21 + -8) = &UNK_14010c308;
      FUN_140017370();
    }
LAB_14010b9e5:
    puVar21 = auStack_188;
    if (0x1fffffffffffffff < uVar24) goto LAB_14010c303;
    uVar24 = uVar24 * 8;
    if (uVar24 == 0) {
      uVar19 = 0;
    }
    else if (uVar24 < 0x1000) {
      uVar19 = FUN_14028af20(uVar24);
    }
    else {
      puVar21 = auStack_188;
      if (uVar24 + 0x27 <= uVar24) goto LAB_14010c303;
      lVar11 = FUN_14028af20();
      if (lVar11 == 0) goto LAB_14010c2fc;
      uVar19 = lVar11 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar19 - 8) = lVar11;
    }
    *puVar1 = uVar19;
    param_1[0x16] = uVar19;
    param_1[0x17] = uVar19 + uVar24;
    uVar19 = *puVar1;
    FUN_1404210f0(uVar19,uVar3,uVar25 * 8);
    lVar11 = uVar25 * 8 + uVar19;
  }
  else {
    uVar19 = (longlong)(param_1[0x16] - uVar20) >> 3;
    if (uVar19 < uVar25) {
      FUN_1404210f0(uVar20,uVar3,uVar19 * 8);
      lVar17 = param_1[0x16];
      lVar11 = (uVar25 - uVar19) * 8;
      FUN_1404210f0(lVar17,uVar19 * 8 + uVar3,lVar11);
      lVar11 = lVar11 + lVar17;
    }
    else {
      uVar19 = param_2[1] - uVar3 & 0xfffffffffffffff8;
      FUN_1404210f0(uVar20,uVar3,uVar19);
      lVar11 = uVar19 + uVar20;
    }
  }
  param_1[0x16] = lVar11;
LAB_14010badd:
  if (param_1[0x15] != param_1[0x16]) {
    local_f0 = CONCAT31(local_f0._1_3_,7);
    local_f0 = local_f0 & 0xfffffeff;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    plVar10 = (longlong *)FUN_14028af20(0x10);
    *plVar10 = 0;
    plVar10[1] = 0;
    lVar11 = FUN_14028af20(0x58);
    *(longlong *)lVar11 = lVar11;
    *(longlong *)(lVar11 + 8) = lVar11;
    *(longlong *)(lVar11 + 0x10) = lVar11;
    *(undefined2 *)(lVar11 + 0x18) = 0x101;
    *plVar10 = lVar11;
    plVar15 = (longlong *)param_1[0x15];
    local_d0 = (longlong *)param_1[0x16];
    local_res20 = plVar15;
    local_f8 = plVar10;
    if (plVar15 != local_d0) {
      local_res18 = -1000;
      do {
        lVar11 = *plVar15;
        local_c0 = (local_c0 >> 8 & 0xfffffe) << 8;
        local_a0 = &PTR_FUN_1404776f8;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        local_res20 = plVar15;
        FUN_140084dd0(local_98,0);
        (**(code **)(**(longlong **)(lVar11 + 8) + 0x18))(*(longlong **)(lVar11 + 8),&local_a0);
        FUN_140085520(&local_c8);
        puVar4 = local_c8;
        cVar2 = (char)local_c0;
        if ((char)local_c0 == '\x06') {
          plVar15 = (longlong *)(lVar11 + 0x10);
          if (0xf < *(ulonglong *)(lVar11 + 0x28)) {
            plVar15 = (longlong *)*plVar15;
          }
          local_158 = 6;
          lStack_160 = 0;
          uStack_150 = 0xf;
          local_168 = (undefined8 *)
                      (ulonglong)CONCAT24(s_plugin_140489a68._4_2_,s_plugin_140489a68._0_4_);
          FUN_140076f60(local_70,&local_168,plVar15);
          if (0xf < uStack_150) {
            uVar19 = uStack_150 + 1;
            puVar12 = local_168;
            if (0xfff < uVar19) {
              puVar12 = (undefined8 *)local_168[-1];
              if (0x1f < (ulonglong)((longlong)local_168 + (-8 - (longlong)puVar12)))
              goto LAB_14010c2fc;
              uVar19 = uStack_150 + 0x28;
            }
            thunk_FUN_14028af80(puVar12,uVar19);
          }
          local_res10 = puVar4 == (undefined8 *)0x0;
          if ((bool)local_res10) {
            plVar15 = (longlong *)0x0;
          }
          else {
            plVar15 = *(longlong **)*puVar4;
          }
          plVar10 = (longlong *)0x0;
          if (puVar4 == (undefined8 *)0x0) {
            bVar7 = true;
          }
          else {
            plVar10 = (longlong *)*puVar4;
            bVar7 = false;
          }
          while( true ) {
            bVar6 = bVar7;
            if (local_res10 == '\0') {
              bVar6 = plVar15 == plVar10;
            }
            if (bVar6) break;
            lVar11 = FUN_140086de0(plVar15 + 6,&DAT_1404748b8,&DAT_1404748bc);
            local_118 = CONCAT31(local_118._1_3_,5);
            local_120 = CONCAT71(local_120._1_7_,1);
            uVar22 = local_118 & 0xfffffeff;
            puVar12 = (undefined8 *)FUN_140086de0(plVar15 + 6,"plugin","");
            local_118 = *(uint *)(puVar12 + 1);
            *(uint *)(puVar12 + 1) = uVar22;
            uVar13 = *puVar12;
            *puVar12 = local_120;
            local_110 = puVar12[2];
            puVar12[2] = 0;
            local_108 = puVar12[3];
            local_100 = puVar12[4];
            puVar12[3] = 0;
            puVar12[4] = 0;
            local_120 = uVar13;
            FUN_140085440(&local_120);
            if (*(char *)(lVar11 + 8) == '\x04') {
              uVar13 = FUN_140085cc0(lVar11,&local_120);
              plVar14 = (longlong *)FUN_1400f9070(uVar13,0,local_70);
              local_140 = CONCAT31(local_140._1_3_,4);
              local_140 = local_140 | 0x100;
              local_138 = 0;
              lStack_130 = 0;
              local_128 = 0;
              local_158 = plVar14[2];
              uStack_150 = plVar14[3];
              local_168 = (undefined8 *)*plVar14;
              lStack_160 = plVar14[1];
              plVar14[2] = 0;
              plVar14[3] = 0xf;
              *(undefined1 *)plVar14 = 0;
              puVar12 = &local_168;
              if (0xf < uStack_150) {
                puVar12 = local_168;
              }
              local_148 = FUN_140084b30(puVar12,local_158);
              FUN_140085610(lVar11,&local_148);
              FUN_140085440(&local_148);
              if (0xf < uStack_150) {
                uVar19 = uStack_150 + 1;
                puVar12 = local_168;
                if (0xfff < uVar19) {
                  puVar12 = (undefined8 *)local_168[-1];
                  if (0x1f < (ulonglong)((longlong)local_168 + (-8 - (longlong)puVar12)))
                  goto LAB_14010c2fc;
                  uVar19 = uStack_150 + 0x28;
                }
                thunk_FUN_14028af80(puVar12,uVar19);
              }
              FUN_140017240(&local_120);
            }
            plVar14 = (longlong *)plVar15[2];
            if (*(char *)((longlong)plVar14 + 0x19) == '\0') {
              cVar2 = *(char *)(*plVar14 + 0x19);
              plVar15 = plVar14;
              while (cVar2 == '\0') {
                plVar15 = (longlong *)*plVar15;
                cVar2 = *(char *)(*plVar15 + 0x19);
              }
            }
            else {
              cVar2 = *(char *)(plVar15[1] + 0x19);
              plVar9 = (longlong *)plVar15[1];
              plVar14 = plVar15;
              while ((plVar15 = plVar9, cVar2 == '\0' && (plVar14 == (longlong *)plVar15[2]))) {
                cVar2 = *(char *)(plVar15[1] + 0x19);
                plVar9 = (longlong *)plVar15[1];
                plVar14 = plVar15;
              }
            }
          }
          if (local_58 < 0x10) {
            plVar15 = local_res20;
            cVar2 = (char)local_c0;
            goto LAB_14010bed1;
          }
          lVar11 = local_70[0];
          if ((0xfff < local_58 + 1) &&
             (lVar11 = *(longlong *)(local_70[0] + -8), 0x1f < (local_70[0] - lVar11) - 8U))
          goto LAB_14010c2fc;
          thunk_FUN_14028af80(lVar11);
          FUN_140085440(local_98);
LAB_14010bee2:
          if (puVar4 == (undefined8 *)0x0) {
            plVar10 = (longlong *)0x0;
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar10 = *(longlong **)*puVar4;
            plVar14 = (longlong *)*puVar4;
          }
          while (iVar8 = local_res18, plVar15 = local_res20,
                puVar4 != (undefined8 *)0x0 && plVar10 != plVar14) {
            plVar15 = (longlong *)FUN_140086de0(plVar10 + 6,&DAT_1404748b8,&DAT_1404748bc);
            pcVar23 = (char *)*plVar15;
            if ((pcVar23 != (char *)0x0) && ((*(uint *)(plVar15 + 1) >> 8 & 1) != 0)) {
              pcVar23 = pcVar23 + 4;
            }
            local_158 = 0;
            uStack_150 = 0;
            local_168 = (undefined8 *)0x0;
            lStack_160 = 0;
            sVar16 = strlen(pcVar23);
            FUN_140017480(&local_168,pcVar23,sVar16);
            local_140 = CONCAT31(local_140._1_3_,1);
            uVar22 = local_140 & 0xfffffeff;
            plVar15 = (longlong *)FUN_140086de0(plVar10 + 6,"order");
            local_140 = *(uint *)(plVar15 + 1);
            *(uint *)(plVar15 + 1) = uVar22;
            local_148 = *plVar15;
            *plVar15 = (longlong)iVar8;
            lVar11 = plVar15[2];
            plVar15[2] = 0;
            lStack_130 = plVar15[3];
            local_128 = plVar15[4];
            plVar15[3] = 0;
            plVar15[4] = 0;
            local_138 = lVar11;
            FUN_140086d30(&local_148);
            if (lVar11 != 0) {
              FUN_140017240(lVar11 + 0x40);
              FUN_140017240(lVar11 + 0x20);
              FUN_140017240(lVar11);
              thunk_FUN_14028af80(lVar11,0x60);
            }
            puVar12 = &local_168;
            if (0xf < uStack_150) {
              puVar12 = local_168;
            }
            lVar11 = FUN_140087490(&DAT_1404e7ed0,puVar12,local_158 + (longlong)puVar12);
            if (lVar11 != 0) {
              puVar12 = &local_168;
              if (0xf < uStack_150) {
                puVar12 = local_168;
              }
              lVar11 = FUN_140087490(&DAT_1404e7ed0,puVar12,local_158 + (longlong)puVar12);
              if (lVar11 == 0) {
                lVar11 = FUN_140084ac0();
              }
              uVar13 = FUN_140086de0(plVar10 + 6,"value","");
              FUN_140085520(uVar13,lVar11);
            }
            puVar12 = &local_168;
            if (0xf < uStack_150) {
              puVar12 = local_168;
            }
            uVar13 = FUN_140086de0(&local_f8,puVar12,local_158 + (longlong)puVar12);
            FUN_140085520(uVar13,plVar10 + 6);
            if (0xf < uStack_150) {
              puVar12 = local_168;
              if ((0xfff < uStack_150 + 1) &&
                 (puVar12 = (undefined8 *)local_168[-1],
                 0x1f < (ulonglong)((longlong)local_168 + (-8 - (longlong)puVar12))))
              goto LAB_14010c2fc;
              thunk_FUN_14028af80(puVar12);
            }
            plVar15 = (longlong *)plVar10[2];
            local_res18 = iVar8 + 1;
            if (*(char *)((longlong)plVar15 + 0x19) == '\0') {
              cVar2 = *(char *)(*plVar15 + 0x19);
              plVar10 = plVar15;
              while (cVar2 == '\0') {
                plVar10 = (longlong *)*plVar10;
                cVar2 = *(char *)(*plVar10 + 0x19);
              }
            }
            else {
              cVar2 = *(char *)(plVar10[1] + 0x19);
              plVar9 = (longlong *)plVar10[1];
              plVar15 = plVar10;
              while ((plVar10 = plVar9, cVar2 == '\0' && (plVar15 == (longlong *)plVar10[2]))) {
                cVar2 = *(char *)(plVar10[1] + 0x19);
                plVar9 = (longlong *)plVar10[1];
                plVar15 = plVar10;
              }
            }
          }
        }
        else {
LAB_14010bed1:
          FUN_140085440(local_98);
          if (cVar2 == '\x06') goto LAB_14010bee2;
        }
        FUN_140085440(&local_c8);
        plVar15 = plVar15 + 1;
        param_1 = local_res8;
        local_res20 = plVar15;
      } while (plVar15 != local_d0);
    }
    uVar13 = FUN_140086de0(param_1 + 7,"initalwproperties","");
    FUN_140109f80(&local_f8,uVar13);
    lVar11 = FUN_140086de0(param_1 + 7,"wproperties","");
    if ((*(char *)(lVar11 + 8) == '\a') && ((char)local_f0 == '\a')) {
      puVar4 = (undefined8 *)*local_f8;
      puVar12 = (undefined8 *)*puVar4;
      while (local_res8 = puVar12, puVar12 != puVar4) {
        pcVar23 = (char *)puVar12[4];
        sVar16 = strlen(pcVar23);
        lVar17 = FUN_140087490(lVar11,pcVar23,pcVar23 + sVar16);
        if (lVar17 == 0) {
          pcVar23 = (char *)puVar12[4];
          sVar16 = strlen(pcVar23);
          lVar17 = FUN_140087490(&local_f8,pcVar23,pcVar23 + sVar16);
          if (lVar17 == 0) {
            lVar17 = FUN_140084ac0();
          }
          pcVar23 = (char *)puVar12[4];
          sVar16 = strlen(pcVar23);
          uVar13 = FUN_140086de0(lVar11,pcVar23,pcVar23 + sVar16);
          FUN_140085520(uVar13,lVar17);
        }
        FUN_1400175a0(&local_res8);
        puVar12 = local_res8;
      }
    }
    puVar4 = (undefined8 *)param_1[0x16];
    for (puVar12 = (undefined8 *)param_1[0x15]; puVar12 != puVar4; puVar12 = puVar12 + 1) {
      uVar13 = *puVar12;
      uVar18 = FUN_140086de0(param_1 + 7,"wproperties","");
      FUN_14011cf10(uVar13,uVar18);
    }
    FUN_140085440(&local_f8);
  }
  return;
}

