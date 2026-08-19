// Function: FUN_1400e8bd0
// Addr: 1400e8bd0
// Size: 96 bytes


void FUN_1400e8bd0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  
  param_2 = param_2 & 0xff;
  if ((*(uint *)(param_1 + 0x10) & 0x100) != 0) {
    bVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + 8) + 0x20))();
    param_2 = (ulonglong)bVar2;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
  if (lVar1 == 0) {
    func_0x00014028aff0(0x20);
    return;
  }
  *(byte *)((param_2 >> 3) + lVar1) =
       *(byte *)((param_2 >> 3) + lVar1) | (byte)(1 << ((uint)param_2 & 7));
  return;
}

