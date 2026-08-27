// Function: FUN_14004fc40
// Addr: 14004fc40
// Size: 660 bytes


void FUN_14004fc40(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  
  uVar17 = (longlong)(param_3 - 1) >> 1;
  uVar9 = param_2;
  while ((longlong)uVar9 < (longlong)uVar17) {
    lVar15 = uVar9 * 0x40;
    uVar14 = uVar9 * 2 + 2;
    if (*(ulonglong *)(param_1 + 0x38 + lVar15) < 8) {
      lVar18 = param_1 + 0x20 + lVar15;
    }
    else {
      lVar18 = *(longlong *)(param_1 + 0x20 + lVar15);
    }
    if (*(ulonglong *)(param_1 + 0x58 + lVar15) < 8) {
      lVar11 = param_1 + 0x40 + lVar15;
    }
    else {
      lVar11 = *(longlong *)(param_1 + 0x40 + lVar15);
    }
    iVar10 = FUN_1400153a0(lVar11,*(undefined8 *)(param_1 + 0x50 + lVar15),lVar18,
                           *(undefined8 *)(param_1 + 0x30 + lVar15));
    uVar13 = uVar14;
    if ((iVar10 != 0) && (uVar13 = uVar9 * 2 | 1, -1 < iVar10)) {
      uVar13 = uVar14;
    }
    lVar15 = uVar9 * 0x20;
    lVar18 = uVar13 * 0x20;
    uVar9 = uVar13;
    if (lVar15 != lVar18) {
      uVar14 = *(ulonglong *)(lVar15 + 0x18 + param_1);
      if (7 < uVar14) {
        lVar11 = *(longlong *)(lVar15 + param_1);
        uVar13 = uVar14 * 2 + 2;
        if (0xfff < uVar13) {
          if (0x1f < (lVar11 - *(longlong *)(lVar11 + -8)) - 8U) goto LAB_14004fecc;
          uVar13 = uVar14 * 2 + 0x29;
          lVar11 = *(longlong *)(lVar11 + -8);
        }
        thunk_FUN_14028af80(lVar11,uVar13);
      }
      *(undefined8 *)(lVar15 + 0x18 + param_1) = 7;
      *(undefined8 *)(lVar15 + 0x10 + param_1) = 0;
      *(undefined2 *)(lVar15 + param_1) = 0;
      puVar1 = (undefined4 *)(lVar18 + param_1);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(lVar15 + param_1);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      puVar3 = (undefined8 *)(lVar18 + 0x10 + param_1);
      uVar8 = puVar3[1];
      puVar16 = (undefined8 *)(lVar15 + 0x10 + param_1);
      *puVar16 = *puVar3;
      puVar16[1] = uVar8;
      *(undefined8 *)(lVar18 + 0x10 + param_1) = 0;
      *(undefined8 *)(lVar18 + 0x18 + param_1) = 7;
      *(undefined2 *)(lVar18 + param_1) = 0;
    }
  }
  if ((uVar9 == uVar17) && ((param_3 & 1) == 0)) {
    FUN_140016560(param_1 + uVar9 * 0x20,param_1 + -0x20 + param_3 * 0x20);
    uVar9 = param_3 - 1;
  }
  while ((longlong)param_2 < (longlong)uVar9) {
    uVar17 = (longlong)(uVar9 - 1) >> 1;
    puVar3 = (undefined8 *)(uVar17 * 0x20 + param_1);
    puVar16 = param_4;
    if (7 < (ulonglong)param_4[3]) {
      puVar16 = (undefined8 *)*param_4;
    }
    puVar12 = puVar3;
    if (7 < (ulonglong)puVar3[3]) {
      puVar12 = (undefined8 *)*puVar3;
    }
    iVar10 = FUN_1400153a0(puVar12,puVar3[2],puVar16,param_4[2]);
    if ((iVar10 == 0) || (-1 < iVar10)) break;
    lVar15 = uVar9 * 0x20;
    uVar9 = uVar17;
    if (lVar15 != uVar17 * 0x20) {
      uVar17 = *(ulonglong *)(lVar15 + 0x18 + param_1);
      if (7 < uVar17) {
        lVar18 = *(longlong *)(lVar15 + param_1);
        uVar14 = uVar17 * 2 + 2;
        if (0xfff < uVar14) {
          if (0x1f < (lVar18 - *(longlong *)(lVar18 + -8)) - 8U) {
LAB_14004fecc:
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar14 = uVar17 * 2 + 0x29;
          lVar18 = *(longlong *)(lVar18 + -8);
        }
        thunk_FUN_14028af80(lVar18,uVar14);
      }
      *(undefined8 *)(lVar15 + 0x18 + param_1) = 7;
      *(undefined8 *)(lVar15 + 0x10 + param_1) = 0;
      *(undefined2 *)(lVar15 + param_1) = 0;
      uVar5 = *(undefined4 *)((longlong)puVar3 + 4);
      uVar6 = *(undefined4 *)(puVar3 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar3 + 0xc);
      puVar1 = (undefined4 *)(lVar15 + param_1);
      *puVar1 = *(undefined4 *)puVar3;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      uVar8 = puVar3[3];
      puVar16 = (undefined8 *)(lVar15 + 0x10 + param_1);
      *puVar16 = puVar3[2];
      puVar16[1] = uVar8;
      puVar3[2] = 0;
      puVar3[3] = 7;
      *(undefined2 *)puVar3 = 0;
    }
  }
  FUN_140016560(param_1 + uVar9 * 0x20,param_4);
  return;
}

