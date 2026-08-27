// Function: FUN_14033dd60
// Addr: 14033dd60
// Size: 113 bytes


void FUN_14033dd60(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 1) == 0) {
    uVar1 = *param_1;
    if (*(uint *)(param_1 + 5) != 0) {
      *(undefined4 *)(param_1[6] + -8 + (ulonglong)*(uint *)(param_1 + 5) * 0x18) = param_2;
    }
    iVar2 = FUN_14033e410(param_1 + 7,uVar1);
    if (iVar2 == 0) {
      if (*(uint *)(param_1 + 0xb) != 0) {
        *(undefined4 *)(param_1[0xc] + -8 + (ulonglong)*(uint *)(param_1 + 0xb) * 0x18) = param_2;
      }
      FUN_14033e410(param_1 + 0xd,uVar1);
    }
  }
  return;
}

