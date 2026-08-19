// Function: FUN_14032bc50
// Addr: 14032bc50
// Size: 691 bytes


ulonglong FUN_14032bc50(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  byte bVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint local_78 [2];
  char *local_70 [4];
  longlong local_50 [5];
  
  lVar5 = *(longlong *)(param_1 + 0x1a0);
  uVar14 = 0;
  bVar6 = false;
  iVar4 = *(int *)(param_1 + 0x19c);
  local_78[0] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_70[0] = (char *)0x0;
  local_70[1] = (undefined1 *)0x0;
  local_70[2] = (char *)0x0;
  local_70[3] = (char *)0x0;
  uVar9 = uVar14;
  if (iVar4 < 1) {
LAB_14032bd68:
    bVar6 = false;
    if (0 < iVar4) goto LAB_14032bd75;
LAB_14032bded:
    bVar6 = false;
    iVar7 = 0;
    if (0 < iVar4) goto LAB_14032be00;
LAB_14032be71:
    bVar6 = false;
    iVar7 = 0;
    if (iVar4 < 1) goto LAB_14032beed;
  }
  else {
    do {
      uVar15 = (uint)uVar9;
      if (bVar6) goto LAB_14032bcff;
      uVar12 = uVar14;
      do {
        cVar3 = *(char *)(*(longlong *)(lVar5 + uVar9 * 0x18) + uVar12);
        uVar13 = uVar12 + 1;
        pcVar2 = "SLANT" + uVar12;
        if (cVar3 != *pcVar2) break;
        uVar12 = uVar13;
      } while (uVar13 != 6);
      if (cVar3 == *pcVar2) {
        bVar6 = true;
      }
      uVar15 = uVar15 + 1;
      uVar9 = (ulonglong)uVar15;
    } while ((int)uVar15 < iVar4);
    if (!bVar6) goto LAB_14032bd68;
LAB_14032bcff:
    lVar1 = lVar5 + ((longlong)(int)uVar15 + -1) * 0x18;
    if ((((lVar1 == 0) || (*(char *)(lVar1 + 8) == '\0')) ||
        (bVar11 = **(char **)(lVar1 + 0x10) + 0xb7, 0x26 < bVar11)) ||
       ((0x4100000041U >> ((ulonglong)bVar11 & 0x3f) & 1) == 0)) goto LAB_14032bd68;
    *(undefined4 *)(param_1 + 0xc) = 1;
    local_70[2] = "Italic";
    if ((**(char **)(lVar1 + 0x10) + 0xb1U & 0xdf) == 0) {
      local_70[2] = "Oblique";
    }
    bVar6 = false;
LAB_14032bd75:
    do {
      uVar15 = (uint)uVar14;
      if (bVar6) goto LAB_14032bda8;
      iVar7 = FUN_140421e50(*(undefined8 *)(lVar5 + (longlong)(int)uVar15 * 0x18),"WEIGHT_NAME");
      if (iVar7 == 0) {
        bVar6 = true;
      }
      uVar15 = uVar15 + 1;
      uVar14 = (ulonglong)uVar15;
    } while ((int)uVar15 < iVar4);
    if (!bVar6) goto LAB_14032bded;
LAB_14032bda8:
    lVar1 = lVar5 + ((longlong)(int)uVar15 * 3 + -3) * 8;
    if (((lVar1 == 0) || (*(char *)(lVar1 + 8) == '\0')) ||
       ((**(char **)(lVar1 + 0x10) + 0xbeU & 0xdf) != 0)) goto LAB_14032bded;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
    bVar6 = false;
    local_70[1] = "Bold";
    iVar7 = 0;
LAB_14032be00:
    do {
      if (bVar6) goto LAB_14032be33;
      iVar8 = FUN_140421e50(*(undefined8 *)(lVar5 + (longlong)iVar7 * 0x18),"SETWIDTH_NAME");
      if (iVar8 == 0) {
        bVar6 = true;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
    if (!bVar6) goto LAB_14032be71;
LAB_14032be33:
    lVar1 = lVar5 + ((longlong)iVar7 * 3 + -3) * 8;
    if ((lVar1 == 0) || (*(char *)(lVar1 + 8) == '\0')) goto LAB_14032be71;
    cVar3 = **(char **)(lVar1 + 0x10);
    if ((cVar3 == '\0') || ((cVar3 == 'N' || (cVar3 == 'n')))) goto LAB_14032be71;
    bVar6 = false;
    iVar7 = 0;
    local_70[3] = *(char **)(lVar1 + 0x10);
  }
  do {
    if (bVar6) goto LAB_14032beb4;
    iVar8 = FUN_140421e50(*(undefined8 *)(lVar5 + (longlong)iVar7 * 0x18),"ADD_STYLE_NAME");
    if (iVar8 == 0) {
      bVar6 = true;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < iVar4);
  if (bVar6) {
LAB_14032beb4:
    lVar5 = lVar5 + ((longlong)iVar7 * 3 + -3) * 8;
    if ((lVar5 != 0) && (*(char *)(lVar5 + 8) != '\0')) {
      cVar3 = **(char **)(lVar5 + 0x10);
      if ((cVar3 != '\0') && ((cVar3 != 'N' && (cVar3 != 'n')))) {
        local_70[0] = *(char **)(lVar5 + 0x10);
      }
    }
  }
LAB_14032beed:
  uVar9 = 0;
  local_50[0] = 0;
  if (local_70[0] != (char *)0x0) {
    uVar9 = func_0x000140421ed0();
    return uVar9;
  }
  local_50[1] = 0;
  if (local_70[1] == (undefined1 *)0x0) {
    local_50[2] = 0;
    if (local_70[2] != (char *)0x0) {
      uVar9 = func_0x000140421ed0();
      return uVar9;
    }
    local_50[3] = 0;
    uVar14 = uVar9;
    if (local_70[3] != (char *)0x0) {
      local_50[3] = func_0x000140421ed0();
      uVar14 = local_50[3] + 1;
    }
    if (uVar14 == 0) {
      local_50[0] = 7;
      local_70[0] = "Regular";
      uVar14 = 8;
    }
    puVar10 = (undefined1 *)
              FUN_1402f8070(*(undefined8 *)(param_1 + 0x98),uVar14 & 0xffffffff,local_78);
    *(undefined1 **)(param_1 + 0x20) = puVar10;
    if (local_78[0] == 0) {
      do {
        pcVar2 = local_70[uVar9];
        if (pcVar2 != (char *)0x0) {
          lVar5 = local_50[uVar9];
          if (puVar10 != *(undefined1 **)(param_1 + 0x20)) {
            *puVar10 = 0x20;
            puVar10 = puVar10 + 1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(puVar10,pcVar2,lVar5);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < 4);
      *puVar10 = 0;
    }
    return (ulonglong)local_78[0];
  }
  uVar9 = func_0x000140421ed0();
  return uVar9;
}

