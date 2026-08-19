// Function: FUN_14018e470
// Addr: 14018e470
// Size: 174 bytes


void FUN_14018e470(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x428 + (ulonglong)param_5 * 8) == 0) {
    lVar1 = FUN_140185a30(param_1 + 0x438);
    *(longlong *)(param_1 + 0x428 + (ulonglong)param_5 * 8) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 0x20000000;
  func_0x000140421ed0(param_2);
  return;
}

