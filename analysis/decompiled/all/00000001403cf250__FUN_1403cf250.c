// Function: FUN_1403cf250
// Addr: 1403cf250
// Size: 334 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1403cf250(longlong param_1,float *param_2,float *param_3)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  float fVar8;
  
  param_2[3] = 1.0;
  param_2[0] = 1.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  bVar1 = *(byte *)(param_1 + 1);
  if ((bVar1 & 1) == 0) {
    iVar6 = (int)*(char *)(param_1 + 4);
    pbVar7 = (byte *)(param_1 + 6);
    uVar5 = (uint)*(char *)(param_1 + 5);
  }
  else {
    pbVar7 = (byte *)(param_1 + 8);
    iVar6 = (int)(short)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5));
    uVar5 = (uint)(short)((ushort)*(byte *)(param_1 + 7) + (ushort)*(byte *)(param_1 + 6) * 0x100);
  }
  *(undefined2 *)(param_3 + 2) = 0x100;
  uVar4 = 0;
  if ((bVar1 >> 1 & 1) != 0) {
    uVar4 = (ulonglong)uVar5;
  }
  iVar2 = 0;
  if ((bVar1 >> 1 & 1) != 0) {
    iVar2 = iVar6;
  }
  param_3[1] = (float)(int)uVar4;
  *param_3 = (float)iVar2;
  fVar8 = _DAT_140471b2c;
  bVar1 = *(byte *)(param_1 + 1);
  if ((bVar1 & 8) != 0) {
    sVar3 = (ushort)pbVar7[1] + (ushort)*pbVar7 * 0x100;
    fVar8 = ((float)(int)sVar3 + 0.0) * _DAT_140471b2c;
    param_2[3] = fVar8;
    *param_2 = fVar8;
    return CONCAT71((uint7)(uint3)(int3)(char)((ushort)sVar3 >> 8),1);
  }
  if ((bVar1 & 0x40) == 0) {
    if ((char)bVar1 < '\0') {
      *param_2 = ((float)(int)(short)((ushort)pbVar7[1] + (ushort)*pbVar7 * 0x100) + 0.0) *
                 _DAT_140471b2c;
      param_2[1] = ((float)(int)(short)((ushort)pbVar7[3] + (ushort)pbVar7[2] * 0x100) + 0.0) *
                   fVar8;
      param_2[2] = ((float)(int)(short)((ushort)pbVar7[4] * 0x100 + (ushort)pbVar7[5]) + 0.0) *
                   fVar8;
      sVar3 = (ushort)pbVar7[6] * 0x100 + (ushort)pbVar7[7];
      param_2[3] = ((float)(int)sVar3 + 0.0) * fVar8;
      return CONCAT71((uint7)(uint3)(int3)(char)((ushort)sVar3 >> 8),1);
    }
    if ((iVar2 == 0) && ((int)uVar4 == 0)) {
      return uVar4;
    }
  }
  else {
    *param_2 = ((float)(int)(short)((ushort)pbVar7[1] + (ushort)*pbVar7 * 0x100) + 0.0) *
               _DAT_140471b2c;
    uVar5 = (uint)(short)((ushort)pbVar7[3] + (ushort)pbVar7[2] * 0x100);
    uVar4 = (ulonglong)uVar5;
    param_2[3] = ((float)(int)uVar5 + 0.0) * _DAT_140471b2c;
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}

