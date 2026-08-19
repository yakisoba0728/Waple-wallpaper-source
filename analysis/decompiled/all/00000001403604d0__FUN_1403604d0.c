// Function: FUN_1403604d0
// Addr: 1403604d0
// Size: 92 bytes


ulonglong FUN_1403604d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    uVar5 = *(undefined8 *)(lVar3 + 0x70);
  }
  uVar4 = (**(code **)(*(longlong *)(lVar2 + 0x90) + 0x90))
                    (lVar2,*(undefined8 *)(lVar2 + 0x98),param_3,param_4,uVar5);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
    if ((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 0x2c))) {
      return ((longlong)*(int *)(param_1 + 0x2c) * (longlong)(int)uVar4) / (longlong)iVar1;
    }
  }
  return (ulonglong)uVar4;
}

