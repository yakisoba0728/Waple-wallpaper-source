// Function: FUN_1400de2b0
// Addr: 1400de2b0
// Size: 153 bytes


void FUN_1400de2b0(longlong *param_1)

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
    }
  }
  *param_1 = 0;
  if (((longlong *)param_1[4] != (longlong *)0x0) &&
     (puVar4 = (undefined8 *)(**(code **)(*(longlong *)param_1[4] + 0x10))(),
     puVar4 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001400de341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}

