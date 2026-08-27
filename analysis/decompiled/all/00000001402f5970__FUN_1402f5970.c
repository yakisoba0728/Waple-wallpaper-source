// Function: FUN_1402f5970
// Addr: 1402f5970
// Size: 162 bytes


undefined4 FUN_1402f5970(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 local_18 [4];
  
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar4 + 3) {
LAB_1402f59ff:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    uVar2 = 0;
    puVar3 = (undefined4 *)(*param_1 + (ulonglong)uVar4);
    if (puVar3 == (undefined4 *)0x0) goto LAB_1402f59e5;
  }
  else {
    iVar1 = (*(code *)param_1[4])(param_1,uVar4,local_18,4);
    if (iVar1 != 4) goto LAB_1402f59ff;
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
    puVar3 = local_18;
  }
  uVar2 = *puVar3;
LAB_1402f59e5:
  *(uint *)((longlong)param_1 + 0xc) = uVar4 + 4;
  *param_2 = 0;
  return uVar2;
}

