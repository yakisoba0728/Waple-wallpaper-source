// Function: FUN_140164e40
// Addr: 140164e40
// Size: 33 bytes


undefined4 * FUN_140164e40(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    puVar1 = (undefined8 *)(param_2 + 2);
    if (0xf < *(ulonglong *)(param_2 + 8)) {
      puVar1 = (undefined8 *)*puVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14000f950(param_1 + 2,puVar1,*(undefined8 *)(param_2 + 6));
  }
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  param_1[0x1b] = param_2[0x1b];
  return param_1;
}

