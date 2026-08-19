// Function: FUN_140336e10
// Addr: 140336e10
// Size: 243 bytes


ulonglong FUN_140336e10(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  if ((*(int *)(param_1 + 0x20) == 0) || (*(char *)(param_1 + 0x19) == '\0')) {
    lVar3 = (longlong)*(int *)(param_1 + 0x1c) * (longlong)param_2;
    return (lVar3 >> 0x3f) + 0x8000 + lVar3 >> 0x10;
  }
  uVar1 = *(uint *)(param_1 + 0x24);
  do {
    uVar2 = uVar1;
    if (*(int *)(param_1 + 0x20) - 1U <= uVar2) break;
    uVar1 = uVar2 + 1;
  } while (*(int *)((ulonglong)(uVar2 + 1) * 0x20 + 0x38 + param_1) <= param_2);
  while ((uVar2 != 0 && (param_2 < *(int *)((ulonglong)uVar2 * 0x20 + 0x38 + param_1)))) {
    uVar2 = uVar2 - 1;
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  if ((uVar2 == 0) && (param_2 < *(int *)(param_1 + 0x38))) {
    lVar3 = (longlong)(param_2 - *(int *)(param_1 + 0x38)) * (longlong)*(int *)(param_1 + 0x1c);
    return (ulonglong)
           (uint)((int)((ulonglong)((lVar3 >> 0x3f) + 0x8000 + lVar3) >> 0x10) +
                 *(int *)(param_1 + 0x3c));
  }
  lVar3 = (longlong)(param_2 - *(int *)((ulonglong)uVar2 * 0x20 + 0x38 + param_1)) *
          (longlong)*(int *)(((ulonglong)uVar2 + 2) * 0x20 + param_1);
  return (ulonglong)
         (uint)((int)((ulonglong)((lVar3 >> 0x3f) + 0x8000 + lVar3) >> 0x10) +
               *(int *)((ulonglong)uVar2 * 0x20 + 0x3c + param_1));
}

