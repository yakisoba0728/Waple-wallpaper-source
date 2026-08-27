// Function: FUN_14033e080
// Addr: 14033e080
// Size: 237 bytes


void FUN_14033e080(undefined8 *param_1,uint param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 local_48 [4];
  
  if (*(int *)(param_1 + 1) == 0) {
    uVar2 = 1;
    if (param_2 < 2) {
      uVar2 = param_2;
    }
    if (*(int *)(param_1 + 2) == 1) {
      uVar1 = *param_1;
      uVar6 = 0;
      do {
        iVar3 = FUN_1402f4b60(param_3[1]);
        iVar4 = FUN_1402f4b60(*param_3);
        iVar3 = FUN_14033d3c0(param_1 + (ulonglong)uVar2 * 6 + 3,iVar4 >> 0x10,iVar3 >> 0x10,uVar1,
                              local_48 + uVar6);
        if (iVar3 != 0) goto LAB_14033e147;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        param_3 = param_3 + 2;
      } while ((int)uVar5 < 3);
      iVar3 = FUN_14033d200(param_1 + (ulonglong)uVar2 * 6 + 3,local_48[0],local_48[1],local_48[2],
                            uVar1);
      if (iVar3 == 0) {
        return;
      }
    }
    else {
      iVar3 = 6;
    }
LAB_14033e147:
    *(int *)(param_1 + 1) = iVar3;
  }
  return;
}

