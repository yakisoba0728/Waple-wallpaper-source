// Function: FUN_140361050
// Addr: 140361050
// Size: 266 bytes


void FUN_140361050(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 8);
  if (lVar3 != 0) {
    FUN_14040b4c0(lVar3,param_2,*(undefined4 *)(param_1 + 4));
  }
  *(byte *)(param_2 + 0xd0) = *(byte *)(param_2 + 0xd0) | 0x40;
  uVar5 = 0;
  uVar2 = *(uint *)(param_2 + 0x60);
  lVar3 = *(longlong *)(param_2 + 0x70);
  if (uVar2 != 0) {
    do {
      uVar4 = *(uint *)(lVar3 + uVar5 * 0x14);
      lVar1 = uVar5 * 0x14;
      if (uVar4 < 0xe1000) {
        uVar6 = (&DAT_14046d2b0)
                [(uint)(byte)(&DAT_14046d2b0)
                             [(uVar4 >> 1 & 7) + 0x271 +
                              (uint)*(ushort *)
                                     (&DAT_14046dfc0 +
                                     (ulonglong)
                                     ((uVar4 >> 4 & 7) +
                                     (uint)(byte)(&DAT_14046d2b0)
                                                 [(uVar4 >> 7 & 0x1f) +
                                                  ((byte)(&DAT_14046d2b0)[uVar4 >> 0xd] >>
                                                   (sbyte)((uVar4 >> 0xc & 1) << 2) & 0xf) * 0x20 +
                                                  0x71] * 8) * 2)] * 2 + 0xb89 + (uVar4 & 1)];
      }
      else {
        uVar6 = 0;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      *(undefined1 *)(lVar3 + lVar1 + 0x12) = uVar6;
    } while (uVar4 < uVar2);
  }
  return;
}

