// Function: FUN_1400e77f0
// Addr: 1400e77f0
// Size: 140 bytes


void FUN_1400e77f0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (*(int *)(*(longlong *)(param_1 + 8) + 8) != 6) {
    puVar2 = (undefined8 *)FUN_14028af20(0x30);
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_140486c10;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[1] = 6;
    FUN_1400e5e40(param_1,puVar2);
  }
  if ((*(uint *)(param_1 + 0x10) & 0x100) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
    param_2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  }
  FUN_1400e8530(*(longlong *)(param_1 + 8) + 0x20,param_2);
  return;
}

