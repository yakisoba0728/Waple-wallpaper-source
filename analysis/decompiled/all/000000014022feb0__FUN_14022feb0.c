// Function: FUN_14022feb0
// Addr: 14022feb0
// Size: 104 bytes


void FUN_14022feb0(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_1401de470();
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x80))(param_1);
  lVar3 = plVar4[1];
  param_1[0xcc] = *plVar4;
  param_1[0xcd] = lVar3;
  lVar3 = plVar4[3];
  param_1[0xce] = plVar4[2];
  param_1[0xcf] = lVar3;
  uVar1 = *(undefined4 *)((longlong)plVar4 + 0x24);
  lVar3 = plVar4[5];
  uVar2 = *(undefined4 *)((longlong)plVar4 + 0x2c);
  *(int *)(param_1 + 0xd0) = (int)plVar4[4];
  *(undefined4 *)((longlong)param_1 + 0x684) = uVar1;
  *(int *)(param_1 + 0xd1) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x68c) = uVar2;
  uVar1 = *(undefined4 *)((longlong)plVar4 + 0x34);
  lVar3 = plVar4[7];
  uVar2 = *(undefined4 *)((longlong)plVar4 + 0x3c);
  *(int *)(param_1 + 0xd2) = (int)plVar4[6];
  *(undefined4 *)((longlong)param_1 + 0x694) = uVar1;
  *(int *)(param_1 + 0xd3) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x69c) = uVar2;
  FUN_14022ebe0(param_1 + 0x58);
  FUN_14024be40(param_1,param_1 + 0x5b,0);
  return;
}

