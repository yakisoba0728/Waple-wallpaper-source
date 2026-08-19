// Function: FUN_14011f7b0
// Addr: 14011f7b0
// Size: 126 bytes


undefined8 FUN_14011f7b0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = func_0x000140290e50(param_1 + 0xe50);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0xe9c) != 0x7fffffff) {
    if (*(longlong *)(param_1 + 0xe30) != 0) {
      lVar3 = FUN_140150040(*(longlong *)(param_1 + 0xe30) + 0x1640,"materials/background.json");
      if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0xd0) != 0)) &&
         (plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0xd0) + 0xd8), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x30))();
      }
    }
    FUN_140290f70(param_1 + 0xe50);
    return 0;
  }
  *(undefined4 *)(param_1 + 0xe9c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290e00(6);
}

