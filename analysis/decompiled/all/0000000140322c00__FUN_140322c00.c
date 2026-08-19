// Function: FUN_140322c00
// Addr: 140322c00
// Size: 55 bytes


void FUN_140322c00(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_140322c50(param_1,param_2,0,0,0);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_2;
  }
  *param_3 = uVar2;
  return;
}

