// Function: FUN_1402d98b0
// Addr: 1402d98b0
// Size: 65 bytes


void FUN_1402d98b0(void)

{
  PVOID pvVar1;
  longlong lVar2;
  
  if (DAT_1404dc580 == 0xffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  else {
    pvVar1 = FlsGetValue(DAT_1404dc580);
  }
  if (pvVar1 != (PVOID)0xffffffffffffffff) {
    if (pvVar1 == (PVOID)0x0) {
      lVar2 = FUN_1402d9774();
      if (lVar2 == 0) goto LAB_1402d98ec;
    }
    return;
  }
LAB_1402d98ec:
                    /* WARNING: Subroutine does not return */
  FUN_1402c97e4();
}

