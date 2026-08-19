// Function: FUN_1403a2370
// Addr: 1403a2370
// Size: 144 bytes


longlong FUN_1403a2370(int *param_1,uint param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = thunk_FUN_1402da070((ulonglong)param_2 * 0x260);
    if (lVar1 != 0) {
      if (param_1[1] != 0) {
        lVar1 = func_0x000140421870(lVar1,0,0x260);
        return lVar1;
      }
      if (1 < *param_1 + 1U) {
        func_0x0001402bf8e0(*(undefined8 *)(param_1 + 2));
      }
    }
    return lVar1;
  }
  if (1 < *param_1 + 1U) {
    lVar1 = func_0x0001402bf8e0(*(undefined8 *)(param_1 + 2));
    return lVar1;
  }
  return 0;
}

