// Function: FUN_1403416b0
// Addr: 1403416b0
// Size: 949 bytes


undefined8 FUN_1403416b0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint local_res10;
  
  if (*(undefined1 **)(param_2 + 0x108) < (undefined1 *)(param_1 + 10U)) {
    FUN_1402f9100(param_2,8);
  }
  uVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3)),
                            *(undefined1 *)(param_1 + 4)),*(undefined1 *)(param_1 + 5));
  uVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 6),*(undefined1 *)(param_1 + 7)),
                            *(undefined1 *)(param_1 + 8)),*(undefined1 *)(param_1 + 9));
  if ((((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar9) || (uVar9 < 10)) ||
     ((uVar9 - 10) / 0xb < uVar3)) {
    FUN_1402f9100(param_2,8);
  }
  if (uVar3 != 0) {
    uVar7 = 1;
    local_res10 = 0;
    puVar12 = (undefined1 *)(param_1 + 10U);
    do {
      uVar6 = (uint)CONCAT21(CONCAT11(*puVar12,puVar12[1]),puVar12[2]);
      uVar4 = CONCAT31(CONCAT21(CONCAT11(puVar12[3],puVar12[4]),puVar12[5]),puVar12[6]);
      uVar10 = CONCAT31(CONCAT21(CONCAT11(puVar12[7],puVar12[8]),puVar12[9]),puVar12[10]);
      if ((uVar9 <= uVar4) || (uVar9 <= uVar10)) {
        FUN_1402f9100(param_2,8);
      }
      if (uVar6 < uVar7) {
        FUN_1402f9100(param_2,8);
      }
      uVar7 = uVar6 + 1;
      if (uVar4 != 0) {
        uVar6 = 0;
        puVar8 = (undefined1 *)((ulonglong)uVar4 + 4 + param_1);
        if (*(undefined1 **)(param_2 + 0x108) < puVar8) {
          FUN_1402f9100(param_2,8);
        }
        uVar4 = CONCAT31(CONCAT21(CONCAT11(puVar8[-4],puVar8[-3]),puVar8[-2]),puVar8[-1]);
        if ((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)puVar8) >> 2 < uVar4) {
          FUN_1402f9100(param_2,8);
        }
        uVar11 = 0;
        if (uVar4 != 0) {
          do {
            uVar5 = (uint)CONCAT21(CONCAT11(*puVar8,puVar8[1]),puVar8[2]);
            uVar13 = (byte)puVar8[3] + uVar5;
            if (0x10ffff < uVar13) {
              FUN_1402f9100(param_2,8);
            }
            if (uVar5 < uVar6) {
              FUN_1402f9100(param_2,8);
            }
            uVar11 = uVar11 + 1;
            uVar6 = uVar13 + 1;
            puVar8 = puVar8 + 4;
          } while (uVar11 < uVar4);
        }
      }
      if (uVar10 != 0) {
        puVar8 = (undefined1 *)((ulonglong)uVar10 + 4 + param_1);
        uVar4 = 0;
        if (*(undefined1 **)(param_2 + 0x108) < puVar8) {
          FUN_1402f9100(param_2,8);
        }
        uVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)uVar10 + param_1),puVar8[-3]),
                                  puVar8[-2]),puVar8[-1]);
        if ((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)puVar8) / 5 < uVar6) {
          FUN_1402f9100(param_2,8);
        }
        uVar10 = 0;
        if (uVar6 != 0) {
          do {
            uVar1 = puVar8[3];
            uVar2 = puVar8[4];
            uVar11 = (uint)CONCAT21(CONCAT11(*puVar8,puVar8[1]),puVar8[2]);
            if (0x10ffff < uVar11) {
              FUN_1402f9100(param_2,8);
            }
            if (uVar11 < uVar4) {
              FUN_1402f9100(param_2,8);
            }
            uVar4 = uVar11 + 1;
            if ((0 < *(int *)(param_2 + 0x110)) &&
               (*(uint *)(param_2 + 0x120) <= (uint)CONCAT11(uVar1,uVar2))) {
              FUN_1402f9100(param_2,0x10);
            }
            uVar10 = uVar10 + 1;
            puVar8 = puVar8 + 5;
          } while (uVar10 < uVar6);
        }
      }
      local_res10 = local_res10 + 1;
      puVar12 = puVar12 + 0xb;
    } while (local_res10 < uVar3);
  }
  return 0;
}

