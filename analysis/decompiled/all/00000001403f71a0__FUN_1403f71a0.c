// Function: FUN_1403f71a0
// Addr: 1403f71a0
// Size: 145 bytes


longlong FUN_1403f71a0(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong local_res8 [4];
  
  while (lVar3 = DAT_1404e52b0, DAT_1404e52b0 = lVar3, lVar3 == 0) {
    iVar1 = func_0x0001402f2510(&DAT_1404df5c0,local_res8);
    if (iVar1 == 0) {
      FUN_1402fa4e0(local_res8[0]);
      FUN_1402fa530(local_res8[0]);
      FUN_14028b4e0(&LAB_1403c4d80);
      lVar3 = local_res8[0];
    }
    else {
      lVar3 = 0;
    }
    LOCK();
    bVar4 = DAT_1404e52b0 == 0;
    lVar2 = lVar3;
    if (!bVar4) {
      lVar2 = DAT_1404e52b0;
    }
    DAT_1404e52b0 = lVar2;
    UNLOCK();
    if (bVar4) break;
    if (lVar3 != 0) {
      FUN_1402efcc0(lVar3);
    }
  }
  iVar1 = FUN_1402f43e0(lVar3);
  lVar2 = 0;
  if (iVar1 == 0) {
    lVar2 = lVar3;
  }
  return lVar2;
}

