// Function: FUN_1400ae9d0
// Addr: 1400ae9d0
// Size: 317 bytes


char * FUN_1400ae9d0(int *param_1,undefined8 param_2,longlong param_3)

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
  if (param_3 == 0) {
    *param_1 = 0x75ae3d2;
    return "#base: bad argument";
  }
  if ((param_1[1] != 0) && (param_1[1] != 3)) {
    *param_1 = 0x75ae3d2;
    return "#base: interleaved coroutine calls";
  }
  param_1[1] = 0;
  if ((param_1[0x36] == 0) || (param_1[0x36] == 1)) {
    pcVar2 = (char *)FUN_1400aeb10(param_1);
    if ((pcVar2 == "$base: short read") && (*(char *)(param_3 + 0x28) != '\0')) {
      *param_1 = 0x75ae3d2;
      return "#gif: truncated input";
    }
    if (pcVar2 == (char *)0x0) {
      param_1[0x36] = 0;
      return (char *)0x0;
    }
    if (*pcVar2 != '$') goto LAB_1400aeaf7;
    bVar1 = 1;
    param_1[0x36] = 1;
    if (*pcVar2 != '$') goto LAB_1400aeae6;
  }
  else {
    param_1[0x36] = 0;
    pcVar2 = (char *)0x0;
LAB_1400aeae6:
    bVar1 = 0;
  }
  param_1[1] = -(uint)bVar1 & 3;
  if (pcVar2 == (char *)0x0) {
    return (char *)0x0;
  }
LAB_1400aeaf7:
  if (*pcVar2 == '#') {
    *param_1 = 0x75ae3d2;
  }
  return pcVar2;
}

