// Function: FUN_14031dca0
// Addr: 14031dca0
// Size: 78 bytes


undefined8 FUN_14031dca0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 == 0) {
    return 3;
  }
  iVar2 = FUN_14031fe40(param_1,*(undefined8 *)(param_1 + 0x20));
  *(int *)(lVar1 + 0xb4) = iVar2;
  if (iVar2 != 0x201) {
    *(undefined4 *)(lVar1 + 0xb4) = 0x201;
  }
  return 0;
}

