// Function: FUN_1402cccb0
// Addr: 1402cccb0
// Size: 25 bytes


undefined8
FUN_1402cccb0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
             )

{
  undefined8 uVar1;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar1 = 0;
  }
  else {
    if (param_5 == 0) {
      if (param_2 != -1) {
        func_0x000140421870(param_1,0,param_2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402cb004();
    }
    FUN_1402c9bf4(param_5);
    uVar1 = FUN_1402cca24(param_1,param_2,param_3,param_4,param_5);
    FUN_1402c9c00(param_5);
  }
  return uVar1;
}

