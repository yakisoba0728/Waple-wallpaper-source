// Function: FUN_1404258a0
// Addr: 1404258a0
// Size: 82 bytes


void FUN_1404258a0(void)

{
  longlong lVar1;
  PVOID pvVar2;
  
  while (DAT_1404dc370 < 10) {
    lVar1 = DAT_1404dc370 * 8;
    DAT_1404dc370 = DAT_1404dc370 + 1;
    pvVar2 = DecodePointer(*(PVOID *)(&DAT_1404e4130 + lVar1));
    if (pvVar2 != (PVOID)0x0) {
      (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
  }
  return;
}

