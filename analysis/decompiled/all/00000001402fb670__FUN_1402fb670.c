// Function: FUN_1402fb670
// Addr: 1402fb670
// Size: 65 bytes


void FUN_1402fb670(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(**(longlong **)(param_1 + 0x30) + 0x98);
  if (lVar1 != 0) {
    FUN_1402f77c0(lVar1,uVar2);
  }
  FUN_1402f7f90(uVar2,lVar1);
  return;
}

