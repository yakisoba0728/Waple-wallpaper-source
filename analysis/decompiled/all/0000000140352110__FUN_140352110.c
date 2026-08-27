// Function: FUN_140352110
// Addr: 140352110
// Size: 260 bytes


ulonglong FUN_140352110(undefined4 *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if ((*(longlong *)(param_1 + 0x16) == 0) || (*(int *)(*(longlong *)(param_1 + 0x16) + 0x14) != 0))
  {
    lVar1 = *(longlong *)(param_1 + 0xc);
    *(longlong *)(param_1 + 0x16) = lVar1;
    uVar3 = lVar1 + 0x24;
    *(ulonglong *)(param_1 + 0xc) = uVar3;
    if (*(ulonglong *)(param_1 + 10) <= uVar3) {
      param_1[0xe] = 0x62;
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
    *(undefined4 *)(lVar1 + 0x14) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x16);
  *(ushort *)(lVar1 + 0x1c) = (ushort)*(byte *)(param_1 + 0xf);
  if (param_2 == 1) {
    *(ushort *)(*(longlong *)(param_1 + 0x16) + 0x1c) =
         *(ushort *)(*(longlong *)(param_1 + 0x16) + 0x1c) | 8;
    if ((int)param_1[2] <= (param_1[0x11] + -1 + param_1[1] & -param_1[1]) - param_1[0x11]) {
      *(ushort *)(*(longlong *)(param_1 + 0x16) + 0x1c) =
           *(ushort *)(*(longlong *)(param_1 + 0x16) + 0x1c) | 0x20;
    }
    uVar4 = param_1[1] + -1 + param_1[0x11] & -param_1[1];
  }
  else {
    if (param_2 != 2) {
      param_1[0xe] = 0x14;
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
    if ((int)param_1[2] <= (int)(param_1[0x11] - (-param_1[1] & param_1[0x11]))) {
      *(ushort *)(*(longlong *)(param_1 + 0x16) + 0x1c) =
           *(ushort *)(*(longlong *)(param_1 + 0x16) + 0x1c) | 0x10;
    }
    uVar4 = -param_1[1] & param_1[0x11];
  }
  uVar2 = param_1[0x13];
  if ((int)uVar4 <= (int)param_1[0x13]) {
    uVar2 = uVar4;
  }
  uVar4 = param_1[0x12];
  if ((int)param_1[0x12] <= (int)uVar2) {
    uVar4 = uVar2;
  }
  uVar3 = *(ulonglong *)(param_1 + 0x16);
  *(int *)(uVar3 + 0x18) = (int)uVar4 >> ((byte)*param_1 & 0x1f);
  if (param_1[0x11] == uVar4) {
    uVar3 = (ulonglong)(uint)param_1[0x10];
    **(uint **)(param_1 + 0xc) = param_1[0x10];
    *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) + 4;
  }
  param_1[0x1c] = param_2;
  return uVar3 & 0xffffffffffffff00;
}

