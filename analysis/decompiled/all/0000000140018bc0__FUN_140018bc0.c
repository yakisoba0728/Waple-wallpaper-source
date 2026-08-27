// Function: FUN_140018bc0
// Addr: 140018bc0
// Size: 112 bytes


undefined8 FUN_140018bc0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_28 [3];
  ulonglong local_10;
  
  uVar2 = FUN_140005880(local_28);
  FUN_140016560(param_1,uVar2);
  if (7 < local_10) {
    uVar4 = local_10 * 2 + 2;
    lVar3 = local_28[0];
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(local_28[0] + -8);
      if (0x1f < (local_28[0] - lVar3) - 8U) {
        uVar2 = 5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        FUN_140005c80();
        return uVar2;
      }
      uVar4 = local_10 * 2 + 0x29;
    }
    thunk_FUN_14028af80(lVar3,uVar4);
  }
  return param_1;
}

