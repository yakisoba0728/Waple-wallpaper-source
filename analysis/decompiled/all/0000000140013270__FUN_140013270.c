// Function: FUN_140013270
// Addr: 140013270
// Size: 108 bytes


void FUN_140013270(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 uVar1;
  
  FUN_140013870();
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar1 = FUN_140013490(param_1,0x20);
  *(undefined1 *)(param_1 + 0x58) = uVar1;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    FUN_140013b50(param_1,*(uint *)(param_1 + 0x10) | 4,0);
  }
  if (param_3 != '\0') {
    FUN_14028c3b0(param_1);
  }
  return;
}

