// Function: FUN_140134250
// Addr: 140134250
// Size: 538 bytes


void FUN_140134250(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  local_c0 = *(longlong *)(param_1 + 6);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_1[5];
  uStack_b8 = *(undefined8 *)(param_1 + 8);
  local_b0 = *(undefined8 *)(param_1 + 10);
  local_a8 = *(ulonglong *)(param_1 + 0xc);
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0xf;
  local_a0 = *(longlong *)(param_1 + 0xe);
  uStack_98 = *(undefined8 *)(param_1 + 0x10);
  local_90 = *(undefined8 *)(param_1 + 0x12);
  local_88 = *(ulonglong *)(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0xf;
  local_80 = *(longlong *)(param_1 + 0x16);
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  local_70 = *(undefined8 *)(param_1 + 0x1a);
  local_68 = *(ulonglong *)(param_1 + 0x1c);
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0xf;
  local_58 = param_1[0x20];
  local_60 = *(undefined8 *)(param_1 + 0x1e);
  FUN_140132b40(local_58,param_2,param_3,param_4,uVar1,uVar3,uVar5);
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  param_2[4] = uVar5;
  param_2[5] = uVar6;
  FUN_14000de40(param_2 + 6,&local_c0);
  FUN_14000de40(param_2 + 0xe,&local_a0);
  FUN_14000de40(param_2 + 0x16,&local_80);
  param_2[0x20] = local_58;
  *(undefined8 *)(param_2 + 0x1e) = local_60;
  if (0xf < local_68) {
    uVar9 = local_68 + 1;
    lVar8 = local_80;
    if (0xfff < uVar9) {
      lVar8 = *(longlong *)(local_80 + -8);
      if (0x1f < (local_80 - lVar8) - 8U) goto LAB_140134462;
      uVar9 = local_68 + 0x28;
    }
    thunk_FUN_14028af80(lVar8,uVar9);
  }
  if (0xf < local_88) {
    uVar9 = local_88 + 1;
    lVar8 = local_a0;
    if (0xfff < uVar9) {
      lVar8 = *(longlong *)(local_a0 + -8);
      if (0x1f < (local_a0 - lVar8) - 8U) goto LAB_140134462;
      uVar9 = local_88 + 0x28;
    }
    thunk_FUN_14028af80(lVar8,uVar9);
  }
  if (0xf < local_a8) {
    uVar9 = local_a8 + 1;
    lVar8 = local_c0;
    if (0xfff < uVar9) {
      lVar8 = *(longlong *)(local_c0 + -8);
      if (0x1f < (local_c0 - lVar8) - 8U) {
LAB_140134462:
        pcVar7 = (code *)swi(0x29);
        (*pcVar7)(5);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar9 = local_a8 + 0x28;
    }
    thunk_FUN_14028af80(lVar8,uVar9);
  }
  return;
}

