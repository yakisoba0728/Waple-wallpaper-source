// Function: FUN_140424d70
// Addr: 140424d70
// Size: 4 bytes


void FUN_140424d70(void)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (0xf < uRam00000001404dfdc8) {
    lVar2 = CONCAT71(uRam00000001404dfdb1,uRam00000001404dfdb0);
    uVar4 = uRam00000001404dfdc8 + 1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar3) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = uRam00000001404dfdc8 + 0x28;
    }
    func_0x00014028b040(lVar3,uVar4);
  }
  uRam00000001404dfdc0 = 0;
  uRam00000001404dfdc8 = 0xf;
  uRam00000001404dfdb0 = 0;
  return;
}

