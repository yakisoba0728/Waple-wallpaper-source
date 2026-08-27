// Function: FUN_1401a98b0
// Addr: 1401a98b0
// Size: 769 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a98b0(int param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int *piVar14;
  undefined1 *puVar15;
  ulonglong unaff_RBP;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [56];
  
  puVar15 = auStack_68;
  piVar14 = (int *)param_2[1];
  uVar9 = *param_2;
  lVar7 = (longlong)((longlong)piVar14 - uVar9) >> 2;
  if ((ulonglong)(lVar7 * 0x6db6db6db6db6db7) < 2) {
    return;
  }
  uVar6 = *(uint *)(uVar9 + 8);
  uVar2 = *(undefined8 *)(uVar9 + 0x14);
  uVar1 = *(undefined4 *)(uVar9 + 4);
  iVar3 = *(int *)(lVar7 * 4 + -0x1c + uVar9);
  while ((param_1 < iVar3 &&
         (1 < (ulonglong)(((longlong)((longlong)piVar14 - uVar9) >> 2) * 0x6db6db6db6db6db7)))) {
    piVar14 = piVar14 + -7;
    param_2[1] = (ulonglong)piVar14;
    iVar3 = *(int *)((uVar9 - 0x1c) + ((longlong)((longlong)piVar14 - uVar9) >> 2) * 4);
  }
  lVar7 = (longlong)((longlong)piVar14 - uVar9) >> 2;
  uVar13 = lVar7 * 0x6db6db6db6db6db7;
  if (uVar13 < 2) {
    return;
  }
  lVar7 = lVar7 * 4;
  lVar12 = lVar7 + uVar9;
  if (*(int *)(lVar7 + -0x1c + uVar9) == param_1) goto LAB_1401a9b45;
  if (piVar14 == (int *)param_2[2]) {
    if (uVar13 == 0x924924924924924) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar9 = ((longlong)((longlong)param_2[2] - uVar9) >> 2) * 0x6db6db6db6db6db7;
    uVar8 = 0x924924924924924 - (uVar9 >> 1);
    if (uVar8 <= uVar9 && uVar9 - uVar8 != 0) {
LAB_1401a9bad:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar13 = uVar13 + 1;
    uVar8 = uVar13;
    if (uVar13 <= uVar9) {
      uVar8 = uVar9;
    }
    if (0x924924924924924 < uVar8) goto LAB_1401a9bad;
    uVar8 = uVar8 * 0x1c;
    uVar9 = 0;
    if (uVar8 == 0) {
LAB_1401a9a6c:
      *(int *)(lVar7 + uVar9) = param_1;
      *(undefined8 *)(lVar7 + 4 + uVar9) = 0;
      *(undefined8 *)(lVar7 + 0xc + uVar9) = 0;
      *(undefined8 *)(lVar7 + 0x14 + uVar9) = 0;
      piVar4 = (int *)*param_2;
      if (piVar14 == (int *)param_2[1]) {
        lVar7 = (longlong)param_2[1] - (longlong)piVar4;
        uVar10 = uVar9;
        piVar14 = piVar4;
      }
      else {
        FUN_1404210f0(uVar9,piVar4,(longlong)piVar14 - (longlong)piVar4);
        uVar10 = uVar9 + 0x1c + lVar7;
        lVar7 = param_2[1] - (longlong)piVar14;
      }
      FUN_1404210f0(uVar10,piVar14,lVar7);
      uVar10 = *param_2;
      if (uVar10 != 0) {
        uVar11 = uVar10;
        puVar15 = auStack_68;
        if ((0xfff < (ulonglong)(((longlong)(param_2[2] - uVar10) >> 2) * 4)) &&
           (uVar11 = *(ulonglong *)(uVar10 - 8), puVar15 = auStack_68, unaff_RBP = uVar9,
           0x1f < (uVar10 - uVar11) - 8)) goto LAB_1401a9af9;
        goto LAB_1401a9b03;
      }
    }
    else {
      if (uVar8 < 0x1000) {
        uVar9 = FUN_14028af20(uVar8);
        goto LAB_1401a9a6c;
      }
      if (uVar8 + 0x27 <= uVar8) goto LAB_1401a9bad;
      lVar12 = FUN_14028af20();
      if (lVar12 != 0) {
        uVar9 = lVar12 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar9 - 8) = lVar12;
        goto LAB_1401a9a6c;
      }
LAB_1401a9af9:
      uVar11 = 5;
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar15 = auStack_60;
      uVar9 = unaff_RBP;
LAB_1401a9b03:
      *(undefined8 *)(puVar15 + -8) = 0x1401a9b0b;
      thunk_FUN_14028af80(uVar11);
    }
    uVar6 = *(uint *)(puVar15 + 0x78);
    *param_2 = uVar9;
    uVar13 = uVar13 * 0x1c + uVar9;
    param_2[1] = uVar13;
    param_2[2] = uVar8 + uVar9;
  }
  else {
    *piVar14 = param_1;
    piVar14[1] = 0;
    piVar14[2] = 0;
    piVar14[3] = 0;
    piVar14[4] = 0;
    piVar14[5] = 0;
    piVar14[6] = 0;
    param_2[1] = param_2[1] + 0x1c;
    uVar13 = param_2[1];
  }
  lVar12 = ((longlong)(uVar13 - *param_2) >> 2) * 4 + *param_2;
LAB_1401a9b45:
  if ((uVar6 & 2) == 0) {
    uVar6 = *(uint *)(lVar12 + -0x14) & 0xfffffffe;
  }
  else {
    uVar6 = *(uint *)(lVar12 + -0x14) | 1;
    *(ulonglong *)(lVar12 + -0x10) =
         CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ _UNK_140492ff4,(uint)uVar2 ^ DAT_140492ff0);
  }
  *(uint *)(lVar12 + -0x14) = uVar6;
  *(undefined4 *)(lVar12 + -0x18) = uVar1;
  return;
}

