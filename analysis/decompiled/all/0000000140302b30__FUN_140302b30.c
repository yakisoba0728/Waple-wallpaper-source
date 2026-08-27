// Function: FUN_140302b30
// Addr: 140302b30
// Size: 91 bytes


void FUN_140302b30(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = *(ulonglong *)(param_1 + 0x8f8);
  if (uVar4 != 0) {
    iVar2 = *(int *)(param_3 + 0x10);
    iVar3 = *(int *)(param_2 + 0x10);
    uVar1 = uVar4 + (ulonglong)*(uint *)(param_1 + 0x8f0) * 0x48;
    for (; uVar4 < uVar1; uVar4 = uVar4 + 0x48) {
      if (*(int *)(uVar4 + 8) < (iVar2 - (iVar3 - iVar2) / 7) + -0x10) {
        *(byte *)(uVar4 + 0xc) = *(byte *)(uVar4 + 0xc) | 0x10;
      }
    }
  }
  return;
}

