// Function: FUN_140364030
// Addr: 140364030
// Size: 539 bytes


void FUN_140364030(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  char *_Str2;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  uint *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar12 = param_2 - param_1 >> 5;
  lVar17 = param_2 - param_1 >> 6;
  if (0 < lVar17) {
    lVar18 = (longlong)(uVar12 - 1) >> 1;
    do {
      lVar17 = lVar17 + -1;
      puVar1 = (undefined8 *)(lVar17 * 0x20 + param_1);
      uVar6 = *puVar1;
      _Str2 = (char *)puVar1[1];
      puVar1 = (undefined8 *)(lVar17 * 0x20 + 0x10 + param_1);
      local_48 = *puVar1;
      uStack_40 = puVar1[1];
      lVar13 = lVar17;
      uVar7 = local_48;
      while (local_48 = uVar7, lVar13 < lVar18) {
        lVar15 = lVar13 * 2 + 2;
        lVar11 = lVar15 * 0x20;
        uVar3 = *(uint *)(lVar11 + -0x10 + param_1);
        uVar4 = *(uint *)(lVar11 + 0x10 + param_1);
        uVar5 = uVar3;
        if (uVar4 <= uVar3) {
          uVar5 = uVar4;
        }
        iVar9 = strncmp(*(char **)(lVar11 + 8 + param_1),*(char **)(lVar11 + -0x18 + param_1),
                        (ulonglong)uVar5);
        iVar14 = uVar4 - uVar3;
        if (iVar9 != 0) {
          iVar14 = iVar9;
        }
        lVar11 = lVar13 * 2 + 1;
        if (-1 < iVar14) {
          lVar11 = lVar15;
        }
        puVar1 = (undefined8 *)(lVar11 * 0x20 + param_1);
        uVar7 = puVar1[1];
        puVar2 = (undefined8 *)(lVar13 * 0x20 + param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        puVar1 = (undefined8 *)(lVar11 * 0x20 + 0x10 + param_1);
        uVar7 = puVar1[1];
        puVar2 = (undefined8 *)(lVar13 * 0x20 + 0x10 + param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        lVar13 = lVar11;
        uVar7 = local_48;
      }
      if ((lVar13 == lVar18) && ((uVar12 & 1) == 0)) {
        puVar2 = (undefined8 *)(uVar12 * 0x20 + -0x20 + param_1);
        uVar8 = puVar2[1];
        puVar1 = (undefined8 *)(lVar13 * 0x20 + param_1);
        *puVar1 = *puVar2;
        puVar1[1] = uVar8;
        puVar1 = (undefined8 *)(uVar12 * 0x20 + -0x10 + param_1);
        uVar8 = puVar1[1];
        puVar2 = (undefined8 *)(lVar13 * 0x20 + 0x10 + param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        lVar13 = uVar12 - 1;
      }
      while (lVar17 < lVar13) {
        lVar15 = lVar13 + -1 >> 1;
        lVar11 = lVar15 * 0x20;
        puVar10 = (uint *)(param_1 + 0x10 + lVar11);
        uVar3 = *puVar10;
        puVar16 = (uint *)&local_48;
        if (uVar3 <= (uint)uVar7) {
          puVar16 = puVar10;
        }
        iVar9 = strncmp(*(char **)(lVar11 + 8 + param_1),_Str2,(ulonglong)*puVar16);
        iVar14 = uVar3 - (uint)uVar7;
        if (iVar9 != 0) {
          iVar14 = iVar9;
        }
        if (-1 < iVar14) break;
        uVar8 = ((undefined8 *)(lVar11 + param_1))[1];
        puVar1 = (undefined8 *)(lVar13 * 0x20 + param_1);
        *puVar1 = *(undefined8 *)(lVar11 + param_1);
        puVar1[1] = uVar8;
        puVar1 = (undefined8 *)(lVar11 + 0x10 + param_1);
        uVar8 = puVar1[1];
        puVar2 = (undefined8 *)(lVar13 * 0x20 + 0x10 + param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        lVar13 = lVar15;
      }
      lVar13 = lVar13 * 0x20;
      *(undefined8 *)(lVar13 + param_1) = uVar6;
      *(undefined8 *)(param_1 + 0x18 + lVar13) = uStack_40;
      *(char **)(param_1 + 8 + lVar13) = _Str2;
      *(undefined8 *)(param_1 + 0x10 + lVar13) = uVar7;
    } while (0 < lVar17);
  }
  return;
}

