// Function: FUN_140031e20
// Addr: 140031e20
// Size: 368 bytes


void FUN_140031e20(ulonglong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong unaff_RSI;
  ulonglong uVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar4 = auStack_28;
  if (param_1[3] < 0x10) {
    return;
  }
  uVar5 = param_1[2];
  if (uVar5 < 0x10) {
    uVar3 = *param_1;
    FUN_1404210f0(param_1,uVar3,uVar5 + 1);
    if (param_1[3] + 1 < 0x1000) {
      thunk_FUN_14028af80(uVar3);
      param_1[3] = 0xf;
      return;
    }
    unaff_RSI = (uVar3 - *(longlong *)(uVar3 - 8)) - 8;
    if (unaff_RSI < 0x20) {
      thunk_FUN_14028af80(*(longlong *)(uVar3 - 8),param_1[3] + 0x28);
      param_1[3] = 0xf;
      return;
    }
  }
  else {
    uVar5 = uVar5 | 0xf;
    if (0x7fffffffffffffff < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (param_1[3] <= uVar5) {
      return;
    }
    if (uVar5 == 0xffffffffffffffff) {
      unaff_RSI = 0;
    }
    else if (uVar5 + 1 < 0x1000) {
      unaff_RSI = FUN_14028af20();
    }
    else {
      if (uVar5 + 0x28 <= uVar5 + 1) {
                    /* WARNING: Subroutine does not return */
        FUN_140017370();
      }
      lVar2 = FUN_14028af20(uVar5 + 0x28);
      if (lVar2 == 0) goto LAB_140031f62;
      unaff_RSI = lVar2 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar2;
    }
    FUN_1404210f0(unaff_RSI,*param_1,param_1[2] + 1);
    uVar3 = *param_1;
    if ((param_1[3] + 1 < 0x1000) ||
       (lVar2 = uVar3 - *(ulonglong *)(uVar3 - 8), uVar3 = *(ulonglong *)(uVar3 - 8),
       puVar4 = auStack_28, lVar2 - 8U < 0x20)) goto LAB_140031f6c;
  }
LAB_140031f62:
  uVar3 = 5;
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar4 = auStack_20;
LAB_140031f6c:
  *(undefined8 *)(puVar4 + -8) = 0x140031f74;
  thunk_FUN_14028af80(uVar3);
  *param_1 = unaff_RSI;
  param_1[3] = uVar5;
  return;
}

