// Function: FUN_1402f1e30
// Addr: 1402f1e30
// Size: 342 bytes


void FUN_1402f1e30(int *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    lVar1 = (longlong)*param_1 * (longlong)*param_2;
    lVar4 = (longlong)param_2[1] * (longlong)*param_1;
    lVar7 = (longlong)param_1[1] * (longlong)param_2[2];
    lVar8 = (longlong)param_1[2] * (longlong)param_2[1];
    lVar5 = (longlong)param_2[3] * (longlong)param_1[1];
    lVar3 = (longlong)param_1[2] * (longlong)*param_2;
    lVar2 = (longlong)param_1[3] * (longlong)param_2[3];
    lVar6 = (longlong)param_1[3] * (longlong)param_2[2];
    *param_2 = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10) +
               (int)((ulonglong)(lVar1 + 0x8000 + (lVar1 >> 0x3f)) >> 0x10);
    param_2[1] = (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10) +
                 (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10);
    param_2[2] = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) +
                 (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
    param_2[3] = (int)((ulonglong)(lVar2 + 0x8000 + (lVar2 >> 0x3f)) >> 0x10) +
                 (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
  }
  return;
}

