// Function: FUN_1402f4d80
// Addr: 1402f4d80
// Size: 52 bytes


undefined8 FUN_1402f4d80(longlong param_1,uint param_2)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  undefined8 uVar3;
  short *psVar4;
  
  if ((param_1 == 0) || ((*(byte *)(param_1 + 8) & 2) == 0)) {
    return 0x23;
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x28))) {
    lVar1 = *(longlong *)(param_1 + 0x80);
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 0xa0);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001402f4de7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)(lVar1);
      return uVar3;
    }
    psVar4 = (short *)((ulonglong)param_2 * 0x10 + *(longlong *)(param_1 + 0x30));
    *(short *)(lVar1 + 0x18) = (short)(*(int *)(psVar4 + 4) + 0x20 >> 6);
    *(short *)(lVar1 + 0x1a) = (short)(*(int *)(psVar4 + 6) + 0x20 >> 6);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      *(undefined4 *)(lVar1 + 0x1c) = 0x10000;
      *(undefined4 *)(lVar1 + 0x20) = 0x10000;
      *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(psVar4 + 6);
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(int *)(lVar1 + 0x2c) = (int)*psVar4 << 6;
      *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(psVar4 + 4);
    }
    else {
      uVar2 = func_0x0001402efae0(*(undefined4 *)(psVar4 + 4),*(undefined2 *)(param_1 + 0x68));
      *(undefined4 *)(lVar1 + 0x1c) = uVar2;
      uVar2 = func_0x0001402efae0(*(undefined4 *)(psVar4 + 6),*(undefined2 *)(param_1 + 0x68));
      *(undefined4 *)(lVar1 + 0x20) = uVar2;
      FUN_1402f8f30(param_1,lVar1 + 0x18);
    }
    return 0;
  }
  return 6;
}

