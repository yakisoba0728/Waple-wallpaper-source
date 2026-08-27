// Function: FUN_14032dcf0
// Addr: 14032dcf0
// Size: 840 bytes


int FUN_14032dcf0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  int *piVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  int local_78 [2];
  char *local_70 [4];
  ulonglong local_50;
  size_t local_48;
  size_t local_40;
  size_t local_38;
  
  lVar3 = *(longlong *)(param_1 + 0xe8);
  uVar14 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  local_78[0] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_70[0] = (char *)0x0;
  local_70[1] = (char *)0x0;
  local_70[2] = (char *)0x0;
  local_70[3] = (char *)0x0;
  if (((lVar3 == 0) || (*(int *)(lVar3 + 0x50) == 0)) || (s_SLANT_14043ff20[0] == '\0')) {
    if (lVar3 == 0) goto LAB_14032df0f;
  }
  else {
    plVar8 = (longlong *)FUN_1402f7910("SLANT",*(undefined8 *)(lVar3 + 0x70));
    if ((((plVar8 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(lVar3 + 0x58) + *plVar8 * 0x18, lVar1 != 0)) &&
        ((*(int *)(lVar1 + 8) == 1 &&
         ((*(char **)(lVar1 + 0x10) != (char *)0x0 &&
          (bVar7 = **(char **)(lVar1 + 0x10) + 0xb7, bVar7 < 0x27)))))) &&
       ((0x4100000041U >> ((ulonglong)bVar7 & 0x3f) & 1) != 0)) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
      local_70[2] = "Italic";
      if ((**(char **)(lVar1 + 0x10) + 0xb1U & 0xdf) == 0) {
        local_70[2] = "Oblique";
      }
    }
  }
  puVar13 = (undefined8 *)(lVar3 + 0x70);
  piVar11 = (int *)(lVar3 + 0x50);
  if ((*piVar11 == 0) || (s_WEIGHT_NAME_14043ff30[0] == '\0')) {
    if (lVar3 == 0) goto LAB_14032df0f;
  }
  else {
    plVar8 = (longlong *)FUN_1402f7910("WEIGHT_NAME",*puVar13);
    if ((((plVar8 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(lVar3 + 0x58) + *plVar8 * 0x18, lVar1 != 0)) &&
        (*(int *)(lVar1 + 8) == 1)) &&
       ((*(char **)(lVar1 + 0x10) != (char *)0x0 &&
        ((**(char **)(lVar1 + 0x10) + 0xbeU & 0xdf) == 0)))) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
      local_70[1] = "Bold";
    }
  }
  if ((*piVar11 == 0) || (s_SETWIDTH_NAME_14043ff40[0] == '\0')) {
    if (lVar3 == 0) goto LAB_14032df0f;
  }
  else {
    plVar8 = (longlong *)FUN_1402f7910("SETWIDTH_NAME",*puVar13);
    if ((((plVar8 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(lVar3 + 0x58) + *plVar8 * 0x18, lVar1 != 0)) &&
        (*(int *)(lVar1 + 8) == 1)) &&
       (((pcVar5 = *(char **)(lVar1 + 0x10), pcVar5 != (char *)0x0 &&
         (cVar2 = *pcVar5, cVar2 != '\0')) && ((cVar2 != 'N' && (cVar2 != 'n')))))) {
      local_70[3] = pcVar5;
    }
  }
  if (((*piVar11 != 0) && (s_ADD_STYLE_NAME_14043ff50[0] != '\0')) &&
     (((plVar8 = (longlong *)FUN_1402f7910("ADD_STYLE_NAME",*puVar13), plVar8 != (longlong *)0x0 &&
       (((lVar3 = *(longlong *)(lVar3 + 0x58) + *plVar8 * 0x18, lVar3 != 0 &&
         (*(int *)(lVar3 + 8) == 1)) && (pcVar5 = *(char **)(lVar3 + 0x10), pcVar5 != (char *)0x0)))
       ) && (((cVar2 = *pcVar5, cVar2 != '\0' && (cVar2 != 'N')) && (cVar2 != 'n')))))) {
    local_70[0] = pcVar5;
  }
LAB_14032df0f:
  local_50 = 0;
  uVar12 = uVar14;
  if (local_70[0] != (char *)0x0) {
    local_50 = strlen(local_70[0]);
    uVar12 = local_50 + 1;
  }
  local_48 = 0;
  if (local_70[1] != (char *)0x0) {
    local_48 = strlen(local_70[1]);
    uVar12 = uVar12 + 1 + local_48;
  }
  local_40 = 0;
  if (local_70[2] != (char *)0x0) {
    local_40 = strlen(local_70[2]);
    uVar12 = uVar12 + 1 + local_40;
  }
  local_38 = 0;
  if (local_70[3] != (char *)0x0) {
    local_38 = strlen(local_70[3]);
    uVar12 = uVar12 + 1 + local_38;
  }
  if (uVar12 == 0) {
    local_50 = 7;
    local_70[0] = "Regular";
    uVar12 = 8;
  }
  puVar9 = (undefined1 *)FUN_1402f7fa0(uVar4,uVar12 & 0xffffffff,local_78);
  *(undefined1 **)(param_1 + 0x20) = puVar9;
  uVar12 = uVar14;
  if (local_78[0] == 0) {
    do {
      pcVar5 = local_70[uVar12];
      if (pcVar5 != (char *)0x0) {
        uVar6 = (&local_50)[uVar12];
        if (puVar9 != *(undefined1 **)(param_1 + 0x20)) {
          *puVar9 = 0x20;
          puVar9 = puVar9 + 1;
        }
        FUN_1404210f0(puVar9,pcVar5,uVar6);
        if (((uVar12 == 0) || (uVar12 == 3)) && (uVar10 = uVar14, uVar6 != 0)) {
          do {
            if (puVar9[uVar10] == ' ') {
              puVar9[uVar10] = 0x2d;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar6);
        }
        puVar9 = puVar9 + uVar6;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < 4);
    *puVar9 = 0;
  }
  return local_78[0];
}

