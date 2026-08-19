// Function: FUN_14040a630
// Addr: 14040a630
// Size: 207 bytes


undefined1 FUN_14040a630(byte *param_1,longlong param_2,uint param_3,undefined1 param_4)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  longlong lVar5;
  short sVar6;
  uint uVar7;
  byte *pbVar8;
  
  if ((*(int *)(param_2 + 0x2c) == 0) && (param_1 <= param_1 + 8)) {
    lVar5 = *(longlong *)(param_2 + 8);
    pbVar8 = param_1 + (8 - lVar5);
    if ((pbVar8 < (byte *)0x80000000) && ((longlong)pbVar8 <= *(longlong *)(param_2 + 0x10) - lVar5)
       ) {
      if ((int)pbVar8 != 0) {
        uVar3 = func_0x000140421870(lVar5,0,(ulonglong)pbVar8 & 0xffffffff);
        return uVar3;
      }
      lVar5 = *(longlong *)(param_2 + 8);
      *(byte **)(param_2 + 8) = pbVar8 + lVar5;
      if ((lVar5 != 0) && (param_1 != (byte *)0x0)) {
        param_1[1] = (byte)param_3;
        *param_1 = (byte)(param_3 >> 8);
        if (param_3 == 0) {
          uVar7 = 0;
        }
        else {
          iVar1 = 0x1f;
          if (param_3 != 0) {
            for (; param_3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
            }
          }
          uVar7 = iVar1 + 1;
        }
        if (uVar7 < 2) {
          uVar7 = 1;
        }
        sVar6 = (short)uVar7 + -1;
        bVar2 = (byte)sVar6;
        *(ushort *)(param_1 + 4) = CONCAT11(bVar2,(char)((ushort)sVar6 >> 8));
        sVar6 = (1 << (bVar2 & 0x1f)) << 4;
        bVar2 = (byte)sVar6;
        bVar4 = (byte)((ushort)sVar6 >> 8);
        *(ushort *)(param_1 + 2) = CONCAT11(bVar2,bVar4);
        uVar7 = (uint)bVar4 * 0x100 + (uint)bVar2;
        sVar6 = (short)(param_3 * 0x10) - (short)uVar7;
        if (param_3 * 0x10 <= uVar7) {
          sVar6 = 0;
        }
        param_1[7] = (byte)sVar6;
        param_1[6] = (byte)((ushort)sVar6 >> 8);
        if ((uint)*param_1 * 0x100 + (uint)param_1[1] != param_3) {
          *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x10;
        }
        lVar5 = func_0x000140386f70(param_2,param_1,
                                    (ulonglong)CONCAT11(*param_1,param_1[1]) * 0x10 + 8,param_4);
        return lVar5 != 0;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x2c) = 4;
    }
  }
  return false;
}

