// Function: FUN_1400f8fd0
// Addr: 1400f8fd0
// Size: 115 bytes


longlong FUN_1400f8fd0(undefined8 *param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (0xb < *puVar1) {
    lVar3 = *puVar1 - 0xc;
    lVar2 = -1;
    if (lVar3 != -1) {
      lVar2 = lVar3;
    }
    lVar3 = lVar2 + 0xc + (longlong)param_1;
    lVar2 = thunk_FUN_14028cbb0(param_1,lVar3,"gl_FragColor",0xc);
    if (lVar2 != lVar3) {
      return lVar2 - (longlong)param_1;
    }
  }
  return -1;
}

