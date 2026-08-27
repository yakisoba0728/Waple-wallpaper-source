// Function: FUN_1400f8950
// Addr: 1400f8950
// Size: 73 bytes


void FUN_1400f8950(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  if (lVar2 != lVar1) {
    do {
      FUN_140017240(lVar2 + 8);
      lVar2 = lVar2 + 0x38;
    } while (lVar2 != lVar1);
    param_1[1] = *param_1;
  }
  return;
}

