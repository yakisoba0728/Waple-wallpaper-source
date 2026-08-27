// Function: FUN_1402d1390
// Addr: 1402d1390
// Size: 115 bytes


undefined8 FUN_1402d1390(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  if (DAT_1404e4578 == 0) {
    __acrt_initialize_multibyte();
    lVar2 = FUN_1402e3708();
    if (lVar2 == 0) {
      FUN_1402d9040(0);
      uVar3 = 0xffffffff;
    }
    else {
      lVar4 = FUN_1402d1474(lVar2);
      lVar1 = lVar4;
      if (lVar4 == 0) {
        uVar3 = 0xffffffff;
        lVar4 = DAT_1404e4578;
        lVar1 = DAT_1404e4590;
      }
      DAT_1404e4590 = lVar1;
      DAT_1404e4578 = lVar4;
      FUN_1402d9040(0);
      FUN_1402d9040(lVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

