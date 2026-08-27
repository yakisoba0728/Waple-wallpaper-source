// Function: FUN_14032e8c0
// Addr: 14032e8c0
// Size: 394 bytes


undefined8
FUN_14032e8c0(char *param_1,uint param_2,undefined4 param_3,uint *param_4,undefined8 *param_5)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined **ppuVar9;
  char *pcVar10;
  
  lVar2 = *(longlong *)(param_4 + 0xc);
  iVar4 = strncmp(param_1,"COMMENT",7);
  if (iVar4 == 0) {
    if ((*param_4 & 0x2000) == 0) {
      return 0;
    }
    uVar5 = FUN_14032d4c0(lVar2,param_1,(ulonglong)param_2);
    return uVar5;
  }
  iVar4 = strncmp(param_1,"ENDPROPERTIES",0xd);
  if (iVar4 == 0) {
    *param_5 = FUN_14032ea50;
    return 0;
  }
  iVar4 = strncmp(param_1,"_XFREE86_GLYPH_RANGES",0x15);
  if (iVar4 == 0) {
    return 0;
  }
  cVar1 = *param_1;
  pcVar10 = param_1;
  while ((cVar1 != '\0' && (cVar1 != ' '))) {
    pcVar7 = pcVar10 + 1;
    pcVar10 = pcVar10 + 1;
    cVar1 = *pcVar7;
  }
  cVar1 = *pcVar10;
  *pcVar10 = '\0';
  if ((*param_1 != '\0') &&
     (puVar6 = (ulonglong *)FUN_1402f7910(param_1,lVar2 + 0x98), puVar6 != (ulonglong *)0x0)) {
    uVar3 = *puVar6;
    if (uVar3 < 0x52) {
      ppuVar9 = &PTR_s_ADD_STYLE_NAME_14043fff0 + uVar3 * 3;
    }
    else {
      ppuVar9 = (undefined **)(*(longlong *)(lVar2 + 0x88) + (uVar3 - 0x52) * 0x18);
    }
    if ((ppuVar9 != (undefined **)0x0) && (*(int *)(ppuVar9 + 1) != 1)) {
      *pcVar10 = cVar1;
      pcVar7 = (char *)FUN_14032f230(param_1,0x20);
      goto LAB_14032ea23;
    }
  }
  pcVar8 = param_1 + param_2;
  if (pcVar10 < pcVar8) {
    do {
      pcVar10 = pcVar10 + 1;
    } while (*pcVar10 == ' ');
  }
  pcVar7 = pcVar10 + 1;
  if (*pcVar10 != '\"') {
    pcVar7 = pcVar10;
  }
  if (pcVar7 < pcVar8) {
    do {
      *pcVar8 = '\0';
      pcVar8 = pcVar8 + -1;
    } while (*pcVar8 == ' ');
  }
  if (*pcVar8 == '\"') {
    *pcVar8 = '\0';
  }
LAB_14032ea23:
  uVar5 = FUN_14032d570(lVar2,param_1,pcVar7,param_3);
  return uVar5;
}

