// Function: FUN_1401332e0
// Addr: 1401332e0
// Size: 486 bytes


ulonglong FUN_1401332e0(ulonglong *param_1,ulonglong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong unaff_RBX;
  undefined1 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  uVar12 = *param_1;
  lVar11 = ((longlong)(param_1[1] - uVar12) >> 2) * -0x3333333333333333;
  if (lVar11 == 0xccccccccccccccc) {
                    /* WARNING: Subroutine does not return */
    FUN_140133d70();
  }
  uVar7 = ((longlong)(param_1[2] - uVar12) >> 2) * -0x3333333333333333;
  uVar6 = 0xccccccccccccccc - (uVar7 >> 1);
  if (uVar6 <= uVar7 && uVar7 - uVar6 != 0) {
LAB_1401334c2:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar7 = (uVar7 >> 1) + uVar7;
  uVar6 = lVar11 + 1;
  uVar8 = uVar6;
  if (uVar6 <= uVar7) {
    uVar8 = uVar7;
  }
  if (0xccccccccccccccc < uVar8) goto LAB_1401334c2;
  uVar8 = uVar8 * 0x14;
  if (uVar8 == 0) {
    unaff_RBX = 0;
LAB_1401333c5:
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    lVar11 = (longlong)(param_2 - uVar12) / 0x14;
    puVar1 = (undefined4 *)(unaff_RBX + lVar11 * 0x14);
    *puVar1 = *param_3;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    uVar12 = unaff_RBX + lVar11 * 0x14;
    *(undefined4 *)(uVar12 + 0x10) = param_3[4];
    uVar7 = *param_1;
    if (param_2 == param_1[1]) {
      lVar11 = param_1[1] - uVar7;
      uVar9 = unaff_RBX;
      param_2 = uVar7;
    }
    else {
      FUN_1404210f0(unaff_RBX,uVar7,param_2 - uVar7);
      uVar9 = uVar12 + 0x14;
      lVar11 = param_1[1] - param_2;
    }
    FUN_1404210f0(uVar9,param_2,lVar11);
    uVar7 = *param_1;
    if (uVar7 == 0) goto LAB_140133486;
    uVar9 = uVar7;
    puVar10 = auStack_48;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - uVar7) >> 2) * 4)) &&
       (uVar9 = *(ulonglong *)(uVar7 - 8), puVar10 = auStack_48, 0x1f < (uVar7 - uVar9) - 8))
    goto LAB_140133474;
  }
  else {
    if (uVar8 < 0x1000) {
      unaff_RBX = FUN_14028af20(uVar8);
      goto LAB_1401333c5;
    }
    if (uVar8 + 0x27 <= uVar8) goto LAB_1401334c2;
    lVar11 = FUN_14028af20();
    if (lVar11 != 0) {
      unaff_RBX = lVar11 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RBX - 8) = lVar11;
      goto LAB_1401333c5;
    }
LAB_140133474:
    uVar9 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar10 = auStack_40;
  }
  *(undefined8 *)(puVar10 + -8) = 0x140133486;
  thunk_FUN_14028af80(uVar9);
LAB_140133486:
  *param_1 = unaff_RBX;
  param_1[1] = unaff_RBX + uVar6 * 0x14;
  param_1[2] = uVar8 + unaff_RBX;
  return uVar12;
}

