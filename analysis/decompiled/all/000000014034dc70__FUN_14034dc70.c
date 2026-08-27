// Function: FUN_14034dc70
// Addr: 14034dc70
// Size: 579 bytes


undefined8 FUN_14034dc70(longlong param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

{
  byte bVar1;
  uint *puVar2;
  byte bVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  
  if (-1 < (int)param_4) {
    puVar2 = *(uint **)(param_1 + 0x10);
    uVar5 = (uint)(*(ushort **)(param_1 + 0x18))[1];
    if ((uVar5 + param_4 <= puVar2[1]) && (-1 < param_5)) {
      uVar10 = **(ushort **)(param_1 + 0x18);
      uVar12 = (uint)uVar10;
      if (param_5 + uVar12 <= *puVar2) {
        iVar7 = *(byte *)(param_1 + 0x22) * uVar5;
        if (param_3 < param_2 + ((int)(uVar12 * iVar7 + 7) >> 3)) {
          uVar4 = 3;
        }
        else {
          uVar4 = 0;
          if ((iVar7 != 0) && (uVar10 != 0)) {
            uVar5 = puVar2[2];
            uVar8 = param_4 & 7;
            uVar10 = 0;
            pbVar13 = (byte *)((longlong)(int)(uVar5 * param_5 + (param_4 >> 3)) +
                              *(longlong *)(puVar2 + 4));
            uVar6 = 0;
            uVar14 = uVar12;
            do {
              pbVar9 = pbVar13;
              iVar11 = iVar7;
              if (uVar8 != 0) {
                iVar11 = 8 - uVar8;
                if (iVar7 < (int)(8 - uVar8)) {
                  iVar11 = iVar7;
                }
                if (uVar14 == uVar12) {
                  uVar10 = (ushort)*param_2;
                  param_2 = param_2 + 1;
                  uVar6 = uVar8;
                }
                else if ((int)uVar6 < iVar11) {
                  if (param_2 < param_3) {
                    uVar10 = uVar10 | *param_2;
                    param_2 = param_2 + 1;
                  }
                  uVar6 = uVar6 + (8 - iVar11);
                }
                else {
                  uVar10 = uVar10 >> 8;
                  uVar6 = uVar6 - iVar11;
                }
                *pbVar13 = *pbVar13 |
                           ~(-1 << ((byte)iVar11 & 0x1f)) <<
                           (('\b' - (byte)iVar11) - (char)uVar8 & 0x1f) &
                           (byte)(uVar10 >> ((byte)uVar6 & 0x1f));
                pbVar9 = pbVar13 + 1;
                uVar10 = uVar10 << 8;
                iVar11 = iVar7 - iVar11;
              }
              bVar3 = (byte)uVar6;
              for (; 7 < iVar11; iVar11 = iVar11 + -8) {
                bVar1 = *param_2;
                param_2 = param_2 + 1;
                *pbVar9 = *pbVar9 | (byte)((ushort)(bVar1 | uVar10) >> (bVar3 & 0x1f));
                pbVar9 = pbVar9 + 1;
                uVar10 = (ushort)bVar1 << 8;
              }
              if (0 < iVar11) {
                if ((int)uVar6 < iVar11) {
                  if (param_2 < param_3) {
                    uVar10 = uVar10 | *param_2;
                    param_2 = param_2 + 1;
                  }
                  *pbVar9 = *pbVar9 | (byte)(uVar10 >> (bVar3 & 0x1f)) &
                                      (byte)(0xff00 >> ((byte)iVar11 & 0x1f));
                  uVar6 = uVar6 + (8 - iVar11);
                  uVar10 = uVar10 << 8;
                }
                else {
                  *pbVar9 = *pbVar9 | (byte)(uVar10 >> (bVar3 & 0x1f)) &
                                      (byte)(0xff00 >> ((byte)iVar11 & 0x1f));
                  uVar6 = uVar6 - iVar11;
                }
              }
              pbVar13 = pbVar13 + (int)uVar5;
              uVar14 = uVar14 - 1;
            } while (0 < (int)uVar14);
            return 0;
          }
        }
        return uVar4;
      }
    }
  }
  return 3;
}

