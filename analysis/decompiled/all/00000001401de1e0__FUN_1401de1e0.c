// Function: FUN_1401de1e0
// Addr: 1401de1e0
// Size: 640 bytes


void FUN_1401de1e0(undefined8 *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *unaff_RSI;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  *param_1 = &PTR_FUN_1404903b8;
  puVar11 = auStack_58;
  if (param_1[0x33] == param_1[0x34]) goto LAB_1401de336;
  lVar7 = param_1[0x34] - param_1[0x33];
  if (lVar7 == 0) {
    puVar13 = (undefined8 *)0x0;
    puVar12 = (undefined8 *)0x0;
    puVar14 = (undefined8 *)0x0;
    puVar10 = puVar13;
joined_r0x0001401de2b6:
    for (; puVar13 != puVar14; puVar13 = puVar13 + 1) {
      FUN_1401de750(*puVar13,0,0,0xffffffff);
    }
    if (param_1[0x33] != param_1[0x34]) {
      param_1[0x34] = param_1[0x33];
    }
    puVar11 = auStack_58;
    if (puVar10 == (undefined8 *)0x0) goto LAB_1401de336;
    puVar11 = auStack_58;
    if (0xfff < (ulonglong)(((longlong)puVar12 - (longlong)puVar10 >> 3) * 8)) {
      unaff_RSI = (undefined8 *)((longlong)puVar10 + (-8 - (longlong)puVar10[-1]));
      puVar10 = (undefined8 *)puVar10[-1];
      puVar11 = auStack_58;
      if ((undefined8 *)0x1f < unaff_RSI) goto LAB_1401de327;
    }
  }
  else {
    uVar8 = lVar7 >> 3;
    if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar2 = uVar8 * 8;
    if (uVar2 == 0) {
      puVar13 = (undefined8 *)0x0;
LAB_1401de27f:
      puVar12 = puVar13 + uVar8;
      uVar8 = param_1[0x34] - param_1[0x33];
      FUN_1404210f0(puVar13,param_1[0x33],uVar8);
      puVar14 = (undefined8 *)((uVar8 & 0xfffffffffffffff8) + (longlong)puVar13);
      puVar10 = puVar13;
      goto joined_r0x0001401de2b6;
    }
    if (uVar2 < 0x1000) {
      puVar13 = (undefined8 *)FUN_14028af20(uVar2);
      goto LAB_1401de27f;
    }
    if (uVar2 + 0x27 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    lVar7 = FUN_14028af20();
    if (lVar7 != 0) {
      puVar13 = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
      puVar13[-1] = lVar7;
      goto LAB_1401de27f;
    }
LAB_1401de327:
    puVar10 = unaff_RSI;
    pcVar6 = (code *)swi(0x29);
    (*pcVar6)(5);
    puVar11 = auStack_50;
  }
  *(undefined8 *)(puVar11 + -8) = 0x1401de336;
  thunk_FUN_14028af80(puVar10);
LAB_1401de336:
  lVar7 = param_1[0x30];
  if (lVar7 != 0) {
    uVar3 = *(undefined8 *)(lVar7 + 0x1a0);
    uVar4 = *(undefined8 *)(lVar7 + 0x198);
    *(undefined8 *)(puVar11 + -8) = 0x1401de358;
    lVar9 = thunk_FUN_14028d250(uVar4,uVar3,param_1);
    lVar7 = param_1[0x30];
    lVar5 = *(longlong *)(lVar7 + 0x1a0);
    if (lVar9 != lVar5) {
      *(undefined8 *)(puVar11 + -8) = 0x1401de37a;
      FUN_1404210f0(lVar9,lVar9 + 8,lVar5 - (lVar9 + 8));
      plVar1 = (longlong *)(lVar7 + 0x1a0);
      *plVar1 = *plVar1 + -8;
      pcVar6 = *(code **)(*(longlong *)param_1[0x30] + 0xa0);
      *(undefined8 *)(puVar11 + -8) = 0x1401de392;
      (*pcVar6)();
    }
    param_1[0x30] = 0;
    *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  }
  plVar1 = *(longlong **)(param_1[0x19] + 0x1830);
  if (plVar1 != (longlong *)0x0) {
    pcVar6 = *(code **)(*plVar1 + 0x68);
    *(undefined8 *)(puVar11 + -8) = 0x1401de3c3;
    (*pcVar6)(plVar1,param_1);
  }
  lVar7 = param_1[0x19];
  *(undefined8 *)(puVar11 + -8) = 0x1401de3dc;
  FUN_140176f70(lVar7 + 0x1708,param_1,0);
  *(undefined8 *)(puVar11 + -8) = 0x1401de3e8;
  FUN_14000d9e0(param_1 + 0x42);
  *(undefined8 *)(puVar11 + -8) = 0x1401de3f4;
  FUN_140049340(param_1 + 0x40);
  *(undefined8 *)(puVar11 + -8) = 0x1401de400;
  FUN_140017240(param_1 + 0x3b);
  *(undefined8 *)(puVar11 + -8) = 0x1401de40c;
  FUN_140085440(param_1 + 0x36);
  *(undefined8 *)(puVar11 + -8) = 0x1401de418;
  FUN_14000d9e0(param_1 + 0x33);
  *(undefined8 *)(puVar11 + -8) = 0x1401de424;
  FUN_14000d9e0(param_1 + 0x14);
  *(undefined8 *)(puVar11 + -8) = 0x1401de430;
  FUN_14015a700(param_1 + 0x12);
  *(undefined8 *)(puVar11 + -8) = 0x1401de439;
  FUN_14000d9e0(param_1 + 0xc);
  *(undefined8 *)(puVar11 + -8) = 0x1401de442;
  FUN_14015a780(param_1 + 10);
  FUN_1401a3b60(param_1);
  return;
}

