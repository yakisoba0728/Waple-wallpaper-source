// Function: FUN_140358260
// Addr: 140358260
// Size: 84 bytes


void FUN_140358260(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[2];
  uVar2 = param_1[6];
  if (lVar1 != 0) {
    FUN_140357e40(lVar1);
                    /* WARNING: Subroutine does not return */
    FUN_1402f8060(uVar2,lVar1);
  }
  if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402f8060(uVar2,*param_1);
  }
  return;
}

