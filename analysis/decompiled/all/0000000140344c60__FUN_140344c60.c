// Function: FUN_140344c60
// Addr: 140344c60
// Size: 1222 bytes


int FUN_140344c60(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  ushort uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  uint local_res8 [2];
  undefined8 local_res10;
  int local_res18 [2];
  int local_res20;
  undefined1 *local_58;
  undefined8 local_50;
  
  local_58 = (undefined1 *)0x0;
  if (*(longlong *)(param_1 + 0x4d8) == 0) {
    return 3;
  }
  puVar6 = (ushort *)0x0;
  uVar16 = *(undefined8 *)(param_1 + 0x98);
  local_res10 = param_2;
  local_50 = uVar16;
  local_res18[0] = (**(code **)(param_1 + 0x2a0))(param_1,0x434f4c52,param_2,local_res8);
  if ((((local_res18[0] != 0) || (local_res20 = FUN_1402f54a0(param_2), local_res8[0] < 0xe)) ||
      (local_res18[0] = FUN_1402f5150(param_2,local_res8[0],&local_58), puVar4 = local_58,
      local_res18[0] != 0)) ||
     (puVar6 = (ushort *)FUN_1402f7e90(uVar16,0x90,local_res18), local_res18[0] != 0))
  goto LAB_1403450ea;
  uVar10 = CONCAT11(*puVar4,puVar4[1]);
  *puVar6 = uVar10;
  if (uVar10 < 2) {
    uVar1 = puVar4[3];
    uVar2 = puVar4[2];
    puVar6[1] = CONCAT11(uVar2,uVar1);
    uVar14 = CONCAT31(CONCAT21(CONCAT11(puVar4[4],puVar4[5]),puVar4[6]),puVar4[7]);
    if ((uVar14 < local_res8[0]) && ((uint)CONCAT11(uVar2,uVar1) <= (local_res8[0] - uVar14) / 6)) {
      uVar1 = puVar4[0xc];
      uVar15 = CONCAT31(CONCAT21(CONCAT11(puVar4[8],puVar4[9]),puVar4[10]),puVar4[0xb]);
      uVar2 = puVar4[0xd];
      puVar6[2] = CONCAT11(uVar1,uVar2);
      if ((uVar15 < local_res8[0]) && ((uint)CONCAT11(uVar1,uVar2) <= local_res8[0] - uVar15 >> 2))
      {
        if (uVar10 != 1) goto LAB_140345088;
        if ((0x21 < local_res8[0]) &&
           (uVar8 = CONCAT31(CONCAT21(CONCAT11(puVar4[0xe],puVar4[0xf]),puVar4[0x10]),puVar4[0x11]),
           uVar8 < local_res8[0] - 4)) {
          puVar12 = local_58 + uVar8;
          uVar11 = CONCAT31(CONCAT21(CONCAT11(*puVar12,puVar12[1]),puVar12[2]),puVar12[3]);
          if (uVar11 <= ((local_res8[0] - uVar8) - 4) / 6) {
            *(uint *)(puVar6 + 0xc) = uVar11;
            *(undefined1 **)(puVar6 + 0x10) = puVar12;
            uVar8 = CONCAT31(CONCAT21(CONCAT11(puVar4[0x12],puVar4[0x13]),puVar4[0x14]),puVar4[0x15]
                            );
            if (uVar8 < local_res8[0]) {
              if (uVar8 == 0) {
                puVar6[0x14] = 0;
                puVar6[0x15] = 0;
                puVar6[0x18] = 0;
                puVar6[0x19] = 0;
                puVar6[0x1a] = 0;
                puVar6[0x1b] = 0;
                puVar9 = puVar12 + uVar11 * 6;
LAB_140344f43:
                puVar12 = (undefined1 *)0x0;
                *(undefined1 **)(puVar6 + 0x20) = puVar9;
                uVar8 = CONCAT31(CONCAT21(CONCAT11(puVar4[0x16],puVar4[0x17]),puVar4[0x18]),
                                 puVar4[0x19]);
                if (uVar8 < local_res8[0]) {
                  if (uVar8 != 0) {
                    puVar12 = local_58 + uVar8;
                  }
                  *(undefined1 **)(puVar6 + 0x1c) = puVar12;
                  puVar6[0x24] = 0;
                  puVar6[0x25] = 0;
                  puVar6[0x34] = 0;
                  puVar6[0x35] = 0;
                  puVar6[0x28] = 0;
                  puVar6[0x29] = 0;
                  puVar6[0x2a] = 0;
                  puVar6[0x2b] = 0;
                  puVar6[0x2c] = 0;
                  puVar6[0x2e] = 0;
                  puVar6[0x2f] = 0;
                  puVar6[0x30] = 0;
                  puVar6[0x31] = 0;
                  puVar6[0x32] = 0;
                  puVar6[0x33] = 0;
                  puVar6[0x38] = 0;
                  puVar6[0x39] = 0;
                  puVar6[0x3a] = 0;
                  puVar6[0x3b] = 0;
                  puVar6[0x3c] = 0;
                  puVar6[0x3d] = 0;
                  puVar6[0x3e] = 0;
                  puVar6[0x3f] = 0;
                  if ((*(byte *)(param_1 + 0x410) & 1) == 0) goto LAB_140345088;
                  uVar8 = CONCAT31(CONCAT21(CONCAT11(puVar4[0x1a],puVar4[0x1b]),puVar4[0x1c]),
                                   puVar4[0x1d]);
                  param_2 = local_res10;
                  if ((uVar8 < local_res8[0]) &&
                     (uVar11 = CONCAT31(CONCAT21(CONCAT11(puVar4[0x1e],puVar4[0x1f]),puVar4[0x20]),
                                        puVar4[0x21]), uVar16 = local_50, uVar11 < local_res8[0])) {
                    lVar3 = *(longlong *)(param_1 + 0x2e0);
                    if (uVar11 != 0) {
                      if (((*(longlong *)(param_1 + 0x408) == 0) &&
                          (iVar5 = (**(code **)(lVar3 + 0x20))(param_1,0), param_2 = local_res10,
                          uVar16 = local_50, iVar5 != 0)) ||
                         (local_res18[0] =
                               (**(code **)(lVar3 + 0x68))
                                         (param_1,local_res20 + uVar11,puVar6 + 0x24),
                         param_2 = local_res10, uVar16 = local_50, local_res18[0] != 0))
                      goto LAB_1403450c5;
                      local_res18[0] = 0;
                    }
                    if (((puVar6[0x2c] == 0) || (uVar8 == 0)) ||
                       (local_res18[0] =
                             (**(code **)(lVar3 + 0x60))
                                       (param_1,local_res20 + uVar8,puVar6 + 0x34,puVar6 + 0x24,
                                        local_res8[0]), param_2 = local_res10, uVar16 = local_50,
                       local_res18[0] == 0)) {
LAB_140345088:
                      *(undefined1 **)(puVar6 + 4) = local_58 + uVar14;
                      *(undefined1 **)(puVar6 + 8) = local_58 + uVar15;
                      *(undefined1 **)(puVar6 + 0x40) = local_58;
                      *(uint *)(puVar6 + 0x44) = local_res8[0];
                      *(ushort **)(param_1 + 0x4e0) = puVar6;
                      return 0;
                    }
                  }
                }
              }
              else if (uVar8 < local_res8[0] - 4) {
                puVar13 = local_58 + uVar8;
                uVar7 = CONCAT31(CONCAT21(CONCAT11(*puVar13,puVar13[1]),puVar13[2]),puVar13[3]);
                if (uVar7 <= local_res8[0] - uVar8 >> 2) {
                  *(uint *)(puVar6 + 0x14) = uVar7;
                  *(undefined1 **)(puVar6 + 0x18) = puVar13;
                  puVar9 = puVar13 + uVar7 * 4;
                  if (puVar12 + uVar11 * 6 < puVar13 + uVar7 * 4) {
                    puVar9 = puVar12 + uVar11 * 6;
                  }
                  goto LAB_140344f43;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1403450c5:
  lVar3 = *(longlong *)(param_1 + 0x2e0);
  (**(code **)(lVar3 + 0x80))(param_1,puVar6 + 0x34);
  (**(code **)(lVar3 + 0x78))(param_1,puVar6 + 0x24);
  local_res18[0] = 8;
LAB_1403450ea:
  FUN_1402f5c00(param_2,&local_58);
  FUN_1402f7f90(uVar16,puVar6);
  return local_res18[0];
}

