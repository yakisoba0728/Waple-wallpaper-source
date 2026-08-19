// Function: FUN_140362b80
// Addr: 140362b80
// Size: 65 bytes


void FUN_140362b80(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar1 = *param_1;
  lVar3 = (longlong)param_3 - (longlong)param_1 >> 2;
  if (lVar3 < 0x29) {
    uVar2 = *param_2;
    if (uVar2 < uVar1) {
      *param_2 = uVar1;
      *param_1 = uVar2;
    }
    uVar1 = *param_3;
    if (uVar1 < *param_2) {
      *param_3 = *param_2;
      *param_2 = uVar1;
      if (uVar1 < *param_1) {
        *param_2 = *param_1;
        *param_1 = uVar1;
        return;
      }
    }
  }
  else {
    lVar3 = lVar3 + 1 >> 3;
    uVar2 = param_1[lVar3];
    if (uVar2 < uVar1) {
      param_1[lVar3] = uVar1;
      *param_1 = uVar2;
    }
    uVar1 = param_1[lVar3 * 2];
    if (uVar1 < param_1[lVar3]) {
      param_1[lVar3 * 2] = param_1[lVar3];
      param_1[lVar3] = uVar1;
      if (uVar1 < *param_1) {
        param_1[lVar3] = *param_1;
        *param_1 = uVar1;
      }
    }
    uVar1 = *param_2;
    puVar4 = param_2 + -lVar3;
    if (uVar1 < *puVar4) {
      *param_2 = *puVar4;
      *puVar4 = uVar1;
    }
    uVar1 = param_2[lVar3];
    if (uVar1 < *param_2) {
      param_2[lVar3] = *param_2;
      *param_2 = uVar1;
      if (uVar1 < *puVar4) {
        *param_2 = *puVar4;
        *puVar4 = uVar1;
      }
    }
    puVar5 = param_3 + lVar3 * -2;
    puVar4 = param_3 + -lVar3;
    uVar1 = *puVar4;
    if (uVar1 < *puVar5) {
      *puVar4 = *puVar5;
      *puVar5 = uVar1;
    }
    uVar1 = *param_3;
    if (uVar1 < *puVar4) {
      *param_3 = *puVar4;
      *puVar4 = uVar1;
      if (uVar1 < *puVar5) {
        *puVar4 = *puVar5;
        *puVar5 = uVar1;
      }
    }
    uVar1 = *param_2;
    if (uVar1 < param_1[lVar3]) {
      *param_2 = param_1[lVar3];
      param_1[lVar3] = uVar1;
    }
    uVar1 = *puVar4;
    if (uVar1 < *param_2) {
      *puVar4 = *param_2;
      *param_2 = uVar1;
      if (uVar1 < param_1[lVar3]) {
        *param_2 = param_1[lVar3];
        param_1[lVar3] = uVar1;
      }
    }
  }
  return;
}

