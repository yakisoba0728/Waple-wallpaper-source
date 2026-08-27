// Function: FUN_14003f6b0
// Addr: 14003f6b0
// Size: 114 bytes


undefined8 FUN_14003f6b0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_28 [3];
  ulonglong local_10;
  
  uVar2 = FUN_140053e40(local_28,param_3);
  FUN_14002fd20(param_2,&DAT_140476c08,uVar2);
  if (0xf < local_10) {
    uVar4 = local_10 + 1;
    lVar3 = local_28[0];
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(local_28[0] + -8);
      if (0x1f < (local_28[0] - lVar3) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar2 = (*pcVar1)();
        return uVar2;
      }
      uVar4 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(lVar3,uVar4);
  }
  return param_2;
}

