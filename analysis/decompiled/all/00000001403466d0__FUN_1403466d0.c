// Function: FUN_1403466d0
// Addr: 1403466d0
// Size: 68 bytes


void FUN_1403466d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x4d8);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    FUN_1402f5c00(*(undefined8 *)(param_1 + 0xa0),lVar1 + 0x18);
    FUN_1402f7f90(uVar2,lVar1);
  }
  return;
}

