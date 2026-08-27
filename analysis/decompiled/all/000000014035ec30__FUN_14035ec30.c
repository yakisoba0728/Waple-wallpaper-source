// Function: FUN_14035ec30
// Addr: 14035ec30
// Size: 154 bytes


bool FUN_14035ec30(longlong param_1,ulonglong param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = (**(code **)(lVar1 + 0x28))(lVar1,param_2,*(undefined8 *)(lVar1 + 0x68));
  if (uVar2 < 0x20) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    iVar3 = (**(code **)(lVar1 + 0x28))(lVar1,param_2 & 0xffffffff,*(undefined8 *)(lVar1 + 0x68));
    if (iVar3 - 10U < 3) {
      return false;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  *param_4 = 0;
  if (((int)param_2 != 0) && (param_3 != 0)) {
    iVar3 = (**(code **)(lVar1 + 0x40))
                      (lVar1,param_2 & 0xffffffff,param_3,param_4,*(undefined8 *)(lVar1 + 0x80));
    return iVar3 != 0;
  }
  return false;
}

