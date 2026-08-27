// Function: FUN_140291700
// Addr: 140291700
// Size: 229 bytes


longlong FUN_140291700(char param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 local_res8 [8];
  
  FUN_1402914b0(local_res8,0);
  lVar1 = DAT_1404e3ce8;
  if (DAT_1404e3ce8 == 0) {
    lVar1 = FUN_1402919b0(0);
    if (DAT_1404e3cf0 == '\0') {
      DAT_1404e3cf0 = '\x01';
      FUN_1402945b0(FUN_140291a60);
    }
    DAT_1404e3ce8 = lVar1;
    *(undefined4 *)(lVar1 + 0x20) = 0x3f;
    if (*(undefined **)(lVar1 + 0x28) != &DAT_14048f2dc) {
      if (*(undefined **)(lVar1 + 0x28) != (undefined *)0x0) {
        thunk_FUN_1402d9040();
      }
      *(undefined8 *)(lVar1 + 0x28) = 0;
      puVar2 = (undefined2 *)_malloc_base(2);
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0x43;
      }
      *(undefined2 **)(lVar1 + 0x28) = puVar2;
    }
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar1);
    DAT_1404e3c98 = lVar1;
    DAT_1404e3cc8 = lVar1;
  }
  if (param_1 != '\0') {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar1);
  }
  FUN_140291550(local_res8);
  return lVar1;
}

