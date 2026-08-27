// Function: FUN_1400c88c0
// Addr: 1400c88c0
// Size: 354 bytes


void FUN_1400c88c0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  if ((*(char *)(param_2 + 8) == '\x06') && (iVar3 = FUN_1400863a0(param_2), iVar3 != 0)) {
    uVar4 = FUN_140004d00(local_48,param_2,0);
    FUN_14000de40(param_1 + 0xb68,uVar4);
  }
  else {
    local_58 = 0;
    uStack_60 = 0;
    local_68 = 0;
    local_50 = 0xf;
    FUN_14000de40(param_1 + 0xb68,&local_68);
    local_48[0] = local_68;
    local_30 = local_50;
  }
  if (0xf < local_30) {
    uVar6 = local_30 + 1;
    lVar5 = local_48[0];
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(local_48[0] + -8);
      if (0x1f < (local_48[0] - lVar5) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar6 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(lVar5,uVar6);
  }
  puVar7 = (undefined8 *)(param_1 + 0xb68);
  if (*(longlong *)(param_1 + 0x668) != -1) {
    uVar6 = *(ulonglong *)(param_1 + 0xb78);
    local_68 = 6;
    uStack_60 = 0;
    uVar2 = local_58 >> 0x20;
    local_58 = local_58 & 0xffffffff00000000;
    local_50 = 0;
    if (uVar6 != 0) {
      local_58 = CONCAT44((int)uVar2,(int)uVar6);
      uVar4 = thunk_FUN_14028af20(uVar6 & 0xffffffff);
      if (0xf < *(ulonglong *)(param_1 + 0xb80)) {
        puVar7 = (undefined8 *)*puVar7;
      }
      local_50 = uVar4;
      FUN_1404210f0(uVar4,puVar7,uVar6 & 0xffffffff);
      local_68 = CONCAT44((int)uVar6,(undefined4)local_68);
      uStack_60 = uVar4;
    }
    uVar4 = uStack_60;
    FUN_1400182d0(param_1 + 0x668,&local_68);
    thunk_FUN_14028af80(uVar4);
  }
  return;
}

