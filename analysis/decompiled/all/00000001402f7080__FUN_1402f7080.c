// Function: FUN_1402f7080
// Addr: 1402f7080
// Size: 194 bytes


ulonglong FUN_1402f7080(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x98);
  uVar5 = *(uint *)(*(longlong *)(param_1 + 0xf0) + 8);
  if ((uVar5 & 1) == 0) {
    *(uint *)(*(longlong *)(param_1 + 0xf0) + 8) = uVar5 | 1;
  }
  else {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  lVar6 = 0;
  if ((iVar1 < 0) || (iVar2 = *(int *)(param_1 + 0x70), iVar2 < 0)) {
    uVar5 = 6;
  }
  else if ((iVar1 == 0) || (iVar2 == 0)) {
    uVar5 = 0;
  }
  else if ((int)(0x7fffffff / (longlong)iVar2) < iVar1) {
    uVar5 = 10;
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(lVar3 + 8))(lVar3,iVar2 * iVar1);
    uVar5 = 0x40;
    if ((lVar6 != 0) && (uVar5 = 0, 0 < iVar1)) {
      uVar4 = func_0x000140421870(lVar6,0,(longlong)(iVar2 * iVar1));
      return uVar4;
    }
  }
  *(longlong *)(param_1 + 0x78) = lVar6;
  return (ulonglong)uVar5;
}

