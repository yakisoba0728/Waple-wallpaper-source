// Function: FUN_140358190
// Addr: 140358190
// Size: 99 bytes


void FUN_140358190(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[2];
  uVar2 = param_1[6];
  if (lVar1 != 0) {
    FUN_140357d70(lVar1);
    FUN_1402f7f90(uVar2,lVar1);
    param_1[2] = 0;
  }
  if (param_1[4] == 0) {
    FUN_1402f7f90(uVar2,*param_1);
    *param_1 = 0;
  }
  return;
}

