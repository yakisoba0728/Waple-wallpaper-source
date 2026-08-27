// Function: FUN_140121c60
// Addr: 140121c60
// Size: 396 bytes


int FUN_140121c60(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  int iVar2;
  int local_res10 [2];
  int local_res18 [2];
  
  *param_3 = 0;
  local_res10[0] = 0;
  local_res18[0] = 0;
  if (param_2 == (longlong *)0x0) {
    return -0x7fffbffd;
  }
  iVar2 = (**(code **)(*param_2 + 0x108))(param_2,local_res18);
  if (iVar2 < 0) {
LAB_140121d61:
    (**(code **)(*param_2 + 0x10))(param_2);
    if (-1 < iVar2) {
      return iVar2;
    }
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x118))(param_2,local_res10);
    if (-1 < iVar2) {
      if (local_res10[0] < 0) {
        iVar2 = local_res10[0];
      }
      if (-1 < iVar2) {
        if (local_res18[0] == 0x65) {
          ShowWindow((HWND)param_1[0x15],0);
          (**(code **)(*param_2 + 0x10))(param_2);
          return iVar2;
        }
        if (local_res18[0] == 0x67) {
          ShowWindow((HWND)param_1[0x15],4);
          (**(code **)(*param_1 + 0x48))(param_1);
          (**(code **)(*param_2 + 0x10))(param_2);
          return iVar2;
        }
        if (local_res18[0] == 0x6f) {
          lVar1 = param_1[0x16];
          iVar2 = (**(code **)(*param_1 + 0xe0))(param_1,param_2);
          if (((int)param_1[0x16] == 3) && ((int)lVar1 != 3)) {
            *param_3 = 1;
          }
        }
        else if (local_res18[0] == 0x71) {
          iVar2 = (**(code **)(*param_1 + 0xf0))();
        }
        else if (local_res18[0] == 0xd3) {
          iVar2 = (**(code **)(*param_1 + 0xe8))();
        }
        else {
          iVar2 = (**(code **)(*param_1 + 0xf8))();
        }
        goto LAB_140121d61;
      }
    }
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  *param_3 = 2;
  return iVar2;
}

