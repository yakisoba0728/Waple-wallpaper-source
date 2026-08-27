// Function: FUN_1403d0d90
// Addr: 1403d0d90
// Size: 66 bytes


bool FUN_1403d0d90(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_res8 [8];
  
  local_res8[0] = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
  uVar3 = 0;
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
  }
  iVar2 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x30))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,local_res8,uVar3);
  return iVar2 != 0;
}

