// Function: FUN_140160790
// Addr: 140160790
// Size: 76 bytes


void FUN_140160790(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != *(undefined8 **)(param_1 + 0x10)) {
    uVar2 = param_2[1];
    uVar3 = *param_2;
    uVar4 = param_2[2];
    param_2[2] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1[2] = uVar4;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x18;
    return;
  }
  FUN_140161650(param_1,puVar1,param_2);
  return;
}

