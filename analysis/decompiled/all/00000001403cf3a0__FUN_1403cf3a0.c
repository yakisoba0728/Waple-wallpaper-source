// Function: FUN_1403cf3a0
// Addr: 1403cf3a0
// Size: 68 bytes


void FUN_1403cf3a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    lVar2 = FUN_1403c5340(param_1 + 0x78);
    iVar3 = (uint)*(byte *)(lVar2 + 0x13) + (uint)*(byte *)(lVar2 + 0x12) * 0x100;
    iVar1 = 1000;
    if (iVar3 - 0x10U < 0x3ff1) {
      iVar1 = iVar3;
    }
    *(int *)(param_1 + 0x14) = iVar1;
  }
  return;
}

