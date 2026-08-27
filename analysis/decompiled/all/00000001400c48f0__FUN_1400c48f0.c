// Function: FUN_1400c48f0
// Addr: 1400c48f0
// Size: 173 bytes


void FUN_1400c48f0(longlong param_1,undefined8 param_2)

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
    if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0xb20) == 0)) {
      pFVar3 = GetProcAddress(*(HMODULE *)(param_1 + 0xaf8),"FreeImageBits");
      *(FARPROC *)(param_1 + 0xb20) = pFVar3;
    }
    FUN_140290ea0(param_1 + 0x138);
    if (*(code **)(param_1 + 0xb20) != (code *)0x0) {
      (**(code **)(param_1 + 0xb20))(param_2);
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x184) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

