// Function: FUN_140089050
// Addr: 140089050
// Size: 270 bytes


longlong * FUN_140089050(longlong *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  *param_1 = (longlong)&DAT_1404740a8;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x11] = (longlong)std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x10;
  lVar3 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  FUN_140013870(lVar3);
  plVar1 = param_1 + 1;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(longlong **)(lVar3 + 0x48) = plVar1;
  uVar2 = FUN_140013490(lVar3,0x20);
  *(undefined1 *)(lVar3 + 0x58) = uVar2;
  if (*(longlong *)(lVar3 + 0x48) == 0) {
    FUN_140013b50(lVar3,*(uint *)(lVar3 + 0x10) | 4,0);
  }
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_140478890;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x88;
  FUN_140012b80(plVar1);
  param_1[0xe] = 0;
  *plVar1 = (longlong)&PTR_FUN_1404740b8;
  *(undefined4 *)(param_1 + 0xf) = 4;
  return param_1;
}

