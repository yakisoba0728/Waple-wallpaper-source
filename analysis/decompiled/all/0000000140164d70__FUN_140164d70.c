// Function: FUN_140164d70
// Addr: 140164d70
// Size: 188 bytes


undefined4 * FUN_140164d70(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    puVar1 = (undefined8 *)(param_2 + 2);
    if (0xf < *(ulonglong *)(param_2 + 8)) {
      puVar1 = (undefined8 *)*puVar1;
    }
    FUN_14000f880(param_1 + 2,puVar1,*(undefined8 *)(param_2 + 6));
    plVar2 = (longlong *)(param_2 + 10);
    if (0xf < *(ulonglong *)(param_2 + 0x10)) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_14000f880(param_1 + 10,plVar2,*(undefined8 *)(param_2 + 0xe));
    plVar2 = (longlong *)(param_2 + 0x12);
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_14000f880(param_1 + 0x12,plVar2,*(undefined8 *)(param_2 + 0x16));
    *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
    param_1[0x1b] = param_2[0x1b];
    FUN_1401655e0(param_1 + 0x1c,*(longlong *)(param_2 + 0x1c),
                  *(longlong *)(param_2 + 0x1e) - *(longlong *)(param_2 + 0x1c) >> 6);
    return param_1;
  }
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  param_1[0x1b] = param_2[0x1b];
  return param_1;
}

