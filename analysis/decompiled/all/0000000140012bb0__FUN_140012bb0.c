// Function: FUN_140012bb0
// Addr: 140012bb0
// Size: 143 bytes


longlong * FUN_140012bb0(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *(undefined **)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &DAT_140474168;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
  lVar3 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  func_0x000140013940(lVar3);
  *(undefined8 *)(lVar3 + 0x48) = param_2;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  uVar1 = FUN_140013560(lVar3,0x20);
  *(undefined1 *)(lVar3 + 0x58) = uVar1;
  if (*(longlong *)(lVar3 + 0x48) == 0) {
    plVar2 = (longlong *)func_0x000140013c20(lVar3,*(uint *)(lVar3 + 0x10) | 4,0);
    return plVar2;
  }
  return param_1;
}

