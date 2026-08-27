// Function: FUN_140160fb0
// Addr: 140160fb0
// Size: 502 bytes


ulonglong FUN_140160fb0(ulonglong *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong unaff_RBX;
  undefined1 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  uVar13 = *param_1;
  lVar12 = ((longlong)(param_1[1] - uVar13) >> 3) * -0x3333333333333333;
  if (lVar12 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar8 = ((longlong)(param_1[2] - uVar13) >> 3) * -0x3333333333333333;
  uVar7 = 0x666666666666666 - (uVar8 >> 1);
  if (uVar7 <= uVar8 && uVar8 - uVar7 != 0) {
LAB_1401611a2:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar8 = (uVar8 >> 1) + uVar8;
  uVar7 = lVar12 + 1;
  uVar9 = uVar7;
  if (uVar7 <= uVar8) {
    uVar9 = uVar8;
  }
  if (0x666666666666666 < uVar9) goto LAB_1401611a2;
  uVar9 = uVar9 * 0x28;
  if (uVar9 == 0) {
    unaff_RBX = 0;
LAB_140161095:
    uVar6 = param_3[1];
    lVar12 = (longlong)(param_2 - uVar13) / 0x28;
    puVar1 = (undefined8 *)(unaff_RBX + lVar12 * 0x28);
    *puVar1 = *param_3;
    puVar1[1] = uVar6;
    uVar13 = unaff_RBX + lVar12 * 0x28;
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar4 = *(undefined4 *)(param_3 + 3);
    uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(undefined4 *)(uVar13 + 0x10) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)(uVar13 + 0x14) = uVar3;
    *(undefined4 *)(uVar13 + 0x18) = uVar4;
    *(undefined4 *)(uVar13 + 0x1c) = uVar5;
    *(undefined8 *)(uVar13 + 0x20) = param_3[4];
    uVar8 = *param_1;
    if (param_2 == param_1[1]) {
      lVar12 = param_1[1] - uVar8;
      uVar10 = unaff_RBX;
      param_2 = uVar8;
    }
    else {
      FUN_1404210f0(unaff_RBX,uVar8,param_2 - uVar8);
      uVar10 = uVar13 + 0x28;
      lVar12 = param_1[1] - param_2;
    }
    FUN_1404210f0(uVar10,param_2,lVar12);
    uVar8 = *param_1;
    if (uVar8 == 0) goto LAB_140161166;
    uVar10 = uVar8;
    puVar11 = auStack_48;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - uVar8) >> 3) * 8)) &&
       (uVar10 = *(ulonglong *)(uVar8 - 8), puVar11 = auStack_48, 0x1f < (uVar8 - uVar10) - 8))
    goto LAB_140161154;
  }
  else {
    if (uVar9 < 0x1000) {
      unaff_RBX = FUN_14028af20(uVar9);
      goto LAB_140161095;
    }
    if (uVar9 + 0x27 <= uVar9) goto LAB_1401611a2;
    lVar12 = FUN_14028af20();
    if (lVar12 != 0) {
      unaff_RBX = lVar12 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RBX - 8) = lVar12;
      goto LAB_140161095;
    }
LAB_140161154:
    uVar10 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar11 = auStack_40;
  }
  *(undefined8 *)(puVar11 + -8) = 0x140161166;
  thunk_FUN_14028af80(uVar10);
LAB_140161166:
  *param_1 = unaff_RBX;
  param_1[1] = unaff_RBX + uVar7 * 0x28;
  param_1[2] = uVar9 + unaff_RBX;
  return uVar13;
}

