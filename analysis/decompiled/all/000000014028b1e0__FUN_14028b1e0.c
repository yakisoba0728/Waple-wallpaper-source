// Function: FUN_14028b1e0
// Addr: 14028b1e0
// Size: 71 bytes


undefined8 FUN_14028b1e0(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  iVar3 = FUN_14028bbd0();
  if (iVar3 != 0) {
    lVar1 = *(longlong *)((longlong)Self + 8);
    lVar4 = 0;
    LOCK();
    bVar5 = DAT_1404e3a48 == 0;
    lVar2 = lVar1;
    if (!bVar5) {
      lVar4 = DAT_1404e3a48;
      lVar2 = DAT_1404e3a48;
    }
    DAT_1404e3a48 = lVar2;
    UNLOCK();
    lVar2 = DAT_1404e3a48;
    while (DAT_1404e3a48 = lVar2, !bVar5) {
      if (lVar1 == lVar4) {
        return 1;
      }
      lVar4 = 0;
      LOCK();
      bVar5 = lVar2 == 0;
      DAT_1404e3a48 = lVar1;
      if (!bVar5) {
        lVar4 = lVar2;
        DAT_1404e3a48 = lVar2;
      }
      UNLOCK();
      lVar2 = DAT_1404e3a48;
    }
  }
  return 0;
}

