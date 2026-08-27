// Function: FUN_1401795d0
// Addr: 1401795d0
// Size: 252 bytes


void FUN_1401795d0(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    do {
      FUN_1400c15a0(*(undefined8 *)(param_1[1] + (param_1[2] - 1 & param_1[3] + -1 + lVar3) * 8));
      lVar3 = param_1[4] + -1;
      param_1[4] = lVar3;
    } while (lVar3 != 0);
    param_1[3] = 0;
  }
  if (param_1[1] != 0) {
    lVar3 = param_1[2];
    while (0 < lVar3) {
      lVar6 = lVar3 + -1;
      lVar4 = *(longlong *)(param_1[1] + -8 + lVar3 * 8);
      lVar3 = lVar6;
      if (lVar4 != 0) {
        thunk_FUN_14028af80(lVar4,0x178);
      }
    }
    lVar3 = param_1[1];
    lVar4 = lVar3;
    puVar5 = auStack_28;
    if ((0xfff < (ulonglong)(param_1[2] * 8)) &&
       (lVar4 = *(longlong *)(lVar3 + -8), puVar5 = auStack_28, 0x1f < (lVar3 - lVar4) - 8U)) {
      lVar4 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar5 = auStack_20;
    }
    *(undefined8 *)(puVar5 + -8) = 0x1401796aa;
    thunk_FUN_14028af80(lVar4);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  uVar1 = *param_1;
  *param_1 = 0;
  thunk_FUN_14028af80(uVar1,0x10);
  return;
}

