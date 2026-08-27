// Function: FUN_1400dd4c0
// Addr: 1400dd4c0
// Size: 355 bytes


undefined4 * FUN_1400dd4c0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined4 *puVar23;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar19 = auStack_58;
  puVar20 = auStack_58;
  puVar17 = (undefined8 *)param_1[1];
  if (puVar17 != (undefined8 *)param_1[2]) {
    uVar11 = param_2[1];
    uVar12 = param_2[2];
    uVar13 = param_2[3];
    *puVar17 = *param_2;
    puVar17[1] = uVar11;
    puVar17[2] = uVar12;
    puVar17[3] = uVar13;
    puVar18 = (undefined4 *)param_1[1];
    param_1[1] = (longlong)(puVar18 + 8);
    return puVar18;
  }
  uVar22 = (longlong)puVar17 - *param_1;
  lVar16 = (longlong)uVar22 >> 5;
  if (lVar16 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar14 = param_1[2] - *param_1 >> 5;
  if (uVar14 <= 0x7ffffffffffffff - (uVar14 >> 1)) {
    uVar1 = lVar16 + 1;
    uVar14 = (uVar14 >> 1) + uVar14;
    uVar21 = uVar1;
    if (uVar1 <= uVar14) {
      uVar21 = uVar14;
    }
    if (uVar21 < 0x800000000000000) {
      uVar14 = uVar21 * 0x20;
      if (uVar14 == 0) {
        puVar18 = (undefined4 *)0x0;
        puVar20 = auStack_58;
      }
      else if (uVar14 < 0x1000) {
        puVar18 = (undefined4 *)FUN_14028af20();
      }
      else {
        if (uVar14 + 0x27 <= uVar14) goto LAB_1400dd61f;
        lVar16 = FUN_14028af20(uVar14 + 0x27);
        if (lVar16 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar16 = (*pcVar3)(5);
          puVar19 = auStack_50;
        }
        puVar18 = (undefined4 *)(lVar16 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(puVar18 + -2) = lVar16;
        puVar20 = puVar19;
      }
      uVar4 = *(undefined4 *)((longlong)param_2 + 4);
      uVar5 = *(undefined4 *)(param_2 + 1);
      uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar7 = *(undefined4 *)(param_2 + 2);
      uVar8 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar9 = *(undefined4 *)(param_2 + 3);
      uVar10 = *(undefined4 *)((longlong)param_2 + 0x1c);
      puVar23 = (undefined4 *)((uVar22 & 0xffffffffffffffe0) + (longlong)puVar18);
      *puVar23 = *(undefined4 *)param_2;
      puVar23[1] = uVar4;
      puVar23[2] = uVar5;
      puVar23[3] = uVar6;
      puVar23[4] = uVar7;
      puVar23[5] = uVar8;
      puVar23[6] = uVar9;
      puVar23[7] = uVar10;
      puVar2 = (undefined8 *)*param_1;
      if (puVar17 == (undefined8 *)param_1[1]) {
        lVar16 = param_1[1] - (longlong)puVar2;
        puVar15 = puVar18;
        puVar17 = puVar2;
      }
      else {
        *(undefined8 *)(puVar20 + -8) = 0x1400dd5e3;
        FUN_1404210f0(puVar18,puVar2,(longlong)puVar17 - (longlong)puVar2);
        puVar15 = puVar23 + 8;
        lVar16 = param_1[1] - (longlong)puVar17;
      }
      *(undefined8 *)(puVar20 + -8) = 0x1400dd5f6;
      FUN_1404210f0(puVar15,puVar17,lVar16);
      *(undefined8 *)(puVar20 + -8) = 0x1400dd607;
      FUN_1400601c0(param_1,puVar18,uVar1,uVar21);
      return puVar23;
    }
  }
LAB_1400dd61f:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

