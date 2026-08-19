// Function: FUN_1400847d0
// Addr: 1400847d0
// Size: 558 bytes


void FUN_1400847d0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 local_res8 [2];
  
  if (param_1[0x19] == 0) {
    if (param_1[0x11] == 0) {
      if (*param_1 != -1) {
        iVar2 = func_0x000140290e50(param_1 + 2);
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140290e00(5);
        }
        if (*(int *)((longlong)param_1 + 0x5c) == 0x7fffffff) {
          *(undefined4 *)((longlong)param_1 + 0x5c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_140290e00(6);
        }
        lVar1 = param_1[0xc];
        *(undefined1 *)(param_1 + 0xc) = 0;
        (*DAT_1404262e0)(*param_1,local_res8);
        *(undefined4 *)((longlong)param_1 + 100) = local_res8[0];
        FUN_140290f70(param_1 + 2);
        if ((char)lVar1 != '\0') {
          FUN_1400818d0(param_1 + 0xe);
          (*DAT_1404262f0)(param_1[1],0xffffffffffffffff);
          param_1[1] = -1;
          (*DAT_140426368)(*param_1);
          *param_1 = -1;
          if ((longlong *)param_1[0x59] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x59] + 0x10))();
          }
        }
      }
      return;
    }
    iVar2 = func_0x000140290e50(param_1 + 0x36);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(5);
    }
    if (*(int *)((longlong)param_1 + 0x1fc) == 0x7fffffff) {
      *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(6);
    }
    if (param_1[0x44] != 0) {
      func_0x00014028b040(*(undefined8 *)
                           (*(longlong *)(param_1[0x41] + (param_1[0x42] - 1U & param_1[0x43]) * 8)
                           + 0x18));
      return;
    }
  }
  else {
    iVar2 = func_0x000140290e50(param_1 + 0x36);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(5);
    }
    if (*(int *)((longlong)param_1 + 0x1fc) == 0x7fffffff) {
      *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(6);
    }
    if (param_1[0x44] != 0) {
      func_0x00014028b040(*(undefined8 *)
                           (*(longlong *)(param_1[0x41] + (param_1[0x42] - 1U & param_1[0x43]) * 8)
                           + 0x18));
      return;
    }
  }
  FUN_140290f70(param_1 + 0x36);
  func_0x00014028b040(0);
  return;
}

