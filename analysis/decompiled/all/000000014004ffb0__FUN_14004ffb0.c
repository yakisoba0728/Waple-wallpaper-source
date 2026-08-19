// Function: FUN_14004ffb0
// Addr: 14004ffb0
// Size: 307 bytes


longlong * FUN_14004ffb0(longlong param_1,ulonglong param_2,ulonglong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  char cVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  
  uVar18 = (longlong)(param_3 - 1) >> 1;
  uVar13 = param_2;
  while ((longlong)uVar13 < (longlong)uVar18) {
    uVar14 = uVar13 * 2 + 2;
    lVar11 = uVar14 * 0x20;
    cVar10 = func_0x000140038d00(lVar11 + param_1,param_1 + -0x20 + lVar11);
    uVar16 = uVar13 * 2 | 1;
    if (-1 < cVar10) {
      uVar16 = uVar14;
    }
    lVar11 = uVar13 * 0x20;
    lVar17 = uVar16 * 0x20;
    uVar13 = uVar16;
    if (lVar11 != lVar17) {
      uVar14 = *(ulonglong *)(lVar11 + 0x18 + param_1);
      if (0xf < uVar14) {
        lVar11 = *(longlong *)(lVar11 + param_1);
        uVar13 = uVar14 + 1;
        if (0xfff < uVar13) {
          if (0x1f < (lVar11 - *(longlong *)(lVar11 + -8)) - 8U)
          goto UNWIND_INFO_1400500e3_UnwindCodes_98__UnwindOpCode;
          uVar13 = uVar14 + 0x28;
          lVar11 = *(longlong *)(lVar11 + -8);
        }
        plVar12 = (longlong *)func_0x00014028b040(lVar11,uVar13);
        return plVar12;
      }
      *(undefined8 *)(lVar11 + 0x18 + param_1) = 0xf;
      *(undefined8 *)(lVar11 + 0x10 + param_1) = 0;
      *(undefined1 *)(lVar11 + param_1) = 0;
      puVar1 = (undefined4 *)(lVar17 + param_1);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(lVar11 + param_1);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      puVar3 = (undefined8 *)(lVar17 + 0x10 + param_1);
      uVar9 = puVar3[1];
      puVar4 = (undefined8 *)(lVar11 + 0x10 + param_1);
      *puVar4 = *puVar3;
      puVar4[1] = uVar9;
      *(undefined8 *)(lVar17 + 0x10 + param_1) = 0;
      *(undefined8 *)(lVar17 + 0x18 + param_1) = 0xf;
      *(undefined1 *)(lVar17 + param_1) = 0;
    }
  }
  if ((uVar13 == uVar18) && ((param_3 & 1) == 0)) {
    FUN_14000df10(uVar13 * 0x20 + param_1,param_1 + -0x20 + param_3 * 0x20);
    uVar13 = param_3 - 1;
  }
  while ((longlong)param_2 < (longlong)uVar13) {
    uVar18 = (longlong)(uVar13 - 1) >> 1;
    puVar1 = (undefined4 *)(uVar18 * 0x20 + param_1);
    cVar10 = func_0x000140038d00(puVar1,param_4);
    if (-1 < cVar10) break;
    lVar11 = uVar13 * 0x20;
    uVar13 = uVar18;
    if (lVar11 != uVar18 * 0x20) {
      uVar18 = *(ulonglong *)(lVar11 + 0x18 + param_1);
      if (0xf < uVar18) {
        lVar17 = *(longlong *)(lVar11 + param_1);
        uVar14 = uVar18 + 1;
        if (0xfff < uVar14) {
          if (0x1f < (lVar17 - *(longlong *)(lVar17 + -8)) - 8U) {
UNWIND_INFO_1400500e3_UnwindCodes_98__UnwindOpCode:
            pcVar5 = (code *)swi(0x29);
            (*pcVar5)(5);
            pcVar5 = (code *)swi(3);
            plVar12 = (longlong *)(*pcVar5)();
            return plVar12;
          }
          uVar14 = uVar18 + 0x28;
          lVar17 = *(longlong *)(lVar17 + -8);
        }
        func_0x00014028b040(lVar17,uVar14);
      }
      *(undefined8 *)(lVar11 + 0x18 + param_1) = 0xf;
      *(undefined8 *)(lVar11 + 0x10 + param_1) = 0;
      *(undefined1 *)(lVar11 + param_1) = 0;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(lVar11 + param_1);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      uVar9 = *(undefined8 *)(puVar1 + 6);
      puVar3 = (undefined8 *)(lVar11 + 0x10 + param_1);
      *puVar3 = *(undefined8 *)(puVar1 + 4);
      puVar3[1] = uVar9;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0xf;
      *(undefined1 *)puVar1 = 0;
    }
  }
  plVar12 = (longlong *)(uVar13 * 0x20 + param_1);
  puVar15 = &stack0xffffffffffffffd8;
  if (plVar12 != param_4) {
    if (0xf < (ulonglong)plVar12[3]) {
      lVar11 = *plVar12;
      if ((0xfff < plVar12[3] + 1U) &&
         (lVar17 = lVar11 - *(longlong *)(lVar11 + -8), puVar15 = &stack0xffffffffffffffd8,
         lVar11 = *(longlong *)(lVar11 + -8), 0x1f < lVar17 - 8U)) {
        pcVar5 = (code *)swi(0x29);
        lVar11 = (*pcVar5)(5);
        puVar15 = &stack0xffffffffffffffe0;
      }
      *(undefined8 *)(puVar15 + -8) = 0x14000df68;
      plVar12 = (longlong *)func_0x00014028b040(lVar11);
      return plVar12;
    }
    plVar12[3] = 0xf;
    plVar12[2] = 0;
    *(undefined1 *)plVar12 = 0;
    lVar11 = param_4[1];
    *plVar12 = *param_4;
    plVar12[1] = lVar11;
    lVar11 = param_4[3];
    plVar12[2] = param_4[2];
    plVar12[3] = lVar11;
    param_4[2] = 0;
    param_4[3] = 0xf;
    *(undefined1 *)param_4 = 0;
  }
  return plVar12;
}

