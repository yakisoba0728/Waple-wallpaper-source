// Function: FUN_1403099e0
// Addr: 1403099e0
// Size: 113 bytes


longlong FUN_1403099e0(longlong param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined7 uVar4;
  
  if (2 < param_2 - 1U) {
    *(undefined4 *)(param_1 + 0x20) = 0x84;
    return CONCAT71((uint7)(uint3)(param_2 - 1U >> 8),1);
  }
  lVar3 = (longlong)param_2;
  lVar2 = *(longlong *)(param_1 + 600 + lVar3 * 0x10);
  uVar4 = (undefined7)((ulonglong)(lVar3 * 2) >> 8);
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0x8a;
    return CONCAT71(uVar4,1);
  }
  if (*(int *)(param_1 + 0x260 + lVar3 * 0x10) < param_3) {
    *(undefined4 *)(param_1 + 0x20) = 0x83;
    return CONCAT71(uVar4,1);
  }
  *(longlong *)(param_1 + 0x1e0) = lVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x260 + lVar3 * 0x10);
  *(undefined4 *)(param_1 + 0x1ec) = uVar1;
  *(int *)(param_1 + 0x1e8) = param_3;
  *(undefined4 *)(param_1 + 500) = 0;
  *(int *)(param_1 + 0x1dc) = param_2;
  return (ulonglong)(uint3)((uint)uVar1 >> 8) << 8;
}

