// Function: FUN_14010fdd0
// Addr: 14010fdd0
// Size: 70 bytes


void FUN_14010fdd0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = (*DAT_140426af0)(*(undefined8 *)(param_1 + 0x1c8));
    if (iVar1 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x1d8) == 0) break;
    (*DAT_140426240)(0xf);
    iVar2 = iVar2 + 1;
    if (99 < iVar2) {
      return;
    }
  }
  return;
}

