// Function: FUN_14011aee0
// Addr: 14011aee0
// Size: 50 bytes


ulonglong FUN_14011aee0(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  
  bVar2 = *(byte *)(param_1 + 8);
  if ((bool)*(char *)(param_1 + 0x4f0) == (bVar2 == 0)) {
    return (ulonglong)bVar2;
  }
  *(bool *)(param_1 + 0x4f0) = bVar2 == 0;
  if (bVar2 == 0) {
    uVar4 = func_0x00014028aff0(0x10);
    return uVar4;
  }
  iVar3 = func_0x000140290e50(param_1 + 0x450);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0x49c) != 0x7fffffff) {
    FUN_140015170(param_1 + 0x440);
    piVar1 = (int *)(param_1 + 0x49c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0x498) = 0xffffffff;
      (*DAT_140426298)(param_1 + 0x460);
    }
    return 0;
  }
  *(undefined4 *)(param_1 + 0x49c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290e00(6);
}

