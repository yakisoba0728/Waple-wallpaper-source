// Function: FUN_14000dad0
// Addr: 14000dad0
// Size: 136 bytes


void FUN_14000dad0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[1] = 0;
  local_28[0] = 0;
  local_28[3] = 0xf;
  uVar2 = FUN_14000fc90();
  FUN_14000de40(uVar2,local_28);
  if (0xf < (ulonglong)local_28[3]) {
    uVar4 = local_28[3] + 1;
    lVar3 = local_28[0];
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(local_28[0] + -8);
      if (0x1f < (local_28[0] - lVar3) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = local_28[3] + 0x28;
    }
    thunk_FUN_14028af80(lVar3,uVar4);
  }
  FUN_140017240(param_2);
  return;
}

