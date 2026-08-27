// Function: FUN_14007e490
// Addr: 14007e490
// Size: 965 bytes


void FUN_14007e490(ulonglong *param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  ulonglong local_a8 [4];
  ulonglong local_88 [9];
  
  uVar16 = param_1[2];
  uVar17 = *param_1;
  uVar18 = param_1[1];
  uVar19 = param_1[3];
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  uVar23 = param_1[4];
  uVar4 = param_1[5];
  uVar5 = param_1[6];
  uVar14 = param_1[7];
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  uVar10 = param_1[8];
  local_88[1] = 0;
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x44);
  uVar11 = param_1[9];
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x4c);
  uVar12 = param_1[10];
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x54);
  uVar13 = param_1[0xb];
  local_a8[0] = uVar17;
  local_88[0] = uVar23;
  if (param_1 != param_2) {
    if (0xf < param_1[3]) {
      uVar6 = *param_1;
      uVar15 = uVar6;
      if ((0xfff < param_1[3] + 1) &&
         (uVar15 = *(ulonglong *)(uVar6 - 8), 0x1f < (uVar6 - uVar15) - 8)) goto LAB_14007e84d;
      thunk_FUN_14028af80(uVar15);
    }
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    uVar8 = *(undefined4 *)((longlong)param_2 + 4);
    uVar6 = param_2[1];
    uVar9 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(int *)param_1 = (int)*param_2;
    *(undefined4 *)((longlong)param_1 + 4) = uVar8;
    *(int *)(param_1 + 1) = (int)uVar6;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar9;
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar6 = param_2[3];
    uVar9 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_1 + 2) = (int)param_2[2];
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar8;
    *(int *)(param_1 + 3) = (int)uVar6;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar9;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    if (0xf < param_1[7]) {
      uVar6 = param_1[4];
      uVar15 = uVar6;
      if ((0xfff < param_1[7] + 1) &&
         (uVar15 = *(ulonglong *)(uVar6 - 8), 0x1f < (uVar6 - uVar15) - 8)) goto LAB_14007e84d;
      thunk_FUN_14028af80(uVar15);
    }
    param_1[6] = 0;
    param_1[7] = 0xf;
    *(undefined1 *)(param_1 + 4) = 0;
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar6 = param_2[5];
    uVar9 = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(int *)(param_1 + 4) = (int)param_2[4];
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar8;
    *(int *)(param_1 + 5) = (int)uVar6;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar9;
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar6 = param_2[7];
    uVar9 = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar8;
    *(int *)(param_1 + 7) = (int)uVar6;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar9;
    param_2[6] = 0;
    param_2[7] = 0xf;
    *(undefined1 *)(param_2 + 4) = 0;
  }
  puVar22 = param_2 + 4;
  puVar21 = param_2 + 3;
  *(int *)(param_1 + 8) = (int)param_2[8];
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(int *)(param_1 + 9) = (int)param_2[9];
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(int *)(param_1 + 10) = (int)param_2[10];
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(int *)(param_1 + 0xb) = (int)param_2[0xb];
  if (param_2 != local_a8) {
    uVar6 = *puVar21;
    if (0xf < uVar6) {
      uVar20 = *param_2;
      uVar15 = uVar6 + 1;
      if (0xfff < uVar15) {
        if (0x1f < (uVar20 - *(ulonglong *)(uVar20 - 8)) - 8) goto LAB_14007e84d;
        uVar15 = uVar6 + 0x28;
        uVar20 = *(ulonglong *)(uVar20 - 8);
      }
      thunk_FUN_14028af80(uVar20,uVar15);
    }
    *puVar21 = 0xf;
    param_2[2] = uVar16;
    *puVar21 = uVar19;
    *param_2 = uVar17;
    param_2[1] = uVar18;
    local_a8[0] = local_a8[0] & 0xffffffffffffff00;
    uVar17 = local_a8[0];
    uVar19 = 0xf;
  }
  if (puVar22 != local_88) {
    uVar16 = param_2[7];
    if (0xf < uVar16) {
      uVar18 = *puVar22;
      if (uVar16 + 1 < 0x1000) {
        thunk_FUN_14028af80(uVar18,uVar16 + 1,uVar18);
      }
      else {
        if (0x1f < (uVar18 - *(longlong *)(uVar18 - 8)) - 8) goto LAB_14007e84d;
        thunk_FUN_14028af80(*(longlong *)(uVar18 - 8),uVar16 + 0x28);
      }
    }
    param_2[6] = uVar5;
    *puVar22 = uVar23;
    local_88[0] = local_88[0] & 0xffffffffffffff00;
    param_2[7] = uVar14;
    param_2[5] = uVar4;
    uVar14 = 0xf;
    uVar23 = local_88[0];
  }
  *(int *)(param_2 + 8) = (int)uVar10;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar1;
  *(int *)(param_2 + 9) = (int)uVar11;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar2;
  *(int *)(param_2 + 10) = (int)uVar12;
  *(undefined4 *)((longlong)param_2 + 0x54) = uVar3;
  *(int *)(param_2 + 0xb) = (int)uVar13;
  if (0xf < uVar14) {
    uVar16 = uVar14 + 1;
    uVar18 = uVar23;
    if (0xfff < uVar16) {
      uVar18 = *(ulonglong *)(uVar23 - 8);
      if (0x1f < (uVar23 - uVar18) - 8) goto LAB_14007e84d;
      uVar16 = uVar14 + 0x28;
    }
    thunk_FUN_14028af80(uVar18,uVar16);
  }
  if (0xf < uVar19) {
    uVar16 = uVar19 + 1;
    uVar18 = uVar17;
    if (0xfff < uVar16) {
      uVar18 = *(ulonglong *)(uVar17 - 8);
      if (0x1f < (uVar17 - uVar18) - 8) {
LAB_14007e84d:
        pcVar7 = (code *)swi(0x29);
        (*pcVar7)(5);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar16 = uVar19 + 0x28;
    }
    thunk_FUN_14028af80(uVar18,uVar16);
  }
  return;
}

