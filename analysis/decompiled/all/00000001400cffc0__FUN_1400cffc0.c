// Function: FUN_1400cffc0
// Addr: 1400cffc0
// Size: 232 bytes


void FUN_1400cffc0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong local_50 [7];
  longlong *local_18;
  
  if (param_2 == 0) {
    iVar4 = FUN_140290d80(param_1 + 0x48);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    if (*(int *)(param_1 + 0x94) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x94) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(6);
    }
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
      puVar3 = (undefined8 *)puVar2[10];
      local_18 = (longlong *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        local_18 = (longlong *)
                   (**(code **)*puVar3)(puVar3,local_50,param_3,param_4,*(undefined4 *)(puVar2 + 2))
        ;
      }
      if (local_18 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2c0();
      }
      (**(code **)(*local_18 + 0x10))(local_18);
      if (local_18 != (longlong *)0x0) {
        (**(code **)(*local_18 + 0x20))(local_18,local_18 != local_50);
      }
    }
    FUN_140290ea0(param_1 + 0x48);
  }
  return;
}

