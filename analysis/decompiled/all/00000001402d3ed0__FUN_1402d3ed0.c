// Function: FUN_1402d3ed0
// Addr: 1402d3ed0
// Size: 108 bytes


ulonglong FUN_1402d3ed0(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if ((param_2 == 0) || ((param_2 & param_2 - 1) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  uVar1 = 8;
  if (8 < param_2) {
    uVar1 = param_2;
  }
  uVar2 = param_1 + 8 + (uVar1 - 1);
  if (uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  lVar3 = thunk_FUN_1402da070(uVar2);
  if (lVar3 != 0) {
    uVar4 = uVar1 + 7 + lVar3 & ~(uVar1 - 1);
    *(longlong *)(uVar4 - 8) = lVar3;
  }
  return uVar4;
}

