// Function: FUN_140422400
// Addr: 140422400
// Size: 128 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140422400(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1402d9040(*(undefined8 *)(param_2 + 0x98));
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x20) = 8;
  LOCK();
  _DAT_1404dc1f8 = _DAT_1404dc1f8 + 1;
  UNLOCK();
  *(undefined **)(param_2 + 0x30) = &DAT_1404dc200;
  *(undefined ***)(param_2 + 0x38) = &PTR_vftable_1404dc1f0;
  FUN_140292e80(*(undefined8 *)(param_2 + 0x80),param_2 + 0x30);
  *(undefined4 *)(param_2 + 0x20) = 0;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_14003b430();
  }
  return 0;
}

