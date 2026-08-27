// Function: FUN_140364f60
// Addr: 140364f60
// Size: 267 bytes


void FUN_140364f60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  
  uVar1 = *(uint *)(param_1 + 2);
  uVar2 = *(uint *)(param_2 + 2);
  uVar3 = uVar1;
  if (uVar2 <= uVar1) {
    uVar3 = uVar2;
  }
  iVar9 = strncmp((char *)param_2[1],(char *)param_1[1],(ulonglong)uVar3);
  iVar10 = uVar2 - uVar1;
  if (iVar9 != 0) {
    iVar10 = iVar9;
  }
  if (iVar10 < 0) {
    uVar4 = param_1[1];
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    *param_2 = *param_1;
    param_2[1] = uVar4;
    uVar4 = param_1[3];
    param_2[2] = param_1[2];
    param_2[3] = uVar4;
    *param_1 = uVar5;
    param_1[1] = uVar6;
    param_1[2] = uVar7;
    param_1[3] = uVar8;
  }
  uVar1 = *(uint *)(param_2 + 2);
  uVar2 = *(uint *)(param_3 + 2);
  uVar3 = uVar1;
  if (uVar2 <= uVar1) {
    uVar3 = uVar2;
  }
  iVar9 = strncmp((char *)param_3[1],(char *)param_2[1],(ulonglong)uVar3);
  iVar10 = uVar2 - uVar1;
  if (iVar9 != 0) {
    iVar10 = iVar9;
  }
  if (iVar10 < 0) {
    uVar4 = param_2[1];
    uVar5 = *param_3;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    *param_3 = *param_2;
    param_3[1] = uVar4;
    uVar4 = param_2[3];
    param_3[2] = param_2[2];
    param_3[3] = uVar4;
    *param_2 = uVar5;
    param_2[1] = uVar6;
    param_2[2] = uVar7;
    param_2[3] = uVar8;
    uVar1 = *(uint *)(param_1 + 2);
    uVar2 = *(uint *)(param_2 + 2);
    uVar3 = uVar1;
    if (uVar2 <= uVar1) {
      uVar3 = uVar2;
    }
    iVar9 = strncmp((char *)param_2[1],(char *)param_1[1],(ulonglong)uVar3);
    iVar10 = uVar2 - uVar1;
    if (iVar9 != 0) {
      iVar10 = iVar9;
    }
    if (iVar10 < 0) {
      uVar4 = param_1[1];
      *param_2 = *param_1;
      param_2[1] = uVar4;
      uVar4 = param_1[3];
      param_2[2] = param_1[2];
      param_2[3] = uVar4;
      *param_1 = uVar5;
      param_1[1] = uVar6;
      param_1[2] = uVar7;
      param_1[3] = uVar8;
    }
  }
  return;
}

