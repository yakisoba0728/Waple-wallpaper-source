// Function: FUN_14032ddc0
// Addr: 14032ddc0
// Size: 511 bytes


int FUN_14032ddc0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  byte bVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  int *piVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  int local_78 [2];
  char *local_70 [4];
  longlong alStack_50 [5];
  
  lVar3 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  local_78[0] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_70[0] = (char *)0x0;
  local_70[1] = (undefined1 *)0x0;
  local_70[2] = (char *)0x0;
  local_70[3] = (char *)0x0;
  if (((lVar3 == 0) || (*(int *)(lVar3 + 0x50) == 0)) || (s_SLANT_14043fff0[0] == '\0')) {
    if (lVar3 == 0) goto UNWIND_INFO_14032dfc1_UnwindCodes_13__OffsetInProlog;
  }
  else {
    plVar7 = (longlong *)FUN_1402f79e0("SLANT",*(undefined8 *)(lVar3 + 0x70));
    if ((((plVar7 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(lVar3 + 0x58) + *plVar7 * 0x18, lVar1 != 0)) &&
        ((*(int *)(lVar1 + 8) == 1 &&
         ((*(char **)(lVar1 + 0x10) != (char *)0x0 &&
          (bVar6 = **(char **)(lVar1 + 0x10) + 0xb7, bVar6 < 0x27)))))) &&
       ((0x4100000041U >> ((ulonglong)bVar6 & 0x3f) & 1) != 0)) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
      local_70[2] = "Italic";
      if ((**(char **)(lVar1 + 0x10) + 0xb1U & 0xdf) == 0) {
        local_70[2] = "Oblique";
      }
    }
  }
  puVar12 = (undefined8 *)(lVar3 + 0x70);
  piVar9 = (int *)(lVar3 + 0x50);
  if ((*piVar9 == 0) || (s_WEIGHT_NAME_140440000[0] == '\0')) {
    if (lVar3 == 0) goto UNWIND_INFO_14032dfc1_UnwindCodes_13__OffsetInProlog;
  }
  else {
    plVar7 = (longlong *)FUN_1402f79e0("WEIGHT_NAME",*puVar12);
    if ((((plVar7 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(lVar3 + 0x58) + *plVar7 * 0x18, lVar1 != 0)) &&
        (*(int *)(lVar1 + 8) == 1)) &&
       ((*(char **)(lVar1 + 0x10) != (char *)0x0 &&
        ((**(char **)(lVar1 + 0x10) + 0xbeU & 0xdf) == 0)))) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
      local_70[1] = "Bold";
    }
  }
  if ((*piVar9 == 0) || (s_SETWIDTH_NAME_140440010[0] == '\0')) {
    if (lVar3 == 0) goto UNWIND_INFO_14032dfc1_UnwindCodes_13__OffsetInProlog;
  }
  else {
    plVar7 = (longlong *)FUN_1402f79e0("SETWIDTH_NAME",*puVar12);
    if ((((plVar7 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(lVar3 + 0x58) + *plVar7 * 0x18, lVar1 != 0)) &&
        (*(int *)(lVar1 + 8) == 1)) &&
       (((pcVar5 = *(char **)(lVar1 + 0x10), pcVar5 != (char *)0x0 &&
         (cVar2 = *pcVar5, cVar2 != '\0')) && ((cVar2 != 'N' && (cVar2 != 'n')))))) {
      local_70[3] = pcVar5;
    }
  }
  if (((*piVar9 != 0) && (s_ADD_STYLE_NAME_140440020[0] != '\0')) &&
     (((plVar7 = (longlong *)FUN_1402f79e0("ADD_STYLE_NAME",*puVar12), plVar7 != (longlong *)0x0 &&
       (((lVar3 = *(longlong *)(lVar3 + 0x58) + *plVar7 * 0x18, lVar3 != 0 &&
         (*(int *)(lVar3 + 8) == 1)) && (pcVar5 = *(char **)(lVar3 + 0x10), pcVar5 != (char *)0x0)))
       ) && (((cVar2 = *pcVar5, cVar2 != '\0' && (cVar2 != 'N')) && (cVar2 != 'n')))))) {
    local_70[0] = pcVar5;
  }
UNWIND_INFO_14032dfc1_UnwindCodes_13__OffsetInProlog:
  alStack_50[0] = 0;
  uVar10 = uVar11;
  if (local_70[0] != (char *)0x0) {
    alStack_50[0] = func_0x000140421ed0();
    uVar10 = alStack_50[0] + 1;
  }
  alStack_50[1] = 0;
  if (local_70[1] != (undefined1 *)0x0) {
    alStack_50[1] = func_0x000140421ed0();
    uVar10 = uVar10 + 1 + alStack_50[1];
  }
  alStack_50[2] = 0;
  if (local_70[2] != (char *)0x0) {
    alStack_50[2] = func_0x000140421ed0();
    uVar10 = uVar10 + 1 + alStack_50[2];
  }
  alStack_50[3] = 0;
  if (local_70[3] != (char *)0x0) {
    alStack_50[3] = func_0x000140421ed0();
    uVar10 = uVar10 + 1 + alStack_50[3];
  }
  if (uVar10 == 0) {
    alStack_50[0] = 7;
    local_70[0] = "Regular";
    uVar10 = 8;
  }
  puVar8 = (undefined1 *)FUN_1402f8070(uVar4,uVar10 & 0xffffffff,local_78);
  *(undefined1 **)(param_1 + 0x20) = puVar8;
  if (local_78[0] == 0) {
    do {
      pcVar5 = local_70[uVar11];
      if (pcVar5 != (char *)0x0) {
        lVar3 = alStack_50[uVar11];
        if (puVar8 != *(undefined1 **)(param_1 + 0x20)) {
          *puVar8 = 0x20;
          puVar8 = puVar8 + 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(puVar8,pcVar5,lVar3);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < 4);
    *puVar8 = 0;
  }
  return local_78[0];
}

