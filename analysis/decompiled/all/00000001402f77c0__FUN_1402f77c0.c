// Function: FUN_1402f77c0
// Addr: 1402f77c0
// Size: 153 bytes


void FUN_1402f77c0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x20);
    uVar3 = 0;
    uVar1 = *(uint *)(param_1 + 4);
    if (uVar1 != 0) {
      do {
        if (*plVar2 != 0) {
          (**(code **)(param_2 + 0x10))(param_2);
        }
        *plVar2 = 0;
        uVar3 = uVar3 + 1;
        plVar2 = plVar2 + 1;
      } while (uVar3 < uVar1);
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      (**(code **)(param_2 + 0x10))(param_2);
    }
    *(longlong *)(param_1 + 0x20) = 0;
  }
  return;
}

