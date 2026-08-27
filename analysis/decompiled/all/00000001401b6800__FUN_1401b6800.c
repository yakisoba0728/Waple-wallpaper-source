// Function: FUN_1401b6800
// Addr: 1401b6800
// Size: 498 bytes


undefined8 * FUN_1401b6800(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *unaff_RBX;
  undefined1 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar13 = (undefined8 *)*param_1;
  lVar12 = (param_1[1] - (longlong)puVar13 >> 4) * -0x5555555555555555;
  if (lVar12 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_140133d70();
  }
  uVar7 = (param_1[2] - (longlong)puVar13 >> 4) * -0x5555555555555555;
  uVar6 = 0x555555555555555 - (uVar7 >> 1);
  if (uVar6 <= uVar7 && uVar7 - uVar6 != 0) {
LAB_1401b69ee:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar7 = (uVar7 >> 1) + uVar7;
  uVar6 = lVar12 + 1;
  uVar8 = uVar6;
  if (uVar6 <= uVar7) {
    uVar8 = uVar7;
  }
  if (0x555555555555555 < uVar8) goto LAB_1401b69ee;
  uVar7 = uVar8 * 0x30;
  if (uVar7 == 0) {
    unaff_RBX = (undefined8 *)0x0;
LAB_1401b68e1:
    uVar5 = param_3[1];
    puVar13 = unaff_RBX + ((param_2 - (longlong)puVar13) / 0x30) * 6;
    *puVar13 = *param_3;
    puVar13[1] = uVar5;
    uVar2 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar3 = *(undefined4 *)(param_3 + 3);
    uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(undefined4 *)(puVar13 + 2) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)((longlong)puVar13 + 0x14) = uVar2;
    *(undefined4 *)(puVar13 + 3) = uVar3;
    *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar4;
    uVar2 = *(undefined4 *)((longlong)param_3 + 0x24);
    uVar3 = *(undefined4 *)(param_3 + 5);
    uVar4 = *(undefined4 *)((longlong)param_3 + 0x2c);
    *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)((longlong)puVar13 + 0x24) = uVar2;
    *(undefined4 *)(puVar13 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar4;
    lVar12 = *param_1;
    if (param_2 == param_1[1]) {
      lVar11 = param_1[1] - lVar12;
      puVar9 = unaff_RBX;
      param_2 = lVar12;
    }
    else {
      FUN_1404210f0(unaff_RBX,lVar12,param_2 - lVar12);
      puVar9 = puVar13 + 6;
      lVar11 = param_1[1] - param_2;
    }
    FUN_1404210f0(puVar9,param_2,lVar11);
    lVar12 = *param_1;
    if (lVar12 == 0) goto LAB_1401b69af;
    lVar11 = lVar12;
    puVar10 = auStack_48;
    if ((0xfff < (ulonglong)((param_1[2] - lVar12 >> 4) << 4)) &&
       (lVar11 = *(longlong *)(lVar12 + -8), puVar10 = auStack_48, 0x1f < (lVar12 - lVar11) - 8U))
    goto LAB_1401b699d;
  }
  else {
    if (uVar7 < 0x1000) {
      unaff_RBX = (undefined8 *)FUN_14028af20(uVar7);
      goto LAB_1401b68e1;
    }
    if (uVar7 + 0x27 <= uVar7) goto LAB_1401b69ee;
    lVar12 = FUN_14028af20();
    if (lVar12 != 0) {
      unaff_RBX = (undefined8 *)(lVar12 + 0x27U & 0xffffffffffffffe0);
      unaff_RBX[-1] = lVar12;
      goto LAB_1401b68e1;
    }
LAB_1401b699d:
    lVar11 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar10 = auStack_40;
  }
  *(undefined8 *)(puVar10 + -8) = 0x1401b69af;
  thunk_FUN_14028af80(lVar11);
LAB_1401b69af:
  *param_1 = (longlong)unaff_RBX;
  param_1[1] = (longlong)(unaff_RBX + uVar6 * 6);
  param_1[2] = (longlong)(unaff_RBX + uVar8 * 6);
  return puVar13;
}

