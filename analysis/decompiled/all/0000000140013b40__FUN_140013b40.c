// Function: FUN_140013b40
// Addr: 140013b40
// Size: 68 bytes


undefined8 * FUN_140013b40(undefined8 param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 == 1) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    puVar1 = (undefined8 *)func_0x00014028aff0(0x20);
    return puVar1;
  }
  uVar2 = FUN_14028f5c0(param_3);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar3 = func_0x000140421ed0(uVar2);
  func_0x000140017550(param_2,uVar2,uVar3);
  return param_2;
}

