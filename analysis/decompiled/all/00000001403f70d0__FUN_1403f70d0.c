// Function: FUN_1403f70d0
// Addr: 1403f70d0
// Size: 145 bytes


longlong FUN_1403f70d0(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong local_res8 [4];
  
  while (lVar3 = DAT_1404e51e0, DAT_1404e51e0 = lVar3, lVar3 == 0) {
    iVar1 = FUN_1402f2440(&DAT_1404df4f0,local_res8);
    if (iVar1 == 0) {
      FUN_1402fa410(local_res8[0]);
      FUN_1402fa460(local_res8[0]);
      FUN_14028b410(&LAB_1403c4cb0);
      lVar3 = local_res8[0];
    }
    else {
      lVar3 = 0;
    }
    LOCK();
    bVar4 = DAT_1404e51e0 == 0;
    lVar2 = lVar3;
    if (!bVar4) {
      lVar2 = DAT_1404e51e0;
    }
    DAT_1404e51e0 = lVar2;
    UNLOCK();
    if (bVar4) break;
    if (lVar3 != 0) {
      FUN_1402efbf0(lVar3);
    }
  }
  iVar1 = FUN_1402f4310(lVar3);
  lVar2 = 0;
  if (iVar1 == 0) {
    lVar2 = lVar3;
  }
  return lVar2;
}

