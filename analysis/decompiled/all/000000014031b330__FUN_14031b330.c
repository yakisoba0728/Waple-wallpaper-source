// Function: FUN_14031b330
// Addr: 14031b330
// Size: 123 bytes


undefined8 FUN_14031b330(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_2 + 0x238) = param_1;
  *(undefined1 *)(param_2 + 0x231) = 0;
  if ((*(int *)(param_2 + 0x70) != 0) && (*(int *)(param_2 + 0x74) != 0)) {
    uVar1 = func_0x000140421870(param_2 + 0xb8,0,0x178);
    return uVar1;
  }
  return 0;
}

