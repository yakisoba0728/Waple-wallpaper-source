// Function: FUN_140346940
// Addr: 140346940
// Size: 68 bytes


void FUN_140346940(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x4e8);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    FUN_1402f5c00(*(undefined8 *)(param_1 + 0xa0),lVar1 + 0x10);
    FUN_1402f7f90(uVar2,lVar1);
  }
  return;
}

