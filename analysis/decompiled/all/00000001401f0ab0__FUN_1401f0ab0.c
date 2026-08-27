// Function: FUN_1401f0ab0
// Addr: 1401f0ab0
// Size: 511 bytes


longlong FUN_1401f0ab0(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong unaff_RDI;
  longlong lVar7;
  longlong unaff_R13;
  ulonglong uVar8;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  uVar5 = *param_1;
  lVar7 = ((longlong)(param_1[1] - uVar5) >> 4) * -0x3333333333333333;
  if (lVar7 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar3 = ((longlong)(param_1[2] - uVar5) >> 4) * -0x3333333333333333;
  uVar2 = 0x333333333333333 - (uVar3 >> 1);
  if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
LAB_1401f0cab:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar3 = (uVar3 >> 1) + uVar3;
  uVar2 = lVar7 + 1;
  uVar8 = uVar2;
  if (uVar2 <= uVar3) {
    uVar8 = uVar3;
  }
  if (0x333333333333333 < uVar8) goto LAB_1401f0cab;
  uVar8 = uVar8 * 0x50;
  if (uVar8 == 0) {
    unaff_RDI = 0;
LAB_1401f0b93:
    unaff_R13 = ((longlong)(param_2 - uVar5) / 0x50) * 0x50 + unaff_RDI;
    FUN_1401f1440(-((longlong)(param_2 - uVar5) >> 0x3f),unaff_R13,param_3);
    uVar3 = param_1[1];
    uVar4 = *param_1;
    uVar5 = unaff_RDI;
    if (param_2 != uVar3) {
      FUN_1401f14b0(*param_1,param_2,unaff_RDI);
      uVar3 = param_1[1];
      uVar5 = unaff_R13 + 0x50;
      uVar4 = param_2;
    }
    FUN_1401f14b0(uVar4,uVar3,uVar5);
    uVar5 = *param_1;
    if (uVar5 == 0) goto LAB_1401f0c6a;
    uVar3 = param_1[1];
    for (; uVar5 != uVar3; uVar5 = uVar5 + 0x50) {
      FUN_140017240(uVar5 + 0x28);
    }
    uVar5 = *param_1;
    uVar3 = uVar5;
    puVar6 = auStack_48;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - uVar5) >> 4) << 4)) &&
       (uVar3 = *(ulonglong *)(uVar5 - 8), puVar6 = auStack_48, 0x1f < (uVar5 - uVar3) - 8))
    goto LAB_1401f0c58;
  }
  else {
    if (uVar8 < 0x1000) {
      unaff_RDI = FUN_14028af20(uVar8);
      goto LAB_1401f0b93;
    }
    if (uVar8 + 0x27 <= uVar8) goto LAB_1401f0cab;
    lVar7 = FUN_14028af20();
    if (lVar7 != 0) {
      unaff_RDI = lVar7 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RDI - 8) = lVar7;
      goto LAB_1401f0b93;
    }
LAB_1401f0c58:
    uVar3 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar6 = auStack_40;
  }
  *(undefined8 *)(puVar6 + -8) = 0x1401f0c6a;
  thunk_FUN_14028af80(uVar3);
LAB_1401f0c6a:
  *param_1 = unaff_RDI;
  param_1[1] = uVar2 * 0x50 + unaff_RDI;
  param_1[2] = uVar8 + unaff_RDI;
  return unaff_R13;
}

