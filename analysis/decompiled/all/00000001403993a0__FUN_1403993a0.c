// Function: FUN_1403993a0
// Addr: 1403993a0
// Size: 113 bytes


undefined8 FUN_1403993a0(undefined8 *param_1,int param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1 + 2;
  if (param_1 == (undefined8 *)0xffffffffffffffef) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((*(int *)(puVar1 + 2) != 0) && (param_2 != -1)) {
    param_2 = param_2 + (param_3 & 0xffff);
    if (param_1[1] != 0) {
      param_2 = FUN_1403eaff0(param_1[1],param_2);
    }
    uVar2 = FUN_1403c7460(*param_1,param_2,param_1[3],*(undefined4 *)(param_1 + 4),param_1[5]);
    return uVar2;
  }
  return 0;
}

