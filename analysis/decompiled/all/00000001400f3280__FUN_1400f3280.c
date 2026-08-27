// Function: FUN_1400f3280
// Addr: 1400f3280
// Size: 197 bytes


float FUN_1400f3280(longlong param_1)

{
  double dVar1;
  int iVar2;
  DWORD DVar3;
  float fVar4;
  
  iVar2 = FUN_140290d80(param_1 + 0xd8);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x124) != 0x7fffffff) {
    if (*(longlong *)(param_1 + 0x58) == 0) {
      fVar4 = 0.0;
    }
    else {
      if (*(HANDLE *)(param_1 + 0x80) != (HANDLE)0x0) {
        DVar3 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x80),3000);
        if (DVar3 == 0x102) {
          CloseHandle(*(HANDLE *)(param_1 + 0x80));
          *(undefined8 *)(param_1 + 0x80) = 0;
        }
      }
      dVar1 = (double)(**(code **)(**(longlong **)(param_1 + 0x58) + 0x98))();
      fVar4 = (float)dVar1;
    }
    FUN_140290ea0(param_1 + 0xd8);
    return fVar4;
  }
  *(undefined4 *)(param_1 + 0x124) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

