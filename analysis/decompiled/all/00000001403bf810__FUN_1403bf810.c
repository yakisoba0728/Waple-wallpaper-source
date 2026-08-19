// Function: FUN_1403bf810
// Addr: 1403bf810
// Size: 99 bytes


longlong FUN_1403bf810(longlong param_1,int *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar3 = (ulonglong)(param_3 & 0x3fffffff) % (ulonglong)*(uint *)(param_1 + 0x20);
  if ((*(uint *)(lVar2 + 4 + uVar3 * 0xc) >> 1 & 1) != 0) {
    iVar4 = 0;
    while (lVar1 = lVar2 + uVar3 * 0xc, *(int *)(lVar2 + uVar3 * 0xc) != *param_2) {
      iVar4 = iVar4 + 1;
      uVar3 = (ulonglong)((int)uVar3 + iVar4 & *(uint *)(param_1 + 0x1c));
      if ((*(uint *)(lVar2 + 4 + uVar3 * 0xc) >> 1 & 1) == 0) {
        return 0;
      }
    }
    if ((*(byte *)(lVar1 + 4) & 1) != 0) {
      return lVar1;
    }
  }
  return 0;
}

