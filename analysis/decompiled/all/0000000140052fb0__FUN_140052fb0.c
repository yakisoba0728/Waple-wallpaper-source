// Function: FUN_140052fb0
// Addr: 140052fb0
// Size: 345 bytes


void FUN_140052fb0(ulonglong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong unaff_RSI;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar9 = auStack_38;
  uVar3 = param_1[3];
  if (param_2 <= uVar3) {
    return;
  }
  uVar8 = 0x7fffffffffffffff;
  uVar4 = param_1[2];
  if (0x7fffffffffffffff - uVar4 < param_2 - uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar7 = param_2 | 0xf;
  if ((uVar7 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar2 = (uVar3 >> 1) + uVar3;
    uVar8 = uVar7;
    if (uVar7 < uVar2) {
      uVar8 = uVar2;
    }
    uVar2 = uVar8 + 1;
    if (uVar2 == 0) {
      unaff_RSI = 0;
    }
    else {
      if (0xfff < uVar2) {
        uVar7 = uVar8 + 0x28;
        if (uVar7 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        goto LAB_14005305b;
      }
      unaff_RSI = FUN_14028af20(uVar2);
    }
LAB_14005307e:
    param_1[2] = param_2;
    param_1[3] = uVar8;
    if (uVar3 < 0x10) {
      FUN_1404210f0(unaff_RSI,param_1,uVar4 + 1);
      goto LAB_1400530e0;
    }
    uVar8 = *param_1;
    FUN_1404210f0(unaff_RSI,uVar8,uVar4 + 1);
    if (0xfff < uVar3 + 1) {
      plVar1 = (longlong *)(uVar8 - 8);
      uVar8 = (uVar8 - *plVar1) - 8;
      if (uVar8 < 0x20) {
        thunk_FUN_14028af80(*plVar1,uVar3 + 0x28);
        goto LAB_1400530e0;
      }
      goto LAB_1400530c7;
    }
  }
  else {
    uVar7 = 0x8000000000000027;
LAB_14005305b:
    lVar6 = FUN_14028af20(uVar7);
    if (lVar6 != 0) {
      unaff_RSI = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar6;
      goto LAB_14005307e;
    }
LAB_1400530c7:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar9 = auStack_30;
  }
  *(undefined8 *)(puVar9 + -8) = 0x1400530d6;
  thunk_FUN_14028af80(uVar8);
LAB_1400530e0:
  *param_1 = unaff_RSI;
  param_1[2] = uVar4;
  return;
}

