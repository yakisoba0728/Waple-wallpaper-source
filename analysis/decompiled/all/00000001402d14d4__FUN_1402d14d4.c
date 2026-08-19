// Function: FUN_1402d14d4
// Addr: 1402d14d4
// Size: 110 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1402d14d4(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  if (DAT_1404e4650 == 0) {
    lVar2 = FUN_1402e38e8();
    if (lVar2 == 0) {
      FUN_1402d9110(0);
      uVar3 = 0xffffffff;
    }
    else {
      lVar4 = FUN_1402d1658(lVar2);
      lVar1 = lVar4;
      if (lVar4 == 0) {
        uVar3 = 0xffffffff;
        lVar4 = DAT_1404e4650;
        lVar1 = _DAT_1404e4658;
      }
      _DAT_1404e4658 = lVar1;
      DAT_1404e4650 = lVar4;
      FUN_1402d9110(0);
      FUN_1402d9110(lVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

