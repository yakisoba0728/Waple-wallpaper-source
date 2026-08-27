// Function: FUN_1401389a0
// Addr: 1401389a0
// Size: 163 bytes


undefined8 FUN_1401389a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined *puVar5;
  longlong local_28 [4];
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  local_28[2] = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  puVar5 = &DAT_140474538;
  if (param_4 != (undefined *)0x0) {
    puVar5 = param_4;
  }
  local_28[3] = 0;
  uVar2 = FUN_1402d6aa0(puVar5);
  FUN_140016170(local_28,puVar5,uVar2);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  if (7 < (ulonglong)local_28[3]) {
    uVar4 = local_28[3] * 2 + 2;
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
      uVar4 = local_28[3] * 2 + 0x29;
    }
    thunk_FUN_14028af80(lVar3,uVar4);
  }
  return 0;
}

