// Function: FUN_1400bc350
// Addr: 1400bc350
// Size: 129 bytes


char * FUN_1400bc350(int *param_1,longlong param_2,undefined8 param_3,longlong param_4)

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
  if ((param_2 == 0) || (param_4 == 0)) {
    *param_1 = 0x75ae3d2;
    return "#base: bad argument";
  }
  if ((param_1[1] & 0xfffffffbU) != 0) {
    *param_1 = 0x75ae3d2;
    return "#base: interleaved coroutine calls";
  }
  param_1[1] = 0;
  if ((param_1[100] == 0) || (param_1[100] == 1)) {
    pcVar1 = (char *)func_0x0001400bc4b0(param_1);
    if ((pcVar1 == "$base: short read") && (*(char *)(param_4 + 0x28) != '\0')) {
      *param_1 = 0x75ae3d2;
      return "#png: truncated input";
    }
    if (pcVar1 == (char *)0x0) {
      param_1[100] = 0;
      return (char *)0x0;
    }
    if (*pcVar1 != '$') goto code_r0x0001400bc407;
    param_1[100] = 1;
    if (*pcVar1 != '$') goto code_r0x0001400bc3f9;
    iVar2 = 4;
  }
  else {
    param_1[100] = 0;
    pcVar1 = (char *)0x0;
code_r0x0001400bc3f9:
    iVar2 = 0;
  }
  param_1[1] = iVar2;
  if (pcVar1 == (char *)0x0) {
    return (char *)0x0;
  }
code_r0x0001400bc407:
  if (*pcVar1 != '#') {
    return pcVar1;
  }
  *param_1 = 0x75ae3d2;
  return pcVar1;
}

