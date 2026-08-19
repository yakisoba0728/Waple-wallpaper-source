// Function: FUN_1400df750
// Addr: 1400df750
// Size: 13 bytes


void FUN_1400df750(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
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
      *param_1 = 0;
      return;
    }
  }
  *param_1 = 0;
  return;
}

