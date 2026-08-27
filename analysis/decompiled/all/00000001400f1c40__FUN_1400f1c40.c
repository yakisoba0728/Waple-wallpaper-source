// Function: FUN_1400f1c40
// Addr: 1400f1c40
// Size: 389 bytes


undefined8 FUN_1400f1c40(longlong param_1,int param_2,HANDLE param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (param_2 == 5) {
    LOCK();
    *(undefined1 *)(lVar1 + 0x90) = 0;
    UNLOCK();
    iVar2 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x138))();
    if ((((iVar2 + 0x7785ffffU < 0x20) && ((0x80000071U >> (iVar2 + 0x7785ffffU & 0x1f) & 1) != 0))
        || (param_4 + 0x7785fffbU < 3)) || (param_4 == -0x7785ffe0)) {
      LOCK();
      *(undefined1 *)(lVar1 + 0x93) = 1;
      UNLOCK();
    }
    else if ((*(char *)(lVar1 + 0x93) == '\0') && ((longlong)param_3 - 3U < 2)) {
      if (*(HWND *)(lVar1 + 0xd0) != (HWND)0x0) {
        PostMessageW(*(HWND *)(lVar1 + 0xd0),0x8003,3,0);
        return 0;
      }
      LOCK();
      *(undefined1 *)(lVar1 + 0x96) = 1;
      UNLOCK();
      return 0;
    }
  }
  else if (param_2 == 10) {
    if (*(HANDLE *)(lVar1 + 0x80) != (HANDLE)0x0) {
      SetEvent(*(HANDLE *)(lVar1 + 0x80));
      return 0;
    }
  }
  else {
    if (param_2 == 0x13) {
      LOCK();
      *(undefined1 *)(lVar1 + 0x90) = 0;
      UNLOCK();
      LOCK();
      *(undefined1 *)(lVar1 + 0x94) = 1;
      UNLOCK();
      return 0;
    }
    if (param_2 == 1000) {
      LOCK();
      *(undefined1 *)(lVar1 + 0x92) = 1;
      UNLOCK();
      return 0;
    }
    if (param_2 == 0x3f0) {
      SetEvent(param_3);
      return 0;
    }
  }
  return 0;
}

