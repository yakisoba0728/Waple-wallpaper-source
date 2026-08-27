// Function: FUN_140360390
// Addr: 140360390
// Size: 106 bytes


ulonglong FUN_140360390(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x90) + 0x10);
  uVar5 = 0;
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(lVar3 + 0x68);
  }
  uVar4 = (**(code **)(*(longlong *)(lVar2 + 0x90) + 0x88))
                    (lVar2,*(undefined8 *)(lVar2 + 0x98),param_3,param_4,uVar5);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x28);
    if ((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 0x28))) {
      return ((longlong)*(int *)(param_1 + 0x28) * (longlong)(int)uVar4) / (longlong)iVar1;
    }
  }
  return (ulonglong)uVar4;
}

