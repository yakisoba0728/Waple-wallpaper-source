// Function: FUN_140399470
// Addr: 140399470
// Size: 113 bytes


undefined8 FUN_140399470(undefined8 *param_1,int param_2,uint param_3)

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
      param_2 = FUN_1403eb0c0(param_1[1],param_2);
    }
    uVar2 = FUN_1403c7530(*param_1,param_2,param_1[3],*(undefined4 *)(param_1 + 4),param_1[5]);
    return uVar2;
  }
  return 0;
}

