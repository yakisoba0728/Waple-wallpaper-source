// Function: FUN_1401006b0
// Addr: 1401006b0
// Size: 97 bytes


undefined1 * FUN_1401006b0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  if (param_1 != param_2) {
    puVar1 = (undefined8 *)(param_2 + 0x18);
    if (0xf < *(ulonglong *)(param_2 + 0x30)) {
      puVar1 = (undefined8 *)*puVar1;
    }
    FUN_14000f880(param_1 + 0x18,puVar1,*(undefined8 *)(param_2 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  return param_1;
}

