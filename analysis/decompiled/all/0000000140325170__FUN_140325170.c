// Function: FUN_140325170
// Addr: 140325170
// Size: 213 bytes


int FUN_140325170(byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int local_res18 [2];
  
  iVar4 = 0;
  local_res18[0] = 0;
  if (param_3[0xb] == 0) {
    pbVar1 = param_1 + 1;
    if (pbVar1 <= param_2) {
      uVar3 = *param_1 & 0xf;
      iVar4 = (*param_1 >> 4) + uVar3;
      if (pbVar1 + (uint)(iVar4 * 2) <= param_2) {
        puVar2 = (uint *)FUN_1402f7ff0(*param_3,4,0,iVar4,0,local_res18);
        if (local_res18[0] != 0) {
          return local_res18[0];
        }
        param_3[0xb] = puVar2;
        param_3[9] = puVar2 + uVar3;
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar2 = (int)(short)((ushort)*pbVar1 << 8) | (uint)pbVar1[1];
          pbVar1 = pbVar1 + 2;
          puVar2 = puVar2 + 1;
        }
        return 0;
      }
    }
    iVar4 = 8;
  }
  return iVar4;
}

