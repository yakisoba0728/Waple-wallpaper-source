// Function: FUN_14027b160
// Addr: 14027b160
// Size: 4 bytes


float FUN_14027b160(float param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar1 = (int)param_1;
  iVar2 = iVar1 + -1;
  if ((float)iVar1 <= param_1) {
    iVar2 = iVar1;
  }
  param_1 = param_1 - (float)iVar2;
  fVar7 = param_1 - DAT_1404927d4;
  fVar4 = (float)((&DAT_140485010)[(byte)iVar2] & 7) + DAT_1404927d4;
  fVar5 = DAT_1404927d4 - param_1 * param_1;
  fVar5 = fVar5 * fVar5;
  if (((&DAT_140485010)[(byte)iVar2] & 8) != 0) {
    fVar4 = (float)((uint)fVar4 ^ DAT_1404930c0);
  }
  fVar6 = DAT_1404927d4 - fVar7 * fVar7;
  fVar6 = fVar6 * fVar6;
  fVar3 = (float)((&DAT_140485010)[(byte)((byte)iVar2 + 1)] & 7) + DAT_1404927d4;
  if (((&DAT_140485010)[(byte)((byte)iVar2 + 1)] & 8) != 0) {
    fVar3 = (float)((uint)fVar3 ^ DAT_1404930c0);
  }
  return (fVar3 * fVar7 * fVar6 * fVar6 + fVar4 * param_1 * fVar5 * fVar5) * DAT_140492780;
}

