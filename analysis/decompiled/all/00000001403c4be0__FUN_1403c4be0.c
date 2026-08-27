// Function: FUN_1403c4be0
// Addr: 1403c4be0
// Size: 100 bytes


/* WARNING: Removing unreachable block (ram,0x0001403c4c02) */

void FUN_1403c4be0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1404e51b8;
  if (lVar1 != 0) {
    LOCK();
    DAT_1404e51b8 = 0;
    UNLOCK();
    if (*(longlong **)(lVar1 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x10))();
    }
    if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 8) + 0x10))();
    }
    thunk_FUN_14028af80(lVar1,0x18);
    return;
  }
  return;
}

