// Function: FUN_1402d1460
// Addr: 1402d1460
// Size: 12 bytes


undefined8 FUN_1402d1460(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  if (DAT_1404e4648 == 0) {
    func_0x0001402e346c();
    lVar2 = FUN_1402e37d8();
    if (lVar2 == 0) {
      FUN_1402d9110(0);
      uVar3 = 0xffffffff;
    }
    else {
      lVar4 = func_0x0001402d1544(lVar2);
      lVar1 = lVar4;
      if (lVar4 == 0) {
        uVar3 = 0xffffffff;
        lVar4 = DAT_1404e4648;
        lVar1 = lRam00000001404e4660;
      }
      lRam00000001404e4660 = lVar1;
      DAT_1404e4648 = lVar4;
      FUN_1402d9110(0);
      FUN_1402d9110(lVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

