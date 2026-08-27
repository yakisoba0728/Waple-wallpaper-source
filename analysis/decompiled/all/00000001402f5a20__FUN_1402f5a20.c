// Function: FUN_1402f5a20
// Addr: 1402f5a20
// Size: 147 bytes


ulonglong FUN_1402f5a20(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 local_18 [16];
  
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar4 + 2) {
LAB_1402f5aa0:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    uVar2 = 0;
    puVar3 = (undefined1 *)(*param_1 + (ulonglong)uVar4);
    if (puVar3 == (undefined1 *)0x0) goto LAB_1402f5a88;
  }
  else {
    iVar1 = (*(code *)param_1[4])(param_1,uVar4,local_18,3);
    if (iVar1 != 3) goto LAB_1402f5aa0;
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
    puVar3 = local_18;
  }
  uVar2 = (ulonglong)CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]);
LAB_1402f5a88:
  *(uint *)((longlong)param_1 + 0xc) = uVar4 + 3;
  *param_2 = 0;
  return uVar2;
}

