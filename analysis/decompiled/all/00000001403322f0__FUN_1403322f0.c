// Function: FUN_1403322f0
// Addr: 1403322f0
// Size: 121 bytes


void FUN_1403322f0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_1[2];
  uVar2 = *param_1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)param_1[4];
    uVar7 = puVar3[1];
    *(undefined8 *)(lVar1 + 0x98) = *puVar3;
    *(undefined8 *)(lVar1 + 0xa0) = uVar7;
    uVar4 = *(undefined4 *)((longlong)puVar3 + 0x14);
    uVar5 = *(undefined4 *)(puVar3 + 3);
    uVar6 = *(undefined4 *)((longlong)puVar3 + 0x1c);
    *(undefined4 *)(lVar1 + 0xa8) = *(undefined4 *)(puVar3 + 2);
    *(undefined4 *)(lVar1 + 0xac) = uVar4;
    *(undefined4 *)(lVar1 + 0xb0) = uVar5;
    *(undefined4 *)(lVar1 + 0xb4) = uVar6;
    *(undefined8 *)(lVar1 + 0xb8) = puVar3[4];
  }
  if ((code *)param_1[0xe7] != (code *)0x0) {
    (*(code *)param_1[0xe7])(param_1[0xe6]);
    FUN_1402f7f90(uVar2,param_1[0xe6]);
    param_1[0xe6] = 0;
  }
  return;
}

