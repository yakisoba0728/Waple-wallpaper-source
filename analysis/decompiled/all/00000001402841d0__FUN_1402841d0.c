// Function: FUN_1402841d0
// Addr: 1402841d0
// Size: 109 bytes


void FUN_1402841d0(ulonglong *param_1)

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
    uVar3 = ((longlong)(param_1[2] - uVar4) >> 5) * 0x20;
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
    *(undefined **)(puVar5 + -8) = &UNK_140284237;
    func_0x00014028b040(uVar4,uVar3);
    return;
  }
  return;
}

