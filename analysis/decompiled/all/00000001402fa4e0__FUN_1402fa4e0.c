// Function: FUN_1402fa4e0
// Addr: 1402fa4e0
// Size: 68 bytes


void FUN_1402fa4e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  if (PTR_DAT_140436a30 != (undefined *)0x0) {
    ppuVar2 = &PTR_DAT_140436a30;
    puVar1 = PTR_DAT_140436a30;
    do {
      func_0x0001402ef630(param_1,puVar1);
      puVar1 = ppuVar2[1];
      ppuVar2 = ppuVar2 + 1;
    } while (puVar1 != (undefined *)0x0);
  }
  return;
}

