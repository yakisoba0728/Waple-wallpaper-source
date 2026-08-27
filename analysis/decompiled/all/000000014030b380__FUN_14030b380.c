// Function: FUN_14030b380
// Addr: 14030b380
// Size: 77 bytes


void FUN_14030b380(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_14030b2a0();
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar2 = FUN_1403093e0(param_1);
    iVar3 = FUN_1402efa10(param_3,uVar2);
    piVar1 = (int *)(*(longlong *)(param_1 + 0x200) + (param_2 & 0xffffffff) * 4);
    *piVar1 = *piVar1 + iVar3;
  }
  return;
}

