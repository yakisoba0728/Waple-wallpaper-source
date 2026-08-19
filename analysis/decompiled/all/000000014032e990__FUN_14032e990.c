// Function: FUN_14032e990
// Addr: 14032e990
// Size: 162 bytes


undefined8
FUN_14032e990(char *param_1,uint param_2,undefined4 param_3,uint *param_4,undefined8 *param_5)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  char *pcVar10;
  
  lVar2 = *(longlong *)(param_4 + 0xc);
  iVar4 = func_0x000140421dc0(param_1,"COMMENT",7);
  if (iVar4 == 0) {
    if ((*param_4 & 0x2000) == 0) {
      return 0;
    }
    uVar5 = func_0x00014032d590(lVar2,param_1,(ulonglong)param_2);
    return uVar5;
  }
  iVar4 = func_0x000140421dc0(param_1,"ENDPROPERTIES",0xd);
  if (iVar4 == 0) {
    *param_5 = 0x14032eb20;
    return 0;
  }
  iVar4 = func_0x000140421dc0(param_1,"_XFREE86_GLYPH_RANGES",0x15);
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
     (puVar6 = (ulonglong *)FUN_1402f79e0(param_1,lVar2 + 0x98), puVar6 != (ulonglong *)0x0)) {
    uVar3 = *puVar6;
    if (uVar3 < 0x52) {
      puVar9 = &UNK_1404400c0 + uVar3 * 0x18;
    }
    else {
      puVar9 = (undefined *)(*(longlong *)(lVar2 + 0x88) + (uVar3 - 0x52) * 0x18);
    }
    if ((puVar9 != (undefined *)0x0) && (*(int *)(puVar9 + 8) != 1)) {
      *pcVar10 = cVar1;
      pcVar7 = (char *)func_0x00014032f300(param_1,0x20);
      goto code_r0x00014032eaf3;
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
code_r0x00014032eaf3:
  uVar5 = func_0x00014032d640(lVar2,param_1,pcVar7,param_3);
  return uVar5;
}

