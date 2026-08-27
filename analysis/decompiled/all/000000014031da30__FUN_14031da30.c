// Function: FUN_14031da30
// Addr: 14031da30
// Size: 130 bytes


undefined8 FUN_14031da30(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (*(ulonglong *)(param_1 + 0x28) < *(longlong *)(param_1 + 0x20) + 0x28U) {
    return 0xa1;
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  iVar2 = FUN_14031fe40();
  if (iVar2 - 2U < 0xf) {
    *(short *)(lVar1 + 0xac) = (short)iVar2;
    *(short *)(lVar1 + 0xae) =
         (short)((longlong)(ulonglong)(uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) >>
                3) + -4;
    *(short *)(param_1 + 0x40) = (short)iVar2;
    *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(lVar1 + 0xae);
    return 0;
  }
  return 3;
}

