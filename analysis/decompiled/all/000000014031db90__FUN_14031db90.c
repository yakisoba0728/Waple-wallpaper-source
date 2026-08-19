// Function: FUN_14031db90
// Addr: 14031db90
// Size: 1 bytes


undefined8 FUN_14031db90(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 + 0x18U <= *(ulonglong *)(param_1 + 0x28)) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    uVar3 = FUN_14031ff10(param_1,lVar1);
    *(undefined4 *)(lVar2 + 0x80) = uVar3;
    uVar3 = FUN_14031ff10(param_1,lVar1 + 8);
    *(undefined4 *)(lVar2 + 0x84) = uVar3;
    uVar3 = FUN_14031ff10(param_1,lVar1 + 0x10);
    *(undefined4 *)(lVar2 + 0x88) = uVar3;
    return 0;
  }
  return 0xa1;
}

