// Function: FUN_1403ec220
// Addr: 1403ec220
// Size: 99 bytes


bool FUN_1403ec220(undefined4 *param_1,ushort param_2,longlong param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)(byte)param_2 + (param_2 & 0xffffff00);
  if (uVar2 == 0) {
    pbVar1 = (byte *)&DAT_14045dde0;
  }
  else {
    pbVar1 = (byte *)((ulonglong)uVar2 + param_3);
  }
  iVar3 = (uint)*pbVar1 * 0x100 + (uint)pbVar1[1];
  if (iVar3 != 1) {
    if (iVar3 != 2) {
      return false;
    }
    iVar3 = FUN_1403c7240(pbVar1,*param_1);
    return iVar3 != -1;
  }
  iVar3 = FUN_1403c71c0(pbVar1,*param_1);
  return iVar3 != -1;
}

