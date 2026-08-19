// Function: FUN_140309610
// Addr: 140309610
// Size: 127 bytes


void FUN_140309610(longlong param_1,longlong param_2,ushort param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x2d0) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x2d0) * (longlong)param_4;
    piVar1 = (int *)(*(longlong *)(param_2 + 8) + (ulonglong)param_3 * 8);
    *piVar1 = *piVar1 + (int)((ulonglong)(lVar2 + 0x8000 + (lVar2 >> 0x3f)) >> 0x10);
  }
  if (*(int *)(param_1 + 0x2d4) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x2d4) * (longlong)param_4;
    piVar1 = (int *)(*(longlong *)(param_2 + 8) + 4 + (ulonglong)param_3 * 8);
    *piVar1 = *piVar1 + (int)((ulonglong)(lVar2 + 0x8000 + (lVar2 >> 0x3f)) >> 0x10);
  }
  return;
}

