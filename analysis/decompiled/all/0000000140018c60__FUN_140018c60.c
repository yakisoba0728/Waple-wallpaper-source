// Function: FUN_140018c60
// Addr: 140018c60
// Size: 123 bytes


undefined8 FUN_140018c60(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong local_28 [3];
  ulonglong local_10;
  
  puVar2 = (undefined8 *)FUN_140005880(local_28);
  if (7 < (ulonglong)puVar2[3]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  FUN_140005c80(param_1,puVar2);
  if (7 < local_10) {
    uVar5 = local_10 * 2 + 2;
    lVar4 = local_28[0];
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(local_28[0] + -8);
      if (0x1f < (local_28[0] - lVar4) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      uVar5 = local_10 * 2 + 0x29;
    }
    thunk_FUN_14028af80(lVar4,uVar5);
  }
  return param_1;
}

