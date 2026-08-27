// Function: FUN_1400fb040
// Addr: 1400fb040
// Size: 196 bytes


undefined8
FUN_1400fb040(longlong *param_1,longlong param_2,int param_3,IMFAsyncCallback *param_4,
             IUnknown *param_5)

{
  int iVar1;
  IMFAsyncResult *local_38 [3];
  
  if (param_3 != 0) {
    if (param_2 == 0) {
      return 0x80070057;
    }
    iVar1 = FUN_140290d80(param_1 + 0x28);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    if (*(int *)((longlong)param_1 + 0x18c) == 0x7fffffff) {
      *(undefined4 *)((longlong)param_1 + 0x18c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(6);
    }
    (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3,(longlong)param_1 + 0x13c);
    MFCreateAsyncResult((IUnknown *)0x0,param_4,param_5,local_38);
    MFInvokeCallback(local_38[0]);
    FUN_140290ea0(param_1 + 0x28);
  }
  return 0;
}

