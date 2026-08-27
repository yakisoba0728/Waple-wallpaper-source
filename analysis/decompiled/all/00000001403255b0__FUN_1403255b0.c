// Function: FUN_1403255b0
// Addr: 1403255b0
// Size: 684 bytes


ulonglong FUN_1403255b0(longlong param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  int *piVar13;
  uint local_res8 [2];
  byte *local_res10;
  
  uVar6 = 0;
  local_res10 = param_2 + 1;
  local_res8[0] = 0;
  if ((param_3 < local_res10) || (bVar1 = *param_2, -1 < (char)bVar1)) {
LAB_140325840:
    uVar6 = 8;
  }
  else {
    uVar4 = **(undefined8 **)(param_1 + 0x28);
    if ((bVar1 & 0x40) != 0) {
      uVar3 = FUN_1403254a0(&local_res10,param_3);
      uVar6 = uVar3 & 0xffffffff;
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    pbVar11 = local_res10;
    local_res8[0] = 0;
    uVar9 = *(uint *)(param_1 + 0x18);
    uVar12 = uVar9 + (bVar1 & 0x3f);
    if (*(uint *)(param_1 + 0x1c) < uVar12) {
      uVar12 = uVar12 + 3 & 0xfffffffc;
      if (0x40 < uVar12) goto LAB_140325840;
      uVar4 = FUN_1402f80b0(uVar4,0x18,*(uint *)(param_1 + 0x1c),uVar12,
                            *(undefined8 *)(param_1 + 0x20),local_res8);
      *(undefined8 *)(param_1 + 0x20) = uVar4;
      if (local_res8[0] != 0) {
        return (ulonglong)local_res8[0];
      }
      *(uint *)(param_1 + 0x1c) = uVar12;
      uVar6 = 0;
    }
    uVar12 = 0;
    piVar13 = (int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar9 * 0x18);
    if ((bVar1 & 0x3f) != 0) {
      do {
        pbVar5 = pbVar11 + 1;
        if (param_3 < pbVar5) goto LAB_140325840;
        bVar2 = *pbVar11;
        *piVar13 = 0x10000;
        pbVar10 = pbVar5;
        if ((bVar2 & 0x10) != 0) {
          pbVar10 = pbVar11 + 3;
          if (param_3 < pbVar10) goto LAB_140325840;
          *piVar13 = ((int)(short)((ushort)*pbVar5 << 8) | (uint)pbVar11[2]) << 4;
        }
        piVar13[1] = 0x10000;
        pbVar11 = pbVar10;
        if ((bVar2 & 0x20) != 0) {
          pbVar11 = pbVar10 + 2;
          if (param_3 < pbVar11) goto LAB_140325840;
          piVar13[1] = ((int)(short)((ushort)*pbVar10 << 8) | (uint)pbVar10[1]) << 4;
        }
        if ((bVar2 & 3) == 1) {
          pbVar5 = pbVar11 + 2;
          if (param_3 < pbVar5) goto LAB_140325840;
          uVar9 = (int)(short)((ushort)*pbVar11 << 8) | (uint)pbVar11[1];
        }
        else if ((bVar2 & 3) == 2) {
          pbVar5 = pbVar11 + 1;
          if (param_3 < pbVar5) goto LAB_140325840;
          uVar9 = (uint)(char)*pbVar11;
        }
        else {
          uVar9 = 0;
          pbVar5 = pbVar11;
        }
        bVar7 = bVar2 >> 2 & 3;
        if (bVar7 == 1) {
          pbVar11 = pbVar5 + 2;
          if (param_3 < pbVar11) goto LAB_140325840;
          uVar8 = (int)(short)((ushort)*pbVar5 << 8) | (uint)pbVar5[1];
        }
        else if (bVar7 == 2) {
          pbVar11 = pbVar5 + 1;
          if (param_3 < pbVar11) goto LAB_140325840;
          uVar8 = (uint)(char)*pbVar5;
        }
        else {
          uVar8 = 0;
          pbVar11 = pbVar5;
        }
        piVar13[2] = uVar9;
        piVar13[3] = uVar8;
        if ((bVar2 & 0x40) == 0) {
          pbVar5 = pbVar11 + 1;
          if (param_3 < pbVar5) goto LAB_140325840;
          uVar9 = (uint)*pbVar11;
        }
        else {
          pbVar5 = pbVar11 + 2;
          if (param_3 < pbVar5) goto LAB_140325840;
          uVar9 = (uint)CONCAT11(*pbVar11,pbVar11[1]);
        }
        piVar13[5] = uVar9;
        if ((char)bVar2 < '\0') {
          pbVar11 = pbVar5 + 3;
          if (param_3 < pbVar11) goto LAB_140325840;
          uVar9 = (uint)CONCAT11(*pbVar5,pbVar5[1]);
        }
        else {
          pbVar11 = pbVar5 + 2;
          if (param_3 < pbVar11) goto LAB_140325840;
          uVar9 = (uint)*pbVar5;
        }
        uVar12 = uVar12 + 1;
        piVar13[4] = uVar9 << 8 | (uint)pbVar11[-1];
        piVar13 = piVar13 + 6;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      } while (uVar12 < (bVar1 & 0x3f));
      uVar6 = (ulonglong)local_res8[0];
    }
  }
  return uVar6;
}

