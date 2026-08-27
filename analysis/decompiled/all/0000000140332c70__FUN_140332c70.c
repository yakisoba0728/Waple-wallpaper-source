// Function: FUN_140332c70
// Addr: 140332c70
// Size: 78 bytes


short FUN_140332c70(longlong param_1,uint *param_2)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  sVar2 = 0;
  uVar1 = uVar3;
  if (uVar3 <= *param_2 + 1) {
    uVar1 = *param_2 + 1;
  }
  uVar3 = *(int *)(param_1 + 0x1c) + uVar3;
  if (uVar1 < uVar3) {
    do {
      sVar2 = *(short *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar1 * 2);
      if (sVar2 != 0) goto LAB_140332cb3;
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar3);
  }
  uVar1 = 0;
LAB_140332cb3:
  *param_2 = uVar1;
  return sVar2;
}

