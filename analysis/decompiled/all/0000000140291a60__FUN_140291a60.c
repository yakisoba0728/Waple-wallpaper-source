// Function: FUN_140291a60
// Addr: 140291a60
// Size: 95 bytes


void FUN_140291a60(void)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  FUN_1402914b0(local_res8,0);
  if (DAT_1404e3ce8 != 0) {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    if (lVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar1,1);
    }
  }
  DAT_1404e3ce8 = 0;
  FUN_140291550(local_res8);
  return;
}

