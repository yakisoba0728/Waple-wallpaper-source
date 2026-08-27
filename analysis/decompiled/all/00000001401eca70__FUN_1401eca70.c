// Function: FUN_1401eca70
// Addr: 1401eca70
// Size: 105 bytes


void FUN_1401eca70(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if ((*(byte *)(param_2 + 0x120) & 4) == 0) {
    puVar1 = *(undefined8 **)(param_2 + 0x1a0);
    for (puVar3 = *(undefined8 **)(param_2 + 0x198); puVar3 != puVar1; puVar3 = puVar3 + 1) {
      plVar2 = (longlong *)*puVar3;
      (**(code **)(*plVar2 + 0x50))(plVar2);
      FUN_1401eca70(param_1,plVar2);
    }
  }
  return;
}

