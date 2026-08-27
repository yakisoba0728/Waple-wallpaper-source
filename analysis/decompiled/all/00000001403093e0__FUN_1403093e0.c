// Function: FUN_1403093e0
// Addr: 1403093e0
// Size: 162 bytes


ulonglong FUN_1403093e0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x180);
  if (*(uint *)(param_1 + 0x180) == 0) {
    if (*(short *)(param_1 + 0x19e) == 0) {
      *(uint *)(param_1 + 0x180) = *(uint *)(param_1 + 0x178);
      return (ulonglong)*(uint *)(param_1 + 0x178);
    }
    uVar1 = *(uint *)(param_1 + 0x17c);
    if (*(short *)(param_1 + 0x19c) == 0) {
      *(uint *)(param_1 + 0x180) = uVar1;
      return (ulonglong)uVar1;
    }
    lVar3 = (longlong)(int)uVar1 * (longlong)*(short *)(param_1 + 0x19e);
    lVar4 = (longlong)*(int *)(param_1 + 0x178) * (longlong)*(short *)(param_1 + 0x19c);
    uVar2 = FUN_1402f10a0(lVar4 + 0x2000 + (lVar4 >> 0x3f) >> 0xe,
                          lVar3 + 0x2000 + (lVar3 >> 0x3f) >> 0xe);
    *(int *)(param_1 + 0x180) = (int)uVar2;
  }
  return uVar2;
}

