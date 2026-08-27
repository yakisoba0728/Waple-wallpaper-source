// Function: FUN_140277410
// Addr: 140277410
// Size: 93 bytes


void FUN_140277410(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_14004c3c0(param_2 + 3);
    if (lVar1 == 0) {
      lVar1 = (longlong)*(int *)(*param_2 + 4) + (longlong)param_2;
      uVar2 = 6;
      if (*(longlong *)(lVar1 + 0x48) != 0) {
        uVar2 = 2;
      }
      FUN_140013b50(lVar1,uVar2 | *(uint *)(lVar1 + 0x10),0);
    }
    FUN_1400c1610(param_2);
    thunk_FUN_14028af80(param_2,0x120);
  }
  return;
}

