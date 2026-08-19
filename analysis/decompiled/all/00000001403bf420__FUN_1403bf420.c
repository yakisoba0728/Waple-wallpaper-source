// Function: FUN_1403bf420
// Addr: 1403bf420
// Size: 46 bytes


float FUN_1403bf420(byte *param_1,int param_2)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  sVar3 = (ushort)param_1[3] + (ushort)param_1[2] * 0x100;
  iVar5 = (int)sVar3;
  if ((sVar3 != 0) && (param_2 != iVar5)) {
    if (param_2 == 0) {
      return 0.0;
    }
    sVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    iVar4 = (int)sVar3;
    if (iVar4 <= iVar5) {
      sVar2 = (ushort)param_1[5] + (ushort)param_1[4] * 0x100;
      iVar1 = (int)sVar2;
      if ((iVar5 <= iVar1) && ((-1 < sVar3 || (sVar2 < 1)))) {
        if (param_2 <= iVar4) {
          return 0.0;
        }
        if (iVar1 <= param_2) {
          return 0.0;
        }
        if (iVar5 <= param_2) {
          return (float)(iVar1 - param_2) / (float)(iVar1 - iVar5);
        }
        return (float)(param_2 - iVar4) / (float)(iVar5 - iVar4);
      }
    }
  }
  return DAT_1404927d4;
}

