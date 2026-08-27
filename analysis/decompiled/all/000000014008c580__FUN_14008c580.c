// Function: FUN_14008c580
// Addr: 14008c580
// Size: 2047 bytes


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_14008c580(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  undefined4 local_res20;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [24];
  ulonglong local_178 [4];
  undefined4 local_158;
  undefined8 *******local_150;
  undefined8 uStack_148;
  longlong local_140;
  ulonglong local_138;
  undefined8 *local_130;
  ulonglong local_128 [6];
  longlong local_f8;
  ulonglong local_f0;
  undefined8 *******local_e8 [2];
  longlong local_d8;
  ulonglong local_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  
  param_1 = param_1 + 8;
  lVar10 = FUN_140087490(param_1,"indentation","");
  if (lVar10 == 0) {
    lVar10 = FUN_140084ac0();
  }
  FUN_140085cc0(lVar10,local_128 + 4);
  lVar10 = FUN_140087490(param_1,"commentStyle","");
  if (lVar10 == 0) {
    lVar10 = FUN_140084ac0();
  }
  FUN_140085cc0(lVar10,local_e8);
  lVar10 = FUN_140087490(param_1,"precisionType","");
  if (lVar10 == 0) {
    lVar10 = FUN_140084ac0();
  }
  FUN_140085cc0(lVar10,&local_150);
  lVar10 = FUN_140087490(param_1,"enableYAMLCompatibility","");
  if (lVar10 == 0) {
    lVar10 = FUN_140084ac0();
  }
  cVar4 = FUN_140086300(lVar10);
  lVar10 = FUN_140087490(param_1,"dropNullPlaceholders","");
  if (lVar10 == 0) {
    lVar10 = FUN_140084ac0();
  }
  cVar5 = FUN_140086300(lVar10);
  lVar10 = FUN_140087490(param_1,"useSpecialFloats","");
  if (lVar10 == 0) {
    lVar10 = FUN_140084ac0();
  }
  cVar6 = FUN_140086300(lVar10);
  lVar10 = FUN_140087490(param_1,"emitUTF8","");
  if (lVar10 == 0) {
    lVar10 = FUN_140084ac0();
  }
  cVar7 = FUN_140086300(lVar10);
  lVar10 = FUN_140087490(param_1,"precision","");
  if (lVar10 == 0) {
    lVar10 = FUN_140084ac0();
  }
  uVar8 = FUN_140085f70(lVar10);
  uVar19 = local_d0;
  pppppppuVar15 = local_e8;
  if (0xf < local_d0) {
    pppppppuVar15 = local_e8[0];
  }
  if ((local_d8 == 3) && (iVar9 = memcmp(pppppppuVar15,&DAT_140478aa8,3), iVar9 == 0)) {
    local_res20 = 2;
  }
  else {
    pppppppuVar15 = local_e8;
    if (0xf < uVar19) {
      pppppppuVar15 = local_e8[0];
    }
    if ((local_d8 != 4) || (iVar9 = memcmp(pppppppuVar15,&DAT_140472248,4), iVar9 != 0)) {
      FUN_140017170(local_128 + 4,"commentStyle must be \'All\' or \'None\'");
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(local_128 + 4);
    }
    local_res20 = 0;
  }
  uVar19 = local_138;
  lVar10 = local_140;
  pppppppuVar15 = local_150;
  pppppppuVar16 = &local_150;
  if (0xf < local_138) {
    pppppppuVar16 = local_150;
  }
  if ((local_140 == 0xb) && (iVar9 = memcmp(pppppppuVar16,"significant",0xb), iVar9 == 0)) {
    local_158 = 0;
  }
  else {
    pppppppuVar16 = &local_150;
    if (0xf < uVar19) {
      pppppppuVar16 = pppppppuVar15;
    }
    puVar20 = auStack_198;
    if ((lVar10 != 7) ||
       (iVar9 = memcmp(pppppppuVar16,"decimal",7), puVar20 = auStack_198, iVar9 != 0))
    goto LAB_14008cd4d;
    local_158 = 1;
  }
  local_178[2] = 3;
  local_178[3] = 0xf;
  local_178[1] = 0;
  local_178[0] = (ulonglong)(uint3)DAT_1404789c4;
  uVar17 = local_178[0];
  if (cVar4 == '\0') {
    if (local_f8 == 0) {
      local_178[2] = 1;
      local_178[0] = CONCAT62((uint6)(byte)((uint)DAT_1404789c4 >> 0x10),0x3a);
      uVar17 = local_178[0];
    }
  }
  else {
    local_178[2] = 2;
    local_178[0] = 0x203a;
    uVar17 = local_178[0];
  }
  local_178[0] = uVar17;
  local_128[2] = 4;
  local_128[3] = 0xf;
  local_128[1] = 0;
  local_128[0] = (ulonglong)DAT_14047893c;
  if (cVar5 != '\0') {
    local_128[2] = 0;
    local_128[0] = (ulonglong)(DAT_14047893c >> 8) << 8;
  }
  local_140 = 0;
  uStack_148 = 0;
  if (0x11 < uVar8) {
    uVar8 = 0x11;
  }
  local_138 = 0xf;
  local_150 = (undefined8 *******)0x0;
  local_130 = (undefined8 *)FUN_14028af20(0xe8);
  plVar11 = (longlong *)FUN_140016fc0(local_c8,&local_150);
  plVar12 = (longlong *)FUN_140016fc0(local_a8,local_128);
  plVar13 = (longlong *)FUN_140016fc0(local_88,local_178);
  plVar14 = (longlong *)FUN_140016fc0(local_68);
  local_130[2] = 0;
  local_130[3] = 0;
  local_130[4] = 0;
  *local_130 = &PTR_FUN_140478b50;
  local_130[1] = 0;
  local_130[5] = 0;
  local_130[6] = 0;
  local_130[7] = 0;
  local_130[8] = 0xf;
  *(undefined1 *)(local_130 + 5) = 0;
  *(undefined4 *)(local_130 + 9) = 0x4a;
  local_130[10] = 0;
  local_130[0xb] = 0;
  local_130[0xc] = 0;
  local_130[0xd] = 0;
  lVar10 = plVar14[1];
  local_130[10] = *plVar14;
  local_130[0xb] = lVar10;
  lVar10 = plVar14[3];
  local_130[0xc] = plVar14[2];
  local_130[0xd] = lVar10;
  plVar14[2] = 0;
  plVar14[3] = 0xf;
  *(undefined1 *)plVar14 = 0;
  *(undefined4 *)(local_130 + 0xe) = local_res20;
  local_130[0xf] = 0;
  local_130[0x10] = 0;
  local_130[0x11] = 0;
  local_130[0x12] = 0;
  lVar10 = plVar13[1];
  local_130[0xf] = *plVar13;
  local_130[0x10] = lVar10;
  lVar10 = plVar13[3];
  local_130[0x11] = plVar13[2];
  local_130[0x12] = lVar10;
  plVar13[2] = 0;
  plVar13[3] = 0xf;
  *(undefined1 *)plVar13 = 0;
  local_130[0x13] = 0;
  local_130[0x14] = 0;
  local_130[0x15] = 0;
  local_130[0x16] = 0;
  lVar10 = plVar12[1];
  local_130[0x13] = *plVar12;
  local_130[0x14] = lVar10;
  lVar10 = plVar12[3];
  local_130[0x15] = plVar12[2];
  local_130[0x16] = lVar10;
  plVar12[2] = 0;
  plVar12[3] = 0xf;
  *(undefined1 *)plVar12 = 0;
  local_130[0x17] = 0;
  local_130[0x18] = 0;
  local_130[0x19] = 0;
  local_130[0x1a] = 0;
  uVar2 = *(undefined4 *)((longlong)plVar11 + 4);
  lVar10 = plVar11[1];
  uVar3 = *(undefined4 *)((longlong)plVar11 + 0xc);
  *(int *)(local_130 + 0x17) = (int)*plVar11;
  *(undefined4 *)((longlong)local_130 + 0xbc) = uVar2;
  *(int *)(local_130 + 0x18) = (int)lVar10;
  *(undefined4 *)((longlong)local_130 + 0xc4) = uVar3;
  uVar2 = *(undefined4 *)((longlong)plVar11 + 0x14);
  lVar10 = plVar11[3];
  uVar3 = *(undefined4 *)((longlong)plVar11 + 0x1c);
  *(int *)(local_130 + 0x19) = (int)plVar11[2];
  *(undefined4 *)((longlong)local_130 + 0xcc) = uVar2;
  *(int *)(local_130 + 0x1a) = (int)lVar10;
  *(undefined4 *)((longlong)local_130 + 0xd4) = uVar3;
  plVar11[2] = 0;
  *(undefined1 *)plVar11 = 0;
  plVar11[3] = 0xf;
  *(byte *)(local_130 + 0x1b) = *(byte *)(local_130 + 0x1b) & 0xf8;
  *(byte *)(local_130 + 0x1b) = (cVar6 << 2 | *(byte *)(local_130 + 0x1b)) & 0xf7 | cVar7 << 3;
  *(uint *)((longlong)local_130 + 0xdc) = uVar8;
  *(undefined4 *)(local_130 + 0x1c) = local_158;
  uVar17 = plVar14[3];
  if (uVar17 < 0x10) {
LAB_14008cabf:
    plVar14[2] = 0;
    plVar14[3] = 0xf;
    *(undefined1 *)plVar14 = 0;
    uVar17 = plVar13[3];
    if (0xf < uVar17) {
      lVar10 = *plVar13;
      uVar18 = uVar17 + 1;
      if (0xfff < uVar18) {
        if (0x1f < (lVar10 - *(longlong *)(lVar10 + -8)) - 8U) goto LAB_14008cd46;
        uVar18 = uVar17 + 0x28;
        lVar10 = *(longlong *)(lVar10 + -8);
      }
      thunk_FUN_14028af80(lVar10,uVar18);
    }
    plVar13[3] = 0xf;
    plVar13[2] = 0;
    *(undefined1 *)plVar13 = 0;
    uVar17 = plVar12[3];
    if (0xf < uVar17) {
      lVar10 = *plVar12;
      uVar18 = uVar17 + 1;
      if (0xfff < uVar18) {
        if (0x1f < (lVar10 - *(longlong *)(lVar10 + -8)) - 8U) goto LAB_14008cd46;
        uVar18 = uVar17 + 0x28;
        lVar10 = *(longlong *)(lVar10 + -8);
      }
      thunk_FUN_14028af80(lVar10,uVar18);
    }
    plVar12[2] = 0;
    plVar12[3] = 0xf;
    *(undefined1 *)plVar12 = 0;
    uVar17 = plVar11[3];
    if (0xf < uVar17) {
      lVar10 = *plVar11;
      uVar18 = uVar17 + 1;
      if (0xfff < uVar18) {
        if (0x1f < (lVar10 - *(longlong *)(lVar10 + -8)) - 8U) goto LAB_14008cd46;
        uVar18 = uVar17 + 0x28;
        lVar10 = *(longlong *)(lVar10 + -8);
      }
      thunk_FUN_14028af80(lVar10,uVar18);
    }
    plVar11[2] = 0;
    plVar11[3] = 0xf;
    *(undefined1 *)plVar11 = 0;
    if (0xf < local_138) {
      uVar17 = local_138 + 1;
      pppppppuVar16 = local_150;
      if (0xfff < uVar17) {
        pppppppuVar16 = (undefined8 *******)local_150[-1];
        if (0x1f < (ulonglong)((longlong)local_150 + (-8 - (longlong)pppppppuVar16)))
        goto LAB_14008cd46;
        uVar17 = local_138 + 0x28;
      }
      thunk_FUN_14028af80(pppppppuVar16,uVar17);
    }
    if (0xf < local_128[3]) {
      uVar18 = local_128[3] + 1;
      uVar17 = local_128[0];
      if (0xfff < uVar18) {
        uVar17 = *(ulonglong *)(local_128[0] - 8);
        if (0x1f < (local_128[0] - uVar17) - 8) goto LAB_14008cd46;
        uVar18 = local_128[3] + 0x28;
      }
      thunk_FUN_14028af80(uVar17,uVar18);
    }
    if (0xf < local_178[3]) {
      uVar18 = local_178[3] + 1;
      uVar17 = local_178[0];
      if (0xfff < uVar18) {
        uVar17 = *(ulonglong *)(local_178[0] - 8);
        if (0x1f < (local_178[0] - uVar17) - 8) goto LAB_14008cd46;
        uVar18 = local_178[3] + 0x28;
      }
      thunk_FUN_14028af80(uVar17,uVar18);
    }
    if (0xf < uVar19) {
      uVar17 = uVar19 + 1;
      pppppppuVar16 = pppppppuVar15;
      if (0xfff < uVar17) {
        pppppppuVar16 = (undefined8 *******)pppppppuVar15[-1];
        if (0x1f < (ulonglong)((longlong)pppppppuVar15 + (-8 - (longlong)pppppppuVar16)))
        goto LAB_14008cd46;
        uVar17 = uVar19 + 0x28;
      }
      thunk_FUN_14028af80(pppppppuVar16,uVar17);
    }
    if (0xf < local_d0) {
      uVar19 = local_d0 + 1;
      pppppppuVar15 = local_e8[0];
      if (0xfff < uVar19) {
        pppppppuVar15 = (undefined8 *******)local_e8[0][-1];
        if (0x1f < (ulonglong)((longlong)local_e8[0] + (-8 - (longlong)pppppppuVar15)))
        goto LAB_14008cd46;
        uVar19 = local_d0 + 0x28;
      }
      thunk_FUN_14028af80(pppppppuVar15,uVar19);
    }
    if (local_f0 < 0x10) {
      return local_130;
    }
    uVar17 = local_f0 + 1;
    uVar19 = local_128[4];
    if (uVar17 < 0x1000) {
LAB_14008cd1c:
      thunk_FUN_14028af80(uVar19,uVar17);
      return local_130;
    }
    uVar19 = *(longlong *)(local_128[4] + -8);
    if ((local_128[4] - uVar19) - 8 < 0x20) {
      uVar17 = local_f0 + 0x28;
      goto LAB_14008cd1c;
    }
  }
  else {
    lVar10 = *plVar14;
    uVar18 = uVar17 + 1;
    if (uVar18 < 0x1000) {
LAB_14008caba:
      thunk_FUN_14028af80(lVar10,uVar18);
      goto LAB_14008cabf;
    }
    if ((lVar10 - *(longlong *)(lVar10 + -8)) - 8U < 0x20) {
      uVar18 = uVar17 + 0x28;
      lVar10 = *(longlong *)(lVar10 + -8);
      goto LAB_14008caba;
    }
  }
LAB_14008cd46:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar20 = auStack_190;
LAB_14008cd4d:
  *(undefined8 *)(puVar20 + -8) = 0x14008cd5d;
  FUN_140017170(local_128 + 4,"precisionType must be \'significant\' or \'decimal\'");
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar20 + -8) = &UNK_14008cd66;
  FUN_140084bc0(local_128 + 4);
}

