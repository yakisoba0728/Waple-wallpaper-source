// Function: FUN_1400b7e10
// Addr: 1400b7e10
// Size: 1018 bytes


/* WARNING: Removing unreachable block (ram,0x0001400b81a1) */
/* WARNING: Removing unreachable block (ram,0x0001400b8175) */
/* WARNING: Removing unreachable block (ram,0x0001400b8149) */
/* WARNING: Removing unreachable block (ram,0x0001400b8123) */

char * FUN_1400b7e10(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  code *pcVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  code *pcVar12;
  uint *puVar13;
  undefined4 uVar14;
  uint uVar15;
  char *pcVar16;
  uint *puVar17;
  
  pcVar16 = (char *)0x0;
  puVar17 = (uint *)0x0;
  puVar13 = (uint *)0x0;
  if ((param_2 != (longlong *)0x0) && (lVar7 = *param_2, lVar7 != 0)) {
    puVar17 = (uint *)(param_2[3] + lVar7);
    puVar13 = (uint *)(param_2[2] + lVar7);
  }
  uVar14 = *(undefined4 *)(param_1 + 0x150);
  switch(uVar14) {
  case 0:
  case 1:
    if ((longlong)puVar13 - (longlong)puVar17 < 4) {
      *(undefined8 *)(param_1 + 0xadc8) = 0;
      uVar14 = 2;
      goto switchD_1400b7e69_caseD_2;
    }
    uVar11 = *puVar17;
    puVar17 = puVar17 + 1;
    uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
LAB_1400b7f0a:
    if (uVar11 - 1 < 0x7fffffff) {
      if (0xffffff < uVar11) {
        pcVar16 = "#png: unsupported PNG file";
        goto LAB_1400b81e3;
      }
      *(uint *)(param_1 + 0x28) = uVar11;
      goto switchD_1400b7e69_caseD_3;
    }
    goto LAB_1400b8005;
  case 2:
switchD_1400b7e69_caseD_2:
    if (puVar17 == puVar13) goto LAB_1400b8085;
    do {
      uVar11 = *(uint *)(param_1 + 0xadc8);
      uVar6 = *(ulonglong *)(param_1 + 0xadc8) & 0xffffffffffffff00;
      uVar15 = uVar11 & 0xff;
      *(ulonglong *)(param_1 + 0xadc8) = uVar6;
      uVar4 = *puVar17;
      puVar17 = (uint *)((longlong)puVar17 + 1);
      uVar6 = (ulonglong)(byte)uVar4 << (0x38U - (char)uVar11 & 0x3f) | uVar6;
      *(ulonglong *)(param_1 + 0xadc8) = uVar6;
      if (uVar15 == 0x18) {
        uVar11 = (uint)(uVar6 >> 0x20);
        goto LAB_1400b7f0a;
      }
      *(ulonglong *)(param_1 + 0xadc8) = uVar15 + 8 | uVar6;
    } while (puVar17 != puVar13);
    bVar3 = true;
    pcVar16 = "$base: short read";
    break;
  case 3:
switchD_1400b7e69_caseD_3:
    if ((longlong)puVar13 - (longlong)puVar17 < 4) {
      *(undefined8 *)(param_1 + 0xadc8) = 0;
      uVar14 = 4;
      goto switchD_1400b7e69_caseD_4;
    }
    uVar11 = *puVar17;
    puVar17 = puVar17 + 1;
    uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
LAB_1400b7fca:
    if (0x7ffffffe < uVar11 - 1) goto LAB_1400b8005;
    if (0xffffff < uVar11) {
      pcVar16 = "#png: unsupported PNG file";
      goto LAB_1400b81e3;
    }
    *(uint *)(param_1 + 0x2c) = uVar11;
    uVar14 = 5;
  case 5:
    if (puVar17 != puVar13) {
      uVar11 = *puVar17;
      puVar17 = (uint *)((longlong)puVar17 + 1);
      if (0x10 < (byte)uVar11) {
LAB_1400b8005:
        pcVar16 = "#png: bad header";
        goto LAB_1400b81e3;
      }
      *(byte *)(param_1 + 0x60) = (byte)uVar11;
      uVar14 = 6;
switchD_1400b7e69_caseD_6:
      if (puVar17 == puVar13) goto LAB_1400b8085;
      bVar1 = (byte)*puVar17;
      puVar17 = (uint *)((longlong)puVar17 + 1);
      if ((6 < bVar1) || ((0x5dU >> (bVar1 & 0x1f) & 1) == 0)) goto LAB_1400b8005;
      *(byte *)(param_1 + 0x61) = bVar1;
      uVar14 = 7;
switchD_1400b7e69_caseD_7:
      if (puVar17 == puVar13) goto LAB_1400b8085;
      uVar11 = *puVar17;
      puVar17 = (uint *)((longlong)puVar17 + 1);
      if ((byte)uVar11 != 0) {
        pcVar16 = "#png: unsupported PNG compression method";
        goto LAB_1400b81e3;
      }
      uVar14 = 8;
switchD_1400b7e69_caseD_8:
      if (puVar17 == puVar13) goto LAB_1400b8085;
      uVar11 = *puVar17;
      puVar17 = (uint *)((longlong)puVar17 + 1);
      if ((byte)uVar11 != 0) {
        pcVar16 = "#png: bad header";
        goto LAB_1400b81e3;
      }
      uVar14 = 9;
switchD_1400b7e69_caseD_9:
      if (puVar17 == puVar13) goto LAB_1400b8085;
      uVar11 = *puVar17;
      puVar17 = (uint *)((longlong)puVar17 + 1);
      uVar5 = 0;
      if ((byte)uVar11 != 0) {
        if ((byte)uVar11 != 1) goto LAB_1400b8005;
        *(code **)(param_1 + 0x198) = FUN_1400bd3f0;
        uVar5 = 1;
      }
      *(undefined1 *)(param_1 + 99) = uVar5;
      *(undefined1 *)(param_1 + 0x62) = 0;
      FUN_1400b8240(param_1);
      cVar2 = *(char *)(param_1 + 0x62);
      if (cVar2 == '\0') {
        pcVar16 = "#png: bad header";
        goto LAB_1400b81e3;
      }
      lVar7 = FUN_1400b83e0(param_1,*(undefined4 *)(param_1 + 0x28));
      *(ulonglong *)(param_1 + 0x48) = (lVar7 + 1) * (ulonglong)*(uint *)(param_1 + 0x2c);
      if (cVar2 == '\x03') {
        *(code **)(param_1 + 0x130) = FUN_1400b6200;
        *(code **)(param_1 + 0x138) = FUN_1400b63e0;
        lVar7 = cpuid_Version_info(1);
        uVar11 = *(uint *)(lVar7 + 0xc);
        pcVar8 = FUN_1400b6820;
        pcVar12 = FUN_1400b6e10;
LAB_1400b81b1:
        if ((uVar11 & 0x900002) == 0x900002) {
          pcVar8 = pcVar12;
        }
        *(code **)(param_1 + 0x140) = pcVar8;
      }
      else if (cVar2 == '\x04') {
        lVar7 = cpuid_Version_info(1);
        puVar9 = &LAB_1400b62d0;
        if ((*(uint *)(lVar7 + 0xc) & 0x900002) == 0x900002) {
          puVar9 = &LAB_1400b6c00;
        }
        *(undefined1 **)(param_1 + 0x130) = puVar9;
        lVar7 = cpuid_Version_info(1);
        pcVar8 = FUN_1400b6620;
        if ((*(uint *)(lVar7 + 0xc) & 0x900002) == 0x900002) {
          pcVar8 = (code *)&LAB_1400b6c80;
        }
        *(code **)(param_1 + 0x138) = pcVar8;
        lVar7 = cpuid_Version_info(1);
        uVar11 = *(uint *)(lVar7 + 0xc);
        pcVar8 = FUN_1400b69e0;
        pcVar12 = FUN_1400b7180;
        goto LAB_1400b81b1;
      }
      *(int *)(param_1 + 0x150) = (int)pcVar16;
      goto LAB_1400b81e3;
    }
LAB_1400b8085:
    bVar3 = true;
    pcVar16 = "$base: short read";
    break;
  case 4:
switchD_1400b7e69_caseD_4:
    if (puVar17 != puVar13) {
      do {
        uVar11 = *(uint *)(param_1 + 0xadc8);
        uVar6 = *(ulonglong *)(param_1 + 0xadc8) & 0xffffffffffffff00;
        uVar15 = uVar11 & 0xff;
        *(ulonglong *)(param_1 + 0xadc8) = uVar6;
        uVar4 = *puVar17;
        puVar17 = (uint *)((longlong)puVar17 + 1);
        uVar6 = (ulonglong)(byte)uVar4 << (0x38U - (char)uVar11 & 0x3f) | uVar6;
        *(ulonglong *)(param_1 + 0xadc8) = uVar6;
        if (uVar15 == 0x18) {
          uVar11 = (uint)(uVar6 >> 0x20);
          goto LAB_1400b7fca;
        }
        *(ulonglong *)(param_1 + 0xadc8) = uVar15 + 8 | uVar6;
      } while (puVar17 != puVar13);
      bVar3 = true;
      pcVar16 = "$base: short read";
      break;
    }
    goto LAB_1400b8085;
  case 6:
    goto switchD_1400b7e69_caseD_6;
  case 7:
    goto switchD_1400b7e69_caseD_7;
  case 8:
    goto switchD_1400b7e69_caseD_8;
  case 9:
    goto switchD_1400b7e69_caseD_9;
  default:
    bVar3 = false;
  }
  uVar10 = 0;
  if (bVar3) {
    uVar10 = uVar14;
  }
  *(undefined4 *)(param_1 + 0x150) = uVar10;
LAB_1400b81e3:
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[3] = (longlong)puVar17 - *param_2;
  }
  return pcVar16;
}

