// Function: FUN_140322b30
// Addr: 140322b30
// Size: 55 bytes


void FUN_140322b30(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_140322b80(param_1,param_2,0,0,0);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_2;
  }
  *param_3 = uVar2;
  return;
}

