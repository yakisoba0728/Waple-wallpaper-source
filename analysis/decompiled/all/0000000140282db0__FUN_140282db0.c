// Function: FUN_140282db0
// Addr: 140282db0
// Size: 744 bytes


undefined8 FUN_140282db0(undefined8 *param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  longlong *plVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  undefined8 unaff_R13;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [136];
  
  puVar22 = auStack_c8;
  puVar21 = auStack_c8;
  dVar1 = *param_3;
  dVar2 = param_3[2];
  dVar11 = (double)(int)*param_2 * dVar1;
  dVar12 = (double)(int)((ulonglong)*param_2 >> 0x20) * dVar1;
  uVar26 = SUB84(dVar12,0);
  uVar27 = (undefined4)((ulonglong)dVar12 >> 0x20);
  dVar3 = param_3[1];
  if ((dVar11 != dVar3) || (dVar12 != dVar2)) {
    plVar4 = (longlong *)param_3[4];
    dVar14 = (double)(int)*param_1 * dVar1;
    dVar1 = (double)(int)((ulonglong)*param_1 >> 0x20) * dVar1;
    if ((dVar12 - dVar1) * (dVar14 - dVar3) - (dVar11 - dVar14) * (dVar1 - dVar2) == 0.0) {
      plVar15 = (longlong *)FUN_14028af20(0x30);
      *(undefined4 *)(plVar15 + 1) = 7;
      *plVar15 = (longlong)&PTR_FUN_1404924d0;
      auVar8._8_4_ = uVar26;
      auVar8._0_8_ = dVar11;
      auVar8._12_4_ = uVar27;
      *(undefined1 (*) [16])(plVar15 + 4) = auVar8;
    }
    else {
      plVar15 = (longlong *)FUN_14028af20(0x40);
      *(undefined4 *)(plVar15 + 1) = 7;
      *plVar15 = (longlong)&PTR_FUN_1404923e0;
      auVar13._8_4_ = SUB84(dVar1,0);
      auVar13._0_8_ = dVar14;
      auVar13._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      *(undefined1 (*) [16])(plVar15 + 4) = auVar13;
      auVar10._8_4_ = uVar26;
      auVar10._0_8_ = dVar11;
      auVar10._12_4_ = uVar27;
      *(undefined1 (*) [16])(plVar15 + 6) = auVar10;
    }
    plVar15[3] = (longlong)dVar2;
    plVar15[2] = (longlong)dVar3;
    puVar5 = (undefined8 *)plVar4[1];
    if (puVar5 == (undefined8 *)plVar4[2]) {
      uVar24 = (longlong)puVar5 - *plVar4;
      lVar19 = (longlong)uVar24 >> 3;
      if (lVar19 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar18 = plVar4[2] - *plVar4 >> 3;
      if (0x1fffffffffffffff - (uVar18 >> 1) < uVar18) {
LAB_140283094:
                    /* WARNING: Subroutine does not return */
        FUN_140017370();
      }
      uVar20 = lVar19 + 1;
      uVar18 = (uVar18 >> 1) + uVar18;
      if (uVar20 <= uVar18) {
        uVar20 = uVar18;
      }
      if (0x1fffffffffffffff < uVar20) goto LAB_140283094;
      uVar18 = uVar20 * 8;
      uVar17 = 0;
      uVar23 = uVar17;
      if (uVar18 != 0) {
        if (uVar18 < 0x1000) {
          uVar23 = FUN_14028af20();
          puVar22 = auStack_c8;
        }
        else {
          if (uVar18 + 0x27 <= uVar18) goto LAB_140283094;
          lVar19 = FUN_14028af20(uVar18 + 0x27);
          if (lVar19 == 0) {
            pcVar7 = (code *)swi(0x29);
            lVar19 = (*pcVar7)(5);
            puVar21 = auStack_c0;
          }
          uVar23 = lVar19 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar23 - 8) = lVar19;
          puVar22 = puVar21;
        }
      }
      *(undefined8 *)(puVar22 + 0xd0) = unaff_R13;
      puVar25 = (ulonglong *)((uVar24 & 0xfffffffffffffff8) + uVar23);
      *(longlong **)(puVar22 + 0x20) = plVar4;
      *(ulonglong *)(puVar22 + 0x30) = uVar20;
      *(ulonglong **)(puVar22 + 0x40) = puVar25 + 1;
      if (plVar15 != (longlong *)0x0) {
        pcVar7 = *(code **)(*plVar15 + 8);
        *(undefined8 *)(puVar22 + -8) = 0x140282fdc;
        uVar17 = (*pcVar7)(plVar15);
      }
      *puVar25 = uVar17;
      puVar6 = (undefined8 *)plVar4[1];
      lVar19 = *plVar4;
      *(ulonglong **)(puVar22 + 0x38) = puVar25;
      if (puVar5 == puVar6) {
        *(undefined8 *)(puVar22 + -8) = 0x140282ffe;
        FUN_1402825b0(lVar19,puVar6,uVar23);
      }
      else {
        *(undefined8 *)(puVar22 + -8) = 0x140283008;
        FUN_1402825b0(lVar19,puVar5,uVar23);
        lVar19 = plVar4[1];
        *(ulonglong *)(puVar22 + 0x38) = uVar23;
        *(undefined8 *)(puVar22 + -8) = 0x14028301c;
        FUN_1402825b0(puVar5,lVar19,puVar25 + 1);
      }
      *(undefined8 *)(puVar22 + 0x28) = 0;
      *(undefined8 *)(puVar22 + -8) = 0x140283037;
      FUN_140282850(plVar4,uVar23,*(undefined8 *)(puVar22 + 0xd8),uVar20);
      *(undefined8 *)(puVar22 + -8) = 0x140283041;
      FUN_1402827a0(puVar22 + 0x20);
      param_3 = *(double **)(puVar22 + 0xe0);
    }
    else if (plVar15 == (longlong *)0x0) {
      *puVar5 = 0;
      plVar4[1] = plVar4[1] + 8;
      puVar22 = auStack_c8;
    }
    else {
      uVar16 = (**(code **)(*plVar15 + 8))(plVar15);
      *puVar5 = uVar16;
      plVar4[1] = plVar4[1] + 8;
      puVar22 = auStack_c8;
    }
    if (plVar15 != (longlong *)0x0) {
      pcVar7 = *(code **)*plVar15;
      *(undefined8 *)(puVar22 + -8) = 0x140283063;
      (*pcVar7)(plVar15,1);
    }
    auVar9._8_4_ = uVar26;
    auVar9._0_8_ = dVar11;
    auVar9._12_4_ = uVar27;
    *(undefined1 (*) [16])(param_3 + 1) = auVar9;
  }
  return 0;
}

