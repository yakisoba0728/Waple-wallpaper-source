// Function: FUN_1402ed678
// Addr: 1402ed678
// Size: 146 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1402ed678(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (DAT_1404e4fc0 != 1) {
    if (DAT_1404e4fc0 != 0) {
      return true;
    }
    lVar2 = (*DAT_140426438)(L"KERNEL32.DLL");
    if (((lVar2 == 0) || (lVar3 = (*DAT_140426730)(lVar2,"AcquireSRWLockExclusive"), lVar3 == 0)) ||
       (DAT_1404e4fc8 = lVar3, lVar3 = (*DAT_140426730)(lVar2,"ReleaseSRWLockExclusive"), lVar3 == 0
       )) {
      lVar2 = 1;
      lVar3 = _DAT_1404e4fd0;
    }
    _DAT_1404e4fd0 = lVar3;
    lVar3 = 0;
    LOCK();
    bVar4 = DAT_1404e4fc0 != 0;
    lVar1 = lVar2;
    if (bVar4) {
      lVar3 = DAT_1404e4fc0;
      lVar1 = DAT_1404e4fc0;
    }
    DAT_1404e4fc0 = lVar1;
    UNLOCK();
    if ((bVar4) || (lVar2 != 1)) {
      return lVar3 != 1;
    }
  }
  return false;
}

