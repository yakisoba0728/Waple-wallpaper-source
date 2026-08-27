// Function: FUN_14034e260
// Addr: 14034e260
// Size: 456 bytes


undefined8 FUN_14034e260(longlong param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  sbyte sVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  
  uVar5 = 0;
  puVar4 = *(uint **)(param_1 + 0x10);
  if (*(longlong *)(puVar4 + 4) == 0) {
    return 0;
  }
  if (-1 < (int)param_4) {
    uVar12 = (uint)(*(ushort **)(param_1 + 0x18))[1];
    if ((uVar12 + param_4 <= puVar4[1]) && (-1 < param_5)) {
      uVar2 = **(ushort **)(param_1 + 0x18);
      uVar8 = (uint)uVar2;
      if (uVar8 + param_5 <= *puVar4) {
        uVar12 = *(byte *)(param_1 + 0x22) * uVar12;
        if (param_3 < param_2 + (int)((uVar12 + 7 >> 3) * uVar8)) {
          uVar5 = 3;
        }
        else {
          uVar3 = puVar4[2];
          pbVar9 = (byte *)((longlong)(int)(uVar3 * param_5 + (param_4 >> 3)) +
                           *(longlong *)(puVar4 + 4));
          param_4 = param_4 & 7;
          if (param_4 == 0) {
            if (uVar2 != 0) {
              do {
                pbVar11 = pbVar9;
                uVar7 = uVar12;
                if (7 < uVar12) {
                  do {
                    uVar7 = uVar7 - 8;
                    *pbVar11 = *pbVar11 | *param_2;
                    param_2 = param_2 + 1;
                    pbVar11 = pbVar11 + 1;
                  } while (7 < (int)uVar7);
                }
                if (0 < (int)uVar7) {
                  *pbVar11 = *pbVar11 | (byte)(0xff00 >> ((byte)uVar7 & 0x1f)) & *param_2;
                  param_2 = param_2 + 1;
                }
                uVar8 = uVar8 - 1;
                pbVar9 = pbVar9 + (int)uVar3;
              } while (0 < (int)uVar8);
            }
          }
          else if (uVar2 != 0) {
            do {
              uVar10 = 0;
              sVar6 = (sbyte)param_4;
              pbVar11 = pbVar9;
              uVar7 = uVar12;
              if (7 < uVar12) {
                do {
                  bVar1 = *param_2;
                  param_2 = param_2 + 1;
                  uVar7 = uVar7 - 8;
                  *pbVar11 = *pbVar11 | (byte)((bVar1 | uVar10) >> sVar6);
                  pbVar11 = pbVar11 + 1;
                  uVar10 = (bVar1 | uVar10) << 8;
                } while (7 < (int)uVar7);
              }
              if (0 < (int)uVar7) {
                uVar10 = uVar10 | 0xff00U >> ((byte)uVar7 & 0x1f) & (uint)*param_2;
                param_2 = param_2 + 1;
              }
              *pbVar11 = *pbVar11 | (byte)(uVar10 >> sVar6);
              if (8 < (int)(uVar7 + param_4)) {
                pbVar11[1] = pbVar11[1] | (byte)((uVar10 << 8) >> sVar6);
              }
              uVar8 = uVar8 - 1;
              pbVar9 = pbVar9 + (int)uVar3;
            } while (0 < (int)uVar8);
          }
        }
        return uVar5;
      }
    }
  }
  return 3;
}

