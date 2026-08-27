// Function: FUN_14008d000
// Addr: 14008d000
// Size: 133 bytes


longlong * FUN_14008d000(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  lVar1 = param_1[2];
  uVar3 = param_4 - param_3;
  if ((ulonglong)param_1[3] < 0x10) {
    param_3 = param_3 - (longlong)param_1;
    plVar2 = param_1;
    if ((ulonglong)(lVar1 - param_3) < uVar3) {
      uVar3 = lVar1 - param_3;
    }
  }
  else {
    param_3 = param_3 - *param_1;
    if ((ulonglong)(lVar1 - param_3) < uVar3) {
      uVar3 = lVar1 - param_3;
    }
    plVar2 = (longlong *)*param_1;
  }
  FUN_1404210f0((longlong)plVar2 + param_3,uVar3 + (longlong)plVar2 + param_3,
                ((lVar1 - uVar3) - param_3) + 1);
  param_1[2] = lVar1 - uVar3;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (longlong *)*param_1;
  }
  *param_2 = (longlong)param_1 + param_3;
  return param_2;
}

