// Function: FUN_1402fa410
// Addr: 1402fa410
// Size: 68 bytes


void FUN_1402fa410(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  if (PTR_DAT_140436960 != (undefined *)0x0) {
    ppuVar2 = &PTR_DAT_140436960;
    puVar1 = PTR_DAT_140436960;
    do {
      FUN_1402ef560(param_1,puVar1);
      puVar1 = ppuVar2[1];
      ppuVar2 = ppuVar2 + 1;
    } while (puVar1 != (undefined *)0x0);
  }
  return;
}

