// Function: FUN_14033dfe0
// Addr: 14033dfe0
// Size: 155 bytes


void FUN_14033dfe0(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 local_res8 [8];
  
  if (*(int *)(param_1 + 1) == 0) {
    if (*(int *)(param_1 + 2) == 1) {
      uVar2 = *param_1;
      uVar1 = *(uint *)(param_1 + 5);
      if (uVar1 != 0) {
        *(undefined4 *)(param_1[6] + -8 + (ulonglong)uVar1 * 0x18) = param_2;
      }
      iVar3 = FUN_14033e330(param_1 + 5,uVar2,local_res8);
      if (iVar3 == 0) {
        if (*(uint *)(param_1 + 0xb) != 0) {
          *(undefined4 *)(param_1[0xc] + -8 + (ulonglong)*(uint *)(param_1 + 0xb) * 0x18) = param_2;
        }
        iVar3 = FUN_14033e330(param_1 + 0xb,uVar2,local_res8);
        if (iVar3 == 0) {
          return;
        }
      }
    }
    else {
      iVar3 = 6;
    }
    *(int *)(param_1 + 1) = iVar3;
  }
  return;
}

