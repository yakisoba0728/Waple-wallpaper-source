// Function: FUN_140084580
// Addr: 140084580
// Size: 155 bytes


undefined8 FUN_140084580(longlong *param_1)

{
  int iVar1;
  
  if (*param_1 == -1) {
    if (*(int *)((longlong)param_1 + 100) != 0xff) {
      *(undefined4 *)((longlong)param_1 + 100) = 0xff;
    }
    return 1;
  }
  iVar1 = (*DAT_140426228)();
  if (iVar1 == 0) {
    FUN_1400818d0(param_1 + 0xe);
    (*DAT_1404262f0)(param_1[1],0xffffffffffffffff);
    param_1[1] = -1;
    (*DAT_140426368)(*param_1);
    *param_1 = -1;
    if (param_1[0x59] != 0) {
      if ((longlong *)param_1[0x59] == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c390();
      }
      (**(code **)(*(longlong *)param_1[0x59] + 0x10))();
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
    return 1;
  }
  return 0;
}

