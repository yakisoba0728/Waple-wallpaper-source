// Function: FUN_1400fb190
// Addr: 1400fb190
// Size: 192 bytes


undefined8
FUN_1400fb190(longlong param_1,int param_2,longlong param_3,undefined8 param_4,ulonglong *param_5)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_140290d80(param_1 + 0x140);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x18c) != 0x7fffffff) {
    if (param_2 == 0) {
      *(longlong *)(param_1 + 0x130) = param_3;
    }
    else if (param_2 == 1) {
      *(longlong *)(param_1 + 0x130) = *(longlong *)(param_1 + 0x130) + param_3;
    }
    uVar2 = *(ulonglong *)(param_1 + 0x130);
    if ((ulonglong)*(uint *)(param_1 + 0x128) <= *(ulonglong *)(param_1 + 0x130)) {
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x128);
    }
    *(ulonglong *)(param_1 + 0x130) = uVar2;
    if (param_5 != (ulonglong *)0x0) {
      *param_5 = uVar2;
    }
    FUN_14004a920(param_1 + 0x18,
                  (ulonglong)*(uint *)(param_1 + 0x138) + *(longlong *)(param_1 + 0x130),0);
    FUN_140290ea0(param_1 + 0x140);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x18c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

