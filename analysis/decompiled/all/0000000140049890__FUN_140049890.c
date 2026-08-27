// Function: FUN_140049890
// Addr: 140049890
// Size: 327 bytes


longlong * FUN_140049890(longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  
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
  lVar4 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  FUN_140013870(lVar4);
  plVar1 = param_1 + 1;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(longlong **)(lVar4 + 0x48) = plVar1;
  uVar2 = FUN_140013490(lVar4,0x20);
  *(undefined1 *)(lVar4 + 0x58) = uVar2;
  if (*(longlong *)(lVar4 + 0x48) == 0) {
    FUN_140013b50(lVar4,*(uint *)(lVar4 + 0x10) | 4,0);
  }
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_140475e08;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xa8;
  FUN_14004c570(plVar1);
  lVar4 = FUN_14004c4c0(plVar1,param_2,param_3 | 2);
  if (lVar4 == 0) {
    lVar4 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    uVar3 = 6;
    if (*(longlong *)(lVar4 + 0x48) != 0) {
      uVar3 = 2;
    }
    FUN_140013b50(lVar4,uVar3 | *(uint *)(lVar4 + 0x10),0);
  }
  return param_1;
}

