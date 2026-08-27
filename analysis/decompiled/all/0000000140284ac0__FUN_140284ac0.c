// Function: FUN_140284ac0
// Addr: 140284ac0
// Size: 341 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140284ac0(double *param_1,double *param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  dVar4 = (*param_2 - *param_1) * (*param_2 - *param_1) +
          (param_2[1] - param_1[1]) * (param_2[1] - param_1[1]);
  if (dVar4 < 0.0) {
    dVar4 = (double)FUN_14041f780(SUB84(dVar4,0));
  }
  else {
    dVar4 = SQRT(dVar4);
  }
  uVar1 = DAT_140492fe0;
  uVar5 = _UNK_140492fd4;
  uVar3 = _DAT_140492fd0;
  dVar4 = dVar4 * DAT_140492780;
  iVar2 = -1;
  if (0.0 < param_1[2]) {
    iVar2 = 1;
  }
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  dVar7 = (double)iVar2 * dVar4 + param_1[2];
  param_1[2] = dVar7;
  uVar6 = SUB84(dVar7,0) & uVar3;
  uVar8 = (uint)((ulonglong)dVar7 >> 0x20) & uVar5;
  param_1[5] = (double)CONCAT44(uVar8,uVar6);
  uVar9 = (uint)uVar1;
  uVar10 = (uint)((ulonglong)uVar1 >> 0x20);
  param_1[4] = (double)CONCAT44(uVar8 ^ uVar10,uVar6 ^ uVar9);
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  iVar2 = -1;
  if (0.0 < param_1[8]) {
    iVar2 = 1;
  }
  dVar7 = (double)iVar2 * dVar4 + param_1[8];
  param_1[8] = dVar7;
  uVar6 = SUB84(dVar7,0) & uVar3;
  uVar8 = (uint)((ulonglong)dVar7 >> 0x20) & uVar5;
  param_1[0xb] = (double)CONCAT44(uVar8,uVar6);
  param_1[10] = (double)CONCAT44(uVar8 ^ uVar10,uVar6 ^ uVar9);
  param_1[0x12] = 0.0;
  param_1[0x13] = 0.0;
  iVar2 = -1;
  if (0.0 < param_1[0xe]) {
    iVar2 = 1;
  }
  dVar4 = (double)iVar2 * dVar4 + param_1[0xe];
  param_1[0xe] = dVar4;
  uVar3 = SUB84(dVar4,0) & uVar3;
  uVar5 = (uint)((ulonglong)dVar4 >> 0x20) & uVar5;
  param_1[0x11] = (double)CONCAT44(uVar5,uVar3);
  param_1[0x10] = (double)CONCAT44(uVar5 ^ uVar10,uVar3 ^ uVar9);
  dVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = dVar4;
  return;
}

