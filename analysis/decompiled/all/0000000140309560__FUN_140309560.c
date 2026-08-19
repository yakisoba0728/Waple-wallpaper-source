// Function: FUN_140309560
// Addr: 140309560
// Size: 95 bytes


void FUN_140309560(longlong param_1,longlong param_2,ushort param_3,int param_4)

{
  int *piVar1;
  byte *pbVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_3;
  if (*(int *)(param_1 + 0x2d0) != 0) {
    if (*(int *)(param_1 + 0x324) == 0) {
      lVar3 = (longlong)*(int *)(param_1 + 0x2d0) * (longlong)param_4;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + uVar4 * 8);
      *piVar1 = *piVar1 + (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
    }
    pbVar2 = (byte *)(*(longlong *)(param_2 + 0x20) + uVar4);
    *pbVar2 = *pbVar2 | 8;
  }
  if (*(int *)(param_1 + 0x2d4) != 0) {
    if (*(int *)(param_1 + 0x324) != 7) {
      lVar3 = (longlong)*(int *)(param_1 + 0x2d4) * (longlong)param_4;
      piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 4 + uVar4 * 8);
      *piVar1 = *piVar1 + (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
    }
    pbVar2 = (byte *)(*(longlong *)(param_2 + 0x20) + uVar4);
    *pbVar2 = *pbVar2 | 0x10;
  }
  return;
}

