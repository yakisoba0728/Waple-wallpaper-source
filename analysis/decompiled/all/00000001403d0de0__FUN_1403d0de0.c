// Function: FUN_1403d0de0
// Addr: 1403d0de0
// Size: 747 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403d0de0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  int *piVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  
  puVar6 = (undefined8 *)FUN_1403c56b0(*param_1 + 0x158);
  pbVar10 = (byte *)&DAT_14045dd10;
  puVar7 = &DAT_14045dd10;
  if ((undefined8 *)*puVar6 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar6;
  }
  if (*(uint *)(puVar7 + 3) < 8) {
    pbVar8 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar8 = (byte *)puVar7[2];
  }
  if ((uint)*pbVar8 * 0x100 + (uint)pbVar8[1] == 0) {
    puVar6 = (undefined8 *)FUN_1403c5610(*param_1 + 0x160);
    puVar7 = &DAT_14045dd10;
    if ((undefined8 *)*puVar6 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)*puVar6;
    }
    if (7 < *(uint *)(puVar7 + 3)) {
      pbVar10 = (byte *)puVar7[2];
    }
    if ((uint)*pbVar10 * 0x100 + (uint)pbVar10[1] != 0) {
      uVar12 = (uint)pbVar10[5] * 0x10000 + (uint)pbVar10[6] * 0x100 + (uint)pbVar10[4] * 0x1000000
               + (uint)pbVar10[7];
      cVar4 = FUN_1403f8640(param_2,uVar12);
      if (cVar4 != '\0') {
        pbVar10 = pbVar10 + 8;
        uVar11 = 0;
        if (uVar12 != 0) {
          do {
            uVar5 = FUN_1403b6ab0(pbVar10,param_1);
            uVar2 = *(undefined4 *)((longlong)param_1 + 0x4c);
            lVar3 = param_1[9];
            if (uVar11 < *(uint *)(param_2 + 4)) {
              piVar9 = (int *)((ulonglong)uVar11 * 0x10 + *(longlong *)(param_2 + 8));
            }
            else {
              DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
              _DAT_1404e4f28 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
              piVar9 = (int *)&DAT_1404e4f20;
            }
            if ((piVar9[1] < *piVar9) ||
               (cVar4 = FUN_1403a4c80(piVar9,piVar9[1] + 1,0), cVar4 != '\0')) {
              puVar1 = (undefined4 *)(*(longlong *)(piVar9 + 2) + (ulonglong)(uint)piVar9[1] * 0xc);
              piVar9[1] = piVar9[1] + 1;
              *puVar1 = uVar5;
              puVar1[1] = (int)lVar3;
              puVar1[2] = uVar2;
            }
            else {
              DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
              _DAT_1404e4f28 = CONCAT44(_DAT_1404e4f2c,(undefined4)DAT_14045dd18);
            }
            uVar11 = uVar11 + 1;
            pbVar10 = pbVar10 + ((ulonglong)CONCAT11(pbVar10[4],pbVar10[5]) * 0x100 +
                                (ulonglong)pbVar10[6]) * 0x100 + (ulonglong)pbVar10[7];
          } while (uVar11 < uVar12);
        }
      }
    }
  }
  else {
    uVar12 = (uint)pbVar8[5] * 0x10000 + (uint)pbVar8[6] * 0x100 + (uint)pbVar8[4] * 0x1000000 +
             (uint)pbVar8[7];
    cVar4 = FUN_1403f8640(param_2,uVar12);
    if (cVar4 != '\0') {
      uVar11 = 0;
      pbVar8 = pbVar8 + 8;
      if (uVar12 != 0) {
        do {
          uVar5 = FUN_1403b6830(pbVar8,param_1);
          uVar2 = *(undefined4 *)((longlong)param_1 + 0x4c);
          lVar3 = param_1[9];
          if (uVar11 < *(uint *)(param_2 + 4)) {
            piVar9 = (int *)((ulonglong)uVar11 * 0x10 + *(longlong *)(param_2 + 8));
          }
          else {
            DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
            _DAT_1404e4f28 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
            piVar9 = (int *)&DAT_1404e4f20;
          }
          if ((piVar9[1] < *piVar9) ||
             (cVar4 = FUN_1403a4c80(piVar9,piVar9[1] + 1,0), cVar4 != '\0')) {
            puVar1 = (undefined4 *)(*(longlong *)(piVar9 + 2) + (ulonglong)(uint)piVar9[1] * 0xc);
            piVar9[1] = piVar9[1] + 1;
            *puVar1 = uVar5;
            puVar1[1] = (int)lVar3;
            puVar1[2] = uVar2;
          }
          else {
            DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
            _DAT_1404e4f28 = CONCAT44(_DAT_1404e4f2c,(undefined4)DAT_14045dd18);
          }
          uVar11 = uVar11 + 1;
          pbVar8 = pbVar8 + ((ulonglong)CONCAT11(pbVar8[4],pbVar8[5]) * 0x100 + (ulonglong)pbVar8[6]
                            ) * 0x100 + (ulonglong)pbVar8[7];
        } while (uVar11 < uVar12);
      }
    }
  }
  return;
}

