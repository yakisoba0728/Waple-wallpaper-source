// Function: FUN_14007a780
// Addr: 14007a780
// Size: 81 bytes


void FUN_14007a780(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  if (lVar2 != lVar1) {
    do {
      FUN_140017240(lVar2 + 0x28);
      FUN_140017240(lVar2);
      lVar2 = lVar2 + 0x48;
    } while (lVar2 != lVar1);
    param_1[1] = *param_1;
  }
  return;
}

