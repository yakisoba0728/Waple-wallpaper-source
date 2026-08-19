// Function: FUN_1400b1970
// Addr: 1400b1970
// Size: 132 bytes


char * FUN_1400b1970(int *param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
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
  if ((param_2 == 0) || (param_3 == 0)) {
    *param_1 = 0x75ae3d2;
    return "#base: bad argument";
  }
  if (1 < (uint)param_1[1]) {
    *param_1 = 0x75ae3d2;
    return "#base: interleaved coroutine calls";
  }
  param_1[1] = 0;
  if ((param_1[0xb] == 0) || (param_1[0xb] == 1)) {
    uStack_18 = *param_4;
    uStack_14 = param_4[1];
    uStack_10 = param_4[2];
    uStack_c = param_4[3];
    pcVar1 = (char *)func_0x0001400b1ab0(param_1,param_2,param_3,&uStack_18);
    if ((pcVar1 == "$base: short read") && (*(char *)(param_3 + 0x28) != '\0')) {
      *param_1 = 0x75ae3d2;
      return "#gzip: truncated input";
    }
    if (pcVar1 == (char *)0x0) {
      param_1[0xb] = 0;
      return (char *)0x0;
    }
    if (*pcVar1 != '$') goto code_r0x0001400b1a81;
    iVar2 = 1;
    param_1[0xb] = 1;
    if (*pcVar1 != '$') goto code_r0x0001400b1a77;
  }
  else {
    param_1[0xb] = 0;
    pcVar1 = (char *)0x0;
code_r0x0001400b1a77:
    iVar2 = 0;
  }
  param_1[1] = iVar2;
  if (pcVar1 == (char *)0x0) {
    return (char *)0x0;
  }
code_r0x0001400b1a81:
  if (*pcVar1 != '#') {
    return pcVar1;
  }
  *param_1 = 0x75ae3d2;
  return pcVar1;
}

