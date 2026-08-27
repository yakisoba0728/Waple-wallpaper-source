// Function: FUN_14031d910
// Addr: 14031d910
// Size: 154 bytes


undefined8 FUN_14031d910(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 + 0x20U <= *(ulonglong *)(param_1 + 0x28)) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    uVar3 = FUN_14031fce0(param_1,lVar1);
    uVar3 = FUN_1402f4b60(uVar3);
    *(undefined4 *)(lVar2 + 0x50) = uVar3;
    uVar3 = FUN_14031fce0(param_1,lVar1 + 8);
    uVar3 = FUN_1402f4b60(uVar3);
    *(undefined4 *)(lVar2 + 0x54) = uVar3;
    uVar3 = FUN_14031fce0(param_1,lVar1 + 0x10);
    uVar3 = FUN_1402f4b60(uVar3);
    *(undefined4 *)(lVar2 + 0x58) = uVar3;
    uVar3 = FUN_14031fce0(param_1,lVar1 + 0x18);
    uVar3 = FUN_1402f4b60(uVar3);
    *(undefined4 *)(lVar2 + 0x5c) = uVar3;
    return 0;
  }
  return 0xa1;
}

