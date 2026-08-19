// Function: FUN_1402c990c
// Addr: 1402c990c
// Size: 35 bytes


undefined4
FUN_1402c990c(longlong *param_1,char *param_2,longlong param_3,undefined8 *param_4,
             undefined4 param_5)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    *param_1 = 0;
    if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402cb004();
    }
    if ((param_3 != 0) && (param_4 != (undefined8 *)0x0)) {
      if (*param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_1402cb004();
      }
      FUN_1402c9bf4(param_4);
      if ((*(uint *)((longlong)param_4 + 0x14) >> 0xd & 1) != 0) {
        FUN_1402c9d30(param_4);
      }
      *param_4 = 0;
      param_4[1] = 0;
      *(undefined4 *)(param_4 + 2) = 0;
      LOCK();
      *(undefined4 *)((longlong)param_4 + 0x14) = 0;
      UNLOCK();
      LOCK();
      *(uint *)((longlong)param_4 + 0x14) = *(uint *)((longlong)param_4 + 0x14) | 0x2000;
      UNLOCK();
      lVar1 = func_0x0001402dd76c(param_2,param_3,param_5,param_4);
      *param_1 = lVar1;
      if (lVar1 == 0) {
        LOCK();
        *(uint *)((longlong)param_4 + 0x14) = *(uint *)((longlong)param_4 + 0x14) & 0xffffdfff;
        UNLOCK();
                    /* WARNING: Subroutine does not return */
        FUN_1402cb004();
      }
      FUN_1402c9c00(param_4);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

