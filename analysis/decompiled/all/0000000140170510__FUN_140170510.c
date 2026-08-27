// Function: FUN_140170510
// Addr: 140170510
// Size: 97 bytes


void FUN_140170510(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_2 * param_2 != 0) {
    iVar4 = 0;
    do {
      lVar1 = (longlong)iVar4;
      uVar2 = 0;
      if (((byte)(uVar3 / param_2) & 1) != ((byte)uVar3 & 1)) {
        uVar2 = 0xff;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 4;
      *(undefined1 *)(param_1 + lVar1) = uVar2;
      *(undefined1 *)(param_1 + 1 + lVar1) = uVar2;
      *(undefined2 *)(param_1 + 2 + lVar1) = 0xff00;
    } while (uVar3 < param_2 * param_2);
  }
  return;
}

