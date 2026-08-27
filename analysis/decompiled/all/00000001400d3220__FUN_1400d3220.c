// Function: FUN_1400d3220
// Addr: 1400d3220
// Size: 233 bytes


undefined8 * FUN_1400d3220(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_140486768;
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x10))();
    param_1[10] = 0;
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
    param_1[9] = 0;
  }
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x10))();
    param_1[0xd] = 0;
  }
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
    param_1[0xc] = 0;
  }
  (**(code **)(**(longlong **)(param_1[1] + 0x1518) + 0x78))
            (*(longlong **)(param_1[1] + 0x1518),param_1);
  FUN_140017240(param_1 + 0xe);
  *param_1 = &PTR_FUN_14048b940;
  if (param_1[4] != 0) {
    FUN_14014cc70(param_1[1] + 0x1520,param_1 + 4,1);
    puVar1 = (undefined8 *)param_1[4];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0xa0);
  }
  return param_1;
}

