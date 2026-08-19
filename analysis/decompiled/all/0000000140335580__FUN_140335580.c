// Function: FUN_140335580
// Addr: 140335580
// Size: 480 bytes


void FUN_140335580(longlong *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                  int *param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  param_4 = param_4 - param_2;
  param_5 = param_5 - param_3;
  iVar1 = -param_5;
  if (*(char *)(*param_1 + 0x134) == '\0') {
    iVar1 = param_5;
  }
  iVar2 = -param_4;
  if (*(char *)(*param_1 + 0x134) == '\0') {
    iVar2 = param_4;
  }
  *param_7 = 0;
  *param_6 = 0;
  if (*(char *)((longlong)param_1 + 0x48d6) != '\0') {
    *(int *)(param_1[1] + 0x20) =
         *(int *)(param_1[1] + 0x20) +
         ((param_5 >> 0x10) * (param_2 >> 0x10) - (param_4 >> 0x10) * (param_3 >> 0x10));
    if (iVar2 < 0) {
      if (-1 < iVar1) {
        if (iVar1 * 2 < -iVar2) {
          *param_6 = 0;
          *param_7 = *(int *)((longlong)param_1 + 0x4904) * 2;
          return;
        }
        if (iVar2 * -2 < iVar1) {
          *param_6 = (int)param_1[0x920];
          *param_7 = *(int *)((longlong)param_1 + 0x4904);
          return;
        }
        lVar3 = (longlong)(int)param_1[0x920] * 0xb333;
        *param_6 = (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
        lVar3 = (longlong)*(int *)((longlong)param_1 + 0x4904) * 0x1b333;
        *param_7 = (int)((ulonglong)((lVar3 >> 0x3f) + 0x8000 + lVar3) >> 0x10);
        return;
      }
      if (iVar1 * -2 < -iVar2) {
        *param_6 = 0;
        *param_7 = *(int *)((longlong)param_1 + 0x4904) * 2;
        return;
      }
      if (iVar2 * -2 < -iVar1) {
        *param_6 = -(int)param_1[0x920];
        *param_7 = *(int *)((longlong)param_1 + 0x4904);
        return;
      }
      lVar3 = (longlong)(int)param_1[0x920] * -0xb332;
      *param_6 = (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
      lVar3 = (longlong)*(int *)((longlong)param_1 + 0x4904) * 0x1b333;
    }
    else {
      if (iVar1 < 0) {
        if (iVar1 * -2 < iVar2) goto LAB_140335626;
        if (iVar2 * 2 < -iVar1) {
          iVar4 = -(int)param_1[0x920];
          goto LAB_140335647;
        }
        lVar3 = (longlong)(int)param_1[0x920] * -0xb332;
      }
      else {
        if (iVar1 * 2 < iVar2) {
LAB_140335626:
          *param_6 = 0;
          *param_7 = 0;
          return;
        }
        iVar4 = (int)param_1[0x920];
        if (iVar2 * 2 < iVar1) {
LAB_140335647:
          *param_6 = iVar4;
          *param_7 = *(int *)((longlong)param_1 + 0x4904);
          return;
        }
        lVar3 = (longlong)iVar4 * 0xb333;
      }
      *param_6 = (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
      lVar3 = (longlong)*(int *)((longlong)param_1 + 0x4904) * 0x4ccd;
    }
    *param_7 = (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
  }
  return;
}

