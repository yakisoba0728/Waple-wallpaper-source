// Function: FUN_140364b10
// Addr: 140364b10
// Size: 329 bytes


void FUN_140364b10(uint *param_1,uint *param_2,uint *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = -1;
  if (*param_2 < *param_1) {
    iVar8 = -1;
  }
  else if (*param_1 < *param_2) {
    iVar8 = 1;
  }
  else if ((byte)param_2[1] < (byte)param_1[1]) {
    iVar8 = -1;
  }
  else if ((byte)param_1[1] < (byte)param_2[1]) {
    iVar8 = 1;
  }
  else {
    iVar8 = FUN_1403b37e0(param_2 + 2,param_1 + 2);
  }
  if (iVar8 < 0) {
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    uVar5 = *(undefined8 *)param_2;
    uVar6 = *(undefined8 *)(param_2 + 2);
    uVar1 = *(undefined8 *)(param_2 + 4);
    *param_2 = *param_1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)param_1 = uVar5;
    *(undefined8 *)(param_1 + 2) = uVar6;
    *(undefined8 *)(param_1 + 4) = uVar1;
  }
  if (*param_3 < *param_2) {
    iVar8 = -1;
  }
  else if (*param_2 < *param_3) {
    iVar8 = 1;
  }
  else if ((byte)param_3[1] < (byte)param_2[1]) {
    iVar8 = -1;
  }
  else if ((byte)param_2[1] < (byte)param_3[1]) {
    iVar8 = 1;
  }
  else {
    iVar8 = FUN_1403b37e0(param_3 + 2,param_2 + 2);
  }
  if (iVar8 < 0) {
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = *(undefined8 *)param_3;
    uVar6 = *(undefined8 *)(param_3 + 2);
    uVar1 = *(undefined8 *)(param_3 + 4);
    *param_3 = *param_2;
    param_3[1] = uVar2;
    param_3[2] = uVar3;
    param_3[3] = uVar4;
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)param_2 = uVar5;
    *(undefined8 *)(param_2 + 2) = uVar6;
    *(undefined8 *)(param_2 + 4) = uVar1;
    if (*param_1 <= *param_2) {
      if (*param_1 < *param_2) {
        iVar9 = 1;
      }
      else if ((byte)param_1[1] <= (byte)param_2[1]) {
        if ((byte)param_1[1] < (byte)param_2[1]) {
          iVar9 = 1;
        }
        else {
          iVar9 = FUN_1403b37e0(param_2 + 2,param_1 + 2);
        }
      }
    }
    if (iVar9 < 0) {
      uVar7 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)param_2 = *(undefined8 *)param_1;
      *(undefined8 *)(param_2 + 2) = uVar7;
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)param_1 = uVar5;
      *(undefined8 *)(param_1 + 2) = uVar6;
      *(undefined8 *)(param_1 + 4) = uVar1;
    }
  }
  return;
}

