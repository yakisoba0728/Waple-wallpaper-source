// Function: FUN_1403f6da0
// Addr: 1403f6da0
// Size: 225 bytes


ulonglong FUN_1403f6da0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint7 uVar8;
  ulonglong uVar7;
  
  uVar2 = **(uint **)(param_1 + 0x98);
  uVar8 = (uint7)((ulonglong)*(uint **)(param_1 + 0x98) >> 8);
  if (uVar2 == 0) {
    return (ulonglong)uVar8 << 8;
  }
  uVar3 = *(uint *)(param_3 + 0x60);
  if (uVar3 == 0) {
    return (ulonglong)uVar8 << 8;
  }
  lVar4 = *(longlong *)(param_3 + 0x70);
  uVar7 = 0;
  do {
    uVar5 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar5;
    if (uVar3 <= uVar5) break;
  } while (*(char *)(lVar4 + 0xf) == *(char *)(lVar4 + 0xf + uVar7 * 0x14));
  uVar5 = 0;
  if (uVar3 != 0) {
    do {
      uVar6 = (uint)uVar7;
      while( true ) {
        if ((uVar6 <= uVar5) ||
           (lVar1 = lVar4 + (ulonglong)uVar5 * 0x14,
           (*(uint *)(lVar4 + 4 + (ulonglong)uVar5 * 0x14) & uVar2) == 0)) goto LAB_1403f6e25;
        if ((*(byte *)(lVar1 + 0xc) & 0x10) != 0) break;
        uVar5 = uVar5 + 1;
      }
      *(undefined1 *)(lVar1 + 0x12) = 0x12;
LAB_1403f6e25:
      lVar1 = uVar7 * 0x14;
      do {
        uVar5 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar5;
        if (*(uint *)(param_3 + 0x60) <= uVar5) break;
      } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf + lVar1) ==
               *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar7 * 0x14));
      uVar5 = uVar6;
    } while (uVar6 < uVar3);
  }
  return uVar7 & 0xffffffffffffff00;
}

