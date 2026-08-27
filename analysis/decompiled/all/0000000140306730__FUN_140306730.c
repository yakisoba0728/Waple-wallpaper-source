// Function: FUN_140306730
// Addr: 140306730
// Size: 180 bytes


undefined8 FUN_140306730(ulonglong param_1,ulonglong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong local_res8;
  
  uVar3 = *param_3;
  local_res8 = param_1 & 0xffffffff00000000;
  iVar1 = FUN_1402f1ad0(uVar3,param_2,0,0,&local_res8);
  if (iVar1 == 0) {
    lVar2 = _malloc_base(local_res8 & 0xffffffff);
    if (lVar2 != 0) {
      iVar1 = FUN_1402f1ad0(uVar3,param_2 & 0xffffffff,0,lVar2,&local_res8);
      if (iVar1 == 0) {
        uVar3 = FUN_140413e60(lVar2,local_res8 & 0xffffffff,2,lVar2,thunk_FUN_1402d9040);
        return uVar3;
      }
      thunk_FUN_1402d9040();
    }
  }
  return 0;
}

