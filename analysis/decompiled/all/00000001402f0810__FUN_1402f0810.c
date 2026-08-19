// Function: FUN_1402f0810
// Addr: 1402f0810
// Size: 172 bytes


void FUN_1402f0810(longlong param_1)

{
  short *psVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar3 = 0;
    if (*(short *)(param_1 + 0x60) != 0) {
      do {
        lVar2 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        psVar1 = (short *)(*(longlong *)(param_1 + 0x78) + lVar2 * 2);
        *psVar1 = *psVar1 + *(short *)(param_1 + 0x1a);
      } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 0x60));
    }
    *(short *)(param_1 + 0x1a) = *(short *)(param_1 + 0x1a) + *(short *)(param_1 + 0x62);
    *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + *(short *)(param_1 + 0x60);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x98);
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined2 *)(param_1 + 0x62) = 0;
    FUN_1402f08c0(param_1);
    if (*(longlong *)(param_1 + 0x58) != 0) {
      *(ulonglong *)(param_1 + 0xa0) =
           (ulonglong)*(uint *)(param_1 + 0x50) * 0x20 + *(longlong *)(param_1 + 0x58);
      return;
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  return;
}

