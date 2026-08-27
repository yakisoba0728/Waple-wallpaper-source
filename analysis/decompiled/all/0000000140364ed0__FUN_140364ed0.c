// Function: FUN_140364ed0
// Addr: 140364ed0
// Size: 140 bytes


void FUN_140364ed0(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*param_2 < *param_1) {
    uVar2 = *(undefined8 *)(param_1 + 2);
    uVar1 = param_2[8];
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 2);
    uVar5 = *(undefined8 *)(param_2 + 4);
    uVar6 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)param_2 = *(undefined8 *)param_1;
    *(undefined8 *)(param_2 + 2) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(param_2 + 6) = uVar2;
    param_2[8] = param_1[8];
    *(undefined8 *)param_1 = uVar3;
    *(undefined8 *)(param_1 + 2) = uVar4;
    *(undefined8 *)(param_1 + 4) = uVar5;
    *(undefined8 *)(param_1 + 6) = uVar6;
    param_1[8] = uVar1;
  }
  if (*param_3 < *param_2) {
    uVar2 = *(undefined8 *)(param_2 + 2);
    uVar1 = param_3[8];
    uVar3 = *(undefined8 *)param_3;
    uVar4 = *(undefined8 *)(param_3 + 2);
    uVar5 = *(undefined8 *)(param_3 + 4);
    uVar6 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)param_3 = *(undefined8 *)param_2;
    *(undefined8 *)(param_3 + 2) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_3 + 6) = uVar2;
    param_3[8] = param_2[8];
    *(undefined8 *)param_2 = uVar3;
    *(undefined8 *)(param_2 + 2) = uVar4;
    *(undefined8 *)(param_2 + 4) = uVar5;
    *(undefined8 *)(param_2 + 6) = uVar6;
    param_2[8] = uVar1;
    if (*param_2 < *param_1) {
      uVar2 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)param_2 = *(undefined8 *)param_1;
      *(undefined8 *)(param_2 + 2) = uVar2;
      uVar2 = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_2 + 6) = uVar2;
      param_2[8] = param_1[8];
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)(param_1 + 2) = uVar4;
      *(undefined8 *)(param_1 + 4) = uVar5;
      *(undefined8 *)(param_1 + 6) = uVar6;
      param_1[8] = uVar1;
    }
  }
  return;
}

