// Function: FUN_1400ae8b0
// Addr: 1400ae8b0
// Size: 156 bytes


uint * FUN_1400ae8b0(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 == (int *)0x0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return param_1;
  }
  if ((*param_2 != 0x3ccb6c71) && (*param_2 != 0x75ae3d2)) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return param_1;
  }
  uVar1 = param_2[10];
  uVar6 = param_2[0xb];
  uVar2 = param_2[0x26];
  uVar3 = param_2[0x22];
  uVar5 = uVar1;
  if ((uint)param_2[0x20] < uVar1) {
    uVar5 = param_2[0x20];
  }
  uVar4 = param_2[0x21];
  *param_1 = uVar5;
  uVar5 = uVar6;
  if (uVar4 < uVar6) {
    uVar5 = uVar4;
  }
  param_1[1] = uVar5;
  if (uVar3 < uVar1) {
    uVar1 = uVar3;
  }
  param_1[2] = uVar1;
  if (uVar2 < uVar6) {
    uVar6 = uVar2;
  }
  param_1[3] = uVar6;
  return param_1;
}

