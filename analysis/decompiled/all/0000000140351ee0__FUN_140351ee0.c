// Function: FUN_140351ee0
// Addr: 140351ee0
// Size: 177 bytes


void FUN_140351ee0(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  uVar4 = -param_1[1];
  uVar1 = param_1[1] + -1 + param_3 & uVar4;
  uVar4 = uVar4 & param_4;
  if (((param_3 == uVar1) && (iVar2 = (int)uVar1 >> ((byte)*param_1 & 0x1f), -1 < iVar2)) &&
     (iVar2 <= (int)param_1[0x28])) {
    pbVar3 = (byte *)((((longlong)param_2 >> 3) - (longlong)(iVar2 * param_1[0x2a])) +
                     *(longlong *)(param_1 + 0x2c));
    *pbVar3 = *pbVar3 | (byte)(0x80 >> ((byte)param_2 & 7));
  }
  if (((param_4 == uVar4) && (iVar2 = (int)uVar4 >> ((byte)*param_1 & 0x1f), -1 < iVar2)) &&
     (iVar2 <= (int)param_1[0x28])) {
    pbVar3 = (byte *)((((longlong)param_2 >> 3) - (longlong)(iVar2 * param_1[0x2a])) +
                     *(longlong *)(param_1 + 0x2c));
    *pbVar3 = *pbVar3 | (byte)(0x80 >> ((byte)param_2 & 7));
  }
  return;
}

