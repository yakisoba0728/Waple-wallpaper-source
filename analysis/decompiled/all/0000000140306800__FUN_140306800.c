// Function: FUN_140306800
// Addr: 140306800
// Size: 180 bytes


undefined8 FUN_140306800(ulonglong param_1,ulonglong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong local_res8;
  
  uVar3 = *param_3;
  local_res8 = param_1 & 0xffffffff00000000;
  iVar1 = func_0x0001402f1ba0(uVar3,param_2,0,0,&local_res8);
  if (iVar1 == 0) {
    lVar2 = thunk_FUN_1402da070(local_res8 & 0xffffffff);
    if (lVar2 != 0) {
      iVar1 = func_0x0001402f1ba0(uVar3,param_2 & 0xffffffff,0,lVar2,&local_res8);
      if (iVar1 != 0) {
        uVar3 = func_0x0001402bf8e0();
        return uVar3;
      }
      uVar3 = func_0x000140413f30(lVar2,local_res8 & 0xffffffff,2,lVar2,0x1402bf8e0);
      return uVar3;
    }
  }
  return 0;
}

