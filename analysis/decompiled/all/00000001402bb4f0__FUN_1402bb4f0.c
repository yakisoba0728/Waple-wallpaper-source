// Function: FUN_1402bb4f0
// Addr: 1402bb4f0
// Size: 82 bytes


void FUN_1402bb4f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_1402bbec0();
  if (param_1 == *(longlong *)(lVar2 + 0x58)) {
    lVar2 = FUN_1402bbec0();
    lVar2 = *(longlong *)(lVar2 + 0x58);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      bVar3 = param_1 == lVar2;
      lVar2 = lVar1;
      if (bVar3) {
        lVar2 = FUN_1402bbec0();
        *(longlong *)(lVar2 + 0x58) = lVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402c97e4();
}

