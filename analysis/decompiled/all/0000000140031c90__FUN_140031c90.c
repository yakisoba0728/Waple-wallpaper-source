// Function: FUN_140031c90
// Addr: 140031c90
// Size: 113 bytes


longlong FUN_140031c90(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar1 = param_2 + 2;
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  puVar2 = param_1 + 2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (*puVar1 <= *puVar2) {
    if (*puVar1 == 0) {
      return 0;
    }
    lVar3 = (longlong)param_1 + *puVar2 * 2;
    lVar4 = thunk_FUN_14028e940(param_1,lVar3,param_2);
    if (lVar4 != lVar3) {
      return lVar4 - (longlong)param_1 >> 1;
    }
  }
  return -1;
}

