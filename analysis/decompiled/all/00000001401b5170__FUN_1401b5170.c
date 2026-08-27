// Function: FUN_1401b5170
// Addr: 1401b5170
// Size: 427 bytes


ulonglong * FUN_1401b5170(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong unaff_RSI;
  ulonglong *puVar8;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  puVar7 = auStack_58;
  uVar2 = param_1[3];
  if (param_3 <= uVar2) {
    puVar8 = param_1;
    if (3 < uVar2) {
      puVar8 = (ulonglong *)*param_1;
    }
    param_1[2] = param_3;
    FUN_1404210f0(puVar8,param_2,param_3 * 4);
    *(undefined4 *)(param_3 * 4 + (longlong)puVar8) = 0;
    return param_1;
  }
  uVar6 = 0x3ffffffffffffffe;
  if (0x3ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar5 = param_3 | 3;
  if ((uVar5 < 0x3fffffffffffffff) && (uVar2 <= 0x3ffffffffffffffe - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar6 = uVar5;
    if (uVar5 < uVar1) {
      uVar6 = uVar1;
    }
    if (0x3fffffffffffffff < uVar6 + 1) goto LAB_1401b5311;
    uVar5 = (uVar6 + 1) * 4;
    if (uVar5 != 0) goto LAB_1401b523f;
    unaff_RSI = 0;
LAB_1401b527c:
    param_1[3] = uVar6;
    param_1[2] = param_3;
    FUN_1404210f0(unaff_RSI,param_2,param_3 * 4);
    *(undefined4 *)(param_3 * 4 + unaff_RSI) = 0;
    if (uVar2 < 4) goto LAB_1401b52fe;
    if (0xfff < uVar2 * 4 + 4) {
      lVar4 = *(longlong *)(*param_1 - 8);
      if ((*param_1 - lVar4) - 8 < 0x20) {
        thunk_FUN_14028af80(lVar4,uVar2 * 4 + 0x2b);
        *param_1 = unaff_RSI;
        return param_1;
      }
      goto LAB_1401b52ef;
    }
  }
  else {
    uVar5 = 0xfffffffffffffffc;
LAB_1401b523f:
    if (uVar5 < 0x1000) {
      unaff_RSI = FUN_14028af20();
      goto LAB_1401b527c;
    }
    if (uVar5 + 0x27 <= uVar5) {
LAB_1401b5311:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    lVar4 = FUN_14028af20(uVar5 + 0x27);
    if (lVar4 != 0) {
      unaff_RSI = lVar4 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar4;
      goto LAB_1401b527c;
    }
LAB_1401b52ef:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar7 = auStack_50;
  }
  *(undefined8 *)(puVar7 + -8) = 0x1401b52fe;
  thunk_FUN_14028af80();
LAB_1401b52fe:
  *param_1 = unaff_RSI;
  return param_1;
}

