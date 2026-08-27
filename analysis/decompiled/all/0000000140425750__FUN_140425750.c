// Function: FUN_140425750
// Addr: 140425750
// Size: 96 bytes


void FUN_140425750(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = DAT_1404e3cd8;
  while (puVar1 != (undefined8 *)0x0) {
    DAT_1404e3cd8 = (undefined8 *)*puVar1;
    lVar2 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    if (lVar2 != 0) {
      (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar2,1);
    }
    thunk_FUN_1402d9040(puVar1);
    puVar1 = DAT_1404e3cd8;
  }
  DAT_1404e3cd8 = puVar1;
  return;
}

