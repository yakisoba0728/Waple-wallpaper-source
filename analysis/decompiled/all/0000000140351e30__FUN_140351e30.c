// Function: FUN_140351e30
// Addr: 140351e30
// Size: 157 bytes


void FUN_140351e30(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  
  param_3 = param_3 >> ((byte)*param_1 & 0x1f);
  param_4 = param_4 >> ((byte)*param_1 & 0x1f);
  if ((param_3 < 0) || ((int)param_1[0x28] < param_3)) {
    if (param_4 < 0) {
      return;
    }
    param_3 = param_4;
    if ((int)param_1[0x28] < param_4) {
      return;
    }
  }
  else if (((-1 < param_4) && (param_4 <= (int)param_1[0x28])) &&
          (((byte)(0x80 >> ((byte)param_2 & 7)) &
           *(byte *)((((longlong)param_2 >> 3) - (longlong)(param_4 * param_1[0x2a])) +
                    *(longlong *)(param_1 + 0x2c))) != 0)) {
    return;
  }
  pbVar1 = (byte *)((((longlong)param_2 >> 3) - (longlong)(param_3 * param_1[0x2a])) +
                   *(longlong *)(param_1 + 0x2c));
  *pbVar1 = *pbVar1 | (byte)(0x80 >> ((byte)param_2 & 7));
  return;
}

