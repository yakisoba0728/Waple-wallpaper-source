// Function: FUN_1401db3c0
// Addr: 1401db3c0
// Size: 505 bytes


undefined4 * FUN_1401db3c0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 *unaff_RBX;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar9 = (undefined4 *)*param_1;
  lVar8 = (param_1[1] - (longlong)puVar9 >> 3) * -0x5555555555555555;
  if (lVar8 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar3 = (param_1[2] - (longlong)puVar9 >> 3) * -0x5555555555555555;
  uVar2 = 0xaaaaaaaaaaaaaaa - (uVar3 >> 1);
  if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
LAB_1401db5b5:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar3 = (uVar3 >> 1) + uVar3;
  uVar2 = lVar8 + 1;
  uVar4 = uVar2;
  if (uVar2 <= uVar3) {
    uVar4 = uVar3;
  }
  if (0xaaaaaaaaaaaaaaa < uVar4) goto LAB_1401db5b5;
  uVar3 = uVar4 * 0x18;
  if (uVar3 == 0) {
    unaff_RBX = (undefined4 *)0x0;
LAB_1401db4a6:
    puVar9 = unaff_RBX + ((param_2 - (longlong)puVar9) / 0x18) * 6;
    *puVar9 = *param_3;
    *(undefined8 *)(puVar9 + 2) = 0;
    *(undefined8 *)(puVar9 + 4) = 0;
    lVar8 = *param_1;
    if (param_2 == param_1[1]) {
      lVar7 = param_1[1] - lVar8;
      puVar5 = unaff_RBX;
      param_2 = lVar8;
    }
    else {
      FUN_1404210f0(unaff_RBX,lVar8,param_2 - lVar8);
      puVar5 = puVar9 + 6;
      lVar7 = param_1[1] - param_2;
    }
    FUN_1404210f0(puVar5,param_2,lVar7);
    lVar8 = *param_1;
    if (lVar8 == 0) goto LAB_1401db577;
    lVar7 = lVar8;
    puVar6 = auStack_38;
    if ((0xfff < (ulonglong)((param_1[2] - lVar8 >> 3) * 8)) &&
       (lVar7 = *(longlong *)(lVar8 + -8), puVar6 = auStack_38, 0x1f < (lVar8 - lVar7) - 8U))
    goto LAB_1401db565;
  }
  else {
    if (uVar3 < 0x1000) {
      unaff_RBX = (undefined4 *)FUN_14028af20(uVar3);
      goto LAB_1401db4a6;
    }
    if (uVar3 + 0x27 <= uVar3) goto LAB_1401db5b5;
    lVar8 = FUN_14028af20();
    if (lVar8 != 0) {
      unaff_RBX = (undefined4 *)(lVar8 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(unaff_RBX + -2) = lVar8;
      goto LAB_1401db4a6;
    }
LAB_1401db565:
    lVar7 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar6 = auStack_30;
  }
  *(undefined8 *)(puVar6 + -8) = 0x1401db577;
  thunk_FUN_14028af80(lVar7);
LAB_1401db577:
  *param_1 = (longlong)unaff_RBX;
  param_1[1] = (longlong)(unaff_RBX + uVar2 * 6);
  param_1[2] = (longlong)(unaff_RBX + uVar4 * 6);
  return puVar9;
}

