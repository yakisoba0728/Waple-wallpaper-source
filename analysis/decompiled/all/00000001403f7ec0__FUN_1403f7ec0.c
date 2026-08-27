// Function: FUN_1403f7ec0
// Addr: 1403f7ec0
// Size: 230 bytes


void FUN_1403f7ec0(longlong param_1,uint param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0xa0);
  *(ulonglong *)(lVar2 + 0xb8) = *(ulonglong *)(lVar2 + 0xb8) | 1L << (param_2 >> 4 & 0x3f);
  *(ulonglong *)(lVar2 + 0xc0) = *(ulonglong *)(lVar2 + 0xc0) | 1L << (param_2 & 0x3f);
  *(ulonglong *)(lVar2 + 200) = *(ulonglong *)(lVar2 + 200) | 1L << (ulonglong)(param_2 >> 6 & 0x3f)
  ;
  if (*(int *)(param_1 + 0x134) != -1) {
    *(char *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x70) + 0xf +
             (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa0) + 0x5c) * 0x14) =
         (char)*(int *)(param_1 + 0x134);
  }
  uVar3 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa0) + 0x5c);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x70);
  uVar1 = *(ushort *)(lVar2 + 0xc + uVar3 * 0x14);
  uVar4 = uVar1 | 0x10;
  if (*(char *)(param_1 + 300) != '\0') {
    uVar4 = FUN_1403cab00(*(undefined8 *)(param_1 + 0xf8),param_2);
    uVar4 = uVar4 | uVar1 & 0x70 | 0x10;
  }
  *(ushort *)(lVar2 + uVar3 * 0x14 + 0xc) = uVar4;
  FUN_1403f7e30(*(undefined8 *)(param_1 + 0xa0),param_2);
  return;
}

