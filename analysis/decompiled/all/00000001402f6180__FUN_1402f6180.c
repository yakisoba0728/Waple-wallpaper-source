// Function: FUN_1402f6180
// Addr: 1402f6180
// Size: 410 bytes


ulonglong FUN_1402f6180(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                       longlong *param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int local_res8 [2];
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  
  lVar1 = *param_1;
  uVar5 = (undefined4)((ulonglong)&local_38 >> 0x20);
  uVar4 = FUN_1402f3e50();
  if ((int)uVar4 == 0) {
    uVar4 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffffb0 >> 8),1);
    iVar2 = FUN_1402f38e0(param_1,param_2,local_34,local_38,CONCAT44(uVar5,0x504f5354),uVar4,
                          &local_30,local_res8);
    if (iVar2 == 0) {
      uVar3 = FUN_1402f6320(param_1,param_2,local_30,local_res8[0],param_4,param_5);
      uVar4 = (ulonglong)uVar3;
      if (local_30 != 0) {
        (**(code **)(lVar1 + 0x10))(lVar1,local_30);
      }
      if (uVar3 == 0) {
        *(undefined4 *)*param_5 = 1;
      }
    }
    else {
      uVar3 = FUN_1402f38e0(param_1,param_2,local_34,local_38,0x73666e74,uVar4 & 0xffffffffffffff00,
                            &local_30,local_res8);
      uVar4 = (ulonglong)uVar3;
      if (uVar3 == 0) {
        uVar3 = FUN_1402f6810(param_1,param_2,local_30,local_res8[0],param_4 % local_res8[0],param_5
                             );
        uVar4 = (ulonglong)uVar3;
        if (local_30 != 0) {
          (**(code **)(lVar1 + 0x10))(lVar1,local_30);
        }
        if (uVar3 == 0) {
          *(int *)*param_5 = local_res8[0];
          *(int *)(*param_5 + 4) = param_4 % local_res8[0];
        }
      }
    }
  }
  return uVar4;
}

