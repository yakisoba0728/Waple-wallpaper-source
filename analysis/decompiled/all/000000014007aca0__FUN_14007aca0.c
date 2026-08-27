// Function: FUN_14007aca0
// Addr: 14007aca0
// Size: 251 bytes


longlong * FUN_14007aca0(longlong *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  *param_1 = (longlong)&DAT_140475e00;
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
  param_1[0x15] = (longlong)std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x10;
  lVar2 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  FUN_140013870(lVar2);
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(longlong **)(lVar2 + 0x48) = param_1 + 1;
  uVar1 = FUN_140013490(lVar2,0x20);
  *(undefined1 *)(lVar2 + 0x58) = uVar1;
  if (*(longlong *)(lVar2 + 0x48) == 0) {
    FUN_140013b50(lVar2,*(uint *)(lVar2 + 0x10) | 4,0);
  }
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_140475e08;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xa8;
  FUN_14004c570(param_1 + 1);
  return param_1;
}

