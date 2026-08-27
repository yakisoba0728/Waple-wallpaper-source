// Function: FUN_14040a560
// Addr: 14040a560
// Size: 389 bytes


bool FUN_14040a560(byte *param_1,longlong param_2,uint param_3,undefined1 param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  short sVar5;
  uint uVar6;
  byte *pbVar7;
  
  if ((*(int *)(param_2 + 0x2c) == 0) && (param_1 <= param_1 + 8)) {
    lVar4 = *(longlong *)(param_2 + 8);
    pbVar7 = param_1 + (8 - lVar4);
    if ((pbVar7 < (byte *)0x80000000) && ((longlong)pbVar7 <= *(longlong *)(param_2 + 0x10) - lVar4)
       ) {
      if ((int)pbVar7 != 0) {
        FUN_1404217a0(lVar4,0,(ulonglong)pbVar7 & 0xffffffff);
      }
      lVar4 = *(longlong *)(param_2 + 8);
      *(byte **)(param_2 + 8) = pbVar7 + lVar4;
      if ((lVar4 != 0) && (param_1 != (byte *)0x0)) {
        param_1[1] = (byte)param_3;
        *param_1 = (byte)(param_3 >> 8);
        if (param_3 == 0) {
          uVar6 = 0;
        }
        else {
          iVar1 = 0x1f;
          if (param_3 != 0) {
            for (; param_3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
            }
          }
          uVar6 = iVar1 + 1;
        }
        if (uVar6 < 2) {
          uVar6 = 1;
        }
        sVar5 = (short)uVar6 + -1;
        bVar2 = (byte)sVar5;
        *(ushort *)(param_1 + 4) = CONCAT11(bVar2,(char)((ushort)sVar5 >> 8));
        sVar5 = (1 << (bVar2 & 0x1f)) << 4;
        bVar2 = (byte)sVar5;
        bVar3 = (byte)((ushort)sVar5 >> 8);
        *(ushort *)(param_1 + 2) = CONCAT11(bVar2,bVar3);
        uVar6 = (uint)bVar3 * 0x100 + (uint)bVar2;
        sVar5 = (short)(param_3 * 0x10) - (short)uVar6;
        if (param_3 * 0x10 <= uVar6) {
          sVar5 = 0;
        }
        param_1[7] = (byte)sVar5;
        param_1[6] = (byte)((ushort)sVar5 >> 8);
        if ((uint)*param_1 * 0x100 + (uint)param_1[1] != param_3) {
          *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x10;
        }
        lVar4 = FUN_140386ea0(param_2,param_1,(ulonglong)CONCAT11(*param_1,param_1[1]) * 0x10 + 8,
                              param_4);
        return lVar4 != 0;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x2c) = 4;
    }
  }
  return false;
}

