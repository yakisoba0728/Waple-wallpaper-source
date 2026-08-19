// Function: FUN_140397080
// Addr: 140397080
// Size: 95 bytes


void FUN_140397080(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  if (1 < *(int *)(lVar1 + 0x10) + 1U) {
    *(undefined4 *)(lVar1 + 0x14) = 0;
    func_0x0001402bf8e0(*(undefined8 *)(lVar1 + 0x18));
    return;
  }
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  if (1 < *(int *)(lVar1 + 0x20) + 1U) {
    *(undefined4 *)(lVar1 + 0x24) = 0;
    func_0x0001402bf8e0(*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  func_0x0001402bf8e0(lVar1);
  return;
}

