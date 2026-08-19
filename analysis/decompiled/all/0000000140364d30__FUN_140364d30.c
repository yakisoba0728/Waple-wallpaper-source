// Function: FUN_140364d30
// Addr: 140364d30
// Size: 105 bytes


void FUN_140364d30(int *param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (*param_2 == *param_1) {
    if ((char)param_2[2] == '\0') {
      if (((param_2[1] ^ param_1[1]) & 0xfffffffeU) != 0) {
        uVar4 = 1;
        if (param_2[1] < param_1[1]) {
          uVar4 = 0xffffffff;
        }
        goto LAB_140364d8f;
      }
    }
    if ((uint)param_2[3] < (uint)param_1[3]) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = (uint)((uint)param_1[3] < (uint)param_2[3]);
    }
  }
  else {
    uVar4 = 1;
    if (*param_2 < *param_1) {
      uVar4 = 0xffffffff;
    }
  }
LAB_140364d8f:
  if ((int)uVar4 < 0) {
    uVar1 = *(undefined8 *)(param_1 + 2);
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_2 = *(undefined8 *)param_1;
    *(undefined8 *)(param_2 + 2) = uVar1;
    *(undefined8 *)param_1 = uVar2;
    *(undefined8 *)(param_1 + 2) = uVar3;
  }
  if (*param_3 == *param_2) {
    if ((char)param_3[2] == '\0') {
      if (((param_3[1] ^ param_2[1]) & 0xfffffffeU) != 0) {
        uVar4 = 1;
        if (param_3[1] < param_2[1]) {
          uVar4 = 0xffffffff;
        }
        goto code_r0x000140364df2;
      }
    }
    if ((uint)param_3[3] < (uint)param_2[3]) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = (uint)((uint)param_2[3] < (uint)param_3[3]);
    }
  }
  else {
    uVar4 = 1;
    if (*param_3 < *param_2) {
      uVar4 = 0xffffffff;
    }
  }
code_r0x000140364df2:
  if (-1 < (int)uVar4) {
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 2);
  uVar2 = *(undefined8 *)param_3;
  uVar3 = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)param_3 = *(undefined8 *)param_2;
  *(undefined8 *)(param_3 + 2) = uVar1;
  *(undefined8 *)param_2 = uVar2;
  *(undefined8 *)(param_2 + 2) = uVar3;
  if (*param_2 == *param_1) {
    if ((char)param_2[2] == '\0') {
      if (((param_2[1] ^ param_1[1]) & 0xfffffffeU) != 0) {
        uVar4 = 1;
        if (param_2[1] < param_1[1]) {
          uVar4 = 0xffffffff;
        }
        goto code_r0x000140364e52;
      }
    }
    if ((uint)param_2[3] < (uint)param_1[3]) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = (uint)((uint)param_1[3] < (uint)param_2[3]);
    }
  }
  else {
    uVar4 = 1;
    if (*param_2 < *param_1) {
      uVar4 = 0xffffffff;
    }
  }
code_r0x000140364e52:
  if ((int)uVar4 < 0) {
    uVar1 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)param_2 = *(undefined8 *)param_1;
    *(undefined8 *)(param_2 + 2) = uVar1;
    *(undefined8 *)param_1 = uVar2;
    *(undefined8 *)(param_1 + 2) = uVar3;
  }
  return;
}

