// Function: FUN_1400f2750
// Addr: 1400f2750
// Size: 385 bytes


undefined8 FUN_1400f2750(longlong *param_1,byte *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_res8 [2];
  int local_res10 [2];
  longlong *local_res18;
  ulonglong local_res20;
  undefined2 local_37;
  byte local_35;
  undefined2 local_27;
  byte local_25;
  
  *(undefined2 *)(param_2 + 1) = local_37;
  param_2[3] = local_35;
  *(undefined2 *)(param_2 + 0x11) = local_27;
  param_2[0x13] = local_25;
  *param_2 = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  local_res18 = (longlong *)0x0;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1,0xfffffffc,1);
  if (iVar1 < 0) goto LAB_1400f28ae;
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,0xfffffffc,&local_res18);
  if (iVar1 < 0) goto LAB_1400f28ae;
  iVar1 = (**(code **)(*local_res18 + 0x40))(local_res18,&DAT_14042c2e0,&local_res20);
  if (-1 < iVar1) {
    *(int *)(param_2 + 8) = (int)local_res20;
    *(int *)(param_2 + 4) = (int)(local_res20 >> 0x20);
  }
  *param_2 = (byte)((uint)iVar1 >> 0x1f) ^ 1;
  iVar1 = (**(code **)(*local_res18 + 0x40))(local_res18,&DAT_14042c2f0,&local_res20);
  if (-1 < iVar1) {
    *(float *)(param_2 + 0xc) =
         (float)((double)(local_res20 >> 0x20) / (double)(local_res20 & 0xffffffff));
  }
  local_res8[0] = 0;
  iVar1 = (**(code **)(*local_res18 + 0x38))(local_res18,&DAT_14042c300,local_res8);
  if (-1 < iVar1) {
    if (local_res8[0] == 0xf) {
      param_2[0x14] = 2;
      param_2[0x15] = 0;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
    }
    else {
      if (local_res8[0] != 0x10) goto LAB_1400f2881;
      param_2[0x14] = 1;
      param_2[0x15] = 0;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
    }
    param_2[0x10] = 1;
  }
LAB_1400f2881:
  local_res10[0] = 0;
  iVar1 = (**(code **)(*local_res18 + 0x38))(local_res18,&DAT_14042c310,local_res10);
  if ((-1 < iVar1) && (local_res10[0] == 9)) {
    param_2[0x18] = 1;
    param_2[0x19] = 0;
    param_2[0x1a] = 0;
    param_2[0x1b] = 0;
  }
LAB_1400f28ae:
  if (local_res18 != (longlong *)0x0) {
    (**(code **)(*local_res18 + 0x10))();
  }
  uVar2 = 0x80004005;
  if (*param_2 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}

