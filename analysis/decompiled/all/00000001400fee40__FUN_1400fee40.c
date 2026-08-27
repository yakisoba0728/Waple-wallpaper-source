// Function: FUN_1400fee40
// Addr: 1400fee40
// Size: 944 bytes


undefined4
FUN_1400fee40(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  HWND pHVar3;
  code *pcVar4;
  int iVar5;
  BOOL BVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined8 local_58;
  undefined8 local_50;
  
  puVar15 = auStack_78;
  lVar13 = (longlong)(param_2 * param_3 * 3);
  uVar7 = thunk_FUN_14028af20(lVar13);
  local_58 = uVar7;
  uVar8 = thunk_FUN_14028af20(lVar13);
  local_50 = uVar8;
  uVar9 = thunk_FUN_14028af20(lVar13);
  FUN_1404217a0(uVar7,0,lVar13);
  FUN_1404217a0(uVar8,0,lVar13);
  uVar14 = param_1 + 0x1c8;
  iVar5 = FUN_140290d80(uVar14);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x214) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x214) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
  puVar12 = *(undefined4 **)(param_1 + 0x1b0);
  uVar1 = *(undefined4 *)(param_1 + 0x1c0);
  if (puVar12 != *(undefined4 **)(param_1 + 0x1b8)) {
    *(undefined8 *)(puVar12 + 4) = param_4;
    *(undefined8 *)(puVar12 + 6) = param_5;
    *(undefined8 *)(puVar12 + 0xc) = uVar9;
    *puVar12 = uVar1;
    puVar12[1] = param_2;
    puVar12[2] = param_3;
    puVar12[3] = 0;
    *(undefined8 *)(puVar12 + 8) = uVar7;
    *(undefined8 *)(puVar12 + 10) = uVar8;
    *(longlong *)(param_1 + 0x1b0) = *(longlong *)(param_1 + 0x1b0) + 0x38;
    puVar15 = auStack_78;
    goto LAB_1400ff14b;
  }
  lVar13 = ((longlong)puVar12 - *(longlong *)(param_1 + 0x1a8)) / 0x38;
  if (lVar13 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar16 = ((longlong)*(undefined4 **)(param_1 + 0x1b8) - *(longlong *)(param_1 + 0x1a8) >> 3) *
           0x6db6db6db6db6db7;
  uVar10 = 0x492492492492492 - (uVar16 >> 1);
  if (uVar10 <= uVar16 && uVar16 - uVar10 != 0) {
LAB_1400ff1d0:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar16 = (uVar16 >> 1) + uVar16;
  uVar10 = lVar13 + 1;
  uVar17 = uVar10;
  if (uVar10 <= uVar16) {
    uVar17 = uVar16;
  }
  if (0x492492492492492 < uVar17) goto LAB_1400ff1d0;
  uVar17 = uVar17 * 0x38;
  if (uVar17 == 0) {
    uVar14 = 0;
LAB_1400ff023:
    lVar13 = lVar13 * 0x38;
    *(int *)(lVar13 + 4 + uVar14) = param_2;
    *(int *)(lVar13 + 8 + uVar14) = param_3;
    *(undefined8 *)(lVar13 + 0x10 + uVar14) = param_4;
    *(undefined8 *)(lVar13 + 0x20 + uVar14) = local_58;
    *(undefined8 *)(lVar13 + 0x28 + uVar14) = local_50;
    *(undefined8 *)(lVar13 + 0x18 + uVar14) = param_5;
    *(undefined8 *)(lVar13 + 0x30 + uVar14) = uVar9;
    *(undefined4 *)(lVar13 + uVar14) = uVar1;
    *(undefined4 *)(lVar13 + 0xc + uVar14) = 0;
    puVar2 = *(undefined4 **)(param_1 + 0x1a8);
    if (puVar12 == *(undefined4 **)(param_1 + 0x1b0)) {
      lVar13 = (longlong)*(undefined4 **)(param_1 + 0x1b0) - (longlong)puVar2;
      uVar16 = uVar14;
      puVar12 = puVar2;
    }
    else {
      FUN_1404210f0(uVar14,puVar2,(longlong)puVar12 - (longlong)puVar2);
      uVar16 = lVar13 + 0x38 + uVar14;
      lVar13 = *(longlong *)(param_1 + 0x1b0) - (longlong)puVar12;
    }
    FUN_1404210f0(uVar16,puVar12,lVar13);
    lVar13 = *(longlong *)(param_1 + 0x1a8);
    if (lVar13 != 0) {
      lVar11 = lVar13;
      puVar15 = auStack_78;
      if ((0xfff < (ulonglong)((*(longlong *)(param_1 + 0x1b8) - lVar13 >> 3) * 8)) &&
         (lVar11 = *(longlong *)(lVar13 + -8), puVar15 = auStack_78, 0x1f < (lVar13 - lVar11) - 8U))
      goto LAB_1400ff112;
      goto LAB_1400ff11c;
    }
  }
  else {
    if (uVar17 < 0x1000) {
      uVar14 = FUN_14028af20(uVar17);
      goto LAB_1400ff023;
    }
    if (uVar17 + 0x27 <= uVar17) goto LAB_1400ff1d0;
    lVar11 = FUN_14028af20();
    if (lVar11 != 0) {
      uVar14 = lVar11 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar14 - 8) = lVar11;
      goto LAB_1400ff023;
    }
LAB_1400ff112:
    lVar11 = 5;
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar15 = auStack_70;
LAB_1400ff11c:
    *(undefined8 *)(puVar15 + -8) = 0x1400ff124;
    thunk_FUN_14028af80(lVar11);
  }
  *(ulonglong *)(param_1 + 0x1a8) = uVar14;
  *(ulonglong *)(param_1 + 0x1b0) = uVar10 * 0x38 + uVar14;
  *(ulonglong *)(param_1 + 0x1b8) = uVar17 + uVar14;
LAB_1400ff14b:
  pHVar3 = *(HWND *)(param_1 + 0x10);
  *(undefined8 *)(puVar15 + -8) = 0x1400ff155;
  BVar6 = IsWindow(pHVar3);
  if (BVar6 != 0) {
    pHVar3 = *(HWND *)(param_1 + 0x10);
    *(undefined8 *)(puVar15 + -8) = 0x1400ff168;
    KillTimer(pHVar3,0x66);
    pHVar3 = *(HWND *)(param_1 + 0x10);
    *(undefined8 *)(puVar15 + -8) = 0x1400ff177;
    KillTimer(pHVar3,0x67);
    pHVar3 = *(HWND *)(param_1 + 0x10);
    *(undefined8 *)(puVar15 + -8) = 0x1400ff18f;
    SetTimer(pHVar3,0x66,0x2ee,(TIMERPROC)0x0);
    pHVar3 = *(HWND *)(param_1 + 0x10);
    *(undefined8 *)(puVar15 + -8) = 0x1400ff1a7;
    SetTimer(pHVar3,0x67,100,(TIMERPROC)0x0);
  }
  *(undefined8 *)(puVar15 + -8) = 0x1400ff1af;
  FUN_140290ea0(param_1 + 0x1c8);
  return uVar1;
}

