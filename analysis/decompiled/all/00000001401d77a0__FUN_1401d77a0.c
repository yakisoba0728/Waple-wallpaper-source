// Function: FUN_1401d77a0
// Addr: 1401d77a0
// Size: 7 bytes


void FUN_1401d77a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStackX_8 [8];
  longlong *plStackX_10;
  undefined1 auStack_58 [16];
  undefined *puStack_48;
  longlong lStack_40;
  undefined **ppuStack_10;
  
  plStackX_10 = param_2;
  plVar1 = (longlong *)FUN_14019ed60(param_1 + 0x118,auStackX_8,&plStackX_10);
  if (*plVar1 == *(longlong *)(param_1 + 0x120)) {
    FUN_1401a0e40(param_1 + 0x118,auStack_58,&plStackX_10);
    puStack_48 = &UNK_1404902e8;
    ppuStack_10 = &puStack_48;
    lStack_40 = param_1;
    (**(code **)(*plStackX_10 + 0x30))(plStackX_10,&puStack_48);
  }
  return;
}

