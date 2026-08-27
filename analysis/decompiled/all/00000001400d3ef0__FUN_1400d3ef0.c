// Function: FUN_1400d3ef0
// Addr: 1400d3ef0
// Size: 130 bytes


void FUN_1400d3ef0(longlong *param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)param_1[1];
  if ((ulonglong)*(uint *)(param_1 + 2) <
      (ulonglong)((longlong)piVar1 + (((longlong)param_3 + 4) - *param_1))) {
LAB_1400d3f60:
    FUN_1404217a0(param_2,0,(longlong)param_3);
    return;
  }
  if ((longlong)(ulonglong)*(uint *)(param_1 + 2) < (longlong)piVar1 + (4 - *param_1)) {
    iVar2 = 0;
    piVar3 = piVar1;
  }
  else {
    piVar3 = piVar1 + 1;
    param_1[1] = (longlong)piVar3;
    iVar2 = *piVar1;
    if (iVar2 < 0) goto LAB_1400d3f60;
  }
  if (iVar2 < param_3) {
    param_3 = iVar2;
  }
  FUN_1404210f0(param_2,piVar3,(longlong)param_3);
  param_1[1] = param_1[1] + (longlong)param_3;
  return;
}

