// Function: FUN_14003ab40
// Addr: 14003ab40
// Size: 82 bytes


undefined8 FUN_14003ab40(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    return 0;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  if ((param_3 != 0) && (param_4 < 0x401)) {
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(param_1,param_3,param_4);
  }
  uVar1 = func_0x000140421870(param_1,0,0x400);
  return uVar1;
}

