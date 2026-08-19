// Function: FUN_140196910
// Addr: 140196910
// Size: 58 bytes


ulonglong FUN_140196910(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  puVar4 = *(ulonglong **)(param_1 + 0x108);
  while( true ) {
    if (puVar4 == *(ulonglong **)(param_1 + 0x110)) {
      return 0;
    }
    uVar1 = *puVar4;
    if (*(longlong *)(uVar1 + 8) == param_2) break;
    puVar4 = puVar4 + 1;
  }
  lVar2 = *(longlong *)(param_1 + 0x1c8);
  uVar5 = *(ulonglong *)(param_1 + 0x1f0) &
          ((((((((uVar1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar1 >> 8 & 0xff) *
                0x100000001b3 ^ uVar1 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar1 >> 0x18 & 0xff) *
              0x100000001b3 ^ uVar1 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar1 >> 0x28 & 0xff) *
            0x100000001b3 ^ uVar1 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar1 >> 0x38) * 0x100000001b3;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8 + uVar5 * 0x10);
  if (lVar6 == lVar2) {
    return uVar1;
  }
  uVar3 = *(ulonglong *)(lVar6 + 0x10);
  while (uVar1 != uVar3) {
    if (lVar6 == *(longlong *)(*(longlong *)(param_1 + 0x1d8) + uVar5 * 0x10)) {
      return uVar1;
    }
    lVar6 = *(longlong *)(lVar6 + 8);
    uVar3 = *(ulonglong *)(lVar6 + 0x10);
  }
  if (lVar6 == 0) {
    lVar6 = lVar2;
  }
  if (lVar6 != lVar2) {
    return 0;
  }
  return uVar1;
}

