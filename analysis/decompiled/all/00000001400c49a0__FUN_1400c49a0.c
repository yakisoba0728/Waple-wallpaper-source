// Function: FUN_1400c49a0
// Addr: 1400c49a0
// Size: 193 bytes


void FUN_1400c49a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  FARPROC pFVar3;
  
  iVar2 = FUN_140290d80(param_1 + 0x138);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x184) != 0x7fffffff) {
    cVar1 = FUN_1400c8a30(param_1);
    if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0xb28) == 0)) {
      pFVar3 = GetProcAddress(*(HMODULE *)(param_1 + 0xaf8),"GetDominantColor");
      *(FARPROC *)(param_1 + 0xb28) = pFVar3;
    }
    FUN_140290ea0(param_1 + 0x138);
    if (*(code **)(param_1 + 0xb28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001400c4a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0xb28))(param_2);
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x184) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

