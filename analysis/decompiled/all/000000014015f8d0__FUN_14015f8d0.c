// Function: FUN_14015f8d0
// Addr: 14015f8d0
// Size: 1277 bytes


void FUN_14015f8d0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong unaff_RBX;
  undefined1 *puVar21;
  ulonglong unaff_RDI;
  longlong local_res8;
  undefined8 local_res10;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_68 [6];
  
  puVar21 = auStack_f8;
  uVar2 = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)(param_2 + 0x10) = uVar2;
  local_d8 = *(undefined4 *)(param_1 + 0x18);
  local_d4 = *(undefined4 *)(param_1 + 0x1c);
  local_d0 = *(undefined4 *)(param_1 + 0x20);
  local_cc = *(undefined4 *)(param_1 + 0x24);
  local_c8 = *(undefined4 *)(param_1 + 0x28);
  local_c4 = *(undefined4 *)(param_1 + 0x2c);
  local_c0 = *(undefined4 *)(param_1 + 0x30);
  local_bc = *(undefined4 *)(param_1 + 0x34);
  local_b8 = *(undefined4 *)(param_1 + 0x38);
  local_a8 = 0;
  local_b0 = (undefined8 *)FUN_14028af20(0x50);
  local_a0 = 0;
  local_98 = 0;
  lStack_90 = 0;
  *local_b0 = local_b0;
  *(undefined8 **)((longlong)local_b0 + 8) = local_b0;
  FUN_140011f50(&local_a0,0x10,local_b0);
  puVar7 = *(undefined8 **)(param_1 + 0x40);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 **)(param_1 + 0x40) = local_b0;
  lVar18 = *(longlong *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = local_a8;
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  lVar10 = *(longlong *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = local_98;
  local_88 = *(undefined8 *)(param_1 + 0x68);
  local_80 = *(undefined8 *)(param_1 + 0x70);
  *(longlong *)(param_1 + 0x50) = local_a0;
  *(longlong *)(param_1 + 0x60) = lStack_90;
  *(undefined8 *)(param_1 + 0x68) = 7;
  *(undefined8 *)(param_1 + 0x70) = 8;
  local_b0 = puVar7;
  local_a8 = uVar8;
  local_a0 = lVar18;
  local_98 = uVar9;
  lStack_90 = lVar10;
  FUN_14014e410(param_1 + 0x18,param_2 + 0x18);
  FUN_14014e410(param_2 + 0x18,&local_d8);
  if (local_a0 == 0) {
LAB_14015fa4e:
    puVar12 = local_b0;
    *(undefined8 *)local_b0[1] = 0;
    puVar7 = (undefined8 *)*local_b0;
    while (puVar7 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)*puVar7;
      FUN_140017240(puVar7 + 6);
      FUN_140017240(puVar7 + 2);
      thunk_FUN_14028af80(puVar7,0x50);
      puVar7 = puVar11;
    }
    thunk_FUN_14028af80(puVar12);
    if (param_1 != param_2) {
      uVar3 = *(undefined4 *)(param_2 + 0x7c);
      uVar4 = *(undefined4 *)(param_2 + 0x80);
      uVar5 = *(undefined4 *)(param_2 + 0x84);
      uVar8 = *(undefined8 *)(param_1 + 0x78);
      uVar9 = *(undefined8 *)(param_1 + 0x80);
      uVar15 = *(undefined8 *)(param_1 + 0x88);
      uVar16 = *(undefined8 *)(param_1 + 0x90);
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
      *(undefined4 *)(param_1 + 0x7c) = uVar3;
      *(undefined4 *)(param_1 + 0x80) = uVar4;
      *(undefined4 *)(param_1 + 0x84) = uVar5;
      uVar17 = *(undefined8 *)(param_2 + 0x90);
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
      *(undefined8 *)(param_1 + 0x90) = uVar17;
      *(undefined8 *)(param_2 + 0x78) = uVar8;
      *(undefined8 *)(param_2 + 0x80) = uVar9;
      *(undefined8 *)(param_2 + 0x88) = uVar15;
      *(undefined8 *)(param_2 + 0x90) = uVar16;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x98);
    puVar1 = (ulonglong *)(param_2 + 0xb8);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(param_2 + 0x98) = uVar3;
    uVar8 = *(undefined8 *)(param_1 + 0x9c);
    *(undefined8 *)(param_1 + 0x9c) = *(undefined8 *)(param_2 + 0x9c);
    *(undefined8 *)(param_2 + 0x9c) = uVar8;
    uVar3 = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
    *(undefined4 *)(param_2 + 0xa4) = uVar3;
    local_res10 = *(undefined8 *)(param_1 + 0xc0);
    unaff_RBX = *(ulonglong *)(param_1 + 200);
    unaff_RDI = *(ulonglong *)(param_1 + 0xb8);
    uVar3 = *(undefined4 *)(param_1 + 0xa8);
    uVar4 = *(undefined4 *)(param_1 + 0xac);
    uVar5 = *(undefined4 *)(param_1 + 0xb0);
    uVar6 = *(undefined4 *)(param_1 + 0xb4);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
    if (param_1 != param_2) {
      *(ulonglong *)(param_1 + 0xb8) = *puVar1;
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0xc0) = 0;
      *(undefined8 *)(param_2 + 200) = 0;
    }
    *(undefined4 *)(param_2 + 0xa8) = uVar3;
    *(undefined4 *)(param_2 + 0xac) = uVar4;
    *(undefined4 *)(param_2 + 0xb0) = uVar5;
    *(undefined4 *)(param_2 + 0xb4) = uVar6;
    uVar20 = unaff_RBX;
    if (puVar1 != local_68) {
      uVar20 = *puVar1;
      if (uVar20 != 0) {
        uVar19 = uVar20;
        if ((0xfff < (*(longlong *)(param_2 + 200) - uVar20 & 0xffffffffffffffe0)) &&
           (uVar19 = *(ulonglong *)(uVar20 - 8), 0x1f < (uVar20 - uVar19) - 8)) goto LAB_14015fc9c;
        thunk_FUN_14028af80(uVar19);
        *(undefined8 *)(param_2 + 0xc0) = 0;
        *(undefined8 *)(param_2 + 200) = 0;
      }
      uVar20 = 0;
      *puVar1 = unaff_RDI;
      *(ulonglong *)(param_2 + 200) = unaff_RBX;
      *(undefined8 *)(param_2 + 0xc0) = local_res10;
      unaff_RDI = uVar20;
    }
    if (unaff_RDI == 0) goto LAB_14015fcae;
    unaff_RBX = uVar20 - unaff_RDI & 0xffffffffffffffe0;
    puVar21 = auStack_f8;
    if (0xfff < unaff_RBX) {
      puVar1 = (ulonglong *)(unaff_RDI - 8);
      unaff_RDI = (unaff_RDI - *puVar1) - 8;
      if (0x1f < unaff_RDI) goto LAB_14015fc9c;
      unaff_RBX = unaff_RBX + 0x27;
      unaff_RDI = *puVar1;
      puVar21 = auStack_f8;
    }
  }
  else {
    uVar20 = (lStack_90 - local_a0 >> 3) * 8;
    lVar18 = local_a0;
    if (uVar20 < 0x1000) {
LAB_14015fa46:
      thunk_FUN_14028af80(lVar18,uVar20);
      goto LAB_14015fa4e;
    }
    if ((local_a0 - *(longlong *)(local_a0 + -8)) - 8U < 0x20) {
      uVar20 = uVar20 + 0x27;
      lVar18 = *(longlong *)(local_a0 + -8);
      goto LAB_14015fa46;
    }
LAB_14015fc9c:
    pcVar14 = (code *)swi(0x29);
    (*pcVar14)(5);
    puVar21 = auStack_f0;
  }
  *(undefined8 *)(puVar21 + -8) = 0x14015fcae;
  thunk_FUN_14028af80(unaff_RDI,unaff_RBX);
LAB_14015fcae:
  uVar8 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_2 + 0xd8) = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_2 + 0xe0) = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_2 + 0xe8) = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_2 + 0x130) = uVar8;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    *(longlong *)(*(longlong *)(param_1 + 0x130) + 400) = param_1;
  }
  if (*(longlong *)(param_2 + 0x130) != 0) {
    *(longlong *)(*(longlong *)(param_2 + 0x130) + 400) = param_2;
  }
  puVar7 = *(undefined8 **)(param_1 + 0xf8);
  for (puVar12 = (undefined8 *)*puVar7; puVar12 != puVar7; puVar12 = (undefined8 *)*puVar12) {
    plVar13 = (longlong *)puVar12[10];
    local_res8 = param_1;
    if (plVar13 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar21 + -8) = &UNK_14015fdc8;
      FUN_14028c2c0();
    }
    pcVar14 = *(code **)(*plVar13 + 0x10);
    *(undefined8 *)(puVar21 + -8) = 0x14015fd6a;
    (*pcVar14)(plVar13,&local_res8);
  }
  puVar7 = *(undefined8 **)(param_2 + 0xf8);
  puVar12 = (undefined8 *)*puVar7;
  while( true ) {
    if (puVar12 == puVar7) {
      return;
    }
    plVar13 = (longlong *)puVar12[10];
    local_res8 = param_2;
    if (plVar13 == (longlong *)0x0) break;
    pcVar14 = *(code **)(*plVar13 + 0x10);
    *(undefined8 *)(puVar21 + -8) = 0x14015fd98;
    (*pcVar14)(plVar13,&local_res8);
    puVar12 = (undefined8 *)*puVar12;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar21 + -8) = &UNK_14015fdce;
  FUN_14028c2c0();
}

