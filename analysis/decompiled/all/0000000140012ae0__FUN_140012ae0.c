// Function: FUN_140012ae0
// Addr: 140012ae0
// Size: 149 bytes


longlong * FUN_140012ae0(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_140474098;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
  lVar2 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  FUN_140013870(lVar2);
  *(undefined8 *)(lVar2 + 0x48) = param_2;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  uVar1 = FUN_140013490(lVar2,0x20);
  *(undefined1 *)(lVar2 + 0x58) = uVar1;
  if (*(longlong *)(lVar2 + 0x48) == 0) {
    FUN_140013b50(lVar2,*(uint *)(lVar2 + 0x10) | 4,0);
  }
  return param_1;
}

