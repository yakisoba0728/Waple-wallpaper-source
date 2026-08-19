// Function: FUN_140119400
// Addr: 140119400
// Size: 166 bytes


void FUN_140119400(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_38;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 *puStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  
  iVar2 = 1;
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
      iVar1 = (*DAT_140426af0)(*(undefined8 *)(param_1 + 0x430));
      if (iVar1 != 0) {
        (*DAT_140426950)(*(undefined8 *)(param_1 + 0x430),0,(int)local_38,local_38._4_4_,
                         iStack_30 - (int)local_38,iStack_2c - local_38._4_4_,0x31c);
        iStack_30 = iStack_30 - (int)local_38;
        iStack_2c = iStack_2c - local_38._4_4_;
        puStack_20 = &local_38;
        local_38 = 0;
        uStack_28 = 2;
        uStack_18 = 0;
        uStack_10 = 0;
        uStack_24 = 0x10;
        iVar1 = func_0x000140290e50(param_1 + 0x4a0);
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140290e00(5);
        }
        if (*(int *)(param_1 + 0x4ec) == 0x7fffffff) {
          *(undefined4 *)(param_1 + 0x4ec) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_140290e00(6);
        }
        FUN_1400183a0(param_1 + 0x158,&uStack_28);
        FUN_140290f70(param_1 + 0x4a0);
        func_0x00014028b040(0);
      }
      return;
    }
    iVar1 = *(int *)(param_1 + 0x140);
    while (iVar1 != 0) {
      iVar1 = iVar2;
      if (iVar2 == 0) {
LAB_140119449:
        iVar2 = iVar2 * 2;
      }
      else {
        do {
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        if (iVar2 < 0x40) goto LAB_140119449;
        iVar2 = 0x40;
      }
      iVar1 = *(int *)(param_1 + 0x140);
    }
    LOCK();
    iVar1 = *(int *)(param_1 + 0x140);
    *(int *)(param_1 + 0x140) = 1;
    UNLOCK();
  } while( true );
}

