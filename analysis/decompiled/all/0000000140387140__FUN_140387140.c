// Function: FUN_140387140
// Addr: 140387140
// Size: 66 bytes


undefined4 FUN_140387140(longlong param_1,undefined4 param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  uVar1 = FUN_14036e080(param_1 + 0xc,local_res10,"");
  iVar2 = FUN_1403d0550(uVar1,local_res10[0]);
  if (iVar2 == 0) {
    return 0;
  }
  *param_3 = iVar2;
  return 1;
}

