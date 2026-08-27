// Function: FUN_1402f36a0
// Addr: 1402f36a0
// Size: 228 bytes


void FUN_1402f36a0(longlong param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (((param_1 != 0) && (param_2 != (int *)0x0)) &&
     (piVar2 = *(int **)(param_1 + 8), piVar2 != (int *)0x0)) {
    piVar1 = piVar2 + (ulonglong)*(ushort *)(param_1 + 2) * 2;
    for (; piVar2 < piVar1; piVar2 = piVar2 + 2) {
      if (piVar2 != (int *)0x0) {
        lVar3 = (longlong)param_2[1] * (longlong)piVar2[1];
        lVar6 = (longlong)param_2[2] * (longlong)*piVar2;
        lVar5 = (longlong)*param_2 * (longlong)*piVar2;
        lVar4 = (longlong)param_2[3] * (longlong)piVar2[1];
        *piVar2 = (int)((ulonglong)(lVar3 + (lVar3 >> 0x3f) + 0x8000) >> 0x10) +
                  (int)((ulonglong)((lVar5 >> 0x3f) + 0x8000 + lVar5) >> 0x10);
        piVar2[1] = (int)((ulonglong)((lVar4 >> 0x3f) + 0x8000 + lVar4) >> 0x10) +
                    (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10);
      }
    }
  }
  return;
}

