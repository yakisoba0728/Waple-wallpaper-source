// Function: FUN_1402bb580
// Addr: 1402bb580
// Size: 2 bytes


undefined8 * FUN_1402bb580(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  lVar1 = FUN_1402bbf90();
  if (param_1 < *(undefined8 **)(lVar1 + 0x58)) {
    lVar1 = FUN_1402bbf90();
    uVar2 = *(undefined8 *)(lVar1 + 0x58);
  }
  else {
    uVar2 = 0;
  }
  param_1[1] = uVar2;
  lVar1 = FUN_1402bbf90();
  *(undefined8 **)(lVar1 + 0x58) = param_1;
  return param_1;
}

