// Function: FUN_1400eac60
// Addr: 1400eac60
// Size: 101 bytes


void FUN_1400eac60(longlong param_1,int param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_2;
  if (uVar2 < (ulonglong)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 4)) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + uVar2 * 0x10);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      *(undefined8 *)(*(longlong *)(param_1 + 0x38) + uVar2 * 0x10) = 0;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 8 + uVar2 * 0x10) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0xc + uVar2 * 0x10) = 0;
  }
  return;
}

