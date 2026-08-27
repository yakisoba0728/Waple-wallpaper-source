// Function: FUN_140031d10
// Addr: 140031d10
// Size: 85 bytes


longlong FUN_140031d10(undefined8 *param_1,undefined1 param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (param_3 < *puVar1) {
    lVar2 = *puVar1 + (longlong)param_1;
    lVar3 = thunk_FUN_14028cf70((longlong)param_1 + param_3,lVar2,param_2);
    if (lVar3 != lVar2) {
      return lVar3 - (longlong)param_1;
    }
  }
  return -1;
}

