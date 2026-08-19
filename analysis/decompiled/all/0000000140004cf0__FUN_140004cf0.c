// Function: FUN_140004cf0
// Addr: 140004cf0
// Size: 16 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140004cf0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined **appuStackX_10 [3];
  
  appuStackX_10[0] = &PTR_PTR_1404dc368;
  PTR_PTR_1404dc368 = (undefined *)&PTR_LAB_14042b188;
  uRam00000001404dc2d0 = 0xe06d7363;
  uRam00000001404dc2d4 = 1;
  uRam00000001404dc2d8 = 0;
  uRam00000001404dc2e0 = 0;
  uRam00000001404dc2e8 = 4;
  uRam00000001404dc2f0 = 0x19930520;
  ppuRam00000001404dc2f8 = &PTR_PTR_1404dc368;
  puRam00000001404dc300 = &DAT_1404d86a0;
  lRam00000001404dc308 = (*_UNK_140426590)(&DAT_1404d86a0,appuStackX_10);
  if (lRam00000001404dc308 == 0) {
    uRam00000001404dc2f0 = 0x1994000;
  }
  if (DAT_1404e3b28 == -1) {
    iVar1 = func_0x0001402d1d94();
  }
  else {
    iVar1 = func_0x0001402d1e10(&DAT_1404e3b28,&UNK_140425960);
  }
  puVar2 = (undefined *)0x0;
  if (iVar1 == 0) {
    puVar2 = &UNK_140425960;
  }
  return (puVar2 != (undefined *)0x0) - 1;
}

