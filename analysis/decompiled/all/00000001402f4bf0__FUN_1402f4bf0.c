// Function: FUN_1402f4bf0
// Addr: 1402f4bf0
// Size: 182 bytes


void FUN_1402f4bf0(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  short *psVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  psVar3 = (short *)((ulonglong)param_2 * 0x10 + *(longlong *)(param_1 + 0x30));
  *(short *)(lVar1 + 0x18) = (short)(*(int *)(psVar3 + 4) + 0x20 >> 6);
  *(short *)(lVar1 + 0x1a) = (short)(*(int *)(psVar3 + 6) + 0x20 >> 6);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar2 = FUN_1402efa10(*(undefined4 *)(psVar3 + 4),*(undefined2 *)(param_1 + 0x68));
    *(undefined4 *)(lVar1 + 0x1c) = uVar2;
    uVar2 = FUN_1402efa10(*(undefined4 *)(psVar3 + 6),*(undefined2 *)(param_1 + 0x68));
    *(undefined4 *)(lVar1 + 0x20) = uVar2;
    FUN_1402f8e60(param_1,lVar1 + 0x18);
    return;
  }
  *(undefined4 *)(lVar1 + 0x1c) = 0x10000;
  *(undefined4 *)(lVar1 + 0x20) = 0x10000;
  *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(psVar3 + 6);
  *(undefined4 *)(lVar1 + 0x28) = 0;
  *(int *)(lVar1 + 0x2c) = (int)*psVar3 << 6;
  *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(psVar3 + 4);
  return;
}

