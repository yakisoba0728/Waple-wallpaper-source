// Function: FUN_1400e6b50
// Addr: 1400e6b50
// Size: 144 bytes


longlong * FUN_1400e6b50(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = 0;
  FUN_1400de8b0(param_1 + 1);
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x2c);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        puVar4 = (undefined8 *)*param_1;
        while (puVar4 != (undefined8 *)0x0) {
          puVar3 = (undefined8 *)puVar4[2];
          puVar4[2] = 0;
          (**(code **)*puVar4)(puVar4,1);
          puVar4 = puVar3;
        }
      }
    }
    *param_1 = 0;
    *param_1 = *param_2;
    *param_2 = 0;
  }
  return param_1;
}

