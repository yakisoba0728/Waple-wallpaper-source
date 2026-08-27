// Function: FUN_1403a2580
// Addr: 1403a2580
// Size: 282 bytes


void FUN_1403a2580(longlong param_1,uint param_2,int param_3,char param_4,char param_5)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  *(ulonglong *)(lVar1 + 0xb8) = *(ulonglong *)(lVar1 + 0xb8) | 1L << (param_2 >> 4 & 0x3f);
  *(ulonglong *)(lVar1 + 0xc0) = *(ulonglong *)(lVar1 + 0xc0) | 1L << (param_2 & 0x3f);
  *(ulonglong *)(lVar1 + 200) = *(ulonglong *)(lVar1 + 200) | 1L << (param_2 >> 6 & 0x3f);
  if (*(int *)(param_1 + 0x134) != -1) {
    *(char *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x70) + 0xf +
             (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa0) + 0x5c) * 0x14) =
         (char)*(int *)(param_1 + 0x134);
  }
  uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa0) + 0x5c);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x70);
  lVar1 = lVar2 + uVar4 * 0x14;
  uVar5 = *(ushort *)(lVar2 + 0xc + uVar4 * 0x14);
  uVar3 = uVar5 | 0x10;
  if (param_4 != '\0') {
    uVar3 = uVar5 & 0xffbf | 0x30;
  }
  uVar5 = uVar3 | 0x40;
  if (param_5 == '\0') {
    uVar5 = uVar3;
  }
  if (*(char *)(param_1 + 300) != '\0') {
    uVar3 = FUN_1403cab00(*(undefined8 *)(param_1 + 0xf8),param_2);
    *(ushort *)(lVar1 + 0xc) = uVar3 | uVar5 & 0x70;
    return;
  }
  if (param_3 != 0) {
    uVar5 = uVar5 & 0x70 | (ushort)param_3;
  }
  *(ushort *)(lVar1 + 0xc) = uVar5;
  return;
}

