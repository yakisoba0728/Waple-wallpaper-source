// Function: FUN_1402f4cc0
// Addr: 1402f4cc0
// Size: 35 bytes


void FUN_1402f4cc0(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  short *psVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  psVar3 = (short *)((ulonglong)param_2 * 0x10 + *(longlong *)(param_1 + 0x30));
  *(short *)(lVar1 + 0x18) = (short)(*(int *)(psVar3 + 4) + 0x20 >> 6);
  *(short *)(lVar1 + 0x1a) = (short)(*(int *)(psVar3 + 6) + 0x20 >> 6);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar2 = func_0x0001402efae0(*(undefined4 *)(psVar3 + 4),*(undefined2 *)(param_1 + 0x68));
    *(undefined4 *)(lVar1 + 0x1c) = uVar2;
    uVar2 = func_0x0001402efae0(*(undefined4 *)(psVar3 + 6),*(undefined2 *)(param_1 + 0x68));
    *(undefined4 *)(lVar1 + 0x20) = uVar2;
    lVar5 = (longlong)*(int *)(lVar1 + 0x20);
    lVar4 = *(short *)(param_1 + 0x6a) * lVar5;
    *(uint *)(lVar1 + 0x24) =
         (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10) + 0x3fU & 0xffffffc0;
    lVar4 = *(short *)(param_1 + 0x6c) * lVar5;
    *(uint *)(lVar1 + 0x28) =
         (uint)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10) & 0xffffffc0;
    lVar5 = *(short *)(param_1 + 0x6e) * lVar5;
    *(uint *)(lVar1 + 0x2c) =
         (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
    lVar4 = (longlong)*(short *)(param_1 + 0x70) * (longlong)*(int *)(lVar1 + 0x1c);
    *(uint *)(lVar1 + 0x30) =
         (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
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

