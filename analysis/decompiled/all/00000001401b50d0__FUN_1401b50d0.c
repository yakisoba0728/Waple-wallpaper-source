// Function: FUN_1401b50d0
// Addr: 1401b50d0
// Size: 110 bytes


undefined8 * FUN_1401b50d0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14048f2e0;
  FUN_1401b8b20(param_1 + 8);
  FUN_140017240(param_1 + 4);
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1[3] + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x78);
  }
  return param_1;
}

