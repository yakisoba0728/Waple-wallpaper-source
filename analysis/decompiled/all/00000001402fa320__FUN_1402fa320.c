// Function: FUN_1402fa320
// Addr: 1402fa320
// Size: 237 bytes


int FUN_1402fa320(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 == (longlong *)0x0) {
    return 0x21;
  }
  lVar1 = *param_1;
  puVar3 = (undefined8 *)(**(code **)(lVar1 + 8))(lVar1,0x48);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[6] = lVar1;
    iVar2 = FUN_1402fb2c0(puVar3,param_2);
    if (iVar2 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
      return iVar2;
    }
    iVar2 = FUN_1402fa060(param_1,puVar3,param_2,0x51607,param_3);
    lVar1 = puVar3[6];
    if ((code *)puVar3[5] != (code *)0x0) {
      (*(code *)puVar3[5])(puVar3);
    }
    (**(code **)(lVar1 + 0x10))(lVar1,puVar3);
    return iVar2;
  }
  return 0x40;
}

