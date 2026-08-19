// Function: FUN_140185a30
// Addr: 140185a30
// Size: 196 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140185a30(longlong param_1,char param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_90 [88];
  
  iVar1 = func_0x000140290e50(&DAT_1404dfbc0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (DAT_1404dfc0c == 0x7fffffff) {
    DAT_1404dfc0c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(6);
  }
  if (DAT_1404e8fb8 != 0) {
    _DAT_1404e8fb4 = _DAT_1404e8fb4 + 1;
    lVar3 = param_1 + 0x20;
    if (param_2 == '\0') {
      lVar3 = param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140017090(local_90,lVar3);
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x10))();
    uVar2 = func_0x00014028aff0(0x68);
    return uVar2;
  }
  FUN_140290f70(&DAT_1404dfbc0);
  return 0;
}

