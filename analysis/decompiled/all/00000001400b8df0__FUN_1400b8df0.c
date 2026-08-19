// Function: FUN_1400b8df0
// Addr: 1400b8df0
// Size: 107 bytes


char * FUN_1400b8df0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  
  pcVar5 = (char *)0x0;
  bVar2 = false;
  pcVar4 = (char *)0x0;
  puVar10 = (uint *)pcVar5;
  puVar12 = (uint *)pcVar5;
  if ((param_2 != (longlong *)0x0) &&
     (lVar1 = *param_2, puVar10 = (uint *)0x0, puVar12 = (uint *)0x0, lVar1 != 0)) {
    puVar10 = (uint *)(param_2[3] + lVar1);
    puVar12 = (uint *)(param_2[2] + lVar1);
  }
  iVar9 = *(int *)(param_1 + 0x158);
  if (iVar9 == 0) {
    if (*(int *)(param_1 + 0x7c) != 8) {
      pcVar4 = "#png: bad chunk";
      goto code_r0x0001400b8f1b;
    }
    if (*(char *)(param_1 + 99) != '\0') {
      pcVar4 = "#png: unsupported PNG file";
      goto code_r0x0001400b8f1b;
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
LAB_1400b8e84:
    if ((longlong)puVar12 - (longlong)puVar10 < 4) {
      *(undefined8 *)(param_1 + 0xadd8) = 0;
      iVar9 = 2;
joined_r0x0001400b8eae:
      while (puVar10 != puVar12) {
        uVar11 = *(uint *)(param_1 + 0xadd8);
        uVar7 = *(ulonglong *)(param_1 + 0xadd8) & 0xffffffffffffff00;
        uVar8 = uVar11 & 0xff;
        *(ulonglong *)(param_1 + 0xadd8) = uVar7;
        uVar3 = *puVar10;
        puVar10 = (uint *)((longlong)puVar10 + 1);
        uVar7 = (ulonglong)(byte)uVar3 << (0x38U - (char)uVar11 & 0x3f) | uVar7;
        *(ulonglong *)(param_1 + 0xadd8) = uVar7;
        if (uVar8 == 0x18) {
          uVar11 = (uint)(uVar7 >> 0x20);
          goto code_r0x0001400b8f44;
        }
        *(ulonglong *)(param_1 + 0xadd8) = uVar8 + 8 | uVar7;
      }
    }
    else {
      uVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
code_r0x0001400b8f44:
      *(uint *)(param_1 + 0x90) = uVar11;
      if (uVar11 == 0) {
        pcVar4 = "#png: bad chunk";
        goto code_r0x0001400b8f1b;
      }
UNWIND_INFO_1400b8f42_UnwindCodes_9__UnwindOpCode:
      if (3 < (longlong)puVar12 - (longlong)puVar10) {
        uVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        *(uint *)(param_1 + 0x94) =
             uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
        *(undefined4 *)(param_1 + 0x158) = 0;
        goto code_r0x0001400b8f1b;
      }
      *(undefined8 *)(param_1 + 0xadd8) = 0;
      iVar9 = 4;
joined_r0x0001400b8f8e:
      while (puVar10 != puVar12) {
        uVar11 = *(uint *)(param_1 + 0xadd8);
        uVar7 = *(ulonglong *)(param_1 + 0xadd8) & 0xffffffffffffff00;
        uVar8 = uVar11 & 0xff;
        *(ulonglong *)(param_1 + 0xadd8) = uVar7;
        uVar3 = *puVar10;
        puVar10 = (uint *)((longlong)puVar10 + 1);
        uVar7 = (ulonglong)(byte)uVar3 << (0x38U - (char)uVar11 & 0x3f) | uVar7;
        *(ulonglong *)(param_1 + 0xadd8) = uVar7;
        if (uVar8 == 0x18) {
          *(int *)(param_1 + 0x94) = (int)(uVar7 >> 0x20);
          *(undefined4 *)(param_1 + 0x158) = 0;
          pcVar4 = pcVar5;
          goto code_r0x0001400b8f1b;
        }
        *(ulonglong *)(param_1 + 0xadd8) = uVar8 + 8 | uVar7;
      }
    }
    bVar2 = true;
    pcVar5 = "$base: short read";
  }
  else {
    if (iVar9 == 1) goto LAB_1400b8e84;
    if (iVar9 == 2) goto joined_r0x0001400b8eae;
    if (iVar9 == 3) goto UNWIND_INFO_1400b8f42_UnwindCodes_9__UnwindOpCode;
    if (iVar9 == 4) goto joined_r0x0001400b8f8e;
  }
  iVar6 = 0;
  if (bVar2) {
    iVar6 = iVar9;
  }
  *(int *)(param_1 + 0x158) = iVar6;
  pcVar4 = pcVar5;
code_r0x0001400b8f1b:
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[3] = (longlong)puVar10 - *param_2;
  }
  return pcVar4;
}

