// Function: FUN_1402fabd0
// Addr: 1402fabd0
// Size: 1172 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1402fabd0(undefined8 *param_1,int *param_2,int *param_3,int param_4)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte bVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  if ((param_2 == (int *)0x0) || (param_3 == (int *)0x0)) {
    return 6;
  }
  switch(*(undefined1 *)((longlong)param_2 + 0x1a)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    break;
  default:
    local_res8[0] = 6;
    goto LAB_1402fad0c;
  }
  uVar6 = *param_1;
  iVar8 = param_2[1];
  if (param_3[2] == 0) {
    if (param_2[2] < 0) goto LAB_1402fac5e;
LAB_1402facbf:
    bVar1 = false;
  }
  else {
    if (-1 < param_3[2]) goto LAB_1402facbf;
LAB_1402fac5e:
    bVar1 = true;
  }
  FUN_1402f7f90(uVar6,*(undefined8 *)(param_3 + 4));
  iVar5 = _UNK_140436a5c;
  iVar4 = _UNK_140436a58;
  iVar3 = _UNK_140436a54;
  iVar15 = _DAT_140436a50;
  uVar2 = _UNK_140436a48;
  *(undefined8 *)param_3 = _DAT_140436a40;
  *(undefined8 *)(param_3 + 2) = uVar2;
  uVar2 = DAT_140436a60;
  param_3[4] = iVar15;
  param_3[5] = iVar3;
  param_3[6] = iVar4;
  param_3[7] = iVar5;
  *(undefined8 *)(param_3 + 8) = uVar2;
  *(undefined1 *)((longlong)param_3 + 0x1a) = 2;
  iVar15 = *param_2;
  *param_3 = iVar15;
  param_3[1] = param_2[1];
  if ((param_4 != 0) && (iVar8 % param_4 != 0)) {
    iVar8 = iVar8 - iVar8 % param_4;
    if (param_4 < 1) {
      iVar8 = iVar8 - param_4;
    }
    else {
      iVar8 = iVar8 + param_4;
    }
  }
  uVar6 = FUN_1402f7ff0(uVar6,iVar8,0,iVar15,0,local_res8);
  *(undefined8 *)(param_3 + 4) = uVar6;
  if (local_res8[0] != 0) {
    return local_res8[0];
  }
  iVar15 = -iVar8;
  if (!bVar1) {
    iVar15 = iVar8;
  }
  param_3[2] = iVar15;
LAB_1402fad0c:
  pbVar10 = *(byte **)(param_2 + 4);
  pbVar9 = *(byte **)(param_3 + 4);
  if (param_2[2] < 0) {
    pbVar10 = pbVar10 + -(longlong)((*param_2 + -1) * param_2[2]);
  }
  if (param_3[2] < 0) {
    pbVar9 = pbVar9 + -(longlong)((*param_3 + -1) * param_3[2]);
  }
  switch(*(undefined1 *)((longlong)param_2 + 0x1a)) {
  case 1:
    *(undefined2 *)(param_3 + 6) = 2;
    for (iVar8 = *param_2; iVar8 != 0; iVar8 = iVar8 + -1) {
      pbVar14 = pbVar9;
      pbVar13 = pbVar10;
      for (uVar12 = (uint)param_2[1] >> 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        bVar11 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        *pbVar14 = bVar11 >> 7;
        pbVar14[1] = bVar11 >> 6 & 1;
        pbVar14[2] = bVar11 >> 5 & 1;
        pbVar14[3] = bVar11 >> 4 & 1;
        pbVar14[4] = bVar11 >> 3 & 1;
        pbVar14[5] = bVar11 >> 2 & 1;
        pbVar14[7] = bVar11 & 1;
        pbVar14[6] = bVar11 >> 1 & 1;
        pbVar14 = pbVar14 + 8;
      }
      uVar12 = param_2[1] & 7;
      if (uVar12 != 0) {
        uVar7 = (uint)*pbVar13;
        do {
          iVar15 = (int)uVar7 >> 7;
          uVar7 = uVar7 * 2;
          *pbVar14 = (byte)iVar15 & 1;
          uVar12 = uVar12 - 1;
          pbVar14 = pbVar14 + 1;
        } while (uVar12 != 0);
      }
      pbVar10 = pbVar10 + param_2[2];
      pbVar9 = pbVar9 + param_3[2];
    }
    break;
  case 2:
  case 5:
  case 6:
    iVar8 = param_2[1];
    *(undefined2 *)(param_3 + 6) = 0x100;
    for (iVar15 = *param_2; iVar15 != 0; iVar15 = iVar15 + -1) {
      FUN_1404210f0(pbVar9,pbVar10,iVar8);
      pbVar10 = pbVar10 + param_2[2];
      pbVar9 = pbVar9 + param_3[2];
    }
    break;
  case 3:
    *(undefined2 *)(param_3 + 6) = 4;
    for (iVar8 = *param_2; iVar8 != 0; iVar8 = iVar8 + -1) {
      pbVar14 = pbVar9;
      pbVar13 = pbVar10;
      for (uVar12 = (uint)param_2[1] >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        bVar11 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        *pbVar14 = bVar11 >> 6;
        pbVar14[1] = bVar11 >> 4 & 3;
        pbVar14[3] = bVar11 & 3;
        pbVar14[2] = bVar11 >> 2 & 3;
        pbVar14 = pbVar14 + 4;
      }
      uVar12 = param_2[1] & 3;
      if (uVar12 != 0) {
        uVar7 = (uint)*pbVar13;
        do {
          iVar15 = (int)uVar7 >> 6;
          uVar7 = uVar7 << 2;
          *pbVar14 = (byte)iVar15 & 3;
          uVar12 = uVar12 - 1;
          pbVar14 = pbVar14 + 1;
        } while (uVar12 != 0);
      }
      pbVar10 = pbVar10 + param_2[2];
      pbVar9 = pbVar9 + param_3[2];
    }
    break;
  case 4:
    *(undefined2 *)(param_3 + 6) = 0x10;
    for (iVar8 = *param_2; iVar8 != 0; iVar8 = iVar8 + -1) {
      pbVar14 = pbVar9;
      pbVar13 = pbVar10;
      for (uVar12 = (uint)param_2[1] >> 1; uVar12 != 0; uVar12 = uVar12 - 1) {
        bVar11 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        *pbVar14 = bVar11 >> 4;
        pbVar14[1] = bVar11 & 0xf;
        pbVar14 = pbVar14 + 2;
      }
      if ((*(byte *)(param_2 + 1) & 1) != 0) {
        *pbVar14 = *pbVar13 >> 4;
      }
      pbVar10 = pbVar10 + param_2[2];
      pbVar9 = pbVar9 + param_3[2];
    }
    break;
  case 7:
    *(undefined2 *)(param_3 + 6) = 0x100;
    for (iVar8 = *param_2; iVar8 != 0; iVar8 = iVar8 + -1) {
      pbVar14 = pbVar9;
      pbVar13 = pbVar10;
      for (iVar15 = param_2[1]; iVar15 != 0; iVar15 = iVar15 + -1) {
        bVar11 = pbVar13[3];
        if (bVar11 != 0) {
          bVar11 = bVar11 - (char)(((uint)pbVar13[1] * (uint)pbVar13[1] * 0xb714 +
                                    (uint)pbVar13[2] * (uint)pbVar13[2] * 0x3671 +
                                    (uint)*pbVar13 * (uint)*pbVar13 * 0x127b >> 0x10) / (uint)bVar11
                                  );
        }
        *pbVar14 = bVar11;
        pbVar13 = pbVar13 + 4;
        pbVar14 = pbVar14 + 1;
      }
      pbVar10 = pbVar10 + param_2[2];
      pbVar9 = pbVar9 + param_3[2];
    }
  }
  return local_res8[0];
}

