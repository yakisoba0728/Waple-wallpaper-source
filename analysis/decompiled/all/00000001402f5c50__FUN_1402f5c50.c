// Function: FUN_1402f5c50
// Addr: 1402f5c50
// Size: 62 bytes


void FUN_1402f5c50(longlong param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    bVar2 = *(uint *)(param_1 + 8) < param_2;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x20))(param_1,param_2,0,0);
    bVar2 = iVar1 != 0;
  }
  if ((-bVar2 & 0x55U) == 0) {
    *(uint *)(param_1 + 0xc) = param_2;
  }
  return;
}

