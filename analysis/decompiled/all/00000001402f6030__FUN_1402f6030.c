// Function: FUN_1402f6030
// Addr: 1402f6030
// Size: 166 bytes


void FUN_1402f6030(int *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    lVar1 = (longlong)param_2[1] * (longlong)param_1[1];
    lVar3 = (longlong)*param_2 * (longlong)*param_1;
    lVar4 = (longlong)param_2[2] * (longlong)*param_1;
    lVar2 = (longlong)param_2[3] * (longlong)param_1[1];
    *param_1 = (int)((ulonglong)(lVar1 + 0x8000 + (lVar1 >> 0x3f)) >> 0x10) +
               (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
    param_1[1] = (int)((ulonglong)(lVar2 + 0x8000 + (lVar2 >> 0x3f)) >> 0x10) +
                 (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10);
  }
  return;
}

