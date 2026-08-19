// Function: FUN_1400ca670
// Addr: 1400ca670
// Size: 92 bytes


void FUN_1400ca670(ulonglong *param_1)

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
  if (uVar4 == 0) {
    return;
  }
  uVar3 = uVar4;
  while( true ) {
    if (uVar3 == param_1[1]) {
      uVar3 = param_1[2] - uVar4 & 0xfffffffffffffff0;
      if (0xfff < uVar3) {
        puVar1 = (ulonglong *)(uVar4 - 8);
        uVar4 = (uVar4 - *puVar1) - 8;
        if (uVar4 < 0x20) {
          uVar3 = uVar3 + 0x27;
          uVar4 = *puVar1;
          puVar5 = auStack_28;
        }
        else {
          pcVar2 = (code *)swi(0x29);
          uVar3 = (*pcVar2)(5);
          puVar5 = auStack_20;
        }
      }
      *(undefined **)(puVar5 + -8) = &UNK_1400ca6db;
      func_0x00014028b040(uVar4,uVar3);
      return;
    }
    if (*(int *)(uVar3 + 8) != 0) break;
    uVar3 = uVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400151e0();
}

