// Function: FUN_1402e0798
// Addr: 1402e0798
// Size: 130 bytes


bool FUN_1402e0798(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong local_res8;
  longlong local_res10 [3];
  
  if ((*(uint *)((longlong)param_1 + 0x14) >> 3 & 1) == 0) {
    if ((((*(uint *)((longlong)param_1 + 0x14) & 0xc0) == 0) || (*param_1 != param_1[1])) &&
       (lVar3 = func_0x0001402e48b0((int)param_1[3]), lVar3 != -1)) {
      local_res10[0] = 0;
      iVar2 = (*DAT_1404266b8)(lVar3,0,local_res10,1);
      if (iVar2 != 0) {
        local_res8 = 0;
        iVar2 = (*DAT_140426430)(lVar3,&local_res8);
        if (iVar2 != 0) {
          return local_res10[0] == local_res8;
        }
      }
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

