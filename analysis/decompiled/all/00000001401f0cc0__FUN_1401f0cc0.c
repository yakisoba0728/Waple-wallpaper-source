// Function: FUN_1401f0cc0
// Addr: 1401f0cc0
// Size: 511 bytes


longlong FUN_1401f0cc0(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

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
  lVar7 = ((longlong)(param_1[1] - uVar5) >> 4) * -0x5555555555555555;
  if (lVar7 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar3 = ((longlong)(param_1[2] - uVar5) >> 4) * -0x5555555555555555;
  uVar2 = 0x555555555555555 - (uVar3 >> 1);
  if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
LAB_1401f0ebb:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar3 = (uVar3 >> 1) + uVar3;
  uVar2 = lVar7 + 1;
  uVar8 = uVar2;
  if (uVar2 <= uVar3) {
    uVar8 = uVar3;
  }
  if (0x555555555555555 < uVar8) goto LAB_1401f0ebb;
  uVar8 = uVar8 * 0x30;
  if (uVar8 == 0) {
    unaff_RDI = 0;
LAB_1401f0da3:
    unaff_R13 = ((longlong)(param_2 - uVar5) / 0x30) * 0x30 + unaff_RDI;
    FUN_1401f1550(-((longlong)(param_2 - uVar5) >> 0x3f),unaff_R13,param_3);
    uVar3 = param_1[1];
    uVar4 = *param_1;
    uVar5 = unaff_RDI;
    if (param_2 != uVar3) {
      FUN_1401f1670(*param_1,param_2,unaff_RDI);
      uVar3 = param_1[1];
      uVar5 = unaff_R13 + 0x30;
      uVar4 = param_2;
    }
    FUN_1401f1670(uVar4,uVar3,uVar5);
    uVar5 = *param_1;
    if (uVar5 == 0) goto LAB_1401f0e7a;
    uVar3 = param_1[1];
    for (; uVar5 != uVar3; uVar5 = uVar5 + 0x30) {
      FUN_14000d9e0(uVar5 + 0x18);
    }
    uVar5 = *param_1;
    uVar3 = uVar5;
    puVar6 = auStack_48;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - uVar5) >> 4) << 4)) &&
       (uVar3 = *(ulonglong *)(uVar5 - 8), puVar6 = auStack_48, 0x1f < (uVar5 - uVar3) - 8))
    goto LAB_1401f0e68;
  }
  else {
    if (uVar8 < 0x1000) {
      unaff_RDI = FUN_14028af20(uVar8);
      goto LAB_1401f0da3;
    }
    if (uVar8 + 0x27 <= uVar8) goto LAB_1401f0ebb;
    lVar7 = FUN_14028af20();
    if (lVar7 != 0) {
      unaff_RDI = lVar7 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RDI - 8) = lVar7;
      goto LAB_1401f0da3;
    }
LAB_1401f0e68:
    uVar3 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar6 = auStack_40;
  }
  *(undefined8 *)(puVar6 + -8) = 0x1401f0e7a;
  thunk_FUN_14028af80(uVar3);
LAB_1401f0e7a:
  *param_1 = unaff_RDI;
  param_1[1] = uVar2 * 0x30 + unaff_RDI;
  param_1[2] = uVar8 + unaff_RDI;
  return unaff_R13;
}

