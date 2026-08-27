// Function: FUN_1400c3350
// Addr: 1400c3350
// Size: 166 bytes


void FUN_1400c3350(longlong param_1,char param_2)

{
  int iVar1;
  DWORD local_res8 [2];
  undefined1 local_18 [16];
  
  local_res8[0] = GetCurrentThreadId();
  iVar1 = FUN_140290d80(param_1 + 0x310);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x35c) != 0x7fffffff) {
    if (param_2 == '\0') {
      FUN_1400ca780(param_1 + 0x278,local_res8);
    }
    else {
      FUN_1400ca880(param_1 + 0x278,local_18,local_res8);
    }
    FUN_140290ed0(param_1 + 0x360);
    FUN_140290ea0(param_1 + 0x310);
    return;
  }
  *(undefined4 *)(param_1 + 0x35c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

