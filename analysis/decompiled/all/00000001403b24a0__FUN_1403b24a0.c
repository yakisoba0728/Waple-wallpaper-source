// Function: FUN_1403b24a0
// Addr: 1403b24a0
// Size: 121 bytes


void FUN_1403b24a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  FUN_14040f350(*(undefined8 *)(param_2 + 0xa0));
  if ((*(char *)(param_2 + 300) != '\0') &&
     (lVar4 = *(longlong *)(param_2 + 0xa0), *(int *)(lVar4 + 0x60) != 0)) {
    uVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar4 + 0x70) + uVar6 * 0x14;
      uVar2 = *(ushort *)(lVar1 + 0xc);
      uVar3 = FUN_1403cabd0(*(undefined8 *)(param_2 + 0xf8),
                            *(undefined4 *)(*(longlong *)(lVar4 + 0x70) + uVar6 * 0x14));
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      *(ushort *)(lVar1 + 0xc) = uVar3 | uVar2 & 0x70;
      lVar4 = *(longlong *)(param_2 + 0xa0);
    } while (uVar5 < *(uint *)(lVar4 + 0x60));
  }
  return;
}

