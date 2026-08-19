// Function: FUN_14035feb0
// Addr: 14035feb0
// Size: 262 bytes


bool FUN_14035feb0(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,int *param_5)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 local_res18 [4];
  ulonglong in_stack_ffffffffffffffb8;
  
  local_res18[0] = (undefined4)param_3;
  uVar5 = 0;
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x90) + 0x80);
  if (pcVar1 != (code *)PTR_LAB_1404df578) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
    if (lVar2 != 0) {
      uVar5 = *(undefined8 *)(lVar2 + 0x60);
    }
    iVar4 = (*pcVar1)(param_1,*(undefined8 *)(param_1 + 0x98),1,local_res18,
                      in_stack_ffffffffffffffb8 & 0xffffffff00000000,param_4,0,param_5,0,uVar5);
    return iVar4 != 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  *param_5 = 0;
  *param_4 = 0;
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x90) + 0x10);
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(lVar3 + 0x50);
  }
  iVar4 = (**(code **)(*(longlong *)(lVar2 + 0x90) + 0x70))
                    (lVar2,*(undefined8 *)(lVar2 + 0x98),param_3,param_4,param_5,uVar5);
  if ((iVar4 == 0) || (*(char *)(lVar2 + 0x3c) != '\0')) {
    bVar6 = iVar4 != 0;
    if (iVar4 == 0) {
      return false;
    }
  }
  else {
    iVar4 = -*(int *)(lVar2 + 0x40);
    if (-1 < *(int *)(lVar2 + 0x28)) {
      iVar4 = *(int *)(lVar2 + 0x40);
    }
    *param_4 = *param_4 + iVar4;
    iVar4 = -*(int *)(lVar2 + 0x44);
    if (-1 < *(int *)(lVar2 + 0x2c)) {
      iVar4 = *(int *)(lVar2 + 0x44);
    }
    bVar6 = true;
    *param_5 = *param_5 + iVar4;
  }
  FUN_1403f08c0(param_1,param_4,param_5);
  return bVar6;
}

