// Function: FUN_140268cd0
// Addr: 140268cd0
// Size: 68 bytes


void FUN_140268cd0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != *(undefined8 **)(param_1 + 0x10)) {
    uVar2 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    uVar2 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = uVar2;
    uVar2 = param_2[5];
    puVar1[4] = param_2[4];
    puVar1[5] = uVar2;
    uVar2 = param_2[7];
    puVar1[6] = param_2[6];
    puVar1[7] = uVar2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x40;
    return;
  }
  FUN_14026a3a0();
  return;
}

