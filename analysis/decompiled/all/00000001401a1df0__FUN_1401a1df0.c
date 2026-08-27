// Function: FUN_1401a1df0
// Addr: 1401a1df0
// Size: 472 bytes


ulonglong FUN_1401a1df0(ulonglong *param_1,ulonglong param_2,undefined4 *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong unaff_RBX;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  uVar8 = *param_1;
  lVar7 = ((longlong)(param_1[1] - uVar8) >> 1) * -0x5555555555555555;
  if (lVar7 == 0x2aaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar3 = ((longlong)(param_1[2] - uVar8) >> 1) * -0x5555555555555555;
  uVar2 = 0x2aaaaaaaaaaaaaaa - (uVar3 >> 1);
  if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
LAB_1401a1fc4:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar3 = (uVar3 >> 1) + uVar3;
  uVar2 = lVar7 + 1;
  uVar4 = uVar2;
  if (uVar2 <= uVar3) {
    uVar4 = uVar3;
  }
  if (0x2aaaaaaaaaaaaaaa < uVar4) goto LAB_1401a1fc4;
  uVar4 = uVar4 * 6;
  if (uVar4 == 0) {
    unaff_RBX = 0;
LAB_1401a1ecf:
    lVar7 = (longlong)(param_2 - uVar8) / 6;
    *(undefined4 *)(unaff_RBX + lVar7 * 6) = *param_3;
    uVar8 = unaff_RBX + lVar7 * 6;
    *(undefined2 *)(uVar8 + 4) = *(undefined2 *)(param_3 + 1);
    uVar3 = *param_1;
    if (param_2 == param_1[1]) {
      lVar7 = param_1[1] - uVar3;
      uVar5 = unaff_RBX;
      param_2 = uVar3;
    }
    else {
      FUN_1404210f0(unaff_RBX,uVar3,param_2 - uVar3);
      uVar5 = uVar8 + 6;
      lVar7 = param_1[1] - param_2;
    }
    FUN_1404210f0(uVar5,param_2,lVar7);
    uVar3 = *param_1;
    if (uVar3 == 0) goto LAB_1401a1f88;
    uVar5 = uVar3;
    puVar6 = auStack_48;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - uVar3) >> 1) * 2)) &&
       (uVar5 = *(ulonglong *)(uVar3 - 8), puVar6 = auStack_48, 0x1f < (uVar3 - uVar5) - 8))
    goto LAB_1401a1f76;
  }
  else {
    if (uVar4 < 0x1000) {
      unaff_RBX = FUN_14028af20(uVar4);
      goto LAB_1401a1ecf;
    }
    if (uVar4 + 0x27 <= uVar4) goto LAB_1401a1fc4;
    lVar7 = FUN_14028af20();
    if (lVar7 != 0) {
      unaff_RBX = lVar7 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RBX - 8) = lVar7;
      goto LAB_1401a1ecf;
    }
LAB_1401a1f76:
    uVar5 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar6 = auStack_40;
  }
  *(undefined8 *)(puVar6 + -8) = 0x1401a1f88;
  thunk_FUN_14028af80(uVar5);
LAB_1401a1f88:
  *param_1 = unaff_RBX;
  param_1[1] = unaff_RBX + uVar2 * 6;
  param_1[2] = uVar4 + unaff_RBX;
  return uVar8;
}

