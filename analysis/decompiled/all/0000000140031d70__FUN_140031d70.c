// Function: FUN_140031d70
// Addr: 140031d70
// Size: 165 bytes


ulonglong FUN_140031d70(undefined8 *param_1,char *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  size_t sVar2;
  longlong lVar3;
  
  sVar2 = strlen(param_2);
  uVar1 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if ((sVar2 <= uVar1) && (param_3 <= uVar1 - sVar2)) {
    if (sVar2 == 0) {
      return param_3;
    }
    lVar3 = thunk_FUN_14028e750((longlong)param_1 + param_3,uVar1 + (longlong)param_1,param_2,sVar2)
    ;
    if (lVar3 != uVar1 + (longlong)param_1) {
      return lVar3 - (longlong)param_1;
    }
  }
  return 0xffffffffffffffff;
}

