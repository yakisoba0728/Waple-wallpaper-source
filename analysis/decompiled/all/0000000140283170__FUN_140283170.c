// Function: FUN_140283170
// Addr: 140283170
// Size: 3 bytes


undefined8 FUN_140283170(int *param_1,int *param_2,undefined8 *param_3,double *param_4)

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
      plVar22 = (longlong *)func_0x00014028aff0(0x30);
      *(undefined4 *)(plVar22 + 1) = 7;
      *plVar22 = (longlong)&PTR_UNWIND_INFO_140289c68_UnwindCodes_2__OffsetInProlog_1404925a0;
      auVar9._8_4_ = uVar33;
      auVar9._0_8_ = dVar13;
      auVar9._12_4_ = uVar34;
      *(undefined1 (*) [16])(plVar22 + 4) = auVar9;
    }
    else {
      dVar16 = dVar21 * DAT_140492870 - dVar4 * DAT_140492828;
      if ((dVar16 == dVar18 * DAT_140492870 - dVar13 * DAT_140492828) &&
         (dVar15 = dVar2 * DAT_140492870 - dVar3 * DAT_140492828,
         dVar15 == dVar19 * DAT_140492870 - dVar14 * DAT_140492828)) {
        plVar22 = (longlong *)func_0x00014028aff0(0x40);
        *(undefined4 *)(plVar22 + 1) = 7;
        *plVar22 = (longlong)&UNK_1404924b0;
        plVar22[4] = (longlong)dVar16;
        plVar22[5] = (longlong)dVar15;
        auVar11._8_4_ = uVar33;
        auVar11._0_8_ = dVar13;
        auVar11._12_4_ = uVar34;
        *(undefined1 (*) [16])(plVar22 + 6) = auVar11;
      }
      else {
        plVar22 = (longlong *)func_0x00014028aff0(0x50);
        *(undefined4 *)(plVar22 + 1) = 7;
        *plVar22 = (longlong)&PTR_DAT_140492618;
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
        FUN_140013120();
      }
      uVar25 = plVar5[2] - *plVar5 >> 3;
      if (0x1fffffffffffffff - (uVar25 >> 1) < uVar25) {
code_r0x0001402835c5:
                    /* WARNING: Subroutine does not return */
        FUN_140017440();
      }
      uVar1 = lVar26 + 1;
      uVar25 = (uVar25 >> 1) + uVar25;
      uVar29 = uVar1;
      if (uVar1 <= uVar25) {
        uVar29 = uVar25;
      }
      if (0x1fffffffffffffff < uVar29) goto code_r0x0001402835c5;
      uVar25 = uVar29 * 8;
      uVar24 = 0;
      uVar30 = uVar24;
      if (uVar25 != 0) {
        if (uVar25 < 0x1000) {
          uVar30 = func_0x00014028aff0();
          puVar28 = auStack_128;
        }
        else {
          if (uVar25 + 0x27 <= uVar25) goto code_r0x0001402835c5;
          lVar26 = func_0x00014028aff0(uVar25 + 0x27);
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
        *(undefined8 *)(puVar28 + -8) = 0x14028350c;
        uVar24 = (*pcVar8)(plVar22);
      }
      *puVar32 = uVar24;
      puVar7 = (undefined8 *)plVar5[1];
      lVar26 = *plVar5;
      *(ulonglong **)(puVar28 + 0x38) = puVar32;
      if (puVar6 == puVar7) {
        *(undefined8 *)(puVar28 + -8) = 0x14028352e;
        FUN_140282680(lVar26,puVar7,uVar30);
      }
      else {
        *(undefined8 *)(puVar28 + -8) = 0x140283538;
        FUN_140282680(lVar26,puVar6,uVar30);
        lVar26 = plVar5[1];
        *(ulonglong *)(puVar28 + 0x38) = uVar30;
        *(undefined8 *)(puVar28 + -8) = 0x14028354e;
        FUN_140282680(puVar6,lVar26,puVar32 + 1);
      }
      *(undefined8 *)(puVar28 + 0x28) = 0;
      *(undefined8 *)(puVar28 + -8) = 0x140283564;
      FUN_140282920(plVar5,uVar30,uVar1,uVar29);
      *(undefined8 *)(puVar28 + -8) = 0x14028356e;
      FUN_140282870(puVar28 + 0x20);
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
      *(undefined **)(puVar28 + -8) = &UNK_140283588;
      (*pcVar8)(plVar22,1);
    }
    auVar10._8_4_ = uVar33;
    auVar10._0_8_ = dVar13;
    auVar10._12_4_ = uVar34;
    *(undefined1 (*) [16])(param_4 + 1) = auVar10;
  }
  return 0;
}

