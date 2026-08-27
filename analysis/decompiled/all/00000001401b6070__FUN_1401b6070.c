// Function: FUN_1401b6070
// Addr: 1401b6070
// Size: 506 bytes


ulonglong * FUN_1401b6070(ulonglong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong unaff_RSI;
  ulonglong *puVar11;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  puVar9 = auStack_58;
  uVar4 = param_1[3];
  uVar5 = param_1[2];
  if (param_2 <= uVar4 - uVar5) {
    param_1[2] = uVar5 + param_2;
    puVar11 = param_1;
    if (3 < uVar4) {
      puVar11 = (ulonglong *)*param_1;
    }
    if (param_2 != 0) {
      FUN_1404217a0((longlong)puVar11 + uVar5 * 4,0,param_2 << 2);
    }
    *(undefined4 *)((longlong)puVar11 + (uVar5 + param_2) * 4) = 0;
    return param_1;
  }
  uVar10 = 0x3ffffffffffffffe;
  if (0x3ffffffffffffffe - uVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar2 = uVar5 + param_2;
  uVar8 = uVar2 | 3;
  if ((uVar8 < 0x3fffffffffffffff) && (uVar4 <= 0x3ffffffffffffffe - (uVar4 >> 1))) {
    uVar3 = (uVar4 >> 1) + uVar4;
    uVar10 = uVar8;
    if (uVar8 < uVar3) {
      uVar10 = uVar3;
    }
    if (0x3fffffffffffffff < uVar10 + 1) goto LAB_1401b6260;
    uVar8 = (uVar10 + 1) * 4;
    if (uVar8 != 0) goto LAB_1401b615d;
    unaff_RSI = 0;
LAB_1401b619a:
    param_1[2] = uVar2;
    param_1[3] = uVar10;
    lVar7 = uVar5 * 4 + unaff_RSI;
    if (uVar4 < 4) {
      FUN_1404210f0(unaff_RSI,param_1);
      if (param_2 != 0) {
        FUN_1404217a0(lVar7,0,param_2 << 2);
      }
      *(undefined4 *)(unaff_RSI + uVar2 * 4) = 0;
      goto LAB_1401b6248;
    }
    uVar10 = *param_1;
    FUN_1404210f0(unaff_RSI,uVar10);
    if (param_2 != 0) {
      FUN_1404217a0(lVar7,0,param_2 << 2);
    }
    *(undefined4 *)(unaff_RSI + uVar2 * 4) = 0;
    if (0xfff < uVar4 * 4 + 4) {
      plVar1 = (longlong *)(uVar10 - 8);
      uVar10 = (uVar10 - *plVar1) - 8;
      if (uVar10 < 0x20) {
        thunk_FUN_14028af80(*plVar1,uVar4 * 4 + 0x2b);
        goto LAB_1401b6248;
      }
      goto LAB_1401b6211;
    }
  }
  else {
    uVar8 = 0xfffffffffffffffc;
LAB_1401b615d:
    if (uVar8 < 0x1000) {
      unaff_RSI = FUN_14028af20();
      goto LAB_1401b619a;
    }
    if (uVar8 + 0x27 <= uVar8) {
LAB_1401b6260:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    lVar7 = FUN_14028af20(uVar8 + 0x27);
    if (lVar7 != 0) {
      unaff_RSI = lVar7 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar7;
      goto LAB_1401b619a;
    }
LAB_1401b6211:
    pcVar6 = (code *)swi(0x29);
    (*pcVar6)(5);
    puVar9 = auStack_50;
  }
  *(undefined8 *)(puVar9 + -8) = 0x1401b6220;
  thunk_FUN_14028af80(uVar10);
LAB_1401b6248:
  *param_1 = unaff_RSI;
  return param_1;
}

