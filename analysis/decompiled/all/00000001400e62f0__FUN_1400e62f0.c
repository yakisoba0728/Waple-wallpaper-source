// Function: FUN_1400e62f0
// Addr: 1400e62f0
// Size: 137 bytes


void FUN_1400e62f0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x10);
  for (; (ulonglong)param_2 < (ulonglong)(lVar1 - lVar2 >> 4); param_2 = param_2 + 1) {
    uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 6) * 8);
    if ((uVar3 >> (param_2 & 0x3f) & 1) != 0) {
      *(ulonglong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 6) * 8) =
           uVar3 & ~(1L << (param_2 & 0x3f));
      lVar4 = FUN_1400e6100(param_1,0xf,0);
      *(uint *)(lVar4 * 0x20 + 4 + *(longlong *)(param_1 + 0x90)) = param_2;
    }
  }
  return;
}

