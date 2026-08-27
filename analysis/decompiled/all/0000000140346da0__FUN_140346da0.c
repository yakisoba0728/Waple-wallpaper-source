// Function: FUN_140346da0
// Addr: 140346da0
// Size: 145 bytes


void FUN_140346da0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  if (*(short *)(param_1 + 0x35a) != 0) {
    FUN_1402f7f90(uVar1,*(undefined8 *)(param_1 + 0x360));
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined2 *)(param_1 + 0x35a) = 0;
  }
  if (*(short *)(param_1 + 0x35c) != 0) {
    FUN_1402f7f90(uVar1,*(undefined8 *)(param_1 + 0x368));
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(undefined2 *)(param_1 + 0x35c) = 0;
    *(undefined1 *)(param_1 + 0x358) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x358) = 0;
  return;
}

