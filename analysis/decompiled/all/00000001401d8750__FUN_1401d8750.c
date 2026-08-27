// Function: FUN_1401d8750
// Addr: 1401d8750
// Size: 75 bytes


void FUN_1401d8750(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 8);
  if (puVar3 != *(undefined4 **)(param_1 + 0x10)) {
    uVar1 = *param_4;
    uVar2 = *param_3;
    *puVar3 = *param_2;
    *(undefined4 **)(param_1 + 8) = puVar3 + 3;
    puVar3[1] = uVar2;
    puVar3[2] = uVar1;
    return;
  }
  FUN_1401db760(param_1,puVar3,param_2,param_3,param_4);
  return;
}

