// Function: FUN_14039d700
// Addr: 14039d700
// Size: 198 bytes


uint FUN_14039d700(undefined8 param_1,uint param_2,int *param_3,longlong param_4,undefined8 param_5)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint local_res18 [2];
  undefined1 local_28 [16];
  
  uVar1 = param_5;
  local_res18[0] = 0;
  FUN_1402f4ef0(param_5,0,0,local_res18);
  if ((param_3 != (int *)0x0) && (*param_3 = 0, param_2 < local_res18[0])) {
    uVar3 = local_res18[0];
    if (param_2 <= local_res18[0]) {
      uVar3 = param_2;
    }
    if (param_2 <= uVar3) {
      *param_3 = uVar3 - param_2;
      for (uVar2 = param_2; uVar2 < uVar3; uVar2 = uVar2 + 1) {
        param_5._0_4_ = 0;
        FUN_1402f4ef0(uVar1,uVar2,&param_5,local_28);
        *(undefined4 *)(param_4 + (ulonglong)(uVar2 - param_2) * 4) = (undefined4)param_5;
      }
    }
  }
  return local_res18[0];
}

