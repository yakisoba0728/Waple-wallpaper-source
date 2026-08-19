// Function: FUN_140364e70
// Addr: 140364e70
// Size: 83 bytes


void FUN_140364e70(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar1 = param_2 + 1;
  if (*param_2 == *param_1) {
    if (*puVar1 < param_1[1]) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = (uint)(param_1[1] < *puVar1);
    }
  }
  else {
    uVar6 = 1;
    if (*param_2 < *param_1) {
      uVar6 = 0xffffffff;
    }
  }
  if ((int)uVar6 < 0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)(param_2 + 3);
    uVar4 = *(undefined8 *)(param_2 + 5);
    uStack_20 = (undefined4)*(undefined8 *)(param_2 + 2);
    uVar5 = *(undefined8 *)(param_1 + 2);
    uStack_1c = (undefined4)uVar3;
    *(undefined8 *)param_2 = *(undefined8 *)param_1;
    *(undefined8 *)(param_2 + 2) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 5);
    *(undefined8 *)(param_2 + 3) = *(undefined8 *)(param_1 + 3);
    *(undefined8 *)(param_2 + 5) = uVar5;
    *(undefined8 *)param_1 = uVar2;
    *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_1c,uStack_20);
    *(undefined8 *)(param_1 + 3) = uVar3;
    *(undefined8 *)(param_1 + 5) = uVar4;
  }
  if (*param_3 == *param_2) {
    if (param_3[1] < *puVar1) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = (uint)(*puVar1 < param_3[1]);
    }
  }
  else {
    uVar6 = 1;
    if (*param_3 < *param_2) {
      uVar6 = 0xffffffff;
    }
  }
  if ((int)uVar6 < 0) {
    uVar2 = *(undefined8 *)param_3;
    uVar3 = *(undefined8 *)(param_3 + 3);
    uVar4 = *(undefined8 *)(param_3 + 5);
    uStack_20 = (undefined4)*(undefined8 *)(param_3 + 2);
    uVar5 = *(undefined8 *)(param_2 + 2);
    uStack_1c = (undefined4)uVar3;
    *(undefined8 *)param_3 = *(undefined8 *)param_2;
    *(undefined8 *)(param_3 + 2) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 5);
    *(undefined8 *)(param_3 + 3) = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_3 + 5) = uVar5;
    *(undefined8 *)param_2 = uVar2;
    *(ulonglong *)(param_2 + 2) = CONCAT44(uStack_1c,uStack_20);
    *(undefined8 *)(param_2 + 3) = uVar3;
    *(undefined8 *)(param_2 + 5) = uVar4;
    if (*param_2 == *param_1) {
      if (*puVar1 < param_1[1]) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(param_1[1] < *puVar1);
      }
    }
    else {
      uVar6 = 1;
      if (*param_2 < *param_1) {
        uVar6 = 0xffffffff;
      }
    }
    if ((int)uVar6 < 0) {
      uVar5 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)param_2 = *(undefined8 *)param_1;
      *(undefined8 *)(param_2 + 2) = uVar5;
      uVar5 = *(undefined8 *)(param_1 + 5);
      *(undefined8 *)(param_2 + 3) = *(undefined8 *)(param_1 + 3);
      *(undefined8 *)(param_2 + 5) = uVar5;
      *(undefined8 *)param_1 = uVar2;
      *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_1c,uStack_20);
      *(undefined8 *)(param_1 + 3) = uVar3;
      *(undefined8 *)(param_1 + 5) = uVar4;
    }
  }
  return;
}

