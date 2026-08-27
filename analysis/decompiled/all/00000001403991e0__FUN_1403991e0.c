// Function: FUN_1403991e0
// Addr: 1403991e0
// Size: 140 bytes


undefined1 * FUN_1403991e0(longlong param_1,undefined1 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  
  *param_2 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 0x30) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_2 + 0x40) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_2 + 0x50) = uVar4;
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  uVar2 = *(undefined4 *)(param_1 + 0x60);
  uVar3 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_2 + 0x5c) = uVar1;
  *(undefined4 *)(param_2 + 0x60) = uVar2;
  *(undefined4 *)(param_2 + 100) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar2 = *(undefined4 *)(param_1 + 0x70);
  uVar3 = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x70) = uVar2;
  *(undefined4 *)(param_2 + 0x74) = uVar3;
  param_2[0x78] = *(undefined1 *)(param_1 + 0x78);
  iVar5 = param_3;
  while (iVar5 != 0) {
    iVar5 = iVar5 + -1;
    puVar6 = (undefined8 *)0x0;
    if (param_2 != (undefined1 *)0xfffffffffffffff7) {
      puVar6 = (undefined8 *)(param_2 + 8);
    }
    *(int *)((longlong)puVar6 + 4) = *(int *)((longlong)puVar6 + 4) - *(int *)(puVar6 + 1);
  }
  FUN_1403995b0(param_2 + 0x18,param_3);
  return param_2;
}

