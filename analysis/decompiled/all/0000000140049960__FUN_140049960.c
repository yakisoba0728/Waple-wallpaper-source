// Function: FUN_140049960
// Addr: 140049960
// Size: 119 bytes


longlong * FUN_140049960(longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  
  *param_1 = (longlong)&DAT_140475ed0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x15] = (longlong)&DAT_14042af80;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x10;
  lVar4 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  func_0x000140013940(lVar4);
  plVar1 = param_1 + 1;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(longlong **)(lVar4 + 0x48) = plVar1;
  uVar2 = FUN_140013560(lVar4,0x20);
  *(undefined1 *)(lVar4 + 0x58) = uVar2;
  if (*(longlong *)(lVar4 + 0x48) == 0) {
    func_0x000140013c20(lVar4,*(uint *)(lVar4 + 0x10) | 4,0);
  }
  *(undefined **)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &DAT_140475ed8;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xa8;
  FUN_14004c640(plVar1);
  lVar4 = func_0x00014004c590(plVar1,param_2,param_3 | 2);
  if (lVar4 == 0) {
    lVar4 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    uVar3 = 6;
    if (*(longlong *)(lVar4 + 0x48) != 0) {
      uVar3 = 2;
    }
    func_0x000140013c20(lVar4,uVar3 | *(uint *)(lVar4 + 0x10),0);
  }
  return param_1;
}

