// Function: FUN_1401d7af0
// Addr: 1401d7af0
// Size: 177 bytes


void FUN_1401d7af0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  FUN_1402671a0(param_2 + 0x10);
  thunk_FUN_14028af80(*(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_2 + 8) = 0;
  plVar1 = *(longlong **)(param_2 + 0x240);
  for (plVar3 = *(longlong **)(param_2 + 0x238); plVar3 != plVar1; plVar3 = plVar3 + 4) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    puVar2 = (undefined8 *)plVar3[3];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (*(longlong *)(param_2 + 0x238) != *(longlong *)(param_2 + 0x240)) {
    *(longlong *)(param_2 + 0x240) = *(longlong *)(param_2 + 0x238);
  }
  FUN_1400efd70(param_2 + 0x238);
  FUN_1401d5e20(param_2 + 0x10);
  thunk_FUN_14028af80(param_2,0x250);
  return;
}

