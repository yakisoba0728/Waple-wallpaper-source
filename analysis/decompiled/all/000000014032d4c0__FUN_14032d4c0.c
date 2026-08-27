// Function: FUN_14032d4c0
// Addr: 14032d4c0
// Size: 169 bytes


int FUN_14032d4c0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  int local_res18 [4];
  
  uVar2 = param_3 - 7;
  local_res18[0] = 0;
  if (uVar2 == 0) {
    local_res18[0] = 0;
  }
  else {
    lVar1 = FUN_1402f7ff0(*(undefined8 *)(param_1 + 0x80),1,*(int *)(param_1 + 0x68),
                          param_3 + -6 + *(int *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x60),
                          local_res18);
    *(longlong *)(param_1 + 0x60) = lVar1;
    if (local_res18[0] == 0) {
      lVar1 = (ulonglong)*(uint *)(param_1 + 0x68) + lVar1;
      FUN_1404210f0(lVar1,param_2 + 7,uVar2);
      *(undefined1 *)((ulonglong)uVar2 + lVar1) = 0;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + param_3 + -6;
      return local_res18[0];
    }
  }
  return local_res18[0];
}

