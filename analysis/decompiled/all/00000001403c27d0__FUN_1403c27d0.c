// Function: FUN_1403c27d0
// Addr: 1403c27d0
// Size: 111 bytes


longlong FUN_1403c27d0(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      lVar1 = param_1 + uVar3 * 8;
      if (((uint)*(byte *)(param_1 + uVar3 * 8) * 0x100 + (uint)*(byte *)(lVar1 + 1) <= param_2) &&
         (param_2 <= (uint)*(byte *)(lVar1 + 3) + (uint)*(byte *)(lVar1 + 2) * 0x100)) {
        return lVar1;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < param_3);
  }
  return 0;
}

