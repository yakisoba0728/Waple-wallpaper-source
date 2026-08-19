// Function: FUN_1402dea40
// Addr: 1402dea40
// Size: 116 bytes


longlong FUN_1402dea40(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    lVar2 = FUN_1402da070(param_2);
  }
  else {
    if (param_2 != 0) {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          lVar2 = (*DAT_140426460)(DAT_1404e4fa0,0,param_1,param_2);
          if (lVar2 != 0) {
            return lVar2;
          }
          iVar1 = FUN_1402d3bb0();
        } while ((iVar1 != 0) && (iVar1 = func_0x0001402d0b60(param_2), iVar1 != 0));
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402cb004();
    }
    FUN_1402d9110();
    lVar2 = 0;
  }
  return lVar2;
}

