// Function: FUN_14007c910
// Addr: 14007c910
// Size: 113 bytes


ulonglong FUN_14007c910(undefined8 param_1,ulonglong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*param_2 < 0x400000000000000) {
    uVar3 = *param_2 << 6;
    if (uVar3 == 0) {
      return 0;
    }
    if (uVar3 < 0x1000) {
      uVar3 = FUN_14028af20();
      return uVar3;
    }
    if (uVar3 < (uVar3 | 0x27)) {
      lVar2 = FUN_14028af20(uVar3 | 0x27);
      lVar4 = lVar2;
      if (lVar2 == 0) {
        lVar4 = 5;
        pcVar1 = (code *)swi(0x29);
        lVar2 = (*pcVar1)();
      }
      uVar3 = lVar2 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar3 - 8) = lVar4;
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

