// Function: FUN_1403998c0
// Addr: 1403998c0
// Size: 110 bytes


undefined8 * FUN_1403998c0(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = TextAnalysis::vftable;
  param_1[1] = TextAnalysis::vftable;
  lVar2 = param_1[0xb];
  while (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x20);
    thunk_FUN_14028af80(lVar2,0x28);
    lVar2 = lVar1;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x60);
  }
  return param_1;
}

