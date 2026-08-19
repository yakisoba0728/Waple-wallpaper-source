// Function: FUN_1402ed5bc
// Addr: 1402ed5bc
// Size: 140 bytes


/* WARNING: Removing unreachable block (ram,0x0001402ed611) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ed5bc(void)

{
  char cVar1;
  
  if (((_DAT_140436610 & 0x1000) != 0) && (DAT_140436568 != 0)) {
    cVar1 = FUN_1402ed678();
    if (cVar1 == '\0') {
      do {
      } while (DAT_1404e4fd8 != 0);
      LOCK();
      DAT_1404e4fd8 = 1;
      UNLOCK();
    }
    else {
      (*(code *)PTR_FUN_140426bb8)(&DAT_1404e4fd8);
    }
    DAT_1404e4fe0 = DAT_1404e4fe0 + 1;
    if (DAT_1404e4fe0 == 1) {
      FUN_1402ed844(0,0,4,&DAT_1404e4fe4);
    }
    cVar1 = FUN_1402ed678();
    if (cVar1 != '\0') {
      (*(code *)PTR_FUN_140426bb8)(&DAT_1404e4fd8);
      return;
    }
    DAT_1404e4fd8 = 0;
  }
  return;
}

