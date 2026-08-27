// Function: FUN_140034a80
// Addr: 140034a80
// Size: 564 bytes


undefined8 * FUN_140034a80(longlong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar16 = auStack_38;
  puVar15 = auStack_38;
  lVar3 = *param_1;
  if (param_1[1] - lVar3 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar13 = param_1[2] - lVar3 >> 5;
  if (uVar13 <= 0x7ffffffffffffff - (uVar13 >> 1)) {
    uVar13 = (uVar13 >> 1) + uVar13;
    uVar1 = (param_1[1] - lVar3 >> 5) + 1;
    uVar17 = uVar1;
    if (uVar1 <= uVar13) {
      uVar17 = uVar13;
    }
    if (uVar17 < 0x800000000000000) {
      puVar18 = (undefined8 *)0x0;
      uVar13 = uVar17 * 0x20;
      if (uVar13 != 0) {
        if (uVar13 < 0x1000) {
          puVar18 = (undefined8 *)FUN_14028af20();
          puVar16 = auStack_38;
        }
        else {
          if (uVar13 + 0x27 <= uVar13) goto LAB_140034cb0;
          lVar11 = FUN_14028af20(uVar13 + 0x27);
          if (lVar11 == 0) {
            pcVar5 = (code *)swi(0x29);
            lVar11 = (*pcVar5)(5);
            puVar15 = auStack_30;
          }
          puVar18 = (undefined8 *)(lVar11 + 0x27U & 0xffffffffffffffe0);
          puVar18[-1] = lVar11;
          puVar16 = puVar15;
        }
      }
      puVar2 = (undefined8 *)(((longlong)param_2 - lVar3 & 0xffffffffffffffe0U) + (longlong)puVar18)
      ;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined8 *)(puVar16 + -8) = 0x140034b86;
      FUN_140017480(puVar2,"schemecolor",0xb);
      puVar4 = (undefined4 *)param_1[1];
      puVar12 = (undefined4 *)*param_1;
      puVar10 = puVar18;
      if (param_2 == puVar4) {
        for (; puVar12 != puVar4; puVar12 = puVar12 + 8) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          uVar6 = puVar12[1];
          uVar7 = puVar12[2];
          uVar8 = puVar12[3];
          *(undefined4 *)puVar10 = *puVar12;
          *(undefined4 *)((longlong)puVar10 + 4) = uVar6;
          *(undefined4 *)(puVar10 + 1) = uVar7;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uVar8;
          uVar9 = *(undefined8 *)(puVar12 + 6);
          puVar10[2] = *(undefined8 *)(puVar12 + 4);
          puVar10[3] = uVar9;
          *(undefined8 *)(puVar12 + 4) = 0;
          *(undefined8 *)(puVar12 + 6) = 0xf;
          *(undefined1 *)puVar12 = 0;
          puVar10 = puVar10 + 4;
        }
      }
      else {
        for (; puVar12 != param_2; puVar12 = puVar12 + 8) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          uVar6 = puVar12[1];
          uVar7 = puVar12[2];
          uVar8 = puVar12[3];
          *(undefined4 *)puVar10 = *puVar12;
          *(undefined4 *)((longlong)puVar10 + 4) = uVar6;
          *(undefined4 *)(puVar10 + 1) = uVar7;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uVar8;
          uVar9 = *(undefined8 *)(puVar12 + 6);
          puVar10[2] = *(undefined8 *)(puVar12 + 4);
          puVar10[3] = uVar9;
          *(undefined8 *)(puVar12 + 4) = 0;
          *(undefined8 *)(puVar12 + 6) = 0xf;
          *(undefined1 *)puVar12 = 0;
          puVar10 = puVar10 + 4;
        }
        puVar4 = (undefined4 *)param_1[1];
        puVar10 = puVar2;
        for (; param_2 != puVar4; param_2 = param_2 + 8) {
          puVar14 = puVar10 + 4;
          *puVar14 = 0;
          puVar10[5] = 0;
          puVar10[6] = 0;
          puVar10[7] = 0;
          uVar6 = param_2[1];
          uVar7 = param_2[2];
          uVar8 = param_2[3];
          *(undefined4 *)puVar14 = *param_2;
          *(undefined4 *)((longlong)puVar10 + 0x24) = uVar6;
          *(undefined4 *)(puVar10 + 5) = uVar7;
          *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar8;
          uVar9 = *(undefined8 *)(param_2 + 6);
          puVar10[6] = *(undefined8 *)(param_2 + 4);
          puVar10[7] = uVar9;
          *(undefined8 *)(param_2 + 4) = 0;
          *(undefined8 *)(param_2 + 6) = 0xf;
          *(undefined1 *)param_2 = 0;
          puVar10 = puVar14;
        }
      }
      *(undefined8 *)(puVar16 + -8) = 0x140034c8a;
      FUN_140013070(param_1,puVar18,uVar1,uVar17);
      return puVar2;
    }
  }
LAB_140034cb0:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

