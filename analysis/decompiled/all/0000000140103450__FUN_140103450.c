// Function: FUN_140103450
// Addr: 140103450
// Size: 598 bytes


undefined8 * FUN_140103450(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar14 = auStack_58;
  puVar13 = auStack_58;
  puVar12 = (undefined8 *)param_1[1];
  if (puVar12 != (undefined8 *)param_1[2]) {
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    FUN_140017480(puVar12,&DAT_140476d00,2);
    puVar12 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar12 + 4);
    return puVar12;
  }
  uVar17 = (longlong)puVar12 - *param_1;
  lVar9 = (longlong)uVar17 >> 5;
  if (lVar9 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar11 = param_1[2] - *param_1 >> 5;
  if (uVar11 <= 0x7ffffffffffffff - (uVar11 >> 1)) {
    uVar1 = lVar9 + 1;
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar15 = uVar1;
    if (uVar1 <= uVar11) {
      uVar15 = uVar11;
    }
    if (uVar15 < 0x800000000000000) {
      puVar16 = (undefined8 *)0x0;
      uVar11 = uVar15 * 0x20;
      if (uVar11 != 0) {
        if (uVar11 < 0x1000) {
          puVar16 = (undefined8 *)FUN_14028af20();
          puVar14 = auStack_58;
        }
        else {
          if (uVar11 + 0x27 <= uVar11) goto LAB_1401036a2;
          lVar9 = FUN_14028af20(uVar11 + 0x27);
          if (lVar9 == 0) {
            pcVar3 = (code *)swi(0x29);
            lVar9 = (*pcVar3)(5);
            puVar13 = auStack_50;
          }
          puVar16 = (undefined8 *)(lVar9 + 0x27U & 0xffffffffffffffe0);
          puVar16[-1] = lVar9;
          puVar14 = puVar13;
        }
      }
      puVar18 = (undefined8 *)((uVar17 & 0xffffffffffffffe0) + (longlong)puVar16);
      *puVar18 = 0;
      puVar18[1] = 0;
      puVar18[2] = 0;
      puVar18[3] = 0;
      *(undefined8 *)(puVar14 + -8) = 0x14010357c;
      FUN_140017480(puVar18,&DAT_140476d00,2);
      puVar2 = (undefined8 *)param_1[1];
      puVar8 = (undefined8 *)*param_1;
      puVar10 = puVar16;
      if (puVar12 == puVar2) {
        for (; puVar8 != puVar2; puVar8 = puVar8 + 4) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          uVar4 = *(undefined4 *)((longlong)puVar8 + 4);
          uVar5 = *(undefined4 *)(puVar8 + 1);
          uVar6 = *(undefined4 *)((longlong)puVar8 + 0xc);
          *(undefined4 *)puVar10 = *(undefined4 *)puVar8;
          *(undefined4 *)((longlong)puVar10 + 4) = uVar4;
          *(undefined4 *)(puVar10 + 1) = uVar5;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uVar6;
          uVar7 = puVar8[3];
          puVar10[2] = puVar8[2];
          puVar10[3] = uVar7;
          puVar8[2] = 0;
          puVar8[3] = 0xf;
          *(undefined1 *)puVar8 = 0;
          puVar10 = puVar10 + 4;
        }
      }
      else {
        for (; puVar8 != puVar12; puVar8 = puVar8 + 4) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          uVar4 = *(undefined4 *)((longlong)puVar8 + 4);
          uVar5 = *(undefined4 *)(puVar8 + 1);
          uVar6 = *(undefined4 *)((longlong)puVar8 + 0xc);
          *(undefined4 *)puVar10 = *(undefined4 *)puVar8;
          *(undefined4 *)((longlong)puVar10 + 4) = uVar4;
          *(undefined4 *)(puVar10 + 1) = uVar5;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uVar6;
          uVar7 = puVar8[3];
          puVar10[2] = puVar8[2];
          puVar10[3] = uVar7;
          puVar8[2] = 0;
          puVar8[3] = 0xf;
          *(undefined1 *)puVar8 = 0;
          puVar10 = puVar10 + 4;
        }
        puVar2 = (undefined8 *)param_1[1];
        puVar8 = puVar18;
        for (; puVar12 != puVar2; puVar12 = puVar12 + 4) {
          puVar10 = puVar8 + 4;
          *puVar10 = 0;
          puVar8[5] = 0;
          puVar8[6] = 0;
          puVar8[7] = 0;
          uVar4 = *(undefined4 *)((longlong)puVar12 + 4);
          uVar5 = *(undefined4 *)(puVar12 + 1);
          uVar6 = *(undefined4 *)((longlong)puVar12 + 0xc);
          *(undefined4 *)puVar10 = *(undefined4 *)puVar12;
          *(undefined4 *)((longlong)puVar8 + 0x24) = uVar4;
          *(undefined4 *)(puVar8 + 5) = uVar5;
          *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar6;
          uVar7 = puVar12[3];
          puVar8[6] = puVar12[2];
          puVar8[7] = uVar7;
          puVar12[2] = 0;
          puVar12[3] = 0xf;
          *(undefined1 *)puVar12 = 0;
          puVar8 = puVar10;
        }
      }
      *(undefined8 *)(puVar14 + -8) = 0x14010368a;
      FUN_140013070(param_1,puVar16,uVar1,uVar15);
      return puVar18;
    }
  }
LAB_1401036a2:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

