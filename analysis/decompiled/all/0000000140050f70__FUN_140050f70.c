// Function: FUN_140050f70
// Addr: 140050f70
// Size: 462 bytes


void FUN_140050f70(ulonglong *param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulonglong unaff_RSI;
  ulonglong *puVar13;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar11 = auStack_58;
  puVar12 = auStack_58;
  uVar3 = param_1[3];
  if (param_2 <= uVar3) {
    param_1[2] = param_2;
    goto LAB_1400510ca;
  }
  uVar4 = param_1[2];
  uVar10 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe - uVar4 < param_2 - uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar8 = param_2 | 7;
  if ((uVar8 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar2 = (uVar3 >> 1) + uVar3;
    uVar10 = uVar8;
    if (uVar8 < uVar2) {
      uVar10 = uVar2;
    }
    if (0x7fffffffffffffff < uVar10 + 1) goto LAB_14005113a;
    uVar8 = (uVar10 + 1) * 2;
    if (uVar8 != 0) goto LAB_140051014;
    unaff_RSI = 0;
LAB_14005104d:
    param_1[2] = param_2;
    lVar7 = uVar4 * 2 + 2;
    param_1[3] = uVar10;
    if (uVar3 < 8) {
      FUN_1404210f0(unaff_RSI,param_1,lVar7);
      *param_1 = unaff_RSI;
      puVar12 = auStack_58;
      goto LAB_1400510ca;
    }
    uVar10 = *param_1;
    FUN_1404210f0(unaff_RSI,uVar10,lVar7);
    if (0xfff < uVar3 * 2 + 2) {
      plVar1 = (longlong *)(uVar10 - 8);
      uVar10 = (uVar10 - *plVar1) - 8;
      if (uVar10 < 0x20) {
        thunk_FUN_14028af80(*plVar1,uVar3 * 2 + 0x29);
        *param_1 = unaff_RSI;
        puVar12 = auStack_58;
        goto LAB_1400510ca;
      }
      goto LAB_1400510a5;
    }
  }
  else {
    uVar8 = 0xfffffffffffffffe;
LAB_140051014:
    if (uVar8 < 0x1000) {
      unaff_RSI = FUN_14028af20();
      goto LAB_14005104d;
    }
    if (uVar8 + 0x27 <= uVar8) {
LAB_14005113a:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    lVar7 = FUN_14028af20(uVar8 + 0x27);
    if (lVar7 != 0) {
      unaff_RSI = lVar7 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar7;
      goto LAB_14005104d;
    }
LAB_1400510a5:
    pcVar6 = (code *)swi(0x29);
    (*pcVar6)(5);
    puVar11 = auStack_50;
  }
  *(undefined8 *)(puVar11 + -8) = 0x1400510b4;
  thunk_FUN_14028af80(uVar10);
  *param_1 = unaff_RSI;
  puVar12 = puVar11;
LAB_1400510ca:
  puVar13 = param_1;
  if (7 < param_1[3]) {
    puVar13 = (ulonglong *)*param_1;
  }
  lVar7 = param_3[1];
  uVar5 = *param_3;
  *(undefined8 *)(puVar12 + -8) = 0x1400510ed;
  FUN_1404210f0(puVar13,uVar5,lVar7 * 2);
  puVar9 = (undefined2 *)(lVar7 * 2 + (longlong)puVar13);
  if (*(char *)(param_3 + 2) != '\0') {
    *puVar9 = 0x5c;
    puVar9 = puVar9 + 1;
  }
  lVar7 = param_3[4];
  uVar5 = param_3[3];
  *(undefined8 *)(puVar12 + -8) = 0x140051111;
  FUN_1404210f0(puVar9,uVar5,lVar7 * 2);
  param_1[2] = param_2;
  if (7 < param_1[3]) {
    param_1 = (ulonglong *)*param_1;
  }
  *(undefined2 *)((longlong)param_1 + param_2 * 2) = 0;
  return;
}

