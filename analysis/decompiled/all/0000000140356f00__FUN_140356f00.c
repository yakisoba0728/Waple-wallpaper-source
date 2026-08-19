// Function: FUN_140356f00
// Addr: 140356f00
// Size: 86 bytes


undefined8 FUN_140356f00(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_140421e50(param_2,"svg-hooks");
  if ((int)uVar2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *param_3 = *(undefined8 *)(param_1 + 0x80);
    param_3[1] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    param_3[2] = *(undefined8 *)(param_1 + 0x90);
    param_3[3] = uVar1;
    return uVar2;
  }
  return 0xc;
}

