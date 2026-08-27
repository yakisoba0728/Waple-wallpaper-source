// Function: FUN_1400e4660
// Addr: 1400e4660
// Size: 230 bytes


void FUN_1400e4660(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar3 = *param_1;
  if (uVar3 != 0) {
    uVar2 = param_1[1];
    for (; uVar3 != uVar2; uVar3 = uVar3 + 0x28) {
      FUN_1400de1e0(uVar3);
    }
    uVar3 = *param_1;
    uVar2 = uVar3;
    puVar4 = auStack_38;
    if (0xfff < (ulonglong)(((longlong)(param_1[2] - uVar3) / 0x28) * 0x28)) {
      uVar2 = *(ulonglong *)(uVar3 - 8);
      uVar3 = (uVar3 - uVar2) - 8;
      puVar4 = auStack_38;
      if (0x1f < uVar3) {
        pcVar1 = (code *)swi(0x29);
        uVar2 = uVar3;
        (*pcVar1)(5);
        puVar4 = auStack_30;
      }
    }
    *(undefined8 *)(puVar4 + -8) = 0x1400e4716;
    thunk_FUN_14028af80(uVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x28;
  param_1[2] = param_2 + param_4 * 0x28;
  return;
}

