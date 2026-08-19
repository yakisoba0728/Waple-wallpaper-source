// Function: FUN_140014ec0
// Addr: 140014ec0
// Size: 104 bytes


longlong * FUN_140014ec0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1402914c0();
  lVar2 = func_0x0001402914a0();
  if (lVar1 == 10000000) {
    *param_1 = lVar2 * 100;
    return param_1;
  }
  if (lVar1 == 24000000) {
    *param_1 = (lVar2 * 2) / 3 + lVar2 * 0x29;
    return param_1;
  }
  *param_1 = ((lVar2 % lVar1) * 1000000000) / lVar1 + (lVar2 / lVar1) * 1000000000;
  return param_1;
}

