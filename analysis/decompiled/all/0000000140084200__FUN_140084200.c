// Function: FUN_140084200
// Addr: 140084200
// Size: 545 bytes


void FUN_140084200(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  
  uVar3 = 0;
  if (param_1[0x19] == 0) {
    if (param_1[0x11] == 0) {
      if (*param_1 != -1) {
        if (*param_1 != 0) {
          local_48 = 0;
          uStack_40 = 0;
          uVar2 = (*DAT_1404262d8)();
          local_48 = CONCAT44(local_48._4_4_,uVar2);
          (*DAT_140426998)(FUN_140083070,&local_48);
          uVar3 = uStack_40;
        }
        iVar1 = (*DAT_140426af0)(uVar3);
        if (iVar1 != 0) {
          (*DAT_140426a98)(uVar3,0x10,0,0);
          uVar4 = 3000;
          while( true ) {
            (*DAT_140426228)(*param_1,1000);
            iVar1 = (*DAT_140426af0)(uVar3);
            if (iVar1 == 0) break;
            (*DAT_140426240)(500);
            if (uVar4 == 500) {
              FUN_140098830("ChildProcess::Close waited indefinitely.\n");
              break;
            }
            if (uVar4 < 0x1f5) break;
            uVar4 = uVar4 - 500;
          }
        }
      }
      FUN_1400818d0(param_1 + 0xe);
      if (param_1[1] != -1) {
        (*DAT_1404262f0)(param_1[1],0xffffffffffffffff);
        param_1[1] = -1;
      }
      if (*param_1 != -1) {
        (*DAT_140426368)();
        *param_1 = -1;
      }
      return;
    }
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    iVar1 = func_0x000140290e50(param_1 + 0x36);
    if (iVar1 != 0) {
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
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    iVar1 = func_0x000140290e50(param_1 + 0x36);
    if (iVar1 != 0) {
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
  func_0x00014028b040(local_30);
  return;
}

