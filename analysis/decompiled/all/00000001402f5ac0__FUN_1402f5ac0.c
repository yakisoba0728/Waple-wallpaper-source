// Function: FUN_1402f5ac0
// Addr: 1402f5ac0
// Size: 153 bytes


undefined2 FUN_1402f5ac0(longlong *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 local_18 [16];
  
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar4 + 1) {
LAB_1402f5b40:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    uVar1 = 0;
    puVar3 = (undefined1 *)(*param_1 + (ulonglong)uVar4);
    if (puVar3 == (undefined1 *)0x0) goto LAB_1402f5b28;
  }
  else {
    iVar2 = (*(code *)param_1[4])(param_1,uVar4,local_18,2);
    if (iVar2 != 2) goto LAB_1402f5b40;
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
    puVar3 = local_18;
  }
  uVar1 = CONCAT11(*puVar3,puVar3[1]);
LAB_1402f5b28:
  *(uint *)((longlong)param_1 + 0xc) = uVar4 + 2;
  *param_2 = 0;
  return uVar1;
}

