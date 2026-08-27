// Function: FUN_1402f5c90
// Addr: 1402f5c90
// Size: 83 bytes


byte FUN_1402f5c90(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_2 < 0) {
    return 0x55;
  }
  uVar2 = *(int *)(param_1 + 0xc) + param_2;
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    bVar3 = *(uint *)(param_1 + 8) < uVar2;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x20))(param_1,uVar2,0,0);
    bVar3 = iVar1 != 0;
  }
  if ((-bVar3 & 0x55U) == 0) {
    *(uint *)(param_1 + 0xc) = uVar2;
  }
  return -bVar3 & 0x55U;
}

