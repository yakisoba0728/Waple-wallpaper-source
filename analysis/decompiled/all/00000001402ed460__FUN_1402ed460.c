// Function: FUN_1402ed460
// Addr: 1402ed460
// Size: 104 bytes


undefined8 FUN_1402ed460(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  FUN_1402ed040(param_2,param_4,lVar1 + 4);
  if ((*(uint *)(lVar1 + 4) & ((*(byte *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    uVar2 = FUN_1402bb5d0(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 1;
}

