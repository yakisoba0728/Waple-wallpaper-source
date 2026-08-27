// Function: FUN_1401453b0
// Addr: 1401453b0
// Size: 245 bytes


void FUN_1401453b0(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  if (4 < param_2) {
    bVar1 = (byte)param_2 & 0x1f;
    uVar3 = 1 << bVar1 | 1U >> 0x20 - bVar1;
    iVar4 = param_5;
    do {
      FUN_1401453b0(param_1,param_2 + -1,param_3,param_4,iVar4 * 2);
      param_5 = iVar4 * 4;
      param_2 = param_2 + -2;
      FUN_1401453b0(param_1,param_2,param_3 + iVar4,
                    (uVar3 >> 1 | (uint)((uVar3 & 1) != 0) << 0x1f) + param_4,param_5);
      param_3 = param_3 - iVar4;
      uVar3 = uVar3 >> 2 | uVar3 << 0x1e;
      param_4 = param_4 + (3 << ((byte)param_2 & 0x1f));
      iVar4 = param_5;
    } while (4 < param_2);
  }
  lVar2 = (longlong)((int)(param_4 + (param_4 >> 0x1f & 3U)) >> 2);
  *(longlong *)(param_1 + lVar2 * 8) = (longlong)(param_3 * 2);
  *(longlong *)(param_1 + 8 + lVar2 * 8) = (longlong)param_4;
  if (param_2 == 4) {
    *(longlong *)(param_1 + 0x10 + lVar2 * 8) = (longlong)((param_3 + param_5) * 2);
    *(longlong *)(param_1 + 0x18 + lVar2 * 8) = (longlong)(param_4 + 8);
  }
  return;
}

