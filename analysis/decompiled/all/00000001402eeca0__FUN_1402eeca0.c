// Function: FUN_1402eeca0
// Addr: 1402eeca0
// Size: 82 bytes


int FUN_1402eeca0(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  
  uVar1 = *param_1;
  *param_3 = 0;
  puVar2 = (undefined8 *)func_0x0001402f7f60(uVar1,*param_2,local_res8);
  if (local_res8[0] == 0) {
    *puVar2 = param_1;
    puVar2[1] = param_2;
    *(undefined4 *)(puVar2 + 2) = param_2[1];
    *param_3 = puVar2;
    return 0;
  }
  return local_res8[0];
}

