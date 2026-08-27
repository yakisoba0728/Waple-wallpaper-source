// Function: FUN_140119330
// Addr: 140119330
// Size: 359 bytes


void FUN_140119330(longlong param_1)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  undefined8 local_38;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  iVar3 = 1;
  LOCK();
  iVar1 = *(int *)(param_1 + 0x140);
  *(int *)(param_1 + 0x140) = 1;
  UNLOCK();
  do {
    if (iVar1 == 0) {
      local_38._0_4_ = *(int *)(param_1 + 0x144);
      local_38._4_4_ = *(int *)(param_1 + 0x148);
      iStack_30 = *(int *)(param_1 + 0x14c);
      iStack_2c = *(int *)(param_1 + 0x150);
      *(undefined4 *)(param_1 + 0x140) = 0;
      BVar2 = IsWindow(*(HWND *)(param_1 + 0x430));
      if (BVar2 != 0) {
        SetWindowPos(*(HWND *)(param_1 + 0x430),(HWND)0x0,(int)local_38,local_38._4_4_,
                     iStack_30 - (int)local_38,iStack_2c - local_38._4_4_,0x31c);
        iStack_30 = iStack_30 - (int)local_38;
        iStack_2c = iStack_2c - local_38._4_4_;
        local_20 = &local_38;
        local_38 = 0;
        local_28 = 2;
        local_18 = 0;
        local_10 = 0;
        local_24 = 0x10;
        iVar1 = FUN_140290d80(param_1 + 0x4a0);
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140290d30(5);
        }
        if (*(int *)(param_1 + 0x4ec) == 0x7fffffff) {
          *(undefined4 *)(param_1 + 0x4ec) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_140290d30(6);
        }
        FUN_1400182d0(param_1 + 0x158,&local_28);
        FUN_140290ea0(param_1 + 0x4a0);
        thunk_FUN_14028af80(0);
      }
      return;
    }
    iVar1 = *(int *)(param_1 + 0x140);
    while (iVar1 != 0) {
      iVar1 = iVar3;
      if (iVar3 == 0) {
LAB_140119379:
        iVar3 = iVar3 * 2;
      }
      else {
        do {
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        if (iVar3 < 0x40) goto LAB_140119379;
        iVar3 = 0x40;
      }
      iVar1 = *(int *)(param_1 + 0x140);
    }
    LOCK();
    iVar1 = *(int *)(param_1 + 0x140);
    *(int *)(param_1 + 0x140) = 1;
    UNLOCK();
  } while( true );
}

