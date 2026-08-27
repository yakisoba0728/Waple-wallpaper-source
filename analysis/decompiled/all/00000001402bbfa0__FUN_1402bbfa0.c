// Function: FUN_1402bbfa0
// Addr: 1402bbfa0
// Size: 98 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1402bbfa0(void)

{
  BOOL BVar1;
  
  DAT_1404dc380 = FlsAlloc((PFLS_CALLBACK_FUNCTION)&LAB_1402bbea0);
  if (DAT_1404dc380 != 0xffffffff) {
    BVar1 = FlsSetValue(DAT_1404dc380,&DAT_1404e4370);
    if (BVar1 != 0) {
      _DAT_1404e43e8 = 0xfffffffe;
      return 1;
    }
    if (DAT_1404dc380 != 0xffffffff) {
      FlsFree(DAT_1404dc380);
      DAT_1404dc380 = 0xffffffff;
    }
  }
  return 0;
}

