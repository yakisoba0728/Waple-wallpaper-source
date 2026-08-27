// Function: FUN_1403260d0
// Addr: 1403260d0
// Size: 638 bytes


undefined8
FUN_1403260d0(ulonglong *param_1,byte *param_2,uint param_3,uint *param_4,uint *param_5,
             uint *param_6,uint *param_7,uint *param_8,uint *param_9)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  
  pbVar2 = (byte *)*param_1;
  pbVar7 = pbVar2 + 1;
  if (param_2 < pbVar7) {
    return 8;
  }
  bVar1 = *pbVar2;
  bVar8 = bVar1 & 3;
  if ((bVar1 & 3) == 0) {
    pbVar6 = pbVar2 + 2;
    if (param_2 < pbVar6) {
      return 8;
    }
    uVar9 = (int)(char)*pbVar7 >> 4;
    uVar5 = (int)(char)(*pbVar7 << 4) >> 4;
  }
  else if (bVar8 == 1) {
    if (param_2 < pbVar2 + 3) {
      return 8;
    }
    uVar9 = (uint)(char)*pbVar7;
    uVar5 = (uint)(char)pbVar2[2];
    pbVar6 = pbVar2 + 3;
  }
  else if (bVar8 == 2) {
    pbVar6 = pbVar2 + 5;
    if (param_2 < pbVar6) {
      return 8;
    }
    uVar9 = (int)(short)((ushort)*pbVar7 << 8) | (uint)pbVar2[2];
    uVar5 = (int)(short)((ushort)pbVar2[3] << 8) | (uint)pbVar2[4];
  }
  else if (bVar8 == 3) {
    pbVar6 = pbVar2 + 7;
    if (param_2 < pbVar6) {
      return 8;
    }
    uVar9 = (int)((uint)CONCAT21(CONCAT11(*pbVar7,pbVar2[2]),pbVar2[3]) << 8) >> 8;
    uVar5 = (int)((uint)CONCAT21(CONCAT11(pbVar2[4],pbVar2[5]),pbVar2[6]) << 8) >> 8;
  }
  else {
    uVar9 = 0;
    uVar5 = 0;
    pbVar6 = pbVar7;
  }
  bVar8 = bVar1 >> 2 & 3;
  if ((bVar1 >> 2 & 3) != 0) {
    if (bVar8 == 1) {
      pbVar7 = pbVar6 + 1;
      if (param_2 < pbVar7) {
        return 8;
      }
      uVar3 = (uint)(*pbVar6 >> 4);
      uVar4 = *pbVar6 & 0xf;
      goto LAB_14032627f;
    }
    if (bVar8 == 2) {
      if (param_2 < pbVar6 + 2) {
        return 8;
      }
      uVar3 = (uint)*pbVar6;
      uVar4 = (uint)pbVar6[1];
      pbVar7 = pbVar6 + 2;
      goto LAB_14032627f;
    }
    if (bVar8 == 3) {
      if (param_2 < pbVar6 + 4) {
        return 8;
      }
      uVar3 = (uint)CONCAT11(*pbVar6,pbVar6[1]);
      uVar4 = (uint)CONCAT11(pbVar6[2],pbVar6[3]);
      pbVar7 = pbVar6 + 4;
      goto LAB_14032627f;
    }
  }
  uVar3 = 0;
  uVar4 = 0;
  pbVar7 = pbVar6;
LAB_14032627f:
  bVar8 = bVar1 >> 4 & 3;
  if ((bVar1 >> 4 & 3) != 0) {
    if (bVar8 == 1) {
      if (param_2 < pbVar7 + 1) {
        return 8;
      }
      param_3 = (int)(char)*pbVar7 << 8;
      pbVar7 = pbVar7 + 1;
    }
    else if (bVar8 == 2) {
      if (param_2 < pbVar7 + 2) {
        return 8;
      }
      param_3 = (int)(short)((ushort)*pbVar7 << 8) | (uint)pbVar7[1];
      pbVar7 = pbVar7 + 2;
    }
    else {
      param_3 = 0;
      if (bVar8 == 3) {
        if (param_2 < pbVar7 + 3) {
          return 8;
        }
        param_3 = (int)((uint)CONCAT21(CONCAT11(*pbVar7,pbVar7[1]),pbVar7[2]) << 8) >> 8;
        pbVar7 = pbVar7 + 3;
      }
    }
  }
  *param_4 = uVar9;
  *param_5 = uVar5;
  *param_6 = uVar3;
  *param_7 = uVar4;
  *param_8 = param_3;
  *param_9 = (uint)(bVar1 >> 6);
  *param_1 = (ulonglong)pbVar7;
  return 0;
}

