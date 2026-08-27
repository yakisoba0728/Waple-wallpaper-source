// Function: FUN_140282b90
// Addr: 140282b90
// Size: 542 bytes


undefined8 FUN_140282b90(undefined8 *param_1,double *param_2)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  longlong *plVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [128];
  
  puVar18 = auStack_c8;
  puVar19 = auStack_c8;
  dVar2 = param_2[2];
  dVar10 = (double)(int)*param_1 * *param_2;
  dVar11 = (double)(int)((ulonglong)*param_1 >> 0x20) * *param_2;
  uVar21 = (undefined4)((ulonglong)dVar11 >> 0x20);
  dVar3 = param_2[1];
  if ((dVar10 != dVar3) || (dVar11 != dVar2)) {
    plVar4 = (longlong *)param_2[4];
    plVar12 = (longlong *)FUN_14028af20(0x30);
    *(undefined4 *)(plVar12 + 1) = 7;
    *plVar12 = (longlong)&PTR_FUN_1404924d0;
    plVar12[2] = (longlong)dVar3;
    plVar12[3] = (longlong)dVar2;
    auVar8._8_4_ = SUB84(dVar11,0);
    auVar8._0_8_ = dVar10;
    auVar8._12_4_ = uVar21;
    *(undefined1 (*) [16])(plVar12 + 4) = auVar8;
    puVar5 = (undefined8 *)plVar4[1];
    if (puVar5 == (undefined8 *)plVar4[2]) {
      uVar16 = (longlong)puVar5 - *plVar4;
      lVar15 = (longlong)uVar16 >> 3;
      if (lVar15 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar14 = plVar4[2] - *plVar4 >> 3;
      if (0x1fffffffffffffff - (uVar14 >> 1) < uVar14) {
LAB_140282daa:
                    /* WARNING: Subroutine does not return */
        FUN_140017370();
      }
      uVar1 = lVar15 + 1;
      uVar14 = (uVar14 >> 1) + uVar14;
      uVar20 = uVar1;
      if (uVar1 <= uVar14) {
        uVar20 = uVar14;
      }
      if (0x1fffffffffffffff < uVar20) goto LAB_140282daa;
      uVar14 = uVar20 * 8;
      if (uVar14 == 0) {
        uVar14 = 0;
        puVar19 = auStack_c8;
      }
      else if (uVar14 < 0x1000) {
        uVar14 = FUN_14028af20();
      }
      else {
        if (uVar14 + 0x27 <= uVar14) goto LAB_140282daa;
        lVar15 = FUN_14028af20(uVar14 + 0x27);
        if (lVar15 == 0) {
          pcVar7 = (code *)swi(0x29);
          lVar15 = (*pcVar7)(5);
          puVar18 = auStack_c0;
        }
        uVar14 = lVar15 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar14 - 8) = lVar15;
        puVar19 = puVar18;
      }
      lVar15 = *plVar12;
      puVar17 = (undefined8 *)((uVar16 & 0xfffffffffffffff8) + uVar14);
      *(longlong **)(puVar19 + 0x20) = plVar4;
      *(ulonglong *)(puVar19 + 0x30) = uVar20;
      *(undefined8 **)(puVar19 + 0x40) = puVar17 + 1;
      pcVar7 = *(code **)(lVar15 + 8);
      *(undefined8 *)(puVar19 + -8) = 0x140282d0d;
      uVar13 = (*pcVar7)(plVar12);
      *(undefined8 **)(puVar19 + 0x38) = puVar17;
      *puVar17 = uVar13;
      puVar6 = (undefined8 *)plVar4[1];
      lVar15 = *plVar4;
      if (puVar5 == puVar6) {
        *(undefined8 *)(puVar19 + -8) = 0x140282d29;
        FUN_1402825b0(lVar15,puVar6,uVar14);
      }
      else {
        *(undefined8 *)(puVar19 + -8) = 0x140282d33;
        FUN_1402825b0(lVar15,puVar5,uVar14);
        lVar15 = plVar4[1];
        *(ulonglong *)(puVar19 + 0x38) = uVar14;
        *(undefined8 *)(puVar19 + -8) = 0x140282d48;
        FUN_1402825b0(puVar5,lVar15,puVar17 + 1);
      }
      *(undefined8 *)(puVar19 + 0x28) = 0;
      *(undefined8 *)(puVar19 + -8) = 0x140282d62;
      FUN_140282850(plVar4,uVar14,uVar1,uVar20);
      *(undefined8 *)(puVar19 + -8) = 0x140282d6c;
      FUN_1402827a0(puVar19 + 0x20);
    }
    else {
      uVar13 = (*(code *)PTR_FUN_1404924d8)(plVar12);
      *puVar5 = uVar13;
      plVar4[1] = plVar4[1] + 8;
      puVar19 = auStack_c8;
    }
    pcVar7 = *(code **)*plVar12;
    *(undefined8 *)(puVar19 + -8) = 0x140282d79;
    (*pcVar7)(plVar12,1);
    auVar9._8_4_ = SUB84(dVar11,0);
    auVar9._0_8_ = dVar10;
    auVar9._12_4_ = uVar21;
    *(undefined1 (*) [16])(param_2 + 1) = auVar9;
  }
  return 0;
}

