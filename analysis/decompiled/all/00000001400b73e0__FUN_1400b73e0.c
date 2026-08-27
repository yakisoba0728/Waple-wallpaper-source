// Function: FUN_1400b73e0
// Addr: 1400b73e0
// Size: 304 bytes


char * FUN_1400b73e0(int *param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return "#base: bad receiver";
  }
  if (*param_1 != 0x3ccb6c71) {
    pcVar1 = "#base: initialize not called";
    if (*param_1 == 0x75ae3d2) {
      pcVar1 = "#base: disabled by previous error";
    }
    return pcVar1;
  }
  if (param_3 == 0) {
    *param_1 = 0x75ae3d2;
    return "#base: bad argument";
  }
  if (1 < (uint)param_1[1]) {
    *param_1 = 0x75ae3d2;
    return "#base: interleaved coroutine calls";
  }
  param_1[1] = 0;
  if ((param_1[0x52] == 0) || (param_1[0x52] == 1)) {
    pcVar1 = (char *)FUN_1400b7510(param_1);
    if ((pcVar1 == "$base: short read") && (*(char *)(param_3 + 0x28) != '\0')) {
      *param_1 = 0x75ae3d2;
      return "#png: truncated input";
    }
    if (pcVar1 == (char *)0x0) {
      param_1[0x52] = 0;
      return (char *)0x0;
    }
    if (*pcVar1 != '$') goto LAB_1400b74fa;
    iVar2 = 1;
    param_1[0x52] = 1;
    if (*pcVar1 != '$') goto LAB_1400b74f0;
  }
  else {
    param_1[0x52] = 0;
    pcVar1 = (char *)0x0;
LAB_1400b74f0:
    iVar2 = 0;
  }
  param_1[1] = iVar2;
  if (pcVar1 == (char *)0x0) {
    return (char *)0x0;
  }
LAB_1400b74fa:
  if (*pcVar1 == '#') {
    *param_1 = 0x75ae3d2;
  }
  return pcVar1;
}

