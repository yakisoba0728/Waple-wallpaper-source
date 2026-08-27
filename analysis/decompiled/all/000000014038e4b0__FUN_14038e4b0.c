// Function: FUN_14038e4b0
// Addr: 14038e4b0
// Size: 167 bytes


undefined8 FUN_14038e4b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  uVar1 = *param_1;
  iVar3 = 0;
  FUN_1402fc370("SERIALIZE",uVar1,0,1,0,1,"start [%p..%p] (%lu bytes)",uVar1,param_1[3],
                *(int *)(param_1 + 3) - (int)uVar1);
  if (*(int *)((longlong)param_1 + 0x2c) == iVar3) {
    puVar2 = (undefined8 *)FUN_1403a3490(param_1 + 6);
    if (puVar2 == (undefined8 *)0x0) {
      if (*(int *)((longlong)param_1 + 0x2c) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x2c) = 1;
        return param_1[1];
      }
    }
    else {
      *puVar2 = param_1[1];
      puVar2[1] = param_1[2];
      puVar2[6] = param_1[9];
      param_1[9] = puVar2;
    }
  }
  return param_1[1];
}

