// Function: FUN_1400e1500
// Addr: 1400e1500
// Size: 372 bytes


void FUN_1400e1500(longlong *param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((byte *)*param_1 == (byte *)param_1[1]) {
    *(undefined1 *)((longlong)param_1 + 0x75) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
    return;
  }
  bVar1 = *(byte *)*param_1;
  *(byte *)((longlong)param_1 + 0x75) = bVar1;
  lVar5 = FUN_1402bbee0(&DAT_140486ea0,(int)(char)bVar1);
  if (lVar5 != 0) {
    *(uint *)(param_1 + 0xe) = (uint)bVar1;
    switch((uint)bVar1) {
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
      goto switchD_1400e1578_caseD_b;
    case 0x24:
      uVar6 = param_1[0xc];
      if ((uVar6 >> 0x18 & 1) == 0) {
        return;
      }
      lVar5 = *param_1;
      if ((char *)(lVar5 + 1) == (char *)param_1[1]) {
        return;
      }
      cVar3 = *(char *)(lVar5 + 1);
      if ((cVar3 == '\\') && (cVar4 = FUN_1400e57d0(param_1), cVar4 != '\0')) {
        cVar3 = *(char *)(lVar5 + 2);
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((((uVar6 & 4) != 0) && (cVar3 == '\n')) && (*(int *)((longlong)param_1 + 0x14) == 0)) {
        return;
      }
      if (((bVar2) && (cVar3 == ')')) && (*(int *)((longlong)param_1 + 0x14) != 0)) {
        return;
      }
      break;
    case 0x28:
    case 0x29:
      if ((*(byte *)(param_1 + 0xc) & 8) != 0) {
        return;
      }
      break;
    case 0x2b:
    case 0x3f:
      if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
        return;
      }
      break;
    case 0x5c:
      lVar5 = *param_1;
      cVar3 = FUN_1400e57d0(param_1,lVar5);
      if (cVar3 == '\0') {
        return;
      }
      bVar1 = *(byte *)(lVar5 + 1);
      *(byte *)((longlong)param_1 + 0x75) = bVar1;
      *(uint *)(param_1 + 0xe) = (uint)bVar1;
      return;
    case 0x7b:
    case 0x7d:
      if ((*(byte *)(param_1 + 0xc) & 0x10) != 0) {
        return;
      }
      break;
    case 0x7c:
      if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
switchD_1400e1578_caseD_b:
  return;
}

