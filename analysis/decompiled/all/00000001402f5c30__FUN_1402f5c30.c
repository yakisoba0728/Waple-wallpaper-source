// Function: FUN_1402f5c30
// Addr: 1402f5c30
// Size: 15 bytes


undefined2 FUN_1402f5c30(longlong *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 auStack_18 [8];
  
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar4 + 1) {
code_r0x0001402f5cb0:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    uVar1 = 0;
    puVar3 = (undefined2 *)(*param_1 + (ulonglong)uVar4);
    if (puVar3 == (undefined2 *)0x0) goto code_r0x0001402f5c98;
  }
  else {
    iVar2 = (*(code *)param_1[4])(param_1,uVar4,auStack_18,2);
    if (iVar2 != 2) goto code_r0x0001402f5cb0;
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
    puVar3 = auStack_18;
  }
  uVar1 = *puVar3;
code_r0x0001402f5c98:
  *(uint *)((longlong)param_1 + 0xc) = uVar4 + 2;
  *param_2 = 0;
  return uVar1;
}

