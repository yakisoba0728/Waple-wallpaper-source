// Function: FUN_1400c29e0
// Addr: 1400c29e0
// Size: 89 bytes


longlong * FUN_1400c29e0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      puVar4 = (undefined8 *)puVar3[0x19];
      if (puVar4 == (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      else {
        (**(code **)*puVar4)(puVar4,puVar3);
      }
    }
  }
  thunk_FUN_14028af80(param_1,0x28);
  return param_1;
}

