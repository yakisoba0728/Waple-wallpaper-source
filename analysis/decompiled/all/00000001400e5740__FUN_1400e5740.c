// Function: FUN_1400e5740
// Addr: 1400e5740
// Size: 490 bytes


void FUN_1400e5740(longlong *param_1)

{
  char *pcVar1;
  char cVar2;
  ulonglong uVar3;
  byte bVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  longlong lVar8;
  bool bVar9;
  
  pbVar7 = (byte *)param_1[1];
  pbVar6 = (byte *)*param_1;
  if (pbVar6 == pbVar7) {
LAB_1400e5919:
    *(undefined1 *)((longlong)param_1 + 0x75) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
    return;
  }
  if ((((*pbVar6 == 0x5c) && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
      (pbVar6 = pbVar6 + 1, pbVar6 != pbVar7)) &&
     ((((param_1[0xc] & 8U) == 0 && ((byte)(*pbVar6 - 0x28) < 2)) ||
      (((param_1[0xc] & 0x10U) == 0 && ((*pbVar6 + 0x85 & 0xfd) == 0)))))) {
    *param_1 = (longlong)pbVar6;
  }
  *param_1 = *param_1 + 1;
  if ((byte *)*param_1 == pbVar7) goto LAB_1400e5919;
  bVar4 = *(byte *)*param_1;
  *(byte *)((longlong)param_1 + 0x75) = bVar4;
  lVar5 = FUN_1402bbe10(&DAT_140486dd0,(int)(char)bVar4);
  if (lVar5 == 0) goto LAB_1400e5907;
  *(uint *)(param_1 + 0xe) = (uint)bVar4;
  switch((uint)bVar4) {
  case 10:
    if ((*(byte *)(param_1 + 0xc) & 4) == 0) {
      return;
    }
    if (*(int *)((longlong)param_1 + 0x14) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0xe) = 0x7c;
    return;
  default:
    goto switchD_1400e57f1_caseD_b;
  case 0x24:
    uVar3 = param_1[0xc];
    if ((uVar3 >> 0x18 & 1) == 0) {
      return;
    }
    lVar5 = *param_1;
    if ((char *)(lVar5 + 1) == (char *)param_1[1]) {
      return;
    }
    if ((((*(char *)(lVar5 + 1) == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
        (pcVar1 = (char *)(lVar5 + 2), pcVar1 != (char *)param_1[1])) &&
       ((((uVar3 & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
        (((uVar3 & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))) {
      lVar8 = 1;
    }
    else {
      lVar8 = 0;
    }
    cVar2 = *(char *)(lVar5 + 1 + lVar8);
    if ((((uVar3 & 4) != 0) && (cVar2 == '\n')) && (*(int *)((longlong)param_1 + 0x14) == 0)) {
      return;
    }
    if (((char)lVar8 == '\0') || (cVar2 != ')')) goto LAB_1400e5907;
    bVar9 = *(int *)((longlong)param_1 + 0x14) == 0;
    break;
  case 0x28:
  case 0x29:
    bVar9 = (*(byte *)(param_1 + 0xc) & 8) == 0;
    break;
  case 0x2b:
  case 0x3f:
    bVar9 = (*(byte *)(param_1 + 0xc) & 1) == 0;
    break;
  case 0x5c:
    if (*(char *)((longlong)param_1 + 0x74) != '\0') {
      return;
    }
    pbVar7 = (byte *)(*param_1 + 1);
    if (pbVar7 == (byte *)param_1[1]) {
      return;
    }
    if (((param_1[0xc] & 8U) != 0) || ((bVar4 = *pbVar7, bVar4 != 0x28 && (bVar4 != 0x29)))) {
      if ((param_1[0xc] & 0x10U) != 0) {
        return;
      }
      bVar4 = *pbVar7;
      if ((bVar4 != 0x7b) && (bVar4 != 0x7d)) {
        return;
      }
    }
    *(byte *)((longlong)param_1 + 0x75) = bVar4;
    *(uint *)(param_1 + 0xe) = (uint)bVar4;
    return;
  case 0x7b:
  case 0x7d:
    bVar9 = (*(byte *)(param_1 + 0xc) & 0x10) == 0;
    break;
  case 0x7c:
    if ((*(byte *)(param_1 + 0xc) & 2) == 0) goto LAB_1400e5907;
    goto switchD_1400e57f1_caseD_b;
  }
  if (bVar9) {
LAB_1400e5907:
    *(undefined4 *)(param_1 + 0xe) = 0;
    return;
  }
switchD_1400e57f1_caseD_b:
  return;
}

