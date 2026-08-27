// Function: FUN_14009ae40
// Addr: 14009ae40
// Size: 97 bytes


undefined8 * FUN_14009ae40(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 local_res10 [3];
  
  puVar3 = (undefined8 *)FUN_14028af20(0x20);
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  local_res10[0] = 1;
  *puVar3 = &PTR_FUN_1404870e8;
  puVar3[2] = 0;
  *(undefined1 *)(puVar3 + 3) = 0;
  puVar3[1] = puVar1;
  plVar2 = (longlong *)*puVar1;
  (**(code **)(*plVar2 + 0xc0))(plVar2,local_res10);
  return puVar3;
}

