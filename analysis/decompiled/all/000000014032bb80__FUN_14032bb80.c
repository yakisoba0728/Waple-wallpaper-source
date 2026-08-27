// Function: FUN_14032bb80
// Addr: 14032bb80
// Size: 984 bytes


int FUN_14032bb80(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  int local_78 [2];
  char *local_70 [4];
  ulonglong local_50;
  size_t local_48;
  size_t local_40;
  size_t local_38;
  
  lVar5 = *(longlong *)(param_1 + 0x1a0);
  uVar14 = 0;
  bVar6 = false;
  iVar4 = *(int *)(param_1 + 0x19c);
  local_78[0] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_70[0] = (char *)0x0;
  local_70[1] = (char *)0x0;
  local_70[2] = (char *)0x0;
  local_70[3] = (char *)0x0;
  uVar13 = uVar14;
  if (iVar4 < 1) {
LAB_14032bc98:
    bVar6 = false;
    if (0 < iVar4) goto LAB_14032bca5;
LAB_14032bd1d:
    bVar6 = false;
    iVar7 = 0;
    if (0 < iVar4) goto LAB_14032bd30;
LAB_14032bda1:
    bVar6 = false;
    iVar7 = 0;
    if (iVar4 < 1) goto LAB_14032be1d;
  }
  else {
    do {
      uVar15 = (uint)uVar13;
      if (bVar6) goto LAB_14032bc2f;
      uVar11 = uVar14;
      do {
        cVar3 = *(char *)(*(longlong *)(lVar5 + uVar13 * 0x18) + uVar11);
        uVar12 = uVar11 + 1;
        pcVar2 = "SLANT" + uVar11;
        if (cVar3 != *pcVar2) break;
        uVar11 = uVar12;
      } while (uVar12 != 6);
      if (cVar3 == *pcVar2) {
        bVar6 = true;
      }
      uVar15 = uVar15 + 1;
      uVar13 = (ulonglong)uVar15;
    } while ((int)uVar15 < iVar4);
    if (!bVar6) goto LAB_14032bc98;
LAB_14032bc2f:
    lVar1 = lVar5 + ((longlong)(int)uVar15 + -1) * 0x18;
    if ((((lVar1 == 0) || (*(char *)(lVar1 + 8) == '\0')) ||
        (bVar10 = **(char **)(lVar1 + 0x10) + 0xb7, 0x26 < bVar10)) ||
       ((0x4100000041U >> ((ulonglong)bVar10 & 0x3f) & 1) == 0)) goto LAB_14032bc98;
    *(undefined4 *)(param_1 + 0xc) = 1;
    local_70[2] = "Italic";
    if ((**(char **)(lVar1 + 0x10) + 0xb1U & 0xdf) == 0) {
      local_70[2] = "Oblique";
    }
    bVar6 = false;
LAB_14032bca5:
    do {
      uVar15 = (uint)uVar14;
      if (bVar6) goto LAB_14032bcd8;
      iVar7 = strcmp(*(char **)(lVar5 + (longlong)(int)uVar15 * 0x18),"WEIGHT_NAME");
      if (iVar7 == 0) {
        bVar6 = true;
      }
      uVar15 = uVar15 + 1;
      uVar14 = (ulonglong)uVar15;
    } while ((int)uVar15 < iVar4);
    if (!bVar6) goto LAB_14032bd1d;
LAB_14032bcd8:
    lVar1 = lVar5 + ((longlong)(int)uVar15 * 3 + -3) * 8;
    if (((lVar1 == 0) || (*(char *)(lVar1 + 8) == '\0')) ||
       ((**(char **)(lVar1 + 0x10) + 0xbeU & 0xdf) != 0)) goto LAB_14032bd1d;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
    bVar6 = false;
    local_70[1] = "Bold";
    iVar7 = 0;
LAB_14032bd30:
    do {
      if (bVar6) goto LAB_14032bd63;
      iVar8 = strcmp(*(char **)(lVar5 + (longlong)iVar7 * 0x18),"SETWIDTH_NAME");
      if (iVar8 == 0) {
        bVar6 = true;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
    if (!bVar6) goto LAB_14032bda1;
LAB_14032bd63:
    lVar1 = lVar5 + ((longlong)iVar7 * 3 + -3) * 8;
    if ((lVar1 == 0) || (*(char *)(lVar1 + 8) == '\0')) goto LAB_14032bda1;
    cVar3 = **(char **)(lVar1 + 0x10);
    if ((cVar3 == '\0') || ((cVar3 == 'N' || (cVar3 == 'n')))) goto LAB_14032bda1;
    bVar6 = false;
    iVar7 = 0;
    local_70[3] = *(char **)(lVar1 + 0x10);
  }
  do {
    if (bVar6) goto LAB_14032bde4;
    iVar8 = strcmp(*(char **)(lVar5 + (longlong)iVar7 * 0x18),"ADD_STYLE_NAME");
    if (iVar8 == 0) {
      bVar6 = true;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < iVar4);
  if (bVar6) {
LAB_14032bde4:
    lVar5 = lVar5 + ((longlong)iVar7 * 3 + -3) * 8;
    if ((lVar5 != 0) && (*(char *)(lVar5 + 8) != '\0')) {
      cVar3 = **(char **)(lVar5 + 0x10);
      if ((cVar3 != '\0') && ((cVar3 != 'N' && (cVar3 != 'n')))) {
        local_70[0] = *(char **)(lVar5 + 0x10);
      }
    }
  }
LAB_14032be1d:
  uVar14 = 0;
  local_50 = 0;
  uVar13 = uVar14;
  if (local_70[0] != (char *)0x0) {
    local_50 = strlen(local_70[0]);
    uVar13 = local_50 + 1;
  }
  local_48 = 0;
  if (local_70[1] != (char *)0x0) {
    local_48 = strlen(local_70[1]);
    uVar13 = uVar13 + 1 + local_48;
  }
  local_40 = 0;
  if (local_70[2] != (char *)0x0) {
    local_40 = strlen(local_70[2]);
    uVar13 = uVar13 + 1 + local_40;
  }
  local_38 = 0;
  if (local_70[3] != (char *)0x0) {
    local_38 = strlen(local_70[3]);
    uVar13 = uVar13 + 1 + local_38;
  }
  if (uVar13 == 0) {
    local_50 = 7;
    local_70[0] = "Regular";
    uVar13 = 8;
  }
  puVar9 = (undefined1 *)FUN_1402f7fa0(*(undefined8 *)(param_1 + 0x98),uVar13 & 0xffffffff,local_78)
  ;
  *(undefined1 **)(param_1 + 0x20) = puVar9;
  uVar13 = uVar14;
  if (local_78[0] == 0) {
    do {
      pcVar2 = local_70[uVar13];
      if (pcVar2 != (char *)0x0) {
        uVar11 = (&local_50)[uVar13];
        if (puVar9 != *(undefined1 **)(param_1 + 0x20)) {
          *puVar9 = 0x20;
          puVar9 = puVar9 + 1;
        }
        FUN_1404210f0(puVar9,pcVar2,uVar11);
        if (((uVar13 == 0) || (uVar13 == 3)) && (uVar12 = uVar14, uVar11 != 0)) {
          do {
            if (puVar9[uVar12] == ' ') {
              puVar9[uVar12] = 0x2d;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar11);
        }
        puVar9 = puVar9 + uVar11;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < 4);
    *puVar9 = 0;
  }
  return local_78[0];
}

