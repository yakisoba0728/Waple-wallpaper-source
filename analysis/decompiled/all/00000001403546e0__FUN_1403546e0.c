// Function: FUN_1403546e0
// Addr: 1403546e0
// Size: 430 bytes


undefined8 FUN_1403546e0(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (*(char *)(param_1 + 0xc) == '\0') {
    return 0;
  }
  if ((byte)(*(char *)(param_1 + 0xc) - 1U) < 0xfe) {
    return 1;
  }
  iVar1 = 0;
  if ((-1 < param_2) && (param_2 < param_4)) {
    if ((-1 < param_3 + -1) &&
       ((param_3 + -1 < param_5 &&
        (iVar1 = 1, *(char *)(param_1 + (longlong)param_4 * -0x10 + 0xc) == '\0')))) {
      return 1;
    }
    if ((-1 < param_3 + 1) && (param_3 + 1 < param_5)) {
      if (*(char *)(param_1 + 0xc + (longlong)param_4 * 0x10) == '\0') {
        return 1;
      }
      iVar1 = iVar1 + 1;
    }
  }
  iVar2 = param_2 + -1;
  if ((((iVar2 < 0) || (param_4 <= iVar2)) || (param_3 < 0)) || (param_5 <= param_3)) {
LAB_1403547ac:
    param_2 = param_2 + 1;
    if (((-1 < param_2) && (param_2 < param_4)) && ((-1 < param_3 && (param_3 < param_5)))) {
      if (*(char *)(param_1 + 0x1c) == '\0') goto LAB_140354866;
      iVar1 = iVar1 + 1;
    }
    if (((-1 < iVar2) && (iVar2 < param_4)) && ((-1 < param_3 + -1 && (param_3 + -1 < param_5)))) {
      if (*(char *)(param_1 + (longlong)param_4 * -0x10 + -4) == '\0') goto LAB_140354866;
      iVar1 = iVar1 + 1;
    }
    if ((((-1 < param_2) && (param_2 < param_4)) && (-1 < param_3 + -1)) && (param_3 + -1 < param_5)
       ) {
      if (*(char *)(param_1 + (longlong)param_4 * -0x10 + 0x1c) == '\0') goto LAB_140354866;
      iVar1 = iVar1 + 1;
    }
    if (((-1 < iVar2) && (iVar2 < param_4)) && ((-1 < param_3 + 1 && (param_3 + 1 < param_5)))) {
      if (*(char *)(param_1 + -4 + (longlong)param_4 * 0x10) == '\0') goto LAB_140354866;
      iVar1 = iVar1 + 1;
    }
    if (((-1 < param_2) && (param_2 < param_4)) && ((-1 < param_3 + 1 && (param_3 + 1 < param_5))))
    {
      if (*(char *)(param_1 + 0x1c + (longlong)param_4 * 0x10) == '\0') goto LAB_140354866;
      iVar1 = iVar1 + 1;
    }
    if (iVar1 != 8) {
      uVar3 = 1;
    }
  }
  else {
    if (*(char *)(param_1 + -4) != '\0') {
      iVar1 = iVar1 + 1;
      goto LAB_1403547ac;
    }
LAB_140354866:
    uVar3 = 1;
  }
  return uVar3;
}

