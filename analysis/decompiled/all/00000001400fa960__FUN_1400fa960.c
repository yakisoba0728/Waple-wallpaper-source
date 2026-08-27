// Function: FUN_1400fa960
// Addr: 1400fa960
// Size: 182 bytes


undefined8 FUN_1400fa960(longlong param_1,longlong param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 != 0) {
    if (param_2 == 0) {
      return 0x80070057;
    }
    iVar1 = FUN_140290d80(param_1 + 0x38);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    if (*(int *)(param_1 + 0x84) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x84) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(6);
    }
    uVar2 = *(int *)(param_1 + 0x28) + param_3;
    uVar3 = *(uint *)(param_1 + 0x20);
    if (uVar2 <= *(uint *)(param_1 + 0x20)) {
      uVar3 = uVar2;
    }
    uVar3 = uVar3 - *(int *)(param_1 + 0x28);
    if (param_4 != (uint *)0x0) {
      *param_4 = uVar3;
    }
    FUN_1404210f0(param_2,*(longlong *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18),uVar3);
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + (ulonglong)uVar3;
    FUN_140290ea0(param_1 + 0x38);
  }
  return 0;
}

