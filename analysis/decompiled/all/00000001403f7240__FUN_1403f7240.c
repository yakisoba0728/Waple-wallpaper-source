// Function: FUN_1403f7240
// Addr: 1403f7240
// Size: 517 bytes


undefined8 * FUN_1403f7240(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint local_res8 [2];
  uint local_res20 [2];
  int local_28 [4];
  
  puVar5 = (undefined8 *)*param_1;
  puVar7 = &DAT_14045dde0;
  puVar10 = &DAT_14045dde0;
  if (puVar5 != (undefined8 *)0x0) {
    puVar10 = puVar5;
  }
  puVar4 = &DAT_14045dde0;
  if (7 < *(uint *)(puVar10 + 3)) {
    puVar4 = (undefined8 *)puVar10[2];
  }
  puVar2 = (undefined1 *)FUN_1403b33a0(puVar4);
  puVar10 = &DAT_14045dde0;
  puVar4 = &DAT_14045dde0;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = puVar5;
  }
  if (7 < *(uint *)(puVar4 + 3)) {
    puVar10 = (undefined8 *)puVar4[2];
  }
  lVar8 = (longlong)puVar10 +
          (ulonglong)(byte)puVar2[3] +
          ((ulonglong)(byte)puVar2[2] + (ulonglong)CONCAT11(*puVar2,puVar2[1]) * 0x100) * 0x100;
  pbVar3 = (byte *)FUN_1403c28a0(lVar8,param_3,
                                 (uint)(byte)puVar2[9] * 0x10000 + (uint)(byte)puVar2[10] * 0x100 +
                                 (uint)(byte)puVar2[8] * 0x1000000 + (uint)(byte)puVar2[0xb]);
  if (((pbVar3 != (byte *)0x0) && (puVar2[0x2c] != '\0')) && (puVar2[0x2d] != '\0')) {
    local_res8[0] = 0;
    local_res20[0] = 0;
    local_28[0] = 0;
    uVar9 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
    if ((uVar9 <= param_3) && (param_3 <= (uint)pbVar3[2] * 0x100 + (uint)pbVar3[3])) {
      uVar6 = (uint)pbVar3[7] +
              (uint)pbVar3[5] * 0x10000 + (uint)pbVar3[6] * 0x100 + (uint)pbVar3[4] * 0x1000000;
      if (uVar6 == 0) {
        puVar5 = &DAT_14045dde0;
      }
      else {
        puVar5 = (undefined8 *)((ulonglong)uVar6 + lVar8);
      }
      cVar1 = FUN_1403cae20(puVar5,param_3 - uVar9,local_res8,local_res20,local_28);
      if (cVar1 != '\0') {
        puVar5 = (undefined8 *)param_1[1];
        uVar11 = (ulonglong)local_res8[0];
        puVar10 = &DAT_14045dde0;
        if (puVar5 != (undefined8 *)0x0) {
          puVar10 = puVar5;
        }
        if ((local_res8[0] <= *(uint *)(puVar10 + 3)) &&
           (local_res20[0] <= *(uint *)(puVar10 + 3) - local_res8[0])) {
          if (local_28[0] == 0x11) {
            if (8 < local_res20[0]) {
              puVar10 = &DAT_14045dde0;
              if (puVar5 != (undefined8 *)0x0) {
                puVar10 = puVar5;
              }
              if (3 < *(uint *)(puVar10 + 3)) {
                puVar7 = (undefined8 *)puVar10[2];
              }
              puVar5 = (undefined8 *)
                       func_0x000140414060(puVar5,local_res8[0] + 9,
                                           (uint)*(byte *)((longlong)puVar7 + uVar11 + 6) * 0x10000
                                           + (uint)*(byte *)((longlong)puVar7 + uVar11 + 7) * 0x100
                                           + (uint)*(byte *)((longlong)puVar7 + uVar11 + 5) *
                                             0x1000000 +
                                           (uint)*(byte *)((longlong)puVar7 + uVar11 + 8));
              return puVar5;
            }
          }
          else if (local_28[0] == 0x12) {
            if (0xb < local_res20[0]) {
              puVar10 = &DAT_14045dde0;
              if (puVar5 != (undefined8 *)0x0) {
                puVar10 = puVar5;
              }
              if (3 < *(uint *)(puVar10 + 3)) {
                puVar7 = (undefined8 *)puVar10[2];
              }
              puVar5 = (undefined8 *)
                       func_0x000140414060(puVar5,local_res8[0] + 0xc,
                                           (uint)*(byte *)((longlong)puVar7 + uVar11 + 9) * 0x10000
                                           + (uint)*(byte *)((longlong)puVar7 + uVar11 + 10) * 0x100
                                           + (uint)*(byte *)((longlong)puVar7 + uVar11 + 8) *
                                             0x1000000 +
                                           (uint)*(byte *)((longlong)puVar7 + uVar11 + 0xb));
              return puVar5;
            }
          }
          else if ((local_28[0] == 0x13) && (3 < local_res20[0])) {
            puVar10 = &DAT_14045dde0;
            if (puVar5 != (undefined8 *)0x0) {
              puVar10 = puVar5;
            }
            if (3 < *(uint *)(puVar10 + 3)) {
              puVar7 = (undefined8 *)puVar10[2];
            }
            pbVar3 = (byte *)((longlong)puVar7 + uVar11);
            puVar5 = (undefined8 *)
                     func_0x000140414060(puVar5,local_res8[0] + 4,
                                         (uint)*(byte *)((longlong)puVar7 + uVar11 + 1) * 0x10000 +
                                         (uint)pbVar3[2] * 0x100 + (uint)*pbVar3 * 0x1000000 +
                                         (uint)pbVar3[3]);
            return puVar5;
          }
        }
      }
    }
  }
  return &DAT_14045dde0;
}

