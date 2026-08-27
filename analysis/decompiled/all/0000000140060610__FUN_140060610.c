// Function: FUN_140060610
// Addr: 140060610
// Size: 272 bytes


undefined8 FUN_140060610(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iStack_11c;
  longlong local_118;
  undefined1 local_110 [8];
  uint auStack_108 [14];
  longlong alStack_d0 [8];
  longlong local_90;
  undefined **local_70 [13];
  
  FUN_140049890(&local_118,param_1,0x30);
  if (local_90 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_14007ada0(&local_118,param_2,param_3);
    lVar1 = FUN_14004c3c0(local_110);
    if (lVar1 == 0) {
      lVar1 = (longlong)*(int *)(local_118 + 4);
      uVar2 = 6;
      if (*(longlong *)((longlong)alStack_d0 + lVar1) != 0) {
        uVar2 = 2;
      }
      FUN_140013b50(local_110 + lVar1 + -8,uVar2 | *(uint *)((longlong)auStack_108 + lVar1),0);
    }
    uVar3 = 1;
  }
  *(undefined ***)(local_110 + (longlong)*(int *)(local_118 + 4) + -8) = &PTR_LAB_140475e08;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0xa8;
  FUN_14004a790(local_110);
  *(undefined ***)(local_110 + (longlong)*(int *)(local_118 + 4) + -8) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x10;
  local_70[0] = std::ios_base::vftable;
  FUN_14028c430(local_70);
  return uVar3;
}

