// Function: FUN_1400f31f0
// Addr: 1400f31f0
// Size: 137 bytes


float FUN_1400f31f0(longlong param_1)

{
  double dVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = FUN_140290d80(param_1 + 0xd8);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x124) != 0x7fffffff) {
    if (*(longlong **)(param_1 + 0x58) == (longlong *)0x0) {
      fVar3 = 0.0;
    }
    else {
      dVar1 = (double)(**(code **)(**(longlong **)(param_1 + 0x58) + 0x80))();
      fVar3 = (float)dVar1;
    }
    FUN_140290ea0(param_1 + 0xd8);
    return fVar3;
  }
  *(undefined4 *)(param_1 + 0x124) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

