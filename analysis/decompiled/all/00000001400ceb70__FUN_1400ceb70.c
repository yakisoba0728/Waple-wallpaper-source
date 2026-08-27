// Function: FUN_1400ceb70
// Addr: 1400ceb70
// Size: 71 bytes


undefined8 * FUN_1400ceb70(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14028af20(0xe8);
  *puVar1 = &PTR_FUN_140485e90;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  FUN_1400ce370(puVar1 + 2,param_1 + 0x10);
  return puVar1;
}

