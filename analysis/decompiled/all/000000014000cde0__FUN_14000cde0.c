// Function: FUN_14000cde0
// Addr: 14000cde0
// Size: 552 bytes


undefined8 * FUN_14000cde0(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  puVar14 = auStack_68;
  puVar15 = auStack_68;
  puVar13 = (undefined4 *)param_1[1];
  if (puVar13 != (undefined4 *)param_1[2]) {
    FUN_140016fc0(puVar13);
    puVar16 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar16 + 4);
    return puVar16;
  }
  uVar18 = (longlong)puVar13 - *param_1;
  lVar11 = (longlong)uVar18 >> 5;
  if (lVar11 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar17 = param_1[2] - *param_1 >> 5;
  if (uVar17 <= 0x7ffffffffffffff - (uVar17 >> 1)) {
    uVar1 = lVar11 + 1;
    uVar17 = (uVar17 >> 1) + uVar17;
    uVar19 = uVar1;
    if (uVar1 <= uVar17) {
      uVar19 = uVar17;
    }
    if (uVar19 < 0x800000000000000) {
      uVar17 = uVar19 * 0x20;
      if (uVar17 == 0) {
        puVar16 = (undefined8 *)0x0;
        puVar15 = auStack_68;
      }
      else if (uVar17 < 0x1000) {
        puVar16 = (undefined8 *)FUN_14028af20();
      }
      else {
        if (uVar17 + 0x27 <= uVar17) goto LAB_14000d004;
        lVar11 = FUN_14028af20(uVar17 + 0x27);
        if (lVar11 == 0) {
          pcVar4 = (code *)swi(0x29);
          lVar11 = (*pcVar4)(5);
          puVar14 = auStack_60;
        }
        puVar16 = (undefined8 *)(lVar11 + 0x27U & 0xffffffffffffffe0);
        puVar16[-1] = lVar11;
        puVar15 = puVar14;
      }
      puVar2 = (undefined8 *)((uVar18 & 0xffffffffffffffe0) + (longlong)puVar16);
      *(undefined8 *)(puVar15 + -8) = 0x14000ceda;
      FUN_140016fc0(puVar2,param_2);
      puVar3 = (undefined4 *)param_1[1];
      puVar10 = (undefined4 *)*param_1;
      puVar9 = puVar16;
      if (puVar13 == puVar3) {
        for (; puVar10 != puVar3; puVar10 = puVar10 + 8) {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          uVar5 = puVar10[1];
          uVar6 = puVar10[2];
          uVar7 = puVar10[3];
          *(undefined4 *)puVar9 = *puVar10;
          *(undefined4 *)((longlong)puVar9 + 4) = uVar5;
          *(undefined4 *)(puVar9 + 1) = uVar6;
          *(undefined4 *)((longlong)puVar9 + 0xc) = uVar7;
          uVar8 = *(undefined8 *)(puVar10 + 6);
          puVar9[2] = *(undefined8 *)(puVar10 + 4);
          puVar9[3] = uVar8;
          *(undefined8 *)(puVar10 + 4) = 0;
          *(undefined8 *)(puVar10 + 6) = 0xf;
          *(undefined1 *)puVar10 = 0;
          puVar9 = puVar9 + 4;
        }
      }
      else {
        for (; puVar10 != puVar13; puVar10 = puVar10 + 8) {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          uVar5 = puVar10[1];
          uVar6 = puVar10[2];
          uVar7 = puVar10[3];
          *(undefined4 *)puVar9 = *puVar10;
          *(undefined4 *)((longlong)puVar9 + 4) = uVar5;
          *(undefined4 *)(puVar9 + 1) = uVar6;
          *(undefined4 *)((longlong)puVar9 + 0xc) = uVar7;
          uVar8 = *(undefined8 *)(puVar10 + 6);
          puVar9[2] = *(undefined8 *)(puVar10 + 4);
          puVar9[3] = uVar8;
          *(undefined8 *)(puVar10 + 4) = 0;
          *(undefined8 *)(puVar10 + 6) = 0xf;
          *(undefined1 *)puVar10 = 0;
          puVar9 = puVar9 + 4;
        }
        puVar3 = (undefined4 *)param_1[1];
        puVar9 = puVar2;
        for (; puVar13 != puVar3; puVar13 = puVar13 + 8) {
          puVar12 = puVar9 + 4;
          *puVar12 = 0;
          puVar9[5] = 0;
          puVar9[6] = 0;
          puVar9[7] = 0;
          uVar5 = puVar13[1];
          uVar6 = puVar13[2];
          uVar7 = puVar13[3];
          *(undefined4 *)puVar12 = *puVar13;
          *(undefined4 *)((longlong)puVar9 + 0x24) = uVar5;
          *(undefined4 *)(puVar9 + 5) = uVar6;
          *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar7;
          uVar8 = *(undefined8 *)(puVar13 + 6);
          puVar9[6] = *(undefined8 *)(puVar13 + 4);
          puVar9[7] = uVar8;
          *(undefined8 *)(puVar13 + 4) = 0;
          *(undefined8 *)(puVar13 + 6) = 0xf;
          *(undefined1 *)puVar13 = 0;
          puVar9 = puVar12;
        }
      }
      *(undefined8 *)(puVar15 + -8) = 0x14000cfea;
      FUN_140013070(param_1,puVar16,uVar1,uVar19);
      return puVar2;
    }
  }
LAB_14000d004:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

