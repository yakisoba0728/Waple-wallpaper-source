// Function: FUN_1402cd18c
// Addr: 1402cd18c
// Size: 22 bytes


ulonglong FUN_1402cd18c(byte param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = param_2 + 2;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if (-1 < (int)*plVar1) {
    *(byte *)*param_2 = param_1;
    *param_2 = *param_2 + 1;
    return (ulonglong)param_1;
  }
  FUN_1402db68c(param_2);
  if ((*(uint *)((longlong)param_2 + 0x14) & 6) == 0) {
    *(undefined4 *)(param_3 + 0x2c) = 9;
  }
  else {
    if ((*(uint *)((longlong)param_2 + 0x14) >> 0xc & 1) == 0) {
      if ((*(uint *)((longlong)param_2 + 0x14) & 1) != 0) {
        cVar2 = FUN_1402e0798(param_2);
        *(undefined4 *)(param_2 + 2) = 0;
        if (cVar2 == '\0') goto code_r0x0001402e0852;
        *param_2 = param_2[1];
        LOCK();
        *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 2;
      UNLOCK();
      LOCK();
      *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffff7;
      UNLOCK();
      *(undefined4 *)(param_2 + 2) = 0;
      if (((*(uint *)((longlong)param_2 + 0x14) & 0x4c0) == 0) &&
         (cVar2 = func_0x0001402db860(param_2), cVar2 == '\0')) {
        func_0x0001402e15d0(param_2);
      }
      cVar2 = FUN_1402e05a4(param_1,param_2,param_3);
      if (cVar2 != '\0') {
        return (ulonglong)param_1;
      }
      goto code_r0x0001402e0852;
    }
    *(undefined4 *)(param_3 + 0x2c) = 0x22;
  }
  *(undefined1 *)(param_3 + 0x30) = 1;
code_r0x0001402e0852:
  LOCK();
  *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 0x10;
  UNLOCK();
  return 0xffffffff;
}

