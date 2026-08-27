// Function: FUN_1400b19e0
// Addr: 1400b19e0
// Size: 1558 bytes


uint * FUN_1400b19e0(longlong param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  byte bVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  uint *puVar13;
  byte local_res8;
  int local_88;
  uint local_84;
  uint local_80;
  longlong local_78;
  longlong local_70;
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar9 = (char *)0x0;
  local_res8 = 0;
  local_80 = 0;
  local_88 = 0;
  pcVar8 = (char *)0x0;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  if ((param_2 != (longlong *)0x0) && (lVar1 = *param_2, lVar1 != 0)) {
    local_78 = param_2[2] + lVar1;
    local_70 = lVar1;
  }
  puVar11 = (uint *)pcVar9;
  puVar13 = (uint *)pcVar9;
  if ((param_3 != (longlong *)0x0) && (lVar1 = *param_3, lVar1 != 0)) {
    puVar11 = (uint *)(param_3[3] + lVar1);
    puVar13 = (uint *)(param_3[2] + lVar1);
  }
  iVar10 = *(int *)(param_1 + 0x30);
  bVar3 = true;
  if (iVar10 != 0) {
    local_80 = *(uint *)(param_1 + 0xa394);
    local_res8 = *(byte *)(param_1 + 0xa390);
    local_88 = *(int *)(param_1 + 0xa398);
    local_84 = *(uint *)(param_1 + 0xa39c);
    bVar7 = local_res8;
    switch(iVar10) {
    case 1:
      goto switchD_1400b1af2_caseD_1;
    case 2:
      goto switchD_1400b1af2_caseD_2;
    case 3:
      goto switchD_1400b1af2_caseD_3;
    case 4:
      goto switchD_1400b1af2_caseD_4;
    case 5:
      goto switchD_1400b1af2_caseD_5;
    case 6:
      goto switchD_1400b1af2_caseD_6;
    case 7:
      goto switchD_1400b1af2_caseD_7;
    case 8:
      goto switchD_1400b1af2_caseD_8;
    case 9:
      goto switchD_1400b1af2_caseD_9;
    case 10:
      goto switchD_1400b1af2_caseD_a;
    case 0xb:
      goto switchD_1400b1af2_caseD_b;
    case 0xc:
      goto switchD_1400b1af2_caseD_c;
    case 0xd:
      goto switchD_1400b1af2_caseD_d;
    case 0xe:
      goto switchD_1400b1af2_caseD_e;
    case 0xf:
      goto switchD_1400b1af2_caseD_f;
    case 0x10:
      goto switchD_1400b1af2_caseD_10;
    default:
      bVar3 = false;
      goto LAB_1400b1bd0;
    }
  }
  iVar10 = 1;
switchD_1400b1af2_caseD_1:
  if (puVar11 != puVar13) {
    uVar4 = *puVar11;
    puVar11 = (uint *)((longlong)puVar11 + 1);
    if ((byte)uVar4 != 0x1f) {
      pcVar8 = "#gzip: bad header";
      goto LAB_1400b1c06;
    }
    iVar10 = 2;
switchD_1400b1af2_caseD_2:
    if (puVar11 != puVar13) {
      uVar4 = *puVar11;
      puVar11 = (uint *)((longlong)puVar11 + 1);
      if ((byte)uVar4 != 0x8b) {
        pcVar8 = "#gzip: bad header";
        goto LAB_1400b1c06;
      }
      iVar10 = 3;
      goto switchD_1400b1af2_caseD_3;
    }
  }
LAB_1400b1bc1:
  pcVar9 = "$base: short read";
  goto LAB_1400b1bd0;
switchD_1400b1af2_caseD_3:
  if (puVar11 == puVar13) goto LAB_1400b1bc1;
  uVar4 = *puVar11;
  puVar11 = (uint *)((longlong)puVar11 + 1);
  if ((byte)uVar4 != 8) {
    pcVar8 = "#gzip: bad compression method";
    goto LAB_1400b1c06;
  }
  iVar10 = 4;
switchD_1400b1af2_caseD_4:
  if (puVar11 == puVar13) goto LAB_1400b1bc1;
  local_res8 = (byte)*puVar11;
  iVar10 = 5;
  puVar11 = (uint *)((longlong)puVar11 + 1);
  *(undefined8 *)(param_1 + 0xa3a0) = 6;
switchD_1400b1af2_caseD_5:
  uVar6 = *(ulonglong *)(param_1 + 0xa3a0);
  if ((ulonglong)((longlong)puVar13 - (longlong)puVar11) < uVar6) {
LAB_1400b1bb1:
    *(byte **)(param_1 + 0xa3a0) = (byte *)((uVar6 - (longlong)puVar13) + (longlong)puVar11);
    puVar11 = puVar13;
    goto LAB_1400b1bc1;
  }
  puVar11 = (uint *)((longlong)puVar11 + uVar6);
  if ((local_res8 & 4) != 0) {
switchD_1400b1af2_caseD_6:
    if ((longlong)puVar13 - (longlong)puVar11 < 2) {
      *(undefined8 *)(param_1 + 0xa3a0) = 0;
      iVar10 = 7;
switchD_1400b1af2_caseD_7:
      while (puVar11 != puVar13) {
        uVar6 = *(ulonglong *)(param_1 + 0xa3a0);
        uVar12 = uVar6 & 0xffffffffffffff;
        *(ulonglong *)(param_1 + 0xa3a0) = uVar12;
        bVar7 = (byte)(uVar6 >> 0x38);
        uVar4 = *puVar11;
        puVar11 = (uint *)((longlong)puVar11 + 1);
        uVar12 = (ulonglong)(byte)uVar4 << (bVar7 & 0x3f) | uVar12;
        *(ulonglong *)(param_1 + 0xa3a0) = uVar12;
        if (bVar7 == 8) goto LAB_1400b1c84;
        *(ulonglong *)(param_1 + 0xa3a0) = (ulonglong)(bVar7 + 8) << 0x38 | uVar12;
      }
      goto LAB_1400b1bc1;
    }
    uVar12 = (ulonglong)(ushort)*puVar11;
    puVar11 = (uint *)((longlong)puVar11 + 2);
LAB_1400b1c84:
    iVar10 = 8;
    *(ulonglong *)(param_1 + 0xa3a0) = uVar12 & 0xffff;
switchD_1400b1af2_caseD_8:
    uVar6 = *(ulonglong *)(param_1 + 0xa3a0);
    if ((ulonglong)((longlong)puVar13 - (longlong)puVar11) < uVar6) goto LAB_1400b1bb1;
    puVar11 = (uint *)((longlong)puVar11 + uVar6);
  }
  bVar2 = local_res8 & 8;
  bVar7 = local_res8;
  while (bVar2 != 0) {
    iVar10 = 9;
switchD_1400b1af2_caseD_9:
    if (puVar11 == puVar13) goto LAB_1400b1bc1;
    uVar4 = *puVar11;
    puVar11 = (uint *)((longlong)puVar11 + 1);
    bVar2 = (byte)uVar4;
  }
  bVar2 = bVar7 & 0x10;
  while (bVar2 != 0) {
    iVar10 = 10;
switchD_1400b1af2_caseD_a:
    if (puVar11 == puVar13) goto LAB_1400b1bc1;
    uVar4 = *puVar11;
    puVar11 = (uint *)((longlong)puVar11 + 1);
    bVar2 = (byte)uVar4;
  }
  if ((bVar7 & 2) != 0) {
    *(undefined8 *)(param_1 + 0xa3a0) = 2;
    iVar10 = 0xb;
switchD_1400b1af2_caseD_b:
    uVar6 = *(ulonglong *)(param_1 + 0xa3a0);
    if ((ulonglong)((longlong)puVar13 - (longlong)puVar11) < uVar6) goto LAB_1400b1bb1;
    puVar11 = (uint *)((longlong)puVar11 + uVar6);
  }
  if ((bVar7 & 0xe0) != 0) {
    pcVar8 = "#gzip: bad encoding flags";
    goto LAB_1400b1c06;
  }
switchD_1400b1af2_caseD_c:
  uVar6 = local_78 - local_70;
  if (param_2 != (longlong *)0x0) {
    param_2[2] = local_78 - *param_2;
  }
  if (param_3 != (longlong *)0x0) {
    param_3[3] = (longlong)puVar11 - *param_3;
  }
  local_48 = *param_4;
  uStack_44 = param_4[1];
  uStack_40 = param_4[2];
  uStack_3c = param_4[3];
  local_58 = local_78;
  pcVar9 = (char *)FUN_1400aaf60(param_1 + 0x70,param_2,param_3,&local_48);
  if (param_2 != (longlong *)0x0) {
    local_78 = param_2[2] + *param_2;
  }
  if (param_3 != (longlong *)0x0) {
    puVar11 = (uint *)(param_3[3] + *param_3);
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar12 = local_78 - local_70;
    local_50 = uVar12 - uVar6;
    if (uVar12 < uVar6) {
      local_50 = 0;
      local_58 = 0;
    }
    local_80 = FUN_1400aa820(param_1 + 0x38,&local_58);
    iVar10 = (int)(uVar12 - uVar6);
    if (uVar12 < uVar6) {
      iVar10 = 0;
    }
    local_88 = local_88 + iVar10;
  }
  if ((uint *)pcVar9 == (uint *)0x0) {
switchD_1400b1af2_caseD_d:
    if ((longlong)puVar13 - (longlong)puVar11 < 4) {
      *(undefined8 *)(param_1 + 0xa3a0) = 0;
      iVar10 = 0xe;
switchD_1400b1af2_caseD_e:
      while (puVar11 != puVar13) {
        uVar6 = *(ulonglong *)(param_1 + 0xa3a0);
        uVar12 = uVar6 & 0xffffffffffffff;
        *(ulonglong *)(param_1 + 0xa3a0) = uVar12;
        bVar7 = (byte)(uVar6 >> 0x38);
        uVar4 = *puVar11;
        puVar11 = (uint *)((longlong)puVar11 + 1);
        uVar12 = (ulonglong)(byte)uVar4 << (bVar7 & 0x3f) | uVar12;
        *(ulonglong *)(param_1 + 0xa3a0) = uVar12;
        if (bVar7 == 0x18) {
          local_84 = (uint)uVar12;
          goto switchD_1400b1af2_caseD_f;
        }
        *(ulonglong *)(param_1 + 0xa3a0) = (ulonglong)(bVar7 + 8) << 0x38 | uVar12;
      }
    }
    else {
      local_84 = *puVar11;
      puVar11 = puVar11 + 1;
switchD_1400b1af2_caseD_f:
      if (3 < (longlong)puVar13 - (longlong)puVar11) {
        uVar6 = (ulonglong)*puVar11;
        puVar11 = puVar11 + 1;
LAB_1400b1f4b:
        if ((*(char *)(param_1 + 0x28) == '\0') &&
           ((local_80 != local_84 || (local_88 != (int)uVar6)))) {
          pcVar8 = "#gzip: bad checksum";
        }
        else {
          *(undefined4 *)(param_1 + 0x30) = 0;
        }
        goto LAB_1400b1c06;
      }
      *(undefined8 *)(param_1 + 0xa3a0) = 0;
      iVar10 = 0x10;
switchD_1400b1af2_caseD_10:
      while (puVar11 != puVar13) {
        uVar12 = *(ulonglong *)(param_1 + 0xa3a0);
        uVar6 = uVar12 & 0xffffffffffffff;
        *(ulonglong *)(param_1 + 0xa3a0) = uVar6;
        bVar7 = (byte)(uVar12 >> 0x38);
        uVar4 = *puVar11;
        puVar11 = (uint *)((longlong)puVar11 + 1);
        uVar6 = (ulonglong)(byte)uVar4 << (bVar7 & 0x3f) | uVar6;
        *(ulonglong *)(param_1 + 0xa3a0) = uVar6;
        if (bVar7 == 0x18) goto LAB_1400b1f4b;
        *(ulonglong *)(param_1 + 0xa3a0) = (ulonglong)(bVar7 + 8) << 0x38 | uVar6;
      }
    }
    goto LAB_1400b1bc1;
  }
  pcVar8 = pcVar9;
  if ((byte)*(uint *)pcVar9 != 0x24) goto LAB_1400b1c06;
  iVar10 = 0xc;
LAB_1400b1bd0:
  *(byte *)(param_1 + 0xa390) = local_res8;
  iVar5 = 0;
  if (bVar3) {
    iVar5 = iVar10;
  }
  *(uint *)(param_1 + 0xa394) = local_80;
  *(int *)(param_1 + 0x30) = iVar5;
  *(int *)(param_1 + 0xa398) = local_88;
  *(uint *)(param_1 + 0xa39c) = local_84;
  pcVar8 = pcVar9;
LAB_1400b1c06:
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[2] = local_78 - *param_2;
  }
  if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
    param_3[3] = (longlong)puVar11 - *param_3;
  }
  return (uint *)pcVar8;
}

