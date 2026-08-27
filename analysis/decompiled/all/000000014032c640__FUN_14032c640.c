// Function: FUN_14032c640
// Addr: 14032c640
// Size: 126 bytes


short FUN_14032c640(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar3 = uVar5 >> 1;
  uVar4 = 0;
  if (uVar5 != 0) {
    do {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar3 * 8);
      if (param_2 == uVar1) {
        return *(short *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar3 * 8 + 4) + 1;
      }
      uVar2 = uVar3;
      if (uVar1 <= param_2) {
        uVar4 = uVar3 + 1;
        uVar2 = uVar5;
      }
      uVar5 = uVar2;
      uVar3 = (uVar3 - uVar1) + param_2;
      if ((uVar5 <= uVar3) || (uVar3 < uVar4)) {
        uVar3 = uVar4 + uVar5 >> 1;
      }
    } while (uVar4 < uVar5);
  }
  return 0;
}

