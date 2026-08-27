// Function: FUN_140037450
// Addr: 140037450
// Size: 45 bytes


void FUN_140037450(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14028af20(0x80);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return;
}

