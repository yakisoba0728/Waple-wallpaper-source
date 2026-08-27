// Function: FUN_1402830a0
// Addr: 1402830a0
// Size: 1113 bytes


undefined8 FUN_1402830a0(int *param_1,int *param_2,undefined8 *param_3,double *param_4)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  longlong *plVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong *puVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [224];
  
  puVar28 = auStack_128;
  puVar27 = auStack_128;
  dVar2 = *param_4;
  dVar3 = param_4[2];
  dVar13 = (double)(int)*param_3 * dVar2;
  dVar14 = (double)(int)((ulonglong)*param_3 >> 0x20) * dVar2;
  uVar33 = SUB84(dVar14,0);
  uVar34 = (undefined4)((ulonglong)dVar14 >> 0x20);
  dVar4 = param_4[1];
  if (((dVar13 != dVar4) || (dVar14 != dVar3)) ||
     (((double)param_2[1] * dVar2 - dVar14) * ((double)*param_1 * dVar2 - dVar13) -
      ((double)*param_2 * dVar2 - dVar13) * ((double)param_1[1] * dVar2 - dVar14) != 0.0)) {
    plVar5 = (longlong *)param_4[4];
    dVar18 = (double)(int)*(undefined8 *)param_2 * dVar2;
    dVar19 = (double)(int)((ulonglong)*(undefined8 *)param_2 >> 0x20) * dVar2;
    dVar21 = (double)(int)*(undefined8 *)param_1 * dVar2;
    dVar2 = (double)(int)((ulonglong)*(undefined8 *)param_1 >> 0x20) * dVar2;
    if (((dVar19 - dVar2) * (dVar21 - dVar4) - (dVar18 - dVar21) * (dVar2 - dVar3) == 0.0) &&
       ((dVar14 - dVar19) * (dVar18 - dVar21) - (dVar13 - dVar18) * (dVar19 - dVar2) == 0.0)) {
      plVar22 = (longlong *)FUN_14028af20(0x30);
      *(undefined4 *)(plVar22 + 1) = 7;
      *plVar22 = (longlong)&PTR_FUN_1404924d0;
      auVar9._8_4_ = uVar33;
      auVar9._0_8_ = dVar13;
      auVar9._12_4_ = uVar34;
      *(undefined1 (*) [16])(plVar22 + 4) = auVar9;
    }
    else {
      dVar16 = dVar21 * DAT_1404927a0 - dVar4 * DAT_140492758;
      if ((dVar16 == dVar18 * DAT_1404927a0 - dVar13 * DAT_140492758) &&
         (dVar15 = dVar2 * DAT_1404927a0 - dVar3 * DAT_140492758,
         dVar15 == dVar19 * DAT_1404927a0 - dVar14 * DAT_140492758)) {
        plVar22 = (longlong *)FUN_14028af20(0x40);
        *(undefined4 *)(plVar22 + 1) = 7;
        *plVar22 = (longlong)&PTR_FUN_1404923e0;
        plVar22[4] = (longlong)dVar16;
        plVar22[5] = (longlong)dVar15;
        auVar11._8_4_ = uVar33;
        auVar11._0_8_ = dVar13;
        auVar11._12_4_ = uVar34;
        *(undefined1 (*) [16])(plVar22 + 6) = auVar11;
      }
      else {
        plVar22 = (longlong *)FUN_14028af20(0x50);
        *(undefined4 *)(plVar22 + 1) = 7;
        *plVar22 = (longlong)&PTR_FUN_140492548;
        auVar20._8_4_ = SUB84(dVar2,0);
        auVar20._0_8_ = dVar21;
        auVar20._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        *(undefined1 (*) [16])(plVar22 + 4) = auVar20;
        auVar17._8_4_ = SUB84(dVar19,0);
        auVar17._0_8_ = dVar18;
        auVar17._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
        *(undefined1 (*) [16])(plVar22 + 6) = auVar17;
        auVar12._8_4_ = uVar33;
        auVar12._0_8_ = dVar13;
        auVar12._12_4_ = uVar34;
        *(undefined1 (*) [16])(plVar22 + 8) = auVar12;
      }
    }
    plVar22[3] = (longlong)dVar3;
    plVar22[2] = (longlong)dVar4;
    puVar6 = (undefined8 *)plVar5[1];
    if (puVar6 == (undefined8 *)plVar5[2]) {
      uVar31 = (longlong)puVar6 - *plVar5;
      lVar26 = (longlong)uVar31 >> 3;
      if (lVar26 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar25 = plVar5[2] - *plVar5 >> 3;
      if (0x1fffffffffffffff - (uVar25 >> 1) < uVar25) {
LAB_1402834f5:
                    /* WARNING: Subroutine does not return */
        FUN_140017370();
      }
      uVar1 = lVar26 + 1;
      uVar25 = (uVar25 >> 1) + uVar25;
      uVar29 = uVar1;
      if (uVar1 <= uVar25) {
        uVar29 = uVar25;
      }
      if (0x1fffffffffffffff < uVar29) goto LAB_1402834f5;
      uVar25 = uVar29 * 8;
      uVar24 = 0;
      uVar30 = uVar24;
      if (uVar25 != 0) {
        if (uVar25 < 0x1000) {
          uVar30 = FUN_14028af20();
          puVar28 = auStack_128;
        }
        else {
          if (uVar25 + 0x27 <= uVar25) goto LAB_1402834f5;
          lVar26 = FUN_14028af20(uVar25 + 0x27);
          if (lVar26 == 0) {
            pcVar8 = (code *)swi(0x29);
            lVar26 = (*pcVar8)(5);
            puVar27 = auStack_120;
          }
          uVar30 = lVar26 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar30 - 8) = lVar26;
          puVar28 = puVar27;
        }
      }
      *(longlong **)(puVar28 + 0x20) = plVar5;
      puVar32 = (ulonglong *)((uVar31 & 0xfffffffffffffff8) + uVar30);
      *(ulonglong *)(puVar28 + 0x30) = uVar29;
      *(ulonglong **)(puVar28 + 0x40) = puVar32 + 1;
      if (plVar22 != (longlong *)0x0) {
        pcVar8 = *(code **)(*plVar22 + 8);
        *(undefined8 *)(puVar28 + -8) = 0x14028343c;
        uVar24 = (*pcVar8)(plVar22);
      }
      *puVar32 = uVar24;
      puVar7 = (undefined8 *)plVar5[1];
      lVar26 = *plVar5;
      *(ulonglong **)(puVar28 + 0x38) = puVar32;
      if (puVar6 == puVar7) {
        *(undefined8 *)(puVar28 + -8) = 0x14028345e;
        FUN_1402825b0(lVar26,puVar7,uVar30);
      }
      else {
        *(undefined8 *)(puVar28 + -8) = 0x140283468;
        FUN_1402825b0(lVar26,puVar6,uVar30);
        lVar26 = plVar5[1];
        *(ulonglong *)(puVar28 + 0x38) = uVar30;
        *(undefined8 *)(puVar28 + -8) = 0x14028347e;
        FUN_1402825b0(puVar6,lVar26,puVar32 + 1);
      }
      *(undefined8 *)(puVar28 + 0x28) = 0;
      *(undefined8 *)(puVar28 + -8) = 0x140283494;
      FUN_140282850(plVar5,uVar30,uVar1,uVar29);
      *(undefined8 *)(puVar28 + -8) = 0x14028349e;
      FUN_1402827a0(puVar28 + 0x20);
      param_4 = *(double **)(puVar28 + 0x148);
    }
    else if (plVar22 == (longlong *)0x0) {
      *puVar6 = 0;
      plVar5[1] = plVar5[1] + 8;
      puVar28 = auStack_128;
    }
    else {
      uVar23 = (**(code **)(*plVar22 + 8))(plVar22);
      *puVar6 = uVar23;
      plVar5[1] = plVar5[1] + 8;
      puVar28 = auStack_128;
    }
    if (plVar22 != (longlong *)0x0) {
      pcVar8 = *(code **)*plVar22;
      *(undefined8 *)(puVar28 + -8) = 0x1402834b8;
      (*pcVar8)(plVar22,1);
    }
    auVar10._8_4_ = uVar33;
    auVar10._0_8_ = dVar13;
    auVar10._12_4_ = uVar34;
    *(undefined1 (*) [16])(param_4 + 1) = auVar10;
  }
  return 0;
}

