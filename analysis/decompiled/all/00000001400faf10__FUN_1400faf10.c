// Function: FUN_1400faf10
// Addr: 1400faf10
// Size: 302 bytes


undefined8 FUN_1400faf10(longlong param_1,longlong param_2,int param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_48 [32];
  
  if (param_3 != 0) {
    if (param_2 == 0) {
      return 0x80070057;
    }
    iVar3 = FUN_140290d80(param_1 + 0x140);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    if (*(int *)(param_1 + 0x18c) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x18c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(6);
    }
    iVar3 = *(int *)(param_1 + 0x130);
    uVar6 = param_3 + iVar3;
    uVar5 = *(uint *)(param_1 + 0x128);
    piVar4 = (int *)FUN_14004a840(param_1 + 0x18,local_48);
    iVar1 = piVar4[2];
    iVar2 = *piVar4;
    if (uVar6 <= uVar5) {
      uVar5 = uVar6;
    }
    FUN_14004aa50(param_1 + 0x18,param_2,uVar5 - iVar3);
    piVar4 = (int *)FUN_14004a840(param_1 + 0x18,local_48);
    uVar5 = (piVar4[2] - (iVar1 + iVar2)) + *piVar4;
    if (param_4 != (uint *)0x0) {
      *param_4 = uVar5;
    }
    *(longlong *)(param_1 + 0x130) = *(longlong *)(param_1 + 0x130) + (ulonglong)uVar5;
    FUN_140290ea0(param_1 + 0x140);
  }
  return 0;
}

