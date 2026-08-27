// Function: FUN_1401e28f0
// Addr: 1401e28f0
// Size: 150 bytes


void FUN_1401e28f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    FUN_140016fc0(local_58,puVar2 + 2);
    local_38 = puVar2[6];
    local_30 = puVar2[7];
    thunk_FUN_14028af80();
    FUN_140017240(local_58);
  }
  if (param_1 != 0) {
    FUN_14000d9e0(param_1 + 0x58);
    FUN_1401e4730(param_1 + 0x48);
    FUN_140017240(param_1 + 0x20);
    FUN_140017240(param_1);
    thunk_FUN_14028af80(param_1,0x88);
  }
  return;
}

