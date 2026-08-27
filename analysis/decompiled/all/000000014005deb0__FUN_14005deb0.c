// Function: FUN_14005deb0
// Addr: 14005deb0
// Size: 697 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14005deb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_res8 [8];
  longlong *local_res10;
  longlong *local_res18 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  
  puVar1 = param_1 + 0xf;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *puVar1 = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 1;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x14;
  param_1[0x24] = 0;
  param_1[0x10] = 0;
  iVar2 = FUN_140290d80(&DAT_1404df690);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404df6dc != 0x7fffffff) {
    if (DAT_1404e52b0 == 0) {
      DAT_1404e52b0 = FUN_14005bb90();
      if (DAT_1404e52b0 == 0) {
        *(undefined4 *)(param_1 + 0xe) = 0x80004005;
      }
    }
    if (-1 < *(int *)(param_1 + 0xe)) {
      local_38 = _DAT_140492ca0;
      uStack_30 = _UNK_140492ca8;
      iVar2 = D3D11CreateDevice(0,1,0,0x20,&local_38,4,7,puVar1,local_res8,param_1 + 0x10);
      if (-1 < iVar2) {
        local_res18[0] = (longlong *)0x0;
        iVar2 = (*(code *)**(undefined8 **)*puVar1)
                          ((undefined8 *)*puVar1,&DAT_140474258,local_res18);
        if (-1 < iVar2) {
          local_res10 = (longlong *)0x0;
          iVar2 = (**(code **)(*local_res18[0] + 0x38))(local_res18[0],&local_res10);
          if (-1 < iVar2) {
            iVar2 = (**(code **)(*local_res10 + 0x30))(local_res10,&DAT_140477f00,param_1 + 0x11);
            if (local_res10 != (longlong *)0x0) {
              (**(code **)(*local_res10 + 0x10))();
              local_res10 = (longlong *)0x0;
            }
          }
          if (local_res18[0] != (longlong *)0x0) {
            (**(code **)(*local_res18[0] + 0x10))();
          }
        }
      }
      *(int *)(param_1 + 0xe) = iVar2;
      if (-1 < iVar2) {
        uVar3 = FUN_14005e490(param_1);
        *(undefined4 *)(param_1 + 0xe) = uVar3;
      }
    }
    iVar2 = FUN_1402c97a0();
    *(float *)(param_1 + 0x21) = (float)iVar2 / DAT_140492960;
    iVar2 = FUN_1402c97a0();
    *(float *)((longlong)param_1 + 0x10c) = (float)iVar2 / DAT_140492960;
    FUN_140290ea0(&DAT_1404df690);
    return param_1;
  }
  DAT_1404df6dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

