// Function: FUN_140034cc0
// Addr: 140034cc0
// Size: 639 bytes


undefined8 * FUN_140034cc0(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined8 *unaff_RBP;
  undefined8 *unaff_R13;
  ulonglong uVar15;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar13 = *param_1;
  if (param_1[1] - lVar13 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar10 = param_1[2] - lVar13 >> 5;
  if (0x7ffffffffffffff - (uVar10 >> 1) < uVar10) {
LAB_140034f3b:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar10 = (uVar10 >> 1) + uVar10;
  uVar1 = (param_1[1] - lVar13 >> 5) + 1;
  uVar15 = uVar1;
  if (uVar1 <= uVar10) {
    uVar15 = uVar10;
  }
  if (0x7ffffffffffffff < uVar15) goto LAB_140034f3b;
  uVar10 = uVar15 * 0x20;
  if (uVar10 == 0) {
    unaff_RBP = (undefined8 *)0x0;
LAB_140034d8e:
    unaff_R13 = (undefined8 *)
                (((longlong)param_2 - lVar13 & 0xffffffffffffffe0U) + (longlong)unaff_RBP);
    FUN_140016600(unaff_R13,param_3);
    puVar2 = (undefined4 *)param_1[1];
    puVar11 = (undefined4 *)*param_1;
    puVar8 = unaff_RBP;
    if (param_2 == puVar2) {
      for (; puVar11 != puVar2; puVar11 = puVar11 + 8) {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        uVar4 = puVar11[1];
        uVar5 = puVar11[2];
        uVar6 = puVar11[3];
        *(undefined4 *)puVar8 = *puVar11;
        *(undefined4 *)((longlong)puVar8 + 4) = uVar4;
        *(undefined4 *)(puVar8 + 1) = uVar5;
        *(undefined4 *)((longlong)puVar8 + 0xc) = uVar6;
        uVar7 = *(undefined8 *)(puVar11 + 6);
        puVar8[2] = *(undefined8 *)(puVar11 + 4);
        puVar8[3] = uVar7;
        *(undefined8 *)(puVar11 + 4) = 0;
        *(undefined8 *)(puVar11 + 6) = 7;
        *(undefined2 *)puVar11 = 0;
        puVar8 = puVar8 + 4;
      }
    }
    else {
      for (; puVar11 != param_2; puVar11 = puVar11 + 8) {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        uVar4 = puVar11[1];
        uVar5 = puVar11[2];
        uVar6 = puVar11[3];
        *(undefined4 *)puVar8 = *puVar11;
        *(undefined4 *)((longlong)puVar8 + 4) = uVar4;
        *(undefined4 *)(puVar8 + 1) = uVar5;
        *(undefined4 *)((longlong)puVar8 + 0xc) = uVar6;
        uVar7 = *(undefined8 *)(puVar11 + 6);
        puVar8[2] = *(undefined8 *)(puVar11 + 4);
        puVar8[3] = uVar7;
        *(undefined8 *)(puVar11 + 4) = 0;
        *(undefined8 *)(puVar11 + 6) = 7;
        *(undefined2 *)puVar11 = 0;
        puVar8 = puVar8 + 4;
      }
      puVar2 = (undefined4 *)param_1[1];
      puVar8 = unaff_R13;
      for (; param_2 != puVar2; param_2 = param_2 + 8) {
        puVar12 = puVar8 + 4;
        *puVar12 = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        uVar4 = param_2[1];
        uVar5 = param_2[2];
        uVar6 = param_2[3];
        *(undefined4 *)puVar12 = *param_2;
        *(undefined4 *)((longlong)puVar8 + 0x24) = uVar4;
        *(undefined4 *)(puVar8 + 5) = uVar5;
        *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar6;
        uVar7 = *(undefined8 *)(param_2 + 6);
        puVar8[6] = *(undefined8 *)(param_2 + 4);
        puVar8[7] = uVar7;
        *(undefined8 *)(param_2 + 4) = 0;
        *(undefined8 *)(param_2 + 6) = 7;
        *(undefined2 *)param_2 = 0;
        puVar8 = puVar12;
      }
    }
    lVar13 = *param_1;
    if (lVar13 == 0) goto LAB_140034efe;
    lVar9 = param_1[1];
    for (; lVar13 != lVar9; lVar13 = lVar13 + 0x20) {
      FUN_140016770(lVar13);
    }
    lVar13 = *param_1;
    lVar9 = lVar13;
    puVar14 = auStack_48;
    if ((0xfff < (param_1[2] - lVar13 & 0xffffffffffffffe0U)) &&
       (lVar9 = *(longlong *)(lVar13 + -8), puVar14 = auStack_48, 0x1f < (lVar13 - lVar9) - 8U))
    goto LAB_140034eef;
  }
  else {
    if (uVar10 < 0x1000) {
      unaff_RBP = (undefined8 *)FUN_14028af20(uVar10);
      goto LAB_140034d8e;
    }
    if (uVar10 + 0x27 <= uVar10) goto LAB_140034f3b;
    lVar9 = FUN_14028af20();
    if (lVar9 != 0) {
      unaff_RBP = (undefined8 *)(lVar9 + 0x27U & 0xffffffffffffffe0);
      unaff_RBP[-1] = lVar9;
      goto LAB_140034d8e;
    }
LAB_140034eef:
    pcVar3 = (code *)swi(0x29);
    lVar9 = (*pcVar3)(5);
    puVar14 = auStack_40;
  }
  *(undefined8 *)(puVar14 + -8) = 0x140034efe;
  thunk_FUN_14028af80(lVar9);
LAB_140034efe:
  *param_1 = (longlong)unaff_RBP;
  param_1[1] = (longlong)(unaff_RBP + uVar1 * 4);
  param_1[2] = (longlong)(unaff_RBP + uVar15 * 4);
  return unaff_R13;
}

