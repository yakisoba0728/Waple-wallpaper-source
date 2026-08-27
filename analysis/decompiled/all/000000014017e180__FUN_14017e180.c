// Function: FUN_14017e180
// Addr: 14017e180
// Size: 319 bytes


undefined1 * FUN_14017e180(longlong *param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  longlong lVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  puVar11 = auStack_68;
  puVar9 = (undefined1 *)param_1[1];
  if (puVar9 == (undefined1 *)param_1[2]) {
    lVar12 = (longlong)puVar9 - *param_1;
    uVar10 = 0x7fffffffffffffff;
    if (lVar12 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar6 = param_1[2] - *param_1;
    uVar1 = lVar12 + 1;
    uVar8 = uVar6 >> 1;
    if (uVar6 <= 0x7fffffffffffffff - uVar8) goto LAB_14017e20a;
    uVar6 = 0x8000000000000026;
    puVar11 = auStack_68;
    while( true ) {
      *(undefined8 *)(puVar11 + -8) = 0x14017e1fe;
      lVar4 = FUN_14028af20(uVar6);
      if (lVar4 != 0) break;
      uVar6 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)();
      puVar11 = puVar11 + 8;
LAB_14017e20a:
      uVar10 = uVar1;
      if (uVar1 <= uVar8 + uVar6) {
        uVar10 = uVar8 + uVar6;
      }
      if (uVar10 == 0) {
        puVar5 = (undefined1 *)0x0;
        goto LAB_14017e252;
      }
      if (uVar10 < 0x1000) {
        *(undefined8 *)(puVar11 + -8) = 0x14017e24f;
        puVar5 = (undefined1 *)FUN_14028af20(uVar10);
        goto LAB_14017e252;
      }
      uVar6 = uVar10 + 0x27;
      if (uVar6 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar11 + -8) = &UNK_14017e2c0;
        FUN_140017370();
      }
    }
    puVar5 = (undefined1 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)(puVar5 + -8) = lVar4;
LAB_14017e252:
    puVar13 = puVar5 + lVar12;
    *puVar13 = *param_2;
    puVar2 = (undefined1 *)*param_1;
    if (puVar9 == (undefined1 *)param_1[1]) {
      lVar12 = param_1[1] - (longlong)puVar2;
      puVar7 = puVar5;
      puVar9 = puVar2;
    }
    else {
      *(undefined8 *)(puVar11 + -8) = 0x14017e27d;
      FUN_1404210f0(puVar5,puVar2,(longlong)puVar9 - (longlong)puVar2);
      puVar7 = puVar13 + 1;
      lVar12 = param_1[1] - (longlong)puVar9;
    }
    *(undefined8 *)(puVar11 + -8) = 0x14017e290;
    FUN_1404210f0(puVar7,puVar9,lVar12);
    *(undefined8 *)(puVar11 + -8) = 0x14017e2a1;
    FUN_14005b010(param_1,puVar5,uVar1,uVar10);
  }
  else {
    *puVar9 = *param_2;
    puVar13 = (undefined1 *)param_1[1];
    param_1[1] = (longlong)(puVar13 + 1);
  }
  return puVar13;
}

