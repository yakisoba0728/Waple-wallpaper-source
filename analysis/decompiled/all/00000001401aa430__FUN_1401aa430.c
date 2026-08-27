// Function: FUN_1401aa430
// Addr: 1401aa430
// Size: 1291 bytes


undefined8 * FUN_1401aa430(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ulonglong unaff_R12;
  undefined8 *puVar10;
  undefined8 *unaff_R13;
  undefined8 *unaff_R15;
  undefined8 *puVar11;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar8 = auStack_58;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)param_1[2]) {
    puVar9 = (undefined8 *)0x0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    if (param_2[1] - *param_2 != 0) {
      lVar3 = param_2[1] - *param_2 >> 2;
      unaff_R12 = 0x6db6db6db6db6db7;
      if (0x924924924924924 < (ulonglong)(lVar3 * 0x6db6db6db6db6db7)) goto LAB_1401aa939;
      uVar7 = lVar3 * 4;
      puVar11 = puVar9;
      if (uVar7 != 0) {
        if (uVar7 < 0x1000) {
          puVar11 = (undefined8 *)FUN_14028af20(uVar7);
        }
        else {
          if (uVar7 + 0x27 <= uVar7) goto LAB_1401aa92d;
          lVar3 = FUN_14028af20();
          if (lVar3 == 0) goto LAB_1401aa8de;
          puVar11 = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
          puVar11[-1] = lVar3;
        }
      }
      *puVar1 = puVar11;
      puVar1[1] = puVar11;
      puVar1[2] = uVar7 + (longlong)puVar11;
      lVar3 = param_2[1] - *param_2;
      FUN_1404210f0(puVar11,*param_2,lVar3);
      puVar1[1] = (lVar3 >> 2) * 4 + (longlong)puVar11;
      unaff_R15 = puVar11;
    }
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    if (param_2[4] - param_2[3] == 0) goto LAB_1401aa5ce;
    uVar7 = param_2[4] - param_2[3] >> 2;
    if (0x3fffffffffffffff < uVar7) goto LAB_1401aa927;
    uVar7 = uVar7 * 4;
    if (uVar7 != 0) {
      if (uVar7 < 0x1000) {
        puVar9 = (undefined8 *)FUN_14028af20(uVar7);
      }
      else {
        if (uVar7 + 0x27 <= uVar7) goto LAB_1401aa92d;
        lVar3 = FUN_14028af20();
        if (lVar3 == 0) goto LAB_1401aa8de;
        puVar9 = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
        puVar9[-1] = lVar3;
      }
    }
    puVar1[3] = puVar9;
    puVar1[4] = puVar9;
    puVar1[5] = uVar7 + (longlong)puVar9;
    lVar3 = puVar1[3];
    uVar7 = param_2[4] - param_2[3];
    FUN_1404210f0(lVar3,param_2[3],uVar7);
    puVar1[4] = (uVar7 & 0xfffffffffffffffc) + lVar3;
LAB_1401aa5ce:
    puVar1 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar1 + 6);
    return puVar1;
  }
  lVar3 = (longlong)puVar1 - *param_1;
  lVar3 = lVar3 / 6 + (lVar3 >> 0x3f);
  lVar3 = (lVar3 >> 3) - (lVar3 >> 0x3f);
  if (lVar3 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar7 = (param_1[2] - *param_1 >> 4) * -0x5555555555555555;
  uVar4 = 0x555555555555555 - (uVar7 >> 1);
  if (uVar4 <= uVar7 && uVar7 - uVar4 != 0) goto LAB_1401aa92d;
  uVar7 = (uVar7 >> 1) + uVar7;
  uVar4 = lVar3 + 1U;
  if (lVar3 + 1U <= uVar7) {
    uVar4 = uVar7;
  }
  if (0x555555555555555 < uVar4) goto LAB_1401aa92d;
  puVar11 = (undefined8 *)0x0;
  unaff_R12 = uVar4 * 0x30;
  puVar9 = puVar11;
  if (unaff_R12 == 0) {
LAB_1401aa6ba:
    unaff_R15 = puVar9 + lVar3 * 6;
    *unaff_R15 = 0;
    unaff_R15[1] = 0;
    unaff_R15[2] = 0;
    unaff_R13 = puVar9;
    if (param_2[1] - *param_2 != 0) {
      lVar3 = param_2[1] - *param_2 >> 2;
      if (0x924924924924924 < (ulonglong)(lVar3 * 0x6db6db6db6db6db7)) {
LAB_1401aa939:
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar7 = lVar3 * 4;
      puVar10 = puVar11;
      if (uVar7 != 0) {
        if (uVar7 < 0x1000) {
          puVar10 = (undefined8 *)FUN_14028af20(uVar7);
        }
        else {
          if (uVar7 + 0x27 <= uVar7) goto LAB_1401aa92d;
          lVar3 = FUN_14028af20();
          if (lVar3 == 0) goto LAB_1401aa8de;
          puVar10 = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
          puVar10[-1] = lVar3;
        }
      }
      *unaff_R15 = puVar10;
      unaff_R15[1] = puVar10;
      unaff_R15[2] = uVar7 + (longlong)puVar10;
      lVar3 = param_2[1] - *param_2;
      FUN_1404210f0(puVar10,*param_2,lVar3);
      unaff_R15[1] = (lVar3 >> 2) * 4 + (longlong)puVar10;
    }
    unaff_R15[3] = 0;
    unaff_R15[4] = 0;
    unaff_R15[5] = 0;
    if (param_2[4] - param_2[3] != 0) {
      uVar7 = param_2[4] - param_2[3] >> 2;
      if (0x3fffffffffffffff < uVar7) {
LAB_1401aa927:
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar7 = uVar7 * 4;
      if (uVar7 != 0) {
        if (uVar7 < 0x1000) {
          puVar11 = (undefined8 *)FUN_14028af20(uVar7);
        }
        else {
          if (uVar7 + 0x27 <= uVar7) {
LAB_1401aa92d:
                    /* WARNING: Subroutine does not return */
            FUN_140017370();
          }
          lVar3 = FUN_14028af20();
          if (lVar3 == 0) goto LAB_1401aa8de;
          puVar11 = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
          puVar11[-1] = lVar3;
        }
      }
      unaff_R15[3] = puVar11;
      unaff_R15[4] = puVar11;
      unaff_R15[5] = uVar7 + (longlong)puVar11;
      lVar3 = unaff_R15[3];
      uVar7 = param_2[4] - param_2[3];
      FUN_1404210f0(lVar3,param_2[3],uVar7);
      unaff_R15[4] = (uVar7 & 0xfffffffffffffffc) + lVar3;
    }
    puVar10 = (undefined8 *)param_1[1];
    puVar5 = (undefined8 *)*param_1;
    puVar11 = puVar9;
    if (puVar1 != puVar10) {
      FUN_1401aad30((undefined8 *)*param_1,puVar1,puVar9);
      puVar10 = (undefined8 *)param_1[1];
      puVar11 = unaff_R15 + 6;
      puVar5 = puVar1;
    }
    FUN_1401aad30(puVar5,puVar10,puVar11);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_1401aa8f0;
    lVar6 = param_1[1];
    for (; lVar3 != lVar6; lVar3 = lVar3 + 0x30) {
      FUN_140031b80(lVar3 + 0x18);
      FUN_14017c3c0(lVar3);
    }
    lVar3 = *param_1;
    lVar6 = lVar3;
    puVar8 = auStack_58;
    if ((0xfff < (ulonglong)((param_1[2] - lVar3 >> 4) << 4)) &&
       (lVar6 = *(longlong *)(lVar3 + -8), puVar8 = auStack_58, 0x1f < (lVar3 - lVar6) - 8U))
    goto LAB_1401aa8de;
  }
  else {
    if (unaff_R12 < 0x1000) {
      puVar9 = (undefined8 *)FUN_14028af20(unaff_R12);
      goto LAB_1401aa6ba;
    }
    if (unaff_R12 + 0x27 <= unaff_R12) goto LAB_1401aa92d;
    lVar6 = FUN_14028af20();
    if (lVar6 != 0) {
      puVar9 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      puVar9[-1] = lVar6;
      goto LAB_1401aa6ba;
    }
LAB_1401aa8de:
    lVar6 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar8 = auStack_50;
    puVar9 = unaff_R13;
  }
  *(undefined8 *)(puVar8 + -8) = 0x1401aa8f0;
  thunk_FUN_14028af80(lVar6);
LAB_1401aa8f0:
  lVar3 = *(longlong *)(puVar8 + 0x70);
  *param_1 = (longlong)puVar9;
  param_1[1] = (longlong)(puVar9 + lVar3 * 6);
  param_1[2] = unaff_R12 + (longlong)puVar9;
  return unaff_R15;
}

