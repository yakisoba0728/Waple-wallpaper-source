// Function: FUN_14008b920
// Addr: 14008b920
// Size: 616 bytes


void FUN_14008b920(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar13 = auStack_48;
  puVar14 = auStack_48;
  if ((*(byte *)(param_1 + 0xd8) & 1) == 0) {
    FUN_14000cbc0(*(undefined8 *)(param_1 + 8));
    return;
  }
  puVar12 = *(undefined4 **)(param_1 + 0x18);
  if (puVar12 != *(undefined4 **)(param_1 + 0x20)) {
    FUN_140016fc0(puVar12);
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 0x20;
    return;
  }
  uVar16 = (longlong)puVar12 - *(longlong *)(param_1 + 0x10);
  lVar11 = (longlong)uVar16 >> 5;
  if (lVar11 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar9 = (longlong)*(undefined4 **)(param_1 + 0x20) - *(longlong *)(param_1 + 0x10) >> 5;
  if (uVar9 <= 0x7ffffffffffffff - (uVar9 >> 1)) {
    uVar1 = lVar11 + 1;
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar18 = uVar1;
    if (uVar1 <= uVar9) {
      uVar18 = uVar9;
    }
    if (uVar18 < 0x800000000000000) {
      uVar9 = uVar18 * 0x20;
      if (uVar9 == 0) {
        puVar15 = (undefined8 *)0x0;
        puVar14 = auStack_48;
      }
      else if (uVar9 < 0x1000) {
        puVar15 = (undefined8 *)FUN_14028af20();
      }
      else {
        if (uVar9 + 0x27 <= uVar9) goto LAB_14008bb7e;
        lVar11 = FUN_14028af20(uVar9 + 0x27);
        if (lVar11 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar11 = (*pcVar3)(5);
          puVar13 = auStack_40;
        }
        puVar15 = (undefined8 *)(lVar11 + 0x27U & 0xffffffffffffffe0);
        puVar15[-1] = lVar11;
        puVar14 = puVar13;
      }
      puVar17 = (undefined8 *)((uVar16 & 0xffffffffffffffe0) + (longlong)puVar15);
      *(undefined8 *)(puVar14 + -8) = 0x14008ba3b;
      FUN_140016fc0(puVar17,param_2);
      puVar2 = *(undefined4 **)(param_1 + 0x18);
      puVar10 = *(undefined4 **)(param_1 + 0x10);
      puVar8 = puVar15;
      if (puVar12 == puVar2) {
        for (; puVar10 != puVar2; puVar10 = puVar10 + 8) {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          uVar4 = puVar10[1];
          uVar5 = puVar10[2];
          uVar6 = puVar10[3];
          *(undefined4 *)puVar8 = *puVar10;
          *(undefined4 *)((longlong)puVar8 + 4) = uVar4;
          *(undefined4 *)(puVar8 + 1) = uVar5;
          *(undefined4 *)((longlong)puVar8 + 0xc) = uVar6;
          uVar7 = *(undefined8 *)(puVar10 + 6);
          puVar8[2] = *(undefined8 *)(puVar10 + 4);
          puVar8[3] = uVar7;
          *(undefined8 *)(puVar10 + 4) = 0;
          *(undefined8 *)(puVar10 + 6) = 0xf;
          *(undefined1 *)puVar10 = 0;
          puVar8 = puVar8 + 4;
        }
      }
      else {
        for (; puVar10 != puVar12; puVar10 = puVar10 + 8) {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          uVar4 = puVar10[1];
          uVar5 = puVar10[2];
          uVar6 = puVar10[3];
          *(undefined4 *)puVar8 = *puVar10;
          *(undefined4 *)((longlong)puVar8 + 4) = uVar4;
          *(undefined4 *)(puVar8 + 1) = uVar5;
          *(undefined4 *)((longlong)puVar8 + 0xc) = uVar6;
          uVar7 = *(undefined8 *)(puVar10 + 6);
          puVar8[2] = *(undefined8 *)(puVar10 + 4);
          puVar8[3] = uVar7;
          *(undefined8 *)(puVar10 + 4) = 0;
          *(undefined8 *)(puVar10 + 6) = 0xf;
          *(undefined1 *)puVar10 = 0;
          puVar8 = puVar8 + 4;
        }
        puVar2 = *(undefined4 **)(param_1 + 0x18);
        for (; puVar12 != puVar2; puVar12 = puVar12 + 8) {
          puVar8 = puVar17 + 4;
          *puVar8 = 0;
          puVar17[5] = 0;
          puVar17[6] = 0;
          puVar17[7] = 0;
          uVar4 = puVar12[1];
          uVar5 = puVar12[2];
          uVar6 = puVar12[3];
          *(undefined4 *)puVar8 = *puVar12;
          *(undefined4 *)((longlong)puVar17 + 0x24) = uVar4;
          *(undefined4 *)(puVar17 + 5) = uVar5;
          *(undefined4 *)((longlong)puVar17 + 0x2c) = uVar6;
          uVar7 = *(undefined8 *)(puVar12 + 6);
          puVar17[6] = *(undefined8 *)(puVar12 + 4);
          puVar17[7] = uVar7;
          *(undefined8 *)(puVar12 + 4) = 0;
          *(undefined8 *)(puVar12 + 6) = 0xf;
          *(undefined1 *)puVar12 = 0;
          puVar17 = puVar8;
        }
      }
      FUN_140013070(param_1 + 0x10,puVar15,uVar1,uVar18);
      return;
    }
  }
LAB_14008bb7e:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

