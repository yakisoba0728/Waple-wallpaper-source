// Function: FUN_1402f55a0
// Addr: 1402f55a0
// Size: 111 bytes


ulonglong FUN_1402f55a0(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  byte local_res8 [8];
  
  uVar3 = in_RAX & 0xffffffffffffff00;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  local_res8[0] = 0;
  if (uVar1 < *(uint *)(param_1 + 1)) {
    if ((code *)param_1[4] == (code *)0x0) {
      uVar3 = (ulonglong)*(byte *)((ulonglong)uVar1 + *param_1);
    }
    else {
      iVar2 = (*(code *)param_1[4])(param_1,uVar1,local_res8,1);
      uVar3 = (ulonglong)local_res8[0];
      if (iVar2 != 1) goto LAB_1402f55e3;
    }
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
    *param_2 = 0;
    return uVar3;
  }
LAB_1402f55e3:
  *param_2 = 0x55;
  return uVar3;
}

