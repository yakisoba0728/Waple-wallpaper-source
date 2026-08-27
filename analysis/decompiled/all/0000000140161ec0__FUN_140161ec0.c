// Function: FUN_140161ec0
// Addr: 140161ec0
// Size: 117 bytes


undefined8 * FUN_140161ec0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14048b940;
  if (param_1[4] != 0) {
    FUN_14014cc70(param_1[1] + 0x1520,param_1 + 4,1);
    puVar1 = (undefined8 *)param_1[4];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x40);
  }
  return param_1;
}

