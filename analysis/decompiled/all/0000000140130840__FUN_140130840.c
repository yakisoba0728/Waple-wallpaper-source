// Function: FUN_140130840
// Addr: 140130840
// Size: 720 bytes


undefined4 * FUN_140130840(longlong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [80];
  
  puVar9 = auStack_98;
  puVar10 = auStack_98;
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 != (undefined4 *)param_1[2]) {
    *puVar8 = *param_2;
    puVar8[1] = param_2[1];
    puVar8[2] = param_2[2];
    puVar8[3] = param_2[3];
    puVar8[4] = param_2[4];
    puVar8[5] = param_2[5];
    FUN_140016fc0(puVar8 + 6,param_2 + 6);
    FUN_140016fc0(puVar8 + 0xe,param_2 + 0xe);
    FUN_140016fc0(puVar8 + 0x16,param_2 + 0x16);
    *(undefined8 *)(puVar8 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
    puVar8[0x20] = param_2[0x20];
    puVar8 = (undefined4 *)param_1[1];
    param_1[1] = (longlong)(puVar8 + 0x22);
    return puVar8;
  }
  uVar15 = 0x1e1e1e1e1e1e1e1;
  lVar4 = ((longlong)puVar8 - *param_1) / 0x88;
  if (lVar4 == 0x1e1e1e1e1e1e1e1) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar1 = lVar4 + 1;
  uVar12 = (param_1[2] - *param_1 >> 3) * -0xf0f0f0f0f0f0f0f;
  uVar5 = 0x1e1e1e1e1e1e1e1 - (uVar12 >> 1);
  if (uVar12 < uVar5 || uVar12 - uVar5 == 0) {
    uVar12 = (uVar12 >> 1) + uVar12;
    uVar15 = uVar1;
    if (uVar1 <= uVar12) {
      uVar15 = uVar12;
    }
    if (0x1e1e1e1e1e1e1e1 < uVar15) {
LAB_140130b0c:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar12 = uVar15 * 0x88;
    if (uVar12 == 0) {
      uVar12 = 0;
      puVar10 = auStack_98;
      goto LAB_1401309b0;
    }
    if (uVar12 < 0x1000) {
      uVar12 = FUN_14028af20(uVar12);
      goto LAB_1401309b0;
    }
    uVar5 = uVar12 + 0x27;
    if (uVar5 <= uVar12) goto LAB_140130b0c;
  }
  else {
    uVar5 = 0xffffffffffffffaf;
  }
  lVar6 = FUN_14028af20(uVar5);
  if (lVar6 == 0) {
    pcVar3 = (code *)swi(0x29);
    lVar6 = (*pcVar3)(5);
    puVar9 = auStack_90;
  }
  uVar12 = lVar6 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar12 - 8) = lVar6;
  puVar10 = puVar9;
LAB_1401309b0:
  uVar2 = *param_2;
  *(longlong **)(puVar10 + 0x20) = param_1;
  puVar14 = (undefined4 *)(lVar4 * 0x88 + uVar12);
  *(ulonglong *)(puVar10 + 0x30) = uVar15;
  *puVar14 = uVar2;
  puVar11 = puVar14 + 0x22;
  puVar14[1] = param_2[1];
  puVar14[2] = param_2[2];
  puVar14[3] = param_2[3];
  puVar14[4] = param_2[4];
  puVar14[5] = param_2[5];
  *(undefined4 **)(puVar10 + 0x40) = puVar11;
  *(undefined8 *)(puVar10 + -8) = 0x140130a0d;
  FUN_140016fc0(puVar14 + 6,param_2 + 6);
  *(undefined8 *)(puVar10 + -8) = 0x140130a1b;
  FUN_140016fc0(puVar14 + 0xe,param_2 + 0xe);
  *(undefined8 *)(puVar10 + -8) = 0x140130a29;
  FUN_140016fc0(puVar14 + 0x16,param_2 + 0x16);
  *(undefined8 *)(puVar14 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  puVar14[0x20] = param_2[0x20];
  puVar13 = (undefined4 *)param_1[1];
  puVar7 = (undefined4 *)*param_1;
  *(undefined4 **)(puVar10 + 0x38) = puVar14;
  uVar5 = uVar12;
  if (puVar8 == puVar13) {
    if (puVar7 != puVar13) {
      do {
        *(undefined8 *)(puVar10 + -8) = 0x140130a65;
        FUN_140133980(uVar5);
        uVar5 = uVar5 + 0x88;
        puVar7 = puVar7 + 0x22;
      } while (puVar7 != puVar13);
    }
  }
  else {
    for (; puVar7 != puVar8; puVar7 = puVar7 + 0x22) {
      *(undefined8 *)(puVar10 + -8) = 0x140130a85;
      FUN_140133980(uVar5);
      uVar5 = uVar5 + 0x88;
    }
    puVar13 = (undefined4 *)param_1[1];
    *(ulonglong *)(puVar10 + 0x38) = uVar12;
    if (puVar8 != puVar13) {
      do {
        *(undefined8 *)(puVar10 + -8) = 0x140130abb;
        FUN_140133980(puVar11,puVar8);
        puVar11 = puVar11 + 0x22;
        puVar8 = puVar8 + 0x22;
      } while (puVar8 != puVar13);
    }
  }
  *(undefined8 *)(puVar10 + 0x28) = 0;
  *(undefined8 *)(puVar10 + -8) = 0x140130ae8;
  FUN_1401340e0(param_1,uVar12,uVar1,uVar15);
  *(undefined8 *)(puVar10 + -8) = 0x140130af2;
  FUN_140134030(puVar10 + 0x20);
  return puVar14;
}

