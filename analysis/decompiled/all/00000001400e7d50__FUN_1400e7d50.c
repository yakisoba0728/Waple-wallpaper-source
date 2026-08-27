// Function: FUN_1400e7d50
// Addr: 1400e7d50
// Size: 715 bytes


undefined8 FUN_1400e7d50(longlong param_1,byte param_2)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x70) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_1400e74c0(param_1,2);
  }
  uVar3 = *(ulonglong *)(param_1 + 0x60);
  if ((uVar3 >> 0xf & 1) != 0) {
    cVar1 = *(char *)(param_1 + 0x75);
    if (cVar1 == 'f') {
      *(undefined4 *)(param_1 + 0x6c) = 0xc;
      FUN_1400e5740(param_1);
      goto LAB_1400e7e95;
    }
    if (cVar1 == 'n') {
      *(undefined4 *)(param_1 + 0x6c) = 10;
      FUN_1400e5740(param_1);
      goto LAB_1400e7e95;
    }
    if (cVar1 == 'r') {
      *(undefined4 *)(param_1 + 0x6c) = 0xd;
      FUN_1400e5740(param_1);
      goto LAB_1400e7e95;
    }
    if (cVar1 == 't') {
      *(undefined4 *)(param_1 + 0x6c) = 9;
      FUN_1400e5740(param_1);
      goto LAB_1400e7e95;
    }
    if (cVar1 == 'v') {
      *(undefined4 *)(param_1 + 0x6c) = 0xb;
      FUN_1400e5740(param_1);
      goto LAB_1400e7e95;
    }
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    if (*(char *)(param_1 + 0x75) == 'a') {
      *(undefined4 *)(param_1 + 0x6c) = 7;
      FUN_1400e5740(param_1);
      goto LAB_1400e7e95;
    }
    if (*(char *)(param_1 + 0x75) == 'b') {
      *(undefined4 *)(param_1 + 0x6c) = 8;
      FUN_1400e5740(param_1);
      goto LAB_1400e7e95;
    }
  }
  bVar2 = *(byte *)(param_1 + 0x75);
  uVar4 = (uint)bVar2;
  if (bVar2 == 99) {
    if ((uVar3 >> 0x11 & 1) != 0) {
      FUN_1400e5740(param_1);
      bVar2 = *(byte *)(param_1 + 0x75);
      if ((0x19 < (byte)(bVar2 + 0x9f)) && (0x19 < (byte)(bVar2 + 0xbf))) {
                    /* WARNING: Subroutine does not return */
        FUN_1400e74c0(bVar2,2);
      }
      *(uint *)(param_1 + 0x6c) = bVar2 & 0x1f;
      FUN_1400e5740(param_1);
      goto LAB_1400e7e95;
    }
  }
  else if (bVar2 == 0x78) {
    if ((uVar3 >> 0xb & 1) != 0) {
      FUN_1400e5740(param_1);
      uVar5 = 2;
LAB_1400e7e8d:
      FUN_1400e8890(param_1,uVar5);
      goto LAB_1400e7e95;
    }
  }
  else if ((bVar2 == 0x75) && ((uVar3 >> 10 & 1) != 0)) {
    FUN_1400e5740(param_1);
    uVar5 = 4;
    goto LAB_1400e7e8d;
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    iVar6 = 3;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    do {
      uVar4 = (uint)*(char *)(param_1 + 0x75);
      if (7 < (byte)(*(char *)(param_1 + 0x75) - 0x30U)) {
        if (iVar6 == 3) goto LAB_1400e7f38;
        break;
      }
      if ((int)((-0x7fffffd1 - uVar4) + ((int)(-0x7fffffd1 - uVar4) >> 0x1f & 7U)) >> 3 <
          *(int *)(param_1 + 0x6c)) {
                    /* WARNING: Subroutine does not return */
        FUN_1400e74c0(uVar4,2);
      }
      *(uint *)(param_1 + 0x6c) = uVar4 + (*(int *)(param_1 + 0x6c) + -6) * 8;
      FUN_1400e5740(param_1);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (*(int *)(param_1 + 0x6c) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1400e74c0();
    }
LAB_1400e7e95:
    *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x6c);
    if ((uint)*(byte *)(param_1 + 0x6c) == *(uint *)(param_1 + 0x6c)) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1400e74c0();
  }
LAB_1400e7f38:
  uVar3 = *(ulonglong *)(param_1 + 0x60);
  if ((uVar3 >> 0x15 & 1) != 0) {
    switch(uVar4 & 0xff) {
    case 0x44:
    case 0x53:
    case 0x57:
    case 99:
    case 100:
    case 0x73:
    case 0x77:
      goto switchD_1400e7f6f_caseD_44;
    }
    goto switchD_1400e7f6f_caseD_45;
  }
  switch((uVar4 & 0xff) - 0x22) {
  case 0:
  case 0xd:
    param_2 = (byte)(uVar3 >> 0x17) & 1;
    break;
  default:
    goto switchD_1400e7f6f_caseD_44;
  case 2:
  case 8:
  case 0xc:
  case 0x39:
  case 0x3b:
  case 0x3c:
    param_2 = param_2 ^ 1;
    break;
  case 6:
  case 7:
  case 9:
  case 0x1d:
  case 0x59:
  case 0x5a:
  case 0x5b:
    if ((uVar3 >> 0x16 & 1) == 0) {
      return 0;
    }
    if (param_2 != 0) {
      return 0;
    }
  case 0x3a:
    goto switchD_1400e7f6f_caseD_45;
  }
  if (param_2 == 0) {
switchD_1400e7f6f_caseD_44:
    return 0;
  }
switchD_1400e7f6f_caseD_45:
  *(char *)(param_1 + 0x76) = (char)uVar4;
  FUN_1400e5740(param_1);
  return 1;
}

