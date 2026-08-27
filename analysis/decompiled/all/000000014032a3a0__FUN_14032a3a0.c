// Function: FUN_14032a3a0
// Addr: 14032a3a0
// Size: 126 bytes


void FUN_14032a3a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xd8);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    if (*(longlong *)(lVar1 + 0xa0) != 0) {
      FUN_1402f5c00(*(undefined8 *)(param_1 + 0xa0));
    }
    FUN_1402f7f90(uVar2,*(undefined8 *)(lVar1 + 0xb0));
    *(undefined8 *)(lVar1 + 0xb0) = 0;
    FUN_1402f7f90(uVar2,lVar1);
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  return;
}

