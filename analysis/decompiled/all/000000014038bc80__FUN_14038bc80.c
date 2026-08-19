// Function: FUN_14038bc80
// Addr: 14038bc80
// Size: 47 bytes


ulonglong FUN_14038bc80(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x24);
  if ((int)uVar1 < 0x40) {
    iVar2 = uVar1 + 1;
    *(int *)(param_2 + 0x24) = iVar2;
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_14037a180();
      *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + -1;
      return uVar3;
    }
  }
  return (ulonglong)uVar1 & 0xffffffffffffff00;
}

