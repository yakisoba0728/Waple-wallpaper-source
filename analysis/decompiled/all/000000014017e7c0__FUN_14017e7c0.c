// Function: FUN_14017e7c0
// Addr: 14017e7c0
// Size: 86 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14017e7c0(longlong param_1)

{
  uint uVar1;
  uint3 uVar2;
  int iVar3;
  float fVar4;
  
  uVar1 = *(uint *)(param_1 + 0x118);
  uVar2 = (uint3)(uVar1 >> 8);
  if ((uVar1 & 0x30) == 0) {
    return (ulonglong)(uint7)uVar2 << 8;
  }
  if ((uVar1 & 0x20) == 0) {
    fVar4 = *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x74);
    if ((uVar1 >> 10 & 1) != 0) {
      iVar3 = *(int *)(param_1 + 0x88) * *(int *)(param_1 + 0x84);
      return (ulonglong)CONCAT31((int3)((uint)iVar3 >> 8),fVar4 * _DAT_140492918 < (float)iVar3);
    }
    return (ulonglong)CONCAT31(uVar2,fVar4 < DAT_140492a40);
  }
  return CONCAT71((uint7)uVar2,1);
}

