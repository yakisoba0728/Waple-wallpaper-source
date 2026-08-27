// Function: FUN_1403e3400
// Addr: 1403e3400
// Size: 584 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1403e3400(longlong param_1,longlong param_2,uint *param_3)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  byte *pbVar10;
  undefined1 auStack_178 [32];
  longlong local_158;
  uint local_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  undefined1 local_130 [44];
  undefined4 local_104;
  longlong local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  ulonglong local_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  byte local_60;
  undefined *local_58;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_178;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  local_150 = *param_3;
  uStack_14c = param_3[1];
  uStack_148 = param_3[2];
  uStack_144 = param_3[3];
  local_140 = param_3[4];
  uStack_13c = param_3[5];
  uStack_138 = param_3[6];
  uStack_134 = param_3[7];
  local_158 = param_2;
  FUN_140395090(local_130);
  local_a8 = *param_3;
  uStack_a4 = param_3[1];
  uStack_a0 = param_3[2];
  uStack_9c = param_3[3];
  local_98 = param_3[4];
  uStack_94 = param_3[5];
  uStack_90 = param_3[6];
  uStack_8c = param_3[7];
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0xffffffff;
  local_b0 = param_2;
  puVar4 = (undefined8 *)FUN_1403c56b0(param_2 + 0x158);
  pbVar10 = (byte *)&DAT_14045dd10;
  puVar6 = &DAT_14045dd10;
  if ((undefined8 *)*puVar4 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*puVar4;
  }
  if (*(uint *)(puVar6 + 3) < 8) {
    pbVar5 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar5 = (byte *)puVar6[2];
  }
  if ((uint)*pbVar5 * 0x100 + (uint)pbVar5[1] == 0) {
    puVar4 = (undefined8 *)FUN_1403c5610(param_2 + 0x160);
    puVar6 = &DAT_14045dd10;
    if ((undefined8 *)*puVar4 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar4;
    }
    if (7 < *(uint *)(puVar6 + 3)) {
      pbVar10 = (byte *)puVar6[2];
    }
    if ((uint)*pbVar10 * 0x100 + (uint)pbVar10[1] != 0) goto LAB_1403e350a;
LAB_1403e3520:
    bVar2 = 0;
  }
  else {
LAB_1403e350a:
    if (((*param_3 & 0xfffffffe) != 4) && (iVar3 = FUN_1404175e0(param_2), iVar3 != 0))
    goto LAB_1403e3520;
    bVar2 = 1;
  }
  local_60 = local_60 & 0xfe | bVar2;
  puVar7 = (undefined *)FUN_1403d92b0(param_3[1],*param_3,local_104);
  local_60 = -(*(int *)(puVar7 + 0x58) != 0) & 2U | local_60 & 0xfd;
  local_60 = (puVar7[0x5c] << 2 ^ local_60) & 4 ^ local_60;
  local_58 = puVar7;
  if (((local_60 & 1) != 0) && (local_58 = &DAT_140462a60, puVar7 == &DAT_140462a00)) {
    local_58 = puVar7;
  }
  FUN_1403d8090(&local_158,*(undefined8 *)(param_3 + 8),param_3[10]);
  FUN_1403b5ff0(&local_158,param_1,param_3 + 0xb);
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x20) + 0x10);
  if (pcVar1 != (code *)0x0) {
    lVar8 = (*pcVar1)(param_1);
    *(longlong *)(param_1 + 0x98) = lVar8;
    if (lVar8 == 0) {
      FUN_1403c2fb0(param_1 + 0x28);
      uVar9 = 0;
      goto LAB_1403e35df;
    }
  }
  uVar9 = 1;
LAB_1403e35df:
  if (1 < (int)local_78 + 1U) {
    local_78 = local_78 & 0xffffffff;
    thunk_FUN_1402d9040(local_70);
  }
  local_78 = 0;
  local_70 = 0;
  if (1 < (int)local_88 + 1U) {
    local_88 = local_88 & 0xffffffff;
    thunk_FUN_1402d9040(local_80);
  }
  local_88 = 0;
  local_80 = 0;
  FUN_140397330(local_130);
  return uVar9;
}

