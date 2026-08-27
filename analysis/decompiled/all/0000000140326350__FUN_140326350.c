// Function: FUN_140326350
// Addr: 140326350
// Size: 771 bytes


ulonglong FUN_140326350(uint *param_1,longlong param_2,uint param_3,undefined4 param_4,char param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  ushort uVar5;
  uint uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong uVar10;
  uint local_18 [4];
  
  uVar7 = FUN_1402f5c50(param_2,param_4);
  local_18[0] = (uint)uVar7;
  if (local_18[0] != 0) {
    return uVar7;
  }
  uVar5 = FUN_1402f5ac0(param_2,local_18);
  if (local_18[0] != 0) {
    return (ulonglong)local_18[0];
  }
  if (uVar5 <= param_3) {
    return 6;
  }
  uVar7 = FUN_1402f5c90(param_2,param_3 * 5);
  local_18[0] = (uint)uVar7;
  if (local_18[0] != 0) {
    return uVar7;
  }
  uVar5 = FUN_1402f5ac0(param_2,local_18);
  if (local_18[0] != 0) {
    return (ulonglong)local_18[0];
  }
  uVar6 = FUN_1402f5a20(param_2,local_18);
  if (local_18[0] != 0) {
    return (ulonglong)local_18[0];
  }
  *param_1 = (uint)uVar5;
  param_1[1] = uVar6;
  uVar7 = FUN_1402f5c50(param_2);
  local_18[0] = (uint)uVar7;
  if (local_18[0] != 0) {
    return uVar7;
  }
  uVar7 = FUN_1402f4fe0(param_2,(uint)uVar5);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  pbVar1 = puVar4 + uVar5;
  if (puVar4 + 0xd <= pbVar1) {
    param_1[2] = (int)((uint)CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]) << 8) >> 8;
    param_1[3] = (int)((uint)CONCAT21(CONCAT11(puVar4[3],puVar4[4]),puVar4[5]) << 8) >> 8;
    param_1[4] = (int)((uint)CONCAT21(CONCAT11(puVar4[6],puVar4[7]),puVar4[8]) << 8) >> 8;
    pbVar8 = puVar4 + 0xd;
    param_1[5] = (int)((uint)CONCAT21(CONCAT11(puVar4[9],puVar4[10]),puVar4[0xb]) << 8) >> 8;
    bVar2 = puVar4[0xc];
    uVar7 = 0;
    if ((bVar2 & 4) != 0) {
      uVar6 = (uint)((bVar2 & 8) != 0);
      uVar7 = (ulonglong)(uVar6 + 4);
      if ((bVar2 & 3) != 0) {
        uVar7 = (ulonglong)(uVar6 + 1);
      }
    }
    if ((bVar2 & 0x10) != 0) {
      uVar10 = (ulonglong)((int)uVar7 + 1);
      if ((bVar2 & 0x20) == 0) {
        uVar10 = uVar7;
      }
      uVar7 = (ulonglong)((int)uVar10 + 1);
    }
    if (pbVar8 + uVar7 <= pbVar1) {
      if ((bVar2 & 4) != 0) {
        if ((bVar2 & 8) == 0) {
          uVar6 = (uint)*pbVar8;
          pbVar9 = puVar4 + 0xe;
        }
        else {
          pbVar9 = puVar4 + 0xf;
          uVar6 = (int)(short)((ushort)*pbVar8 << 8) | (uint)(byte)puVar4[0xe];
        }
        param_1[7] = uVar6;
        pbVar8 = pbVar9;
        if ((bVar2 & 3) == 0) {
          pbVar8 = pbVar9 + 3;
          param_1[9] = (int)((uint)CONCAT21(CONCAT11(*pbVar9,pbVar9[1]),pbVar9[2]) << 8) >> 8;
        }
      }
      pbVar9 = pbVar8;
      if ((bVar2 & 0x10) != 0) {
        if ((bVar2 & 0x20) == 0) {
          uVar6 = (uint)*pbVar8;
          pbVar9 = pbVar8 + 1;
        }
        else {
          pbVar9 = pbVar8 + 2;
          uVar6 = (int)(short)((ushort)*pbVar8 << 8) | (uint)pbVar8[1];
        }
        param_1[8] = uVar6;
      }
      pbVar8 = pbVar9;
      if ((bVar2 & 0x40) != 0) {
        pbVar8 = pbVar9 + 1;
        if (pbVar1 < pbVar8) goto LAB_14032662a;
        uVar6 = (uint)*pbVar9;
        if (*pbVar9 != 0) {
          do {
            if ((pbVar1 < pbVar8 + 2) || (pbVar8 = pbVar8 + 2 + *pbVar8, pbVar1 < pbVar8))
            goto LAB_14032662a;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      local_18[0] = 0;
      if (pbVar8 + 5 <= pbVar1) {
        bVar2 = pbVar8[1];
        bVar3 = *pbVar8;
        param_1[10] = (uint)CONCAT11(bVar3,bVar2);
        param_1[0xb] = (uint)CONCAT21(CONCAT11(pbVar8[2],pbVar8[3]),pbVar8[4]);
        if (param_5 == '\0') goto LAB_140326632;
        if (pbVar8 + 6 <= pbVar1) {
          param_1[10] = (uint)pbVar8[5] * 0x10000 + (uint)CONCAT11(bVar3,bVar2);
          goto LAB_140326632;
        }
      }
    }
  }
LAB_14032662a:
  local_18[0] = 8;
LAB_140326632:
  FUN_1402f5100(param_2);
  return (ulonglong)local_18[0];
}

