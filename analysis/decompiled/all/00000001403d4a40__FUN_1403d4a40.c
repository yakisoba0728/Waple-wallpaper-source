// Function: FUN_1403d4a40
// Addr: 1403d4a40
// Size: 1133 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1403d4a40(longlong param_1,longlong *param_2,undefined4 param_3,longlong param_4,
                      undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_1e8 [32];
  longlong ***local_1c8;
  longlong local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1a8;
  longlong *local_1a0;
  longlong **local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  longlong local_168;
  longlong *plStack_160;
  ulonglong local_158;
  uint5 uStack_150;
  undefined3 uStack_14b;
  undefined8 uStack_148;
  ulonglong uStack_140;
  undefined4 local_138;
  uint uStack_134;
  undefined8 uStack_130;
  undefined1 local_128;
  uint7 uStack_127;
  undefined8 uStack_120;
  longlong **local_118;
  undefined8 **local_110;
  undefined1 local_108;
  longlong **local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong local_d8;
  longlong *plStack_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_1e8;
  local_80 = param_5;
  lVar9 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_1a8 = (undefined8 *)0x0;
  uVar10 = 0;
  local_1a0 = param_2;
  local_88 = param_4;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_1403b3180(param_2,param_1);
    uVar2 = FUN_1403c52a0(*local_1a0 + 0xa8);
    local_1a8 = (undefined8 *)FUN_1403a28a0(local_1a0 + 8,uVar2);
  }
  local_118 = &local_1a0;
  local_110 = &local_1a8;
  local_108 = 1;
  puVar3 = (undefined8 *)FUN_140398380(*(longlong *)(param_1 + 0x20) + 0x128);
  puVar6 = &DAT_14045dd10;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*puVar3;
  }
  if (*(uint *)(puVar6 + 3) < 0x18) {
    pbVar4 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar4 = (byte *)puVar6[2];
  }
  lVar11 = 1;
  if ((uint)*pbVar4 * 0x100 + (uint)pbVar4[1] != 0) {
    lVar5 = puVar3[1];
    if (lVar5 == 0) {
LAB_1403d4b68:
      lVar5 = _calloc_base(1,0xb8);
      if (lVar5 == 0) goto LAB_1403d4de2;
    }
    else {
      LOCK();
      bVar12 = lVar5 == puVar3[1];
      if (bVar12) {
        puVar3[1] = 0;
      }
      UNLOCK();
      if (!bVar12) goto LAB_1403d4b68;
    }
    puVar6 = &DAT_14045dd10;
    if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar3;
    }
    puVar8 = &DAT_14045dd10;
    if (0x17 < *(uint *)(puVar6 + 3)) {
      puVar8 = (undefined8 *)puVar6[2];
    }
    plStack_160 = &local_88;
    local_158 = 0;
    _uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    local_138 = 0x800;
    uStack_134 = 0x40;
    local_f8 = _DAT_140471ae0;
    uStack_f0 = _UNK_140471ae8;
    local_e8 = 0;
    local_198 = local_118;
    local_190 = *(undefined8 *)(param_1 + 0x80);
    local_188 = *(undefined4 *)(param_1 + 0x7c);
    local_184 = 0;
    local_1b8 = (undefined8 *)0x0;
    local_1c0 = CONCAT44(local_1c0._4_4_,0xffffffff);
    local_1c8 = &local_f8;
    local_168 = param_1;
    uStack_130 = lVar5;
    cVar1 = FUN_1403cc020(puVar8,&local_168,param_3,&local_198);
    FUN_1403f7490(puVar3,lVar5);
    if (cVar1 != '\0') goto LAB_1403d4de2;
  }
  lVar5 = FUN_1403c51f0(*(longlong *)(param_1 + 0x20) + 0xe8);
  puVar6 = local_1a8;
  if (*(int *)(lVar5 + 0x1c) != 0) {
    lVar7 = *(longlong *)(lVar5 + 0x30);
    if (lVar7 == 0) {
LAB_1403d4c76:
      lVar7 = _calloc_base(1,0x98);
      if (lVar7 == 0) goto LAB_1403d4de2;
    }
    else {
      LOCK();
      bVar12 = lVar7 == *(longlong *)(lVar5 + 0x30);
      if (bVar12) {
        *(longlong *)(lVar5 + 0x30) = 0;
      }
      UNLOCK();
      if (!bVar12) goto LAB_1403d4c76;
    }
    local_188 = uVar10;
    if (*(char *)(param_1 + 0x78) != '\0') {
      local_188 = *(undefined4 *)(param_1 + 0x7c);
    }
    local_198 = local_118;
    local_190 = *(undefined8 *)(param_1 + 0x80);
    local_184 = 0;
    plStack_160 = &local_88;
    local_158 = local_158 & 0xffffffffffffff00;
    uStack_150 = (uint5)(uint)uStack_150;
    uStack_140 = uStack_140 & 0xffffffffffffff00;
    uStack_134 = uStack_134 & 0xffffff00;
    local_128 = 0;
    local_c8 = local_158;
    uStack_c0 = _uStack_150;
    local_b8 = uStack_148;
    uStack_b0 = uStack_140;
    local_a8 = local_138;
    uStack_a4 = uStack_134;
    uStack_a0 = (undefined4)uStack_130;
    uStack_9c = uStack_130._4_4_;
    local_98 = (ulonglong)uStack_127 << 8;
    uStack_90 = uStack_120;
    local_1b8 = puVar6;
    local_1c8 = &local_198;
    local_1c0 = lVar7;
    local_168 = param_1;
    local_d8 = param_1;
    plStack_d0 = plStack_160;
    cVar1 = FUN_140388810(lVar5,param_1,param_3,&local_d8);
    LOCK();
    bVar12 = *(longlong *)(lVar5 + 0x30) == 0;
    if (bVar12) {
      *(longlong *)(lVar5 + 0x30) = lVar7;
    }
    UNLOCK();
    if (!bVar12) {
      FUN_140397110(lVar7);
      thunk_FUN_1402d9040(lVar7);
    }
    if (cVar1 != '\0') goto LAB_1403d4de2;
  }
  uVar2 = FUN_140398600(*(longlong *)(param_1 + 0x20) + 0xf8);
  if (*(char *)(param_1 + 0x78) != '\0') {
    uVar10 = *(undefined4 *)(param_1 + 0x7c);
  }
  local_198 = local_118;
  local_190 = *(undefined8 *)(param_1 + 0x80);
  local_184 = 0;
  local_1c8 = &local_198;
  local_188 = uVar10;
  cVar1 = FUN_1403cde20(uVar2,param_1,param_3,&local_88);
  if (cVar1 == '\0') {
    uVar2 = FUN_140398510(*(longlong *)(param_1 + 0x20) + 0xf0);
    local_1c0 = 0;
    local_1c8 = (longlong ***)((ulonglong)local_1c8 & 0xffffffffffffff00);
    cVar1 = FUN_14039b530(uVar2,param_1,param_3,&local_88);
    if (cVar1 == '\0') {
      lVar11 = lVar9;
    }
  }
LAB_1403d4de2:
  if (local_1a8 != (undefined8 *)0x0) {
    LOCK();
    bVar12 = local_1a0[8] == 0;
    if (bVar12) {
      local_1a0[8] = (longlong)local_1a8;
    }
    UNLOCK();
    if ((!bVar12) && (local_1a8 != &DAT_14045dd10)) {
      thunk_FUN_1402d9040();
    }
  }
  uVar2 = local_80;
  lVar5 = local_88;
  if ((int)local_78 != 0) {
    if ((local_78._4_4_ != local_70._4_4_) || ((float)local_70 != (float)local_68)) {
      local_1c0 = lVar9;
      if (*(longlong *)(local_88 + 0x38) != 0) {
        local_1c0 = *(longlong *)(*(longlong *)(local_88 + 0x38) + 8);
      }
      local_1c8 = (longlong ***)CONCAT44(local_1c8._4_4_,(float)local_70);
      (**(code **)(local_88 + 0x18))(local_88,local_80,&local_78);
    }
    if (*(longlong *)(lVar5 + 0x38) != 0) {
      lVar9 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + 0x20);
    }
    (**(code **)(lVar5 + 0x30))(lVar5,uVar2,&local_78,lVar9);
  }
  return lVar11;
}

