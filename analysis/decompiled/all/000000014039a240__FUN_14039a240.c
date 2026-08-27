// Function: FUN_14039a240
// Addr: 14039a240
// Size: 125 bytes


void FUN_14039a240(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  
  if ((*(uint **)(param_1 + 0x30) != (uint *)0x0) && (**(uint **)(param_1 + 0x30) < param_2)) {
    piVar3 = (int *)FUN_14028af20(0x28);
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    uVar2 = puVar1[1];
    *(undefined8 *)piVar3 = *puVar1;
    *(undefined8 *)(piVar3 + 2) = uVar2;
    uVar2 = puVar1[3];
    *(undefined8 *)(piVar3 + 4) = puVar1[2];
    *(undefined8 *)(piVar3 + 6) = uVar2;
    *(undefined8 *)(piVar3 + 8) = puVar1[4];
    *(undefined8 *)(piVar3 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x20);
    *(int **)(*(longlong *)(param_1 + 0x30) + 0x20) = piVar3;
    iVar4 = param_2 - **(int **)(param_1 + 0x30);
    *piVar3 = *piVar3 + iVar4;
    piVar3[1] = piVar3[1] - iVar4;
    *(int *)(*(longlong *)(param_1 + 0x30) + 4) = iVar4;
    *(int **)(param_1 + 0x30) = piVar3;
  }
  return;
}

