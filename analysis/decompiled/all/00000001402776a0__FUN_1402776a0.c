// Function: FUN_1402776a0
// Addr: 1402776a0
// Size: 374 bytes


undefined8 * FUN_1402776a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];
  
  puVar9 = auStack_48;
  puVar8 = auStack_48;
  lVar2 = param_2[2];
  uVar3 = param_3[2];
  if (0x7ffffffffffffffeU - lVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (7 < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  puVar10 = (undefined8 *)0x0;
  uVar1 = lVar2 + uVar3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (uVar1 < 8) {
    uVar5 = 7;
    puVar10 = param_1;
  }
  else {
    uVar5 = uVar1 | 7;
    if (uVar5 < 0x7fffffffffffffff) goto LAB_14027775b;
    uVar7 = 0xfffffffffffffffe;
    uVar5 = 0x7ffffffffffffffe;
    puVar9 = auStack_48;
    do {
      if (uVar7 < 0x1000) {
        *(undefined8 *)(puVar9 + -8) = 0x1402777a8;
        puVar10 = (undefined8 *)FUN_14028af20();
        *param_1 = puVar10;
        goto LAB_1402777b8;
      }
      puVar8 = puVar9;
      if (uVar7 + 0x27 <= uVar7) {
LAB_14027780c:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar8 + -8) = &UNK_140277811;
        FUN_140017370();
      }
      *(undefined8 *)(puVar9 + -8) = 0x14027774f;
      lVar6 = FUN_14028af20(uVar7 + 0x27);
      if (lVar6 != 0) {
        puVar10 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
        puVar10[-1] = lVar6;
        *param_1 = puVar10;
        goto LAB_1402777b8;
      }
      pcVar4 = (code *)swi(0x29);
      uVar5 = (*pcVar4)(5);
      puVar8 = puVar9 + 8;
LAB_14027775b:
      if (uVar5 < 10) {
        uVar5 = 10;
      }
      if (0x7fffffffffffffff < uVar5 + 1) goto LAB_14027780c;
      uVar7 = (uVar5 + 1) * 2;
      puVar9 = puVar8;
    } while (uVar7 != 0);
    *param_1 = puVar10;
  }
LAB_1402777b8:
  param_1[3] = uVar5;
  param_1[2] = uVar1;
  *(undefined8 *)(puVar9 + -8) = 0x1402777d2;
  FUN_1404210f0(puVar10,param_2,lVar2 * 2);
  *(undefined8 *)(puVar9 + -8) = 0x1402777e6;
  FUN_1404210f0(lVar2 * 2 + (longlong)puVar10,param_3,uVar3 * 2);
  *(undefined2 *)((longlong)puVar10 + uVar1 * 2) = 0;
  return param_1;
}

