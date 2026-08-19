// Function: FUN_14015c2e0
// Addr: 14015c2e0
// Size: 101 bytes


void FUN_14015c2e0(ulonglong *param_1)

{
  ulonglong *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar5 = auStack_28;
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar3 = param_1[2] - uVar4;
    if (0xfff < uVar3) {
      puVar1 = (ulonglong *)(uVar4 - 8);
      uVar4 = (uVar4 - *puVar1) - 8;
      if (uVar4 < 0x20) {
        uVar3 = uVar3 + 0x27;
        uVar4 = *puVar1;
        puVar5 = auStack_28;
      }
      else {
        uVar3 = 5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar5 = auStack_20;
      }
    }
    *(undefined **)(puVar5 + -8) = &UNK_14015c33f;
    func_0x00014028b040(uVar4,uVar3);
    return;
  }
  return;
}

