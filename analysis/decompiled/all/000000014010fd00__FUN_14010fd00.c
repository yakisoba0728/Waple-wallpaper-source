// Function: FUN_14010fd00
// Addr: 14010fd00
// Size: 70 bytes


void FUN_14010fd00(longlong param_1)

{
  BOOL BVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    BVar1 = IsWindow(*(HWND *)(param_1 + 0x1c8));
    if (BVar1 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x1d8) == 0) break;
    Sleep(0xf);
    iVar2 = iVar2 + 1;
    if (99 < iVar2) {
      return;
    }
  }
  return;
}

