// Function: FUN_1402f1e40
// Addr: 1402f1e40
// Size: 34 bytes


undefined8 FUN_1402f1e40(int *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    lVar3 = (longlong)param_1[2] * (longlong)param_1[1];
    lVar5 = (longlong)param_1[3] * (longlong)iVar2;
    iVar4 = (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10) -
            (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
    if (iVar4 != 0) {
      iVar1 = func_0x0001402efae0((longlong)param_1[1],iVar4);
      param_1[1] = -iVar1;
      iVar1 = func_0x0001402efae0(param_1[2],iVar4);
      param_1[2] = -iVar1;
      iVar1 = func_0x0001402efae0(param_1[3],iVar4);
      *param_1 = iVar1;
      iVar2 = func_0x0001402efae0(iVar2,iVar4);
      param_1[3] = iVar2;
      return 0;
    }
  }
  return 6;
}

