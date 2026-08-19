// Function: FUN_14040b530
// Addr: 14040b530
// Size: 80 bytes


void FUN_14040b530(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((3 < *(uint *)(lVar1 + 0x60)) && (*(longlong *)(param_1 + 0x90) != 0)) {
    *(undefined1 *)(param_1 + 0x8d) = 1;
    lVar2 = *(longlong *)(param_1 + 0x90);
    if ((*(int *)(lVar2 + 0x24) != 0) || (*(int *)(lVar2 + 4) != 0)) {
      *(undefined4 *)(lVar2 + 0x24) = 0;
      *(undefined4 *)(lVar2 + 0x14) = 0;
      *(undefined4 *)(lVar2 + 4) = 0;
    }
    FUN_14036b5e0(lVar2,*(undefined8 *)(lVar1 + 0x70),*(undefined4 *)(lVar1 + 0x60),0x14);
    return;
  }
  *(undefined1 *)(param_1 + 0x8d) = 0;
  return;
}

