// Function: FUN_14040a200
// Addr: 14040a200
// Size: 595 bytes


void FUN_14040a200(int *param_1,byte *param_2,uint *param_3)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  if ((((uint)*param_2 * 0x100 + (uint)param_2[1] != 0) ||
      ((uint)param_2[2] * 0x100 + (uint)param_2[3] != 0)) &&
     (uVar7 = param_1[0x3c], param_1[0x3c] = uVar7 + 1, uVar7 < 0x1f5)) {
    iVar10 = (int)param_2 - *param_1;
    iVar12 = param_1[0x28];
    cVar5 = FUN_1403c58e0(param_1 + 0x1c,iVar10);
    if (cVar5 == (char)iVar12) {
      FUN_1403a29e0(param_1 + 0x18,iVar10);
      if (param_3 == (uint *)0x0) {
        uVar7 = (uint)*param_2 * 0x100 + (uint)param_2[1];
        if (uVar7 != 0) {
          FUN_1403ea7b0(param_1,param_2 + uVar7);
        }
        uVar11 = 0;
        uVar7 = (uint)param_2[2] * 0x100 + (uint)param_2[3];
        if (uVar7 != 0) {
          do {
            if (uVar11 == 0xffff) {
              bVar2 = *param_2;
              bVar3 = param_2[1];
            }
            else {
              if (uVar11 < (uint)param_2[2] * 0x100 + (uint)param_2[3]) {
                pbVar9 = param_2 + (((ulonglong)uVar11 + 1) * 3 + 1) * 2;
              }
              else {
                pbVar9 = (byte *)((longlong)&DAT_14045dd10 + 4);
              }
              bVar2 = *pbVar9;
              bVar3 = pbVar9[1];
            }
            uVar8 = (uint)bVar2 * 0x100 + (uint)bVar3;
            if (uVar8 == 0) {
              pbVar9 = &DAT_14045d1a8;
            }
            else {
              pbVar9 = param_2 + uVar8;
            }
            FUN_1403ea7b0(param_1,pbVar9);
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar7);
        }
      }
      else {
        uVar7 = *param_3;
        while (uVar7 != 0) {
          iVar10 = 0;
          uVar11 = (uint)param_2[2] * 0x100 + (uint)param_2[3];
          iVar12 = uVar11 - 1;
          if (-1 < iVar12) {
            do {
              uVar8 = (uint)(iVar12 + iVar10) >> 1;
              lVar4 = (ulonglong)uVar8 * 6;
              uVar6 = (uint)param_2[lVar4 + 6] * 0x100 + (uint)param_2[lVar4 + 5] * 0x10000 +
                      (uint)param_2[lVar4 + 4] * 0x1000000 + (uint)param_2[lVar4 + 7];
              iVar13 = (uint)(uVar7 >= uVar6 && uVar7 != uVar6) - (uint)(uVar7 < uVar6);
              if (iVar13 < 0) {
                iVar12 = uVar8 - 1;
              }
              else {
                if (iVar13 < 1) {
                  if (uVar8 == 0xffff) {
                    bVar2 = *param_2;
                    bVar3 = param_2[1];
                  }
                  else {
                    if (uVar8 < uVar11) {
                      pbVar9 = param_2 + lVar4 + 8;
                    }
                    else {
                      pbVar9 = (byte *)((longlong)&DAT_14045dd10 + 4);
                    }
                    bVar2 = *pbVar9;
                    bVar3 = pbVar9[1];
                  }
                  uVar7 = (uint)bVar2 * 0x100 + (uint)bVar3;
                  if (uVar7 == 0) {
                    pbVar9 = &DAT_14045d1a8;
                  }
                  else {
                    pbVar9 = param_2 + uVar7;
                  }
                  FUN_1403ea7b0(param_1,pbVar9);
                  break;
                }
                iVar10 = uVar8 + 1;
              }
            } while (iVar10 <= iVar12);
          }
          puVar1 = param_3 + 1;
          param_3 = param_3 + 1;
          uVar7 = *puVar1;
        }
      }
    }
  }
  return;
}

