// Function: FUN_1400b5d00
// Addr: 1400b5d00
// Size: 1199 bytes


/* WARNING: Removing unreachable block (ram,0x0001400b60c7) */

char * FUN_1400b5d00(longlong param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  ulonglong uVar7;
  uint uVar8;
  byte bVar9;
  ushort uVar10;
  uint uVar11;
  ulonglong uVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  uint local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar13 = (char *)0x0;
  local_res8 = 0;
  local_res10 = 0;
  local_res18 = 0;
  if ((param_2 != (longlong *)0x0) && (lVar2 = *param_2, lVar2 != 0)) {
    local_res10 = param_2[2] + lVar2;
    local_res18 = lVar2;
  }
  puVar16 = (uint *)0x0;
  puVar17 = (uint *)0x0;
  if ((param_3 != (longlong *)0x0) && (lVar2 = *param_3, lVar2 != 0)) {
    puVar16 = (uint *)(param_3[3] + lVar2);
    puVar17 = (uint *)(param_3[2] + lVar2);
  }
  iVar15 = *(int *)(param_1 + 0x3c);
  if (iVar15 == 0) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      pcVar14 = "#base: bad call sequence";
      goto LAB_1400b6207;
    }
    if (*(char *)(param_1 + 0x2c) != '\0') {
LAB_1400b5fe8:
      *(undefined1 *)(param_1 + 0x29) = 1;
      goto switchD_1400b5dcd_caseD_5;
    }
    if (*(char *)(param_1 + 0x2b) == '\0') goto switchD_1400b5dcd_caseD_1;
    if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x34)) goto LAB_1400b5fe8;
    if (*(char *)(param_1 + 0x2a) != '\0') {
      pcVar14 = "#zlib: incorrect dictionary";
      goto LAB_1400b6207;
    }
    goto LAB_1400b5fc3;
  }
  local_res8 = *(uint *)(param_1 + 0xa3d0);
  switch(iVar15) {
  case 1:
switchD_1400b5dcd_caseD_1:
    if ((longlong)puVar17 - (longlong)puVar16 < 2) {
      *(undefined8 *)(param_1 + 0xa3d8) = 0;
      iVar15 = 2;
      goto switchD_1400b5dcd_caseD_2;
    }
    uVar10 = (ushort)*puVar16 >> 8 | (ushort)*puVar16 << 8;
    puVar16 = (uint *)((longlong)puVar16 + 2);
LAB_1400b5eaf:
    if ((uVar10 & 0xf00) != 0x800) {
      pcVar14 = "#zlib: bad compression method";
      goto LAB_1400b6207;
    }
    if (7 < (byte)(uVar10 >> 0xc)) {
      pcVar14 = "#zlib: bad compression window size";
      goto LAB_1400b6207;
    }
    if ((uint)uVar10 != (((uint)uVar10 - uVar10 / 0x1f >> 1) + uVar10 / 0x1f >> 4) * 0x1f) {
      pcVar14 = "#zlib: bad parity check";
      goto LAB_1400b6207;
    }
    bVar9 = (byte)uVar10 >> 5 & 1;
    *(byte *)(param_1 + 0x2b) = bVar9;
    if (bVar9 == 0) {
      if (*(char *)(param_1 + 0x2a) != '\0') {
        pcVar14 = "#zlib: incorrect dictionary";
        goto LAB_1400b6207;
      }
      goto LAB_1400b5fe8;
    }
    *(undefined4 *)(param_1 + 0x30) = 1;
    goto LAB_1400b5f30;
  case 2:
switchD_1400b5dcd_caseD_2:
    while (puVar16 != puVar17) {
      uVar8 = *(uint *)(param_1 + 0xa3d8);
      uVar12 = *(ulonglong *)(param_1 + 0xa3d8) & 0xffffffffffffff00;
      uVar11 = uVar8 & 0xff;
      *(ulonglong *)(param_1 + 0xa3d8) = uVar12;
      uVar4 = *puVar16;
      puVar16 = (uint *)((longlong)puVar16 + 1);
      uVar12 = (ulonglong)(byte)uVar4 << (0x38U - (char)uVar8 & 0x3f) | uVar12;
      *(ulonglong *)(param_1 + 0xa3d8) = uVar12;
      if (uVar11 == 8) {
        uVar10 = (ushort)(uVar12 >> 0x30);
        goto LAB_1400b5eaf;
      }
      *(ulonglong *)(param_1 + 0xa3d8) = uVar11 + 8 | uVar12;
    }
LAB_1400b5e9f:
    pcVar14 = "$base: short read";
    break;
  case 3:
LAB_1400b5f30:
    if (3 < (longlong)puVar17 - (longlong)puVar16) {
      uVar8 = *puVar16;
      puVar16 = puVar16 + 1;
      uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
LAB_1400b5fc0:
      *(uint *)(param_1 + 0x34) = uVar8;
LAB_1400b5fc3:
      pcVar14 = "@zlib: dictionary required";
LAB_1400b5fca:
      *(undefined4 *)(param_1 + 0x3c) = 0;
      goto LAB_1400b6207;
    }
    *(undefined8 *)(param_1 + 0xa3d8) = 0;
    iVar15 = 4;
joined_r0x0001400b5f5f:
    while (puVar16 != puVar17) {
      uVar8 = *(uint *)(param_1 + 0xa3d8);
      uVar12 = *(ulonglong *)(param_1 + 0xa3d8) & 0xffffffffffffff00;
      uVar11 = uVar8 & 0xff;
      *(ulonglong *)(param_1 + 0xa3d8) = uVar12;
      uVar4 = *puVar16;
      puVar16 = (uint *)((longlong)puVar16 + 1);
      uVar12 = (ulonglong)(byte)uVar4 << (0x38U - (char)uVar8 & 0x3f) | uVar12;
      *(ulonglong *)(param_1 + 0xa3d8) = uVar12;
      if (uVar11 == 0x18) {
        uVar8 = (uint)(uVar12 >> 0x20);
        goto LAB_1400b5fc0;
      }
      *(ulonglong *)(param_1 + 0xa3d8) = uVar11 + 8 | uVar12;
    }
    pcVar14 = "$base: short read";
    break;
  case 4:
    goto joined_r0x0001400b5f5f;
  case 5:
switchD_1400b5dcd_caseD_5:
    uVar12 = local_res10 - local_res18;
    if (param_2 != (longlong *)0x0) {
      param_2[2] = local_res10 - *param_2;
    }
    if (param_3 != (longlong *)0x0) {
      param_3[3] = (longlong)puVar16 - *param_3;
    }
    local_48 = *param_4;
    uStack_44 = param_4[1];
    uStack_40 = param_4[2];
    uStack_3c = param_4[3];
    local_58 = local_res10;
    pcVar14 = (char *)FUN_1400ab030(param_1 + 0xb0,param_2,param_3,&local_48);
    if (param_2 != (longlong *)0x0) {
      local_res10 = param_2[2] + *param_2;
    }
    if (param_3 != (longlong *)0x0) {
      puVar16 = (uint *)(param_3[3] + *param_3);
    }
    if ((*(char *)(param_1 + 0x2d) == '\0') && (*(char *)(param_1 + 0x2c) == '\0')) {
      piVar1 = (int *)(param_1 + 0x40);
      local_res8 = 0;
      uVar7 = local_res10 - local_res18;
      if (uVar7 < uVar12) {
        local_58 = 0;
      }
      local_50 = uVar7 - uVar12;
      if (uVar7 < uVar12) {
        local_50 = 0;
      }
      if ((piVar1 != (int *)0x0) && (*piVar1 == 0x3ccb6c71)) {
        if (*(char *)(param_1 + 0x6c) == '\0') {
          *(undefined1 *)(param_1 + 0x6c) = 1;
          *(undefined4 *)(param_1 + 0x68) = 1;
          lVar2 = cpuid_Version_info(1);
          pcVar6 = FUN_1400a3a00;
          if ((*(uint *)(lVar2 + 0xc) & 0x900002) != 0x900002) {
            pcVar6 = *(code **)(param_1 + 0x70);
          }
          *(code **)(param_1 + 0x70) = pcVar6;
        }
        (**(code **)(param_1 + 0x70))(piVar1,&local_58);
        local_res8 = *(uint *)(param_1 + 0x68);
      }
    }
    if (pcVar14 == (char *)0x0) {
      pcVar14 = pcVar13;
      if (*(char *)(param_1 + 0x2c) == '\0') goto switchD_1400b5dcd_caseD_6;
      goto LAB_1400b5fca;
    }
    if (*pcVar14 != '$') goto LAB_1400b6207;
    iVar15 = 5;
    break;
  case 6:
switchD_1400b5dcd_caseD_6:
    if ((longlong)puVar17 - (longlong)puVar16 < 4) {
      *(undefined8 *)(param_1 + 0xa3d8) = 0;
      iVar15 = 7;
      goto switchD_1400b5dcd_caseD_7;
    }
    uVar8 = *puVar16;
    puVar16 = puVar16 + 1;
    uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
UNWIND_INFO_1400b6153_UnwindCodes_50__UnwindOpCode:
    pcVar14 = pcVar13;
    if ((*(char *)(param_1 + 0x2d) == '\0') && (local_res8 != uVar8)) {
      pcVar14 = "#zlib: bad checksum";
      goto LAB_1400b6207;
    }
    goto LAB_1400b5fca;
  case 7:
switchD_1400b5dcd_caseD_7:
    if (puVar16 == puVar17) goto LAB_1400b5e9f;
    do {
      uVar8 = *(uint *)(param_1 + 0xa3d8);
      uVar12 = *(ulonglong *)(param_1 + 0xa3d8) & 0xffffffffffffff00;
      uVar11 = uVar8 & 0xff;
      *(ulonglong *)(param_1 + 0xa3d8) = uVar12;
      uVar4 = *puVar16;
      puVar16 = (uint *)((longlong)puVar16 + 1);
      uVar12 = (ulonglong)(byte)uVar4 << (0x38U - (char)uVar8 & 0x3f) | uVar12;
      *(ulonglong *)(param_1 + 0xa3d8) = uVar12;
      if (uVar11 == 0x18) {
        uVar8 = (uint)(uVar12 >> 0x20);
        goto UNWIND_INFO_1400b6153_UnwindCodes_50__UnwindOpCode;
      }
      *(ulonglong *)(param_1 + 0xa3d8) = uVar11 + 8 | uVar12;
    } while (puVar16 != puVar17);
    pcVar14 = "$base: short read";
    break;
  default:
    bVar3 = false;
    pcVar14 = pcVar13;
    goto LAB_1400b61f4;
  }
  bVar3 = true;
LAB_1400b61f4:
  *(uint *)(param_1 + 0xa3d0) = local_res8;
  iVar5 = 0;
  if (bVar3) {
    iVar5 = iVar15;
  }
  *(int *)(param_1 + 0x3c) = iVar5;
LAB_1400b6207:
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[2] = local_res10 - *param_2;
  }
  if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
    param_3[3] = (longlong)puVar16 - *param_3;
  }
  return pcVar14;
}

