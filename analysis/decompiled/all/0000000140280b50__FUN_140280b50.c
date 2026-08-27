// Function: FUN_140280b50
// Addr: 140280b50
// Size: 685 bytes


undefined8 * FUN_140280b50(undefined8 *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong unaff_RBP;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 local_res8 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  puVar9 = auStack_68;
  *param_1 = param_2;
  uVar13 = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_140285e60(param_1 + 3,(param_2[1] - *param_2 >> 3) * -0x5555555555555555);
  lVar6 = *param_2;
  lVar11 = param_2[1];
  if (lVar6 != lVar11) {
    do {
      local_res8[0] = FUN_14028a670(lVar6);
      FUN_14007b9c0(param_1 + 3,local_res8);
      lVar11 = param_2[1];
      lVar6 = lVar6 + 0x18;
    } while (lVar6 != lVar11);
  }
  lVar6 = param_1[6];
  lVar11 = lVar11 - *param_2 >> 3;
  uVar7 = param_1[7] - lVar6;
  uVar12 = lVar11 * -0x5555555555555555;
  uVar14 = (longlong)uVar7 >> 6;
  if (uVar12 < uVar14) {
    param_1[7] = lVar11 * -0x5555555555555540 + lVar6;
    puVar10 = auStack_68;
    goto LAB_140280dac;
  }
  puVar10 = auStack_68;
  if (uVar12 - uVar14 == 0) goto LAB_140280dac;
  uVar5 = param_1[8] - lVar6 >> 6;
  if (uVar12 < uVar5 || uVar12 - uVar5 == 0) {
    uVar3 = FUN_140285fe0(param_1[7],uVar12 - uVar14);
    param_1[7] = uVar3;
    puVar10 = auStack_68;
    goto LAB_140280dac;
  }
  if (0x3ffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  if (0x3ffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar15 = 0xffffffffffffffc0;
    uVar5 = 0xffffffffffffffe7;
LAB_140280ca8:
    lVar6 = FUN_14028af20(uVar5);
    uVar5 = unaff_RBP;
    if (lVar6 != 0) {
      uVar5 = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar5 - 8) = lVar6;
      goto LAB_140280ccc;
    }
LAB_140280d72:
    pcVar1 = (code *)swi(0x29);
    lVar6 = (*pcVar1)(5);
    puVar9 = auStack_60;
LAB_140280d7c:
    *(undefined8 *)(puVar9 + -8) = 0x140280d81;
    thunk_FUN_14028af80(lVar6);
  }
  else {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar15 = uVar12;
    if ((uVar12 <= uVar5) && (uVar15 = uVar5, 0x3ffffffffffffff < uVar5)) {
LAB_140280df3:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar15 = uVar15 * 0x40;
    uVar5 = uVar13;
    if (uVar15 != 0) {
      if (0xfff < uVar15) {
        uVar5 = uVar15 | 0x27;
        if (uVar5 <= uVar15) goto LAB_140280df3;
        goto LAB_140280ca8;
      }
      uVar5 = FUN_14028af20();
    }
LAB_140280ccc:
    uVar3 = DAT_140492988;
    puVar8 = (undefined8 *)((uVar7 & 0xffffffffffffffc0) + uVar5);
    lVar6 = uVar12 - uVar14;
    if (lVar6 != 0) {
      uVar16 = (uint)DAT_140492988 ^ (uint)DAT_140492fe0;
      uVar17 = (uint)((ulonglong)DAT_140492988 >> 0x20) ^ DAT_140492fe0._4_4_;
      do {
        *puVar8 = 0xffefffffffffffff;
        puVar8[1] = 0;
        puVar8[2] = CONCAT44(uVar17,uVar16);
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[3] = uVar3;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8 = puVar8 + 8;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    FUN_1404210f0(uVar5,param_1[6],param_1[7] - param_1[6]);
    lVar6 = param_1[6];
    if (lVar6 != 0) {
      puVar9 = auStack_68;
      if ((0xfff < (param_1[8] - lVar6 & 0xffffffffffffffc0U)) &&
         (lVar2 = lVar6 - *(longlong *)(lVar6 + -8), lVar6 = *(longlong *)(lVar6 + -8),
         puVar9 = auStack_68, 0x1f < lVar2 - 8U)) goto LAB_140280d72;
      goto LAB_140280d7c;
    }
  }
  param_1[6] = uVar5;
  param_1[7] = lVar11 * -0x5555555555555540 + uVar5;
  param_1[8] = uVar15 + uVar5;
  puVar10 = puVar9;
LAB_140280dac:
  for (plVar4 = (longlong *)*param_2; plVar4 != (longlong *)param_2[1]; plVar4 = plVar4 + 3) {
    uVar13 = (ulonglong)(uint)((int)uVar13 + (int)(plVar4[1] - *plVar4 >> 3));
  }
  *(undefined8 *)(puVar10 + -8) = 0x140280ddf;
  FUN_140280e00(param_1 + 9,(longlong)(int)uVar13);
  return param_1;
}

