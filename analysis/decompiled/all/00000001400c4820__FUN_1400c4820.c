// Function: FUN_1400c4820
// Addr: 1400c4820
// Size: 196 bytes


void FUN_1400c4820(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
    if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0xb18) == 0)) {
      pFVar3 = GetProcAddress(*(HMODULE *)(param_1 + 0xaf8),"LoadUnknownImageBitsFromPath");
      *(FARPROC *)(param_1 + 0xb18) = pFVar3;
    }
    FUN_140290ea0(param_1 + 0x138);
    if (*(code **)(param_1 + 0xb18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001400c48b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0xb18))(param_2,param_3,param_4,param_5);
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x184) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

