// Function: FUN_1401105b0
// Addr: 1401105b0
// Size: 122 bytes


undefined8 FUN_1401105b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_140290d80(param_1 + 0x3d8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x424) != 0x7fffffff) {
    FUN_140085090(param_2,param_1 + 0x38);
    FUN_140290ea0(param_1 + 0x3d8);
    return param_2;
  }
  *(undefined4 *)(param_1 + 0x424) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

