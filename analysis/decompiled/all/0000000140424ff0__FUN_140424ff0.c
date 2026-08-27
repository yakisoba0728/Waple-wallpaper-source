// Function: FUN_140424ff0
// Addr: 140424ff0
// Size: 108 bytes


void FUN_140424ff0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)ThreadLocalStoragePointer;
  *(undefined ***)(lVar1 + 0x2c0) = &PTR_FUN_14048f2e0;
  FUN_1401b8b20(lVar1 + 0x300);
  FUN_140017240(lVar1 + 0x2e0);
  if (*(longlong **)(lVar1 + 0x2d8) != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(**(longlong **)(lVar1 + 0x2d8) + 0x10))();
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}

