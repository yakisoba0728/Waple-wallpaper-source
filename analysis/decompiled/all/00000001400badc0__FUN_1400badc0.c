// Function: FUN_1400badc0
// Addr: 1400badc0
// Size: 363 bytes


char * FUN_1400badc0(int *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  char *pcVar2;
  
  if (param_1 == (int *)0x0) {
    return "#base: bad receiver";
  }
  if (*param_1 != 0x3ccb6c71) {
    pcVar2 = "#base: initialize not called";
    if (*param_1 == 0x75ae3d2) {
      pcVar2 = "#base: disabled by previous error";
    }
    return pcVar2;
  }
  if ((param_2 == 0) || (param_3 == 0)) {
    *param_1 = 0x75ae3d2;
    return "#base: bad argument";
  }
  if ((param_1[1] != 0) && (param_1[1] != 3)) {
    *param_1 = 0x75ae3d2;
    return "#base: interleaved coroutine calls";
  }
  param_1[1] = 0;
  if ((param_1[0x61] == 0) || (param_1[0x61] == 1)) {
    pcVar2 = (char *)FUN_1400baf30(param_1);
    if ((pcVar2 == "$base: short read") && (*(char *)(param_3 + 0x28) != '\0')) {
      *param_1 = 0x75ae3d2;
      return "#png: truncated input";
    }
    if (pcVar2 == (char *)0x0) {
      param_1[0x61] = 0;
      return (char *)0x0;
    }
    if (*pcVar2 != '$') goto LAB_1400baefd;
    bVar1 = 1;
    param_1[0x61] = 1;
    if (*pcVar2 != '$') goto LAB_1400baeec;
  }
  else {
    param_1[0x61] = 0;
    pcVar2 = (char *)0x0;
LAB_1400baeec:
    bVar1 = 0;
  }
  param_1[1] = -(uint)bVar1 & 3;
  if (pcVar2 == (char *)0x0) {
    return (char *)0x0;
  }
LAB_1400baefd:
  if (*pcVar2 != '#') {
    return pcVar2;
  }
  *param_1 = 0x75ae3d2;
  return pcVar2;
}

