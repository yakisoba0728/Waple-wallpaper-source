// Function: FUN_1400d0180
// Addr: 1400d0180
// Size: 155 bytes


void FUN_1400d0180(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar2 = func_0x000140290e50(param_1 + 0x78);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(5);
    }
    if (*(int *)(param_1 + 0xc4) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0xc4) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(6);
    }
    FUN_140015170(param_1 + 0x68);
    FUN_140290f70(param_1 + 0x78);
  }
  if ((*(char *)(param_1 + 0xfc) != '\0') &&
     (*(undefined1 *)(param_1 + 0xfc) = 0, *(longlong *)(param_1 + 0xd0) != 0)) {
    plVar1 = *(longlong **)(param_1 + 200);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined8 *)(param_1 + 0x120));
    }
    if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x58))();
    }
    if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x10))();
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x10))();
      *(undefined8 *)(param_1 + 0xd0) = 0;
    }
  }
  return;
}

