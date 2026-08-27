// Function: FUN_140360480
// Addr: 140360480
// Size: 174 bytes


ulonglong FUN_140360480(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_1403c99a0(*(undefined8 *)(param_1 + 0x18),param_3,param_4,0);
  if ((int)uVar3 != 0) {
    FUN_1403f07f0(param_1,param_4,param_4 + 4);
    iVar2 = *(int *)(param_4 + 8);
    if (*(longlong *)(param_1 + 0x18) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x28);
      if ((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 0x28))) {
        iVar2 = (int)(((longlong)*(int *)(param_1 + 0x28) * (longlong)iVar2) / (longlong)iVar1);
      }
    }
    *(int *)(param_4 + 8) = iVar2;
    iVar2 = *(int *)(param_4 + 0xc);
    if (*(longlong *)(param_1 + 0x18) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
      if ((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 0x2c))) {
        iVar2 = (int)(((longlong)*(int *)(param_1 + 0x2c) * (longlong)iVar2) / (longlong)iVar1);
      }
    }
    *(int *)(param_4 + 0xc) = iVar2;
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}

