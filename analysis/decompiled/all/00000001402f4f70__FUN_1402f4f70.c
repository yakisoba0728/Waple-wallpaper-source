// Function: FUN_1402f4f70
// Addr: 1402f4f70
// Size: 65 bytes


uint FUN_1402f4f70(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  uVar2 = 1 << ((byte)(iVar1 + 0x11 >> 1) & 0x1f);
  do {
    uVar3 = uVar2 + 1 + (int)(((ulonglong)param_1 * 0x10000 - 1) / (ulonglong)uVar2) >> 1;
    bVar4 = uVar3 != uVar2;
    uVar2 = uVar3;
  } while (bVar4);
  return uVar3;
}

