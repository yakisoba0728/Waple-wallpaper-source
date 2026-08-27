// Function: FUN_1402ca04c
// Addr: 1402ca04c
// Size: 93 bytes


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1402ca04c(undefined8 *param_1)

{
  DWORD dwExitCode;
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    dwExitCode = GetLastError();
                    /* WARNING: Subroutine does not return */
    ExitThread(dwExitCode);
  }
  lVar3 = FUN_1402d9894();
  *(undefined8 **)(lVar3 + 0x3c0) = param_1;
  iVar1 = FUN_1402ddd54();
  if (iVar1 == 2) {
    iVar1 = FUN_1402dc668(1);
    *(bool *)(param_1 + 4) = iVar1 == 0;
  }
  uVar2 = (*(code *)*param_1)(param_1[1]);
  uVar2 = FUN_1402ca25c(uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_1402d0f9c(uVar2);
}

