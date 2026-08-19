// Function: FUN_14032ab70
// Addr: 14032ab70
// Size: 149 bytes


int FUN_14032ab70(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ushort *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  ulonglong uVar11;
  short *psVar12;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    iVar7 = 0x23;
  }
  else if (param_3 < *(uint *)(lVar2 + 0x10)) {
    uVar3 = *(undefined8 *)(lVar2 + 0xa0);
    psVar12 = (short *)((ulonglong)param_3 * 0x10 + *(longlong *)(lVar2 + 0x1b0));
    *(int *)(param_1 + 0x68) = (int)psVar12[4] + (int)psVar12[3];
    iVar9 = (int)psVar12[1] - (int)*psVar12;
    *(undefined2 *)(param_1 + 0x80) = 1;
    *(int *)(param_1 + 0x6c) = iVar9;
    *(undefined1 *)(param_1 + 0x82) = 1;
    iVar7 = 1 << ((byte)*(undefined4 *)(lVar2 + 0x1d0) & 3);
    if (iVar7 == 1) {
      uVar6 = iVar9 + 7U >> 3;
    }
    else if (iVar7 == 2) {
      uVar6 = iVar9 + 0xfU >> 3 & 0x1ffffffe;
    }
    else if (iVar7 == 4) {
      uVar6 = iVar9 + 0x1fU >> 3 & 0x1ffffffc;
    }
    else {
      if (iVar7 != 8) {
        return 3;
      }
      uVar6 = iVar9 + 0x3fU >> 3 & 0x1ffffff8;
    }
    *(uint *)(param_1 + 0x70) = uVar6;
    *(undefined4 *)(param_1 + 0x60) = 0x62697473;
    iVar7 = 0;
    *(int *)(param_1 + 0x90) = (int)*psVar12;
    *(int *)(param_1 + 0x94) = (int)psVar12[3];
    *(int *)(param_1 + 0x40) = (int)psVar12[2] << 6;
    *(int *)(param_1 + 0x38) = (int)*psVar12 << 6;
    *(int *)(param_1 + 0x3c) = (int)psVar12[3] << 6;
    *(int *)(param_1 + 0x30) = ((int)psVar12[1] - (int)*psVar12) * 0x40;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x68) << 6;
    func_0x0001402f9050((int *)(param_1 + 0x30),
                        (*(int *)(lVar2 + 0x154) + *(int *)(lVar2 + 0x150)) * 0x40);
    if ((param_4 >> 0x16 & 1) == 0) {
      iVar9 = *(int *)(param_1 + 0x70);
      iVar1 = *(int *)(param_1 + 0x68);
      iVar7 = FUN_1402f7080(param_1);
      if ((iVar7 == 0) &&
         (iVar7 = func_0x0001402f5d20(uVar3,*(undefined4 *)(psVar12 + 6)), iVar7 == 0)) {
        uVar6 = iVar9 * iVar1;
        iVar7 = func_0x0001402f5580(uVar3,*(undefined8 *)(param_1 + 0x78),uVar6);
        if (iVar7 == 0) {
          if ((*(byte *)(lVar2 + 0x1d0) & 8) == 0) {
            pbVar10 = *(byte **)(param_1 + 0x78);
            uVar11 = (ulonglong)uVar6;
            if (uVar6 != 0) {
              do {
                uVar8 = *pbVar10 >> 1 & 0x55 | (*pbVar10 & 0x55) * 2;
                uVar8 = uVar8 >> 2 & 0x33 | (uVar8 & 0x33) << 2;
                *pbVar10 = (byte)(uVar8 >> 4) | (char)uVar8 << 4;
                uVar11 = uVar11 - 1;
                pbVar10 = pbVar10 + 1;
              } while (uVar11 != 0);
            }
          }
          uVar8 = *(uint *)(lVar2 + 0x1d0);
          if (((uVar8 >> 1 ^ uVar8) & 4) != 0) {
            iVar9 = 1 << ((byte)(uVar8 >> 4) & 3);
            if (iVar9 == 2) {
              puVar4 = *(ushort **)(param_1 + 0x78);
              for (uVar11 = (ulonglong)uVar6; 1 < uVar11; uVar11 = uVar11 - 2) {
                *puVar4 = *puVar4 >> 8 | *puVar4 << 8;
                puVar4 = puVar4 + 1;
              }
            }
            else if (iVar9 == 4) {
              puVar5 = *(uint **)(param_1 + 0x78);
              for (uVar11 = (ulonglong)uVar6; 3 < uVar11; uVar11 = uVar11 - 4) {
                uVar6 = *puVar5;
                *puVar5 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                          uVar6 << 0x18;
                puVar5 = puVar5 + 1;
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar7 = 6;
  }
  return iVar7;
}

