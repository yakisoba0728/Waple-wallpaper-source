// Function: FUN_1402ddd38
// Addr: 1402ddd38
// Size: 20 bytes


longlong * FUN_1402ddd38(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  
  plVar5 = (longlong *)(lRam00000001404e44f8 + 0x18);
  plVar1 = plVar5 + (longlong)iRam00000001404e44f0 + -3;
  while( true ) {
    if (plVar5 == plVar1) {
      *param_1 = 0;
      return param_1;
    }
    lVar3 = *plVar5;
    if (lVar3 == 0) break;
    if ((*(uint *)(lVar3 + 0x14) >> 0xd & 1) == 0) {
      FUN_1402c9bf4(lVar3);
      uVar4 = *(uint *)(lVar3 + 0x14);
      do {
        LOCK();
        uVar2 = *(uint *)(lVar3 + 0x14);
        bVar6 = uVar4 == uVar2;
        if (bVar6) {
          *(uint *)(lVar3 + 0x14) = uVar4 | 0x2000;
          uVar2 = uVar4;
        }
        uVar4 = uVar2;
        UNLOCK();
      } while (!bVar6);
      if ((~(byte)(uVar4 >> 0xd) & 1) != 0) {
        *param_1 = lVar3;
        return param_1;
      }
      FUN_1402c9c00(lVar3);
    }
    plVar5 = plVar5 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402dd8b0(1);
}

