// Function: FUN_140290600
// Addr: 140290600
// Size: 154 bytes


undefined8 FUN_140290600(int *param_1,longlong *param_2,ushort *param_3)

{
  ushort uVar1;
  
  if (*param_1 == -0x5ffffff4) {
    uVar1 = *(ushort *)((longlong)param_1 + 0xe) >> 1;
    if (uVar1 == 0) {
      *param_3 = *(ushort *)((longlong)param_1 + 10) >> 1;
      *param_2 = (longlong)param_1 + (ulonglong)(*(ushort *)(param_1 + 2) >> 1) * 2 + 0x14;
      return 0;
    }
    *param_3 = uVar1;
    *param_2 = (longlong)param_1 + (ulonglong)(*(ushort *)(param_1 + 3) >> 1) * 2 + 0x14;
    return 0;
  }
  if (*param_1 != -0x5ffffffd) {
    return 0x1129;
  }
  uVar1 = *(ushort *)((longlong)param_1 + 0xe) >> 1;
  if (uVar1 == 0) {
    *param_3 = *(ushort *)((longlong)param_1 + 10) >> 1;
    *param_2 = (longlong)param_1 + (ulonglong)(*(ushort *)(param_1 + 2) >> 1) * 2 + 0x10;
    return 0;
  }
  *param_3 = uVar1;
  *param_2 = (longlong)param_1 + (ulonglong)(*(ushort *)(param_1 + 3) >> 1) * 2 + 0x10;
  return 0;
}

