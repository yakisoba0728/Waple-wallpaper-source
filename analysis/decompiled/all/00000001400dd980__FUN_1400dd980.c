// Function: FUN_1400dd980
// Addr: 1400dd980
// Size: 181 bytes


void FUN_1400dd980(ulonglong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = *param_1;
  if (uVar3 != 0) {
    uVar2 = param_1[1];
    for (; uVar3 != uVar2; uVar3 = uVar3 + 0x28) {
      FUN_1400de1e0(uVar3);
    }
    uVar3 = *param_1;
    uVar2 = uVar3;
    puVar4 = auStack_28;
    if (0xfff < (ulonglong)(((longlong)(param_1[2] - uVar3) / 0x28) * 0x28)) {
      uVar2 = *(ulonglong *)(uVar3 - 8);
      uVar3 = (uVar3 - uVar2) - 8;
      puVar4 = auStack_28;
      if (0x1f < uVar3) {
        pcVar1 = (code *)swi(0x29);
        uVar2 = uVar3;
        (*pcVar1)(5);
        puVar4 = auStack_20;
      }
    }
    *(undefined8 *)(puVar4 + -8) = 0x1400dda1d;
    thunk_FUN_14028af80(uVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

