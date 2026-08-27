// Function: FUN_1401386a0
// Addr: 1401386a0
// Size: 195 bytes


undefined8 FUN_1401386a0(longlong param_1,undefined *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined *puVar6;
  longlong local_28 [4];
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  puVar6 = &DAT_140474538;
  if (param_2 != (undefined *)0x0) {
    puVar6 = param_2;
  }
  uVar2 = FUN_1402d6aa0(puVar6);
  FUN_140016170(local_28,puVar6,uVar2);
  FUN_140139180(uVar3,(param_3 != 1) + '\x01',local_28);
  if (7 < (ulonglong)local_28[3]) {
    uVar5 = local_28[3] * 2 + 2;
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
      uVar5 = local_28[3] * 2 + 0x29;
    }
    thunk_FUN_14028af80(lVar4,uVar5);
  }
  return 0;
}

