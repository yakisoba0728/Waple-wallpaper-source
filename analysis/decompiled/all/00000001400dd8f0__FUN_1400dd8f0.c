// Function: FUN_1400dd8f0
// Addr: 1400dd8f0
// Size: 129 bytes


void FUN_1400dd8f0(ulonglong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = uVar4;
    puVar3 = auStack_28;
    if (0xfff < (ulonglong)(((longlong)(param_1[2] - uVar4) / 0x18) * 0x18)) {
      uVar2 = *(ulonglong *)(uVar4 - 8);
      uVar4 = (uVar4 - uVar2) - 8;
      puVar3 = auStack_28;
      if (0x1f < uVar4) {
        pcVar1 = (code *)swi(0x29);
        uVar2 = uVar4;
        (*pcVar1)(5);
        puVar3 = auStack_20;
      }
    }
    *(undefined8 *)(puVar3 + -8) = 0x1400dd95e;
    thunk_FUN_14028af80(uVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

