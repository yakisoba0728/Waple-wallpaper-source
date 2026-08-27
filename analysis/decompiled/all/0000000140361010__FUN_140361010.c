// Function: FUN_140361010
// Addr: 140361010
// Size: 58 bytes


void FUN_140361010(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_1403b10d0(*(undefined8 *)(lVar1 + 0x20));
    thunk_FUN_1402d9040(lVar1);
  }
  thunk_FUN_1402d9040(param_1);
  return;
}

