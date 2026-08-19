// Function: FUN_140077ca0
// Addr: 140077ca0
// Size: 151 bytes


undefined8 * FUN_140077ca0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14007bbb0(param_2,param_3);
  if ((puVar1 != param_3) && (puVar2 = puVar1 + 9, puVar2 != param_3)) {
    if (0xf < (ulonglong)puVar1[0xc]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    puVar1 = (undefined8 *)func_0x000140421ed0(puVar2);
    return puVar1;
  }
  *param_1 = puVar1;
  return param_1;
}

