// Function: FUN_1402d1404
// Addr: 1402d1404
// Size: 110 bytes


undefined8 FUN_1402d1404(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  if (DAT_1404e4580 == 0) {
    lVar2 = FUN_1402e3818();
    if (lVar2 == 0) {
      FUN_1402d9040(0);
      uVar3 = 0xffffffff;
    }
    else {
      lVar4 = FUN_1402d1588(lVar2);
      lVar1 = lVar4;
      if (lVar4 == 0) {
        uVar3 = 0xffffffff;
        lVar4 = DAT_1404e4580;
        lVar1 = DAT_1404e4588;
      }
      DAT_1404e4588 = lVar1;
      DAT_1404e4580 = lVar4;
      FUN_1402d9040(0);
      FUN_1402d9040(lVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

