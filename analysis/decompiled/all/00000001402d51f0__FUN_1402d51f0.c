// Function: FUN_1402d51f0
// Addr: 1402d51f0
// Size: 217 bytes


ulonglong FUN_1402d51f0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (param_1 == 0) {
    if ((param_3 != 0) && ((param_3 & param_3 - 1) == 0)) {
      uVar1 = 8;
      if (8 < param_3) {
        uVar1 = param_3;
      }
      if (param_2 <= param_2 + 8 + (uVar1 - 1)) {
        lVar2 = thunk_FUN_1402da070();
        if (lVar2 != 0) {
          uVar3 = uVar1 + 7 + lVar2 & ~(uVar1 - 1);
          *(longlong *)(uVar3 - 8) = lVar2;
        }
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402cb004();
    }
  }
  else {
    if (param_2 == 0) {
      uVar3 = func_0x0001402bf8e0(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
      return uVar3;
    }
    if ((param_3 != 0) && ((param_3 & param_3 - 1) == 0)) {
      uVar3 = func_0x0001402e7470(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

