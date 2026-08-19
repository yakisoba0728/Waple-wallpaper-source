// Function: FUN_14011cad0
// Addr: 14011cad0
// Size: 179 bytes


void FUN_14011cad0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined **local_a0;
  undefined1 local_98 [8];
  uint local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  local_90 = (local_90 >> 8 & 0xfffffe) << 8;
  local_a0 = &PTR_PTR_1404777c8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),&local_a0);
  FUN_1400855f0(param_2,local_98);
  if (*(char *)(param_2 + 8) == '\x06') {
    plVar1 = (longlong *)(param_1 + 0x10);
    if (0xf < *(ulonglong *)(param_1 + 0x28)) {
      plVar1 = (longlong *)*plVar1;
    }
    func_0x000140421ed0(plVar1);
    return;
  }
  func_0x000140085510(local_98);
  return;
}

