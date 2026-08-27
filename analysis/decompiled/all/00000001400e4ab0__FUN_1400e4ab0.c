// Function: FUN_1400e4ab0
// Addr: 1400e4ab0
// Size: 251 bytes


undefined8 * FUN_1400e4ab0(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_140486dc0;
  lVar2 = param_1[4];
  while (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x18);
    thunk_FUN_1402d9040(*(undefined8 *)(lVar2 + 0x10));
    thunk_FUN_14028af80(lVar2,0x20);
    lVar2 = lVar1;
  }
  thunk_FUN_14028af80(param_1[5],0x20);
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    thunk_FUN_1402d9040(*(undefined8 *)(lVar2 + 8));
    thunk_FUN_14028af80(lVar2,0x10);
  }
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    thunk_FUN_1402d9040(*(undefined8 *)(lVar2 + 8));
    thunk_FUN_14028af80(lVar2,0x10);
  }
  lVar2 = param_1[9];
  while (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x18);
    thunk_FUN_1402d9040(*(undefined8 *)(lVar2 + 0x10));
    thunk_FUN_14028af80(lVar2,0x20);
    lVar2 = lVar1;
  }
  *param_1 = &PTR_FUN_140486c30;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x50);
  }
  return param_1;
}

