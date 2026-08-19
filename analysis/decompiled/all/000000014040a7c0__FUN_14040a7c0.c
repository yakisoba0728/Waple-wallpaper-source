// Function: FUN_14040a7c0
// Addr: 14040a7c0
// Size: 48 bytes


bool FUN_14040a7c0(byte *param_1,longlong param_2,int param_3,undefined1 param_4)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined2 uStackX_10;
  
  if ((*(int *)(param_2 + 0x2c) == 0) && (param_1 <= param_1 + 2)) {
    lVar3 = *(longlong *)(param_2 + 8);
    pbVar5 = param_1 + (2 - lVar3);
    if ((pbVar5 < (byte *)0x80000000) && ((longlong)pbVar5 <= *(longlong *)(param_2 + 0x10) - lVar3)
       ) {
      if ((int)pbVar5 != 0) {
        func_0x000140421870(lVar3,0,(ulonglong)pbVar5 & 0xffffffff);
      }
      lVar3 = *(longlong *)(param_2 + 8);
      *(byte **)(param_2 + 8) = pbVar5 + lVar3;
      if ((lVar3 != 0) && (param_1 != (byte *)0x0)) {
        uVar1 = param_3 + 1;
        bVar2 = (byte)(uVar1 >> 8);
        uStackX_10 = CONCAT11((char)uVar1,bVar2);
        *(undefined2 *)param_1 = uStackX_10;
        if ((uint)bVar2 * 0x100 + (uVar1 & 0xff) != uVar1) {
          *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x10;
        }
        iVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
        iVar6 = iVar4 * 2;
        if (iVar4 == 0) {
          iVar6 = 2;
        }
        lVar3 = func_0x000140386f70(param_2,param_1,iVar6,param_4);
        return lVar3 != 0;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x2c) = 4;
    }
  }
  return false;
}

