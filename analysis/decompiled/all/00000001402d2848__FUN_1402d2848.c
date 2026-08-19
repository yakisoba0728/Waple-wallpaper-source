// Function: FUN_1402d2848
// Addr: 1402d2848
// Size: 73 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1402d2848(int param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  
  lVar2 = FUN_1402d9964();
  uVar4 = *(uint *)(lVar2 + 0x3a8);
  cVar3 = (char)((ulonglong)uVar4 & 0xffffffffffffff02);
  iVar1 = -(uint)(cVar3 != '\0');
  if (param_1 == -1) {
    _DAT_1404dd030 = 0xffffffff;
  }
  else if (param_1 != 0) {
    if (param_1 == 1) {
      uVar4 = uVar4 | 2;
    }
    else {
      if (param_1 != 2) {
                    /* WARNING: Subroutine does not return */
        FUN_1402cb004(iVar1,CONCAT71((int7)(((ulonglong)uVar4 & 0xffffffffffffff02) >> 8),-cVar3));
      }
      uVar4 = uVar4 & 0xfffffffd;
    }
    *(uint *)(lVar2 + 0x3a8) = uVar4;
  }
  return iVar1 + 2;
}

