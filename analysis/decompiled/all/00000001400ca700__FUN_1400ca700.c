// Function: FUN_1400ca700
// Addr: 1400ca700
// Size: 121 bytes


void FUN_1400ca700(ulonglong *param_1)

{
  ulonglong *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar5 = auStack_28;
  if (*param_1 != 0) {
    FUN_1400cb400(*param_1,param_1[1]);
    uVar4 = *param_1;
    uVar3 = ((longlong)(param_1[2] - uVar4) >> 4) * 0x10;
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
    *(undefined **)(puVar5 + -8) = &UNK_1400ca773;
    func_0x00014028b040(uVar4,uVar3);
    return;
  }
  return;
}

