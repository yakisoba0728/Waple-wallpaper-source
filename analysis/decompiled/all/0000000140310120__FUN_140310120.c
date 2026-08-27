// Function: FUN_140310120
// Addr: 140310120
// Size: 80 bytes


void FUN_140310120(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  FUN_14030b2a0();
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x200);
    uVar2 = FUN_1403093e0(param_1);
    uVar2 = FUN_1402efa10(param_3,uVar2);
    *(undefined4 *)(lVar1 + (param_2 & 0xffffffff) * 4) = uVar2;
  }
  return;
}

