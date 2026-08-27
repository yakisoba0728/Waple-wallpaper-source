// Function: FUN_140416d70
// Addr: 140416d70
// Size: 792 bytes


void FUN_140416d70(undefined8 param_1,undefined4 param_2,uint *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint *puVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *local_140 [2];
  undefined1 local_130 [80];
  undefined1 local_e0 [72];
  undefined1 local_98 [96];
  
  FUN_140394a60(local_140,param_1,param_2,param_6,param_5);
  if (param_3 == (uint *)0x0) {
    if ((uint)*local_140[0] * 0x100 + (uint)local_140[0][1] == 1) {
      uVar6 = (uint)local_140[0][4] * 0x100 + (uint)local_140[0][5];
      if (uVar6 == 0) {
        pbVar3 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar3 = local_140[0] + uVar6;
      }
    }
    else {
      pbVar3 = (byte *)&DAT_14045dd10;
    }
    uVar7 = 0;
    uVar6 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
    if (uVar6 != 0) {
      do {
        if ((uint)*local_140[0] * 0x100 + (uint)local_140[0][1] == 1) {
          uVar8 = (uint)local_140[0][4] * 0x100 + (uint)local_140[0][5];
          if (uVar8 == 0) {
            pbVar3 = (byte *)&DAT_14045dd10;
          }
          else {
            pbVar3 = local_140[0] + uVar8;
          }
        }
        else {
          pbVar3 = (byte *)&DAT_14045dd10;
        }
        if (uVar7 < (uint)*pbVar3 * 0x100 + (uint)pbVar3[1]) {
          pbVar4 = pbVar3 + ((ulonglong)uVar7 + 1) * 6;
        }
        else {
          pbVar4 = (byte *)((longlong)&DAT_14045dd10 + 4);
        }
        uVar8 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
        if (uVar8 == 0) {
          pbVar3 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar3 = pbVar3 + uVar8;
        }
        FUN_14040a200(local_140,pbVar3,param_4);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
  }
  else {
    uVar6 = *param_3;
    pbVar3 = local_140[0];
    while (uVar6 != 0) {
      iVar11 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
      if (iVar11 == 1) {
        uVar7 = (uint)pbVar3[5] + (uint)pbVar3[4] * 0x100;
        if (uVar7 == 0) {
          pbVar4 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar4 = pbVar3 + uVar7;
        }
      }
      else {
        pbVar4 = (byte *)&DAT_14045dd10;
      }
      iVar10 = 0;
      iVar9 = (uint)*pbVar4 * 0x100 + -1 + (uint)pbVar4[1];
      if (-1 < iVar9) {
        do {
          uVar7 = (uint)(iVar9 + iVar10) >> 1;
          lVar2 = (ulonglong)uVar7 * 6;
          uVar8 = (uint)pbVar4[lVar2 + 3] * 0x10000 + (uint)pbVar4[lVar2 + 4] * 0x100 +
                  (uint)pbVar4[lVar2 + 2] * 0x1000000 + (uint)pbVar4[lVar2 + 5];
          iVar5 = (uint)(uVar6 >= uVar8 && uVar6 != uVar8) - (uint)(uVar6 < uVar8);
          if (iVar5 < 0) {
            iVar9 = uVar7 - 1;
          }
          else {
            if (iVar5 < 1) {
              if (iVar11 == 1) {
                uVar6 = (uint)pbVar3[4] * 0x100 + (uint)pbVar3[5];
                if (uVar6 == 0) {
                  pbVar3 = (byte *)&DAT_14045dd10;
                }
                else {
                  pbVar3 = pbVar3 + uVar6;
                }
              }
              else {
                pbVar3 = (byte *)&DAT_14045dd10;
              }
              if (uVar7 < (uint)*pbVar3 * 0x100 + (uint)pbVar3[1]) {
                pbVar4 = pbVar3 + lVar2 + 6;
              }
              else {
                pbVar4 = (byte *)((longlong)&DAT_14045dd10 + 4);
              }
              uVar6 = (uint)pbVar4[1] + (uint)*pbVar4 * 0x100;
              if (uVar6 == 0) {
                pbVar3 = (byte *)&DAT_14045dd10;
              }
              else {
                pbVar3 = pbVar3 + uVar6;
              }
              FUN_14040a200(local_140,pbVar3,param_4);
              pbVar3 = local_140[0];
              break;
            }
            iVar10 = uVar7 + 1;
          }
        } while (iVar10 <= iVar9);
      }
      puVar1 = param_3 + 1;
      param_3 = param_3 + 1;
      uVar6 = *puVar1;
    }
  }
  FUN_140396110(local_98);
  FUN_140396110(local_e0);
  FUN_140396110(local_130);
  return;
}

