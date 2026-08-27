// Function: FUN_14007c3a0
// Addr: 14007c3a0
// Size: 533 bytes


longlong FUN_14007c3a0(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong unaff_RDI;
  longlong unaff_R13;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar8 = auStack_48;
  uVar7 = *param_1;
  lVar3 = ((longlong)(param_1[1] - uVar7) >> 5) * -0x5555555555555555;
  if (lVar3 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar5 = ((longlong)(param_1[2] - uVar7) >> 5) * -0x5555555555555555;
  uVar1 = lVar3 + 1;
  uVar4 = 0x2aaaaaaaaaaaaaa - (uVar5 >> 1);
  if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar4 = uVar1;
    if (uVar1 <= uVar5) {
      uVar4 = uVar5;
    }
    if (0x2aaaaaaaaaaaaaa < uVar4) {
LAB_14007c5b1:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar4 = uVar4 * 0x60;
    if (uVar4 == 0) {
      unaff_RDI = 0;
    }
    else {
      if (0xfff < uVar4) {
        uVar5 = uVar4 + 0x27;
        if (uVar5 <= uVar4) goto LAB_14007c5b1;
        goto LAB_14007c465;
      }
      unaff_RDI = FUN_14028af20(uVar4);
    }
LAB_14007c48c:
    unaff_R13 = ((longlong)(param_2 - uVar7) / 0x60) * 0x60 + unaff_RDI;
    FUN_14007d2e0(-((longlong)(param_2 - uVar7) >> 0x3f),unaff_R13,param_3);
    uVar5 = param_1[1];
    uVar6 = *param_1;
    uVar7 = unaff_RDI;
    if (param_2 != uVar5) {
      FUN_14007d340(*param_1,param_2,unaff_RDI);
      uVar5 = param_1[1];
      uVar7 = unaff_R13 + 0x60;
      uVar6 = param_2;
    }
    FUN_14007d340(uVar6,uVar5,uVar7);
    uVar7 = *param_1;
    if (uVar7 == 0) goto LAB_14007c570;
    uVar5 = param_1[1];
    for (; uVar7 != uVar5; uVar7 = uVar7 + 0x60) {
      FUN_140017240(uVar7 + 0x20);
      FUN_140017240(uVar7);
    }
    uVar7 = *param_1;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - uVar7) >> 5) << 5)) &&
       (lVar3 = uVar7 - *(ulonglong *)(uVar7 - 8), uVar7 = *(ulonglong *)(uVar7 - 8),
       puVar8 = auStack_48, 0x1f < lVar3 - 8U)) goto LAB_14007c55e;
  }
  else {
    uVar4 = 0xffffffffffffffc0;
    uVar5 = 0xffffffffffffffe7;
LAB_14007c465:
    lVar3 = FUN_14028af20(uVar5);
    if (lVar3 != 0) {
      unaff_RDI = lVar3 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RDI - 8) = lVar3;
      goto LAB_14007c48c;
    }
LAB_14007c55e:
    uVar7 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar8 = auStack_40;
  }
  *(undefined8 *)(puVar8 + -8) = 0x14007c570;
  thunk_FUN_14028af80(uVar7);
LAB_14007c570:
  *param_1 = unaff_RDI;
  param_1[1] = uVar1 * 0x60 + unaff_RDI;
  param_1[2] = uVar4 + unaff_RDI;
  return unaff_R13;
}

