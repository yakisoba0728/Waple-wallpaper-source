// Function: FUN_1400534d0
// Addr: 1400534d0
// Size: 406 bytes


void FUN_1400534d0(ulonglong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong unaff_RSI;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar8 = auStack_38;
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  if (uVar3 < uVar4) {
    param_1[2] = uVar3 + 1;
    if (0xf < uVar4) {
      param_1 = (ulonglong *)*param_1;
    }
    *(undefined1 *)((longlong)param_1 + uVar3) = param_2;
    *(undefined1 *)((longlong)param_1 + uVar3 + 1) = 0;
    return;
  }
  uVar9 = 0x7fffffffffffffff;
  if (uVar3 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar7 = uVar3 + 1 | 0xf;
  if ((uVar7 < 0x8000000000000000) && (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1))) {
    uVar2 = (uVar4 >> 1) + uVar4;
    uVar9 = uVar7;
    if (uVar7 < uVar2) {
      uVar9 = uVar2;
    }
    uVar2 = uVar9 + 1;
    if (uVar2 == 0) {
      unaff_RSI = 0;
    }
    else {
      if (0xfff < uVar2) {
        uVar7 = uVar9 + 0x28;
        if (uVar7 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        goto LAB_1400535a5;
      }
      unaff_RSI = FUN_14028af20(uVar2);
    }
LAB_1400535c8:
    param_1[2] = uVar3 + 1;
    param_1[3] = uVar9;
    if (uVar4 < 0x10) {
      FUN_1404210f0(unaff_RSI,param_1,uVar3);
      *(undefined1 *)(unaff_RSI + uVar3) = param_2;
      *(undefined1 *)(unaff_RSI + 1 + uVar3) = 0;
      goto LAB_14005363b;
    }
    uVar9 = *param_1;
    FUN_1404210f0(unaff_RSI,uVar9,uVar3);
    *(undefined1 *)(unaff_RSI + uVar3) = param_2;
    *(undefined1 *)(unaff_RSI + 1 + uVar3) = 0;
    if (0xfff < uVar4 + 1) {
      plVar1 = (longlong *)(uVar9 - 8);
      uVar9 = (uVar9 - *plVar1) - 8;
      if (uVar9 < 0x20) {
        thunk_FUN_14028af80(*plVar1,uVar4 + 0x28);
        goto LAB_14005363b;
      }
      goto LAB_140053619;
    }
  }
  else {
    uVar7 = 0x8000000000000027;
LAB_1400535a5:
    lVar6 = FUN_14028af20(uVar7);
    if (lVar6 != 0) {
      unaff_RSI = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar6;
      goto LAB_1400535c8;
    }
LAB_140053619:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar8 = auStack_30;
  }
  *(undefined8 *)(puVar8 + -8) = 0x140053628;
  thunk_FUN_14028af80(uVar9);
LAB_14005363b:
  *param_1 = unaff_RSI;
  return;
}

