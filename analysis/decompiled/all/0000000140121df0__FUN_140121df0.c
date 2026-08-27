// Function: FUN_140121df0
// Addr: 140121df0
// Size: 265 bytes


void FUN_140121df0(longlong param_1)

{
  int iVar1;
  DWORD DVar2;
  
  if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0xb0) = 6;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x60))();
    if (iVar1 < 0) goto LAB_140121e92;
    DVar2 = WaitForSingleObject(*(HANDLE *)(param_1 + 0xb8),5000);
    if (DVar2 == 0x102) goto LAB_140121e92;
  }
  if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x60))();
    if (iVar1 < 0) goto LAB_140121e92;
  }
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x68))();
  }
LAB_140121e92:
  if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))();
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(HANDLE *)(param_1 + 0xb8) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0xb8));
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000140121ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x70) + 0x10))(param_1 + 0x70);
  return;
}

