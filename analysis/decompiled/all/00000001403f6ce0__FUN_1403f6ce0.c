// Function: FUN_1403f6ce0
// Addr: 1403f6ce0
// Size: 179 bytes


ulonglong FUN_1403f6ce0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  
  uVar2 = *(uint *)(param_3 + 0x60);
  if (uVar2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar3 = *(longlong *)(param_3 + 0x70);
  uVar6 = 0;
  do {
    uVar4 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar4;
    if (uVar2 <= uVar4) break;
  } while (*(char *)(lVar3 + 0xf) == *(char *)(lVar3 + 0xf + uVar6 * 0x14));
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      uVar5 = (uint)uVar6;
      for (; uVar4 < uVar5; uVar4 = uVar4 + 1) {
        if ((*(byte *)(lVar3 + 0xc + (ulonglong)uVar4 * 0x14) & 0x10) != 0) {
          *(undefined1 *)(lVar3 + (ulonglong)uVar4 * 0x14 + 0x12) = 0x16;
          break;
        }
      }
      lVar1 = uVar6 * 0x14;
      do {
        uVar4 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar4;
        if (*(uint *)(param_3 + 0x60) <= uVar4) break;
      } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf + lVar1) ==
               *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar6 * 0x14));
      uVar4 = uVar5;
    } while (uVar5 < uVar2);
  }
  return uVar6 & 0xffffffffffffff00;
}

