// Function: FUN_1400844b0
// Addr: 1400844b0
// Size: 155 bytes


undefined8 FUN_1400844b0(undefined8 *param_1,DWORD param_2)

{
  DWORD DVar1;
  
  if ((HANDLE)*param_1 == (HANDLE)0xffffffffffffffff) {
    if (*(int *)((longlong)param_1 + 100) != 0xff) {
      *(undefined4 *)((longlong)param_1 + 100) = 0xff;
    }
    return 1;
  }
  DVar1 = WaitForSingleObject((HANDLE)*param_1,param_2);
  if (DVar1 == 0) {
    FUN_140081800(param_1 + 0xe);
    UnregisterWaitEx((HANDLE)param_1[1],(HANDLE)0xffffffffffffffff);
    param_1[1] = 0xffffffffffffffff;
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0xffffffffffffffff;
    if (param_1[0x59] != 0) {
      if ((longlong *)param_1[0x59] == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2c0();
      }
      (**(code **)(*(longlong *)param_1[0x59] + 0x10))();
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
    return 1;
  }
  return 0;
}

