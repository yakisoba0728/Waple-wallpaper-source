// Function: FUN_14011cf10
// Addr: 14011cf10
// Size: 1171 bytes


void FUN_14011cf10(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  size_t sVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 ****ppppuVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  char *pcVar15;
  undefined1 *puVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  undefined8 local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined8 ***local_a8;
  longlong lStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_78;
  ulonglong local_70;
  longlong *local_68;
  uint local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong *local_40;
  ulonglong *local_38;
  longlong local_30;
  
  puVar16 = auStack_e8;
  local_60 = CONCAT31(local_60._1_3_,7);
  local_60 = local_60 & 0xfffffeff;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  plVar5 = (longlong *)FUN_14028af20(0x10);
  *plVar5 = 0;
  plVar5[1] = 0;
  lVar6 = FUN_14028af20(0x58);
  *(longlong *)lVar6 = lVar6;
  *(longlong *)(lVar6 + 8) = lVar6;
  *(longlong *)(lVar6 + 0x10) = lVar6;
  *(undefined2 *)(lVar6 + 0x18) = 0x101;
  *plVar5 = lVar6;
  pcVar15 = (char *)(param_1 + 0x10);
  if (0xf < *(ulonglong *)(param_1 + 0x28)) {
    pcVar15 = *(char **)pcVar15;
  }
  uStack_c0 = 0;
  local_b8 = 6;
  local_b0 = 0xf;
  local_c8 = (undefined8 *)(ulonglong)CONCAT24(s_plugin_140489a68._4_2_,s_plugin_140489a68._0_4_);
  local_68 = plVar5;
  sVar7 = strlen(pcVar15);
  plVar5 = (longlong *)FUN_1400532a0(&local_c8,pcVar15,sVar7);
  local_a8 = (undefined8 ***)*plVar5;
  lStack_a0 = plVar5[1];
  local_98 = plVar5[2];
  uStack_90 = plVar5[3];
  plVar5[2] = 0;
  plVar5[3] = 0xf;
  *(undefined1 *)plVar5 = 0;
  if (0xf < local_b0) {
    uVar12 = local_b0 + 1;
    puVar8 = local_c8;
    if (0xfff < uVar12) {
      puVar8 = (undefined8 *)local_c8[-1];
      if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)puVar8))) goto LAB_14011d392;
      uVar12 = local_b0 + 0x28;
    }
    thunk_FUN_14028af80(puVar8,uVar12);
  }
  FUN_140088360(param_2,&local_40);
  for (puVar17 = local_40; puVar17 != local_38; puVar17 = puVar17 + 4) {
    uVar12 = puVar17[2];
    local_c8 = (undefined8 *)0x0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    puVar18 = puVar17;
    if (0xf < puVar17[3]) {
      puVar18 = (ulonglong *)*puVar17;
    }
    if (0x7fffffffffffffff < uVar12) goto LAB_14011d399;
    if (uVar12 < 0x10) {
      local_b0 = 0xf;
      local_c8 = (undefined8 *)*puVar18;
      uStack_c0 = puVar18[1];
      local_b8 = uVar12;
    }
    else {
      uVar14 = uVar12 | 0xf;
      if (uVar14 < 0x8000000000000000) {
        if (uVar14 < 0x16) {
          uVar14 = 0x16;
        }
        uVar1 = uVar14 + 1;
        puVar8 = (undefined8 *)0x0;
        if (uVar1 != 0) {
          if (0xfff < uVar1) {
            uVar10 = uVar14 + 0x28;
            if (uVar10 <= uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_140017370();
            }
            goto LAB_14011d107;
          }
          puVar8 = (undefined8 *)FUN_14028af20(uVar1);
        }
      }
      else {
        uVar14 = 0x7fffffffffffffff;
        uVar10 = 0x8000000000000027;
LAB_14011d107:
        lVar6 = FUN_14028af20(uVar10);
        if (lVar6 == 0) goto LAB_14011d392;
        puVar8 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
        puVar8[-1] = lVar6;
      }
      local_c8 = puVar8;
      local_b8 = uVar12;
      local_b0 = uVar14;
      FUN_1404210f0(puVar8,puVar18,uVar12 + 1);
    }
    ppppuVar11 = &local_a8;
    if (0xf < uStack_90) {
      ppppuVar11 = (undefined8 ****)local_a8;
    }
    puVar8 = &local_c8;
    if (0xf < local_b0) {
      puVar8 = local_c8;
    }
    iVar4 = FUN_1402c9e60(puVar8,ppppuVar11,local_98);
    if (iVar4 == 0) {
      puVar8 = &local_c8;
      if (0xf < local_b0) {
        puVar8 = local_c8;
      }
      lVar6 = FUN_140087490(param_2,puVar8,local_b8 + (longlong)puVar8);
      if (lVar6 == 0) {
        lVar6 = FUN_140084ac0();
      }
      lVar6 = FUN_140087490(lVar6,"value","");
      if (lVar6 == 0) {
        lVar6 = FUN_140084ac0();
      }
      puVar8 = &local_c8;
      if (0xf < local_b0) {
        puVar8 = local_c8;
      }
      pcVar15 = (char *)(local_98 + (longlong)puVar8);
      sVar7 = strlen(pcVar15);
      uVar9 = FUN_140086de0(&local_68,pcVar15,pcVar15 + sVar7);
      FUN_140085520(uVar9,lVar6);
    }
    if (0xf < local_b0) {
      uVar12 = local_b0 + 1;
      puVar8 = local_c8;
      if (0xfff < uVar12) {
        puVar8 = (undefined8 *)local_c8[-1];
        if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)puVar8))) goto LAB_14011d392;
        uVar12 = local_b0 + 0x28;
      }
      thunk_FUN_14028af80(puVar8,uVar12);
    }
  }
  puVar17 = local_40;
  if (local_40 != (ulonglong *)0x0) {
    for (; puVar17 != local_38; puVar17 = puVar17 + 4) {
      FUN_140017240(puVar17);
    }
    uVar12 = local_30 - (longlong)local_40 & 0xffffffffffffffe0;
    if (0xfff < uVar12) {
      if (0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)local_40[-1])))
      goto LAB_14011d392;
      uVar12 = uVar12 + 0x27;
      local_40 = (ulonglong *)local_40[-1];
    }
    thunk_FUN_14028af80(local_40,uVar12);
  }
  FUN_140004d00(&local_88,&local_68,0);
  puVar13 = &local_88;
  if (0xf < local_70) {
    puVar13 = (undefined1 *)CONCAT71(uStack_87,local_88);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),puVar13);
  if (0xf < local_70) {
    lVar3 = CONCAT71(uStack_87,local_88);
    uVar12 = local_70 + 1;
    lVar6 = lVar3;
    if (0xfff < uVar12) {
      lVar6 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar6) - 8U) goto LAB_14011d392;
      uVar12 = local_70 + 0x28;
    }
    thunk_FUN_14028af80(lVar6,uVar12);
  }
  local_78 = 0;
  local_70 = 0xf;
  local_88 = 0;
  if (0xf < uStack_90) {
    uVar12 = uStack_90 + 1;
    ppppuVar11 = (undefined8 ****)local_a8;
    if (0xfff < uVar12) {
      ppppuVar11 = (undefined8 ****)local_a8[-1];
      if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)ppppuVar11))) {
LAB_14011d392:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar16 = auStack_e0;
LAB_14011d399:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar16 + -8) = &UNK_14011d39e;
        FUN_1400172e0();
      }
      uVar12 = uStack_90 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar11,uVar12);
  }
  local_98 = 0;
  uStack_90 = 0xf;
  local_a8 = (undefined8 ***)((ulonglong)local_a8 & 0xffffffffffffff00);
  FUN_140085440(&local_68);
  return;
}

