// Function: FUN_14017dfc0
// Addr: 14017dfc0
// Size: 124 bytes


undefined8 FUN_14017dfc0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  
  iVar1 = FUN_140290f60();
  if ((iVar1 - 1U < 7) && (iVar1 = FUN_140290f60(), iVar1 == 1)) {
    uVar4 = 1;
  }
  else {
    iVar1 = FUN_140290f60();
    if (iVar1 - 1U < 7) {
      iVar1 = FUN_140290f60();
      uVar4 = iVar1 - 1;
    }
    else {
      uVar4 = 7;
    }
  }
  uVar2 = 0;
  for (lVar3 = *(longlong *)(param_1 + 0x3060); lVar3 != *(longlong *)(param_1 + 0x3068);
      lVar3 = lVar3 + 0x50) {
    uVar2 = (ulonglong)(((uint)uVar2 + 1) - (uint)(*(longlong *)(lVar3 + 0x48) == 0));
  }
  return CONCAT71((int7)(uVar2 >> 8),(uint)uVar2 < uVar4);
}

