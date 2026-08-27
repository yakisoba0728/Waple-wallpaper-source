// Function: FUN_1402dc6fc
// Addr: 1402dc6fc
// Size: 132 bytes


undefined1 FUN_1402dc6fc(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  iVar1 = FUN_1402dde08();
  uVar3 = 0;
  if ((iVar1 == 1) && (DAT_1405160b0 != -1)) {
    if ((DAT_1405160b0 == 0) &&
       (lVar2 = FUN_1402dbc10(0x16,"MessageBoxA",&DAT_140430158,"MessageBoxA"), lVar2 == 0)) {
      return 0;
    }
    uVar3 = 0;
    if (DAT_1405160b8 != -1) {
      if ((DAT_1405160b8 == 0) &&
         (lVar2 = FUN_1402dbc10(0x17,"MessageBoxW",&DAT_140430170,"MessageBoxW"), lVar2 == 0)) {
        return 0;
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

