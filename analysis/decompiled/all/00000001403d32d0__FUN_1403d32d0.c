// Function: FUN_1403d32d0
// Addr: 1403d32d0
// Size: 1658 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1403d32d0(int *param_1,longlong param_2,uint param_3,longlong param_4,undefined8 param_5,
             uint param_6,uint param_7)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_298 [32];
  undefined1 *local_278;
  char *local_270;
  undefined8 local_268;
  uint local_260;
  uint local_258;
  uint local_254;
  longlong local_250;
  uint local_248;
  undefined4 local_244 [3];
  char local_238 [4];
  undefined4 uStack_234;
  int local_230;
  undefined4 uStack_22c;
  ulonglong local_228;
  char *local_218;
  longlong *local_210;
  ulonglong local_208;
  char *local_200;
  longlong *local_1f8;
  ulonglong local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  longlong local_1c8;
  int *local_1c0;
  undefined8 local_1b8;
  char *local_1b0;
  longlong local_1a0;
  uint local_198;
  undefined4 local_194;
  uint local_190;
  uint local_18c;
  char local_188 [8];
  char **local_180;
  char **local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  int local_158;
  int local_154;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [8];
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  char local_f8 [8];
  char **local_f0;
  char **local_e8;
  int local_c8;
  int local_c4;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  int local_70;
  int local_6c;
  ulonglong local_60;
  
  local_60 = DAT_1404dc040 ^ (ulonglong)auStack_298;
  local_1d8 = param_5;
  local_254 = param_7;
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_250 = 0;
  local_258 = param_3;
  local_1e8 = uVar6;
  FUN_1402f37d0(uVar6,&local_a8);
  FUN_1402f3840(uVar6,param_6 & 0xffff,&local_250);
  if ((local_250 == 0) && (FUN_1402f3840(uVar6,0,&local_250), local_250 == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = (uint)(ushort)uStack_90;
  }
  lVar2 = local_250;
  local_148 = 0;
  uStack_140 = 0;
  cVar4 = FUN_1402f0110(uVar6,local_258,1,&local_148);
  uVar1 = local_258;
  if (cVar4 == '\0') {
    local_b0 = 0;
    local_278 = local_b8;
    cVar4 = FUN_1402f00d0(uVar6,local_258,local_244,&local_248);
    uVar6 = local_1d8;
    if ((local_250 != 0) && (cVar4 != '\0')) {
      do {
        bVar9 = local_248 == 0xffff;
        uVar8 = local_254;
        if (!bVar9) {
          uVar8 = *(uint *)(local_250 + (ulonglong)local_248 * 4);
          uVar8 = ((uVar8 >> 8 & 0xff | (uVar8 & 0xff) << 8) << 8 | uVar8 >> 0x10 & 0xff) << 8 |
                  uVar8 >> 0x18;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 8));
        local_278 = (undefined1 *)0x0;
        if (*(longlong *)(param_4 + 0x98) != 0) {
          local_278 = *(undefined1 **)(*(longlong *)(param_4 + 0x98) + 0x18);
        }
        (**(code **)(param_4 + 0x28))(param_4,uVar6,local_244[0],param_1);
        EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 8));
        local_278 = (undefined1 *)0x0;
        if (*(longlong *)(param_4 + 0x98) != 0) {
          local_278 = *(undefined1 **)(*(longlong *)(param_4 + 0x98) + 0x40);
        }
        (**(code **)(param_4 + 0x50))(param_4,uVar6,bVar9,uVar8);
        uVar7 = 0;
        if (*(longlong *)(param_4 + 0x98) != 0) {
          uVar7 = *(undefined8 *)(*(longlong *)(param_4 + 0x98) + 0x38);
        }
        (**(code **)(param_4 + 0x48))(param_4,uVar6,uVar7);
        local_278 = local_b8;
        cVar4 = FUN_1402f00d0(local_1e8,uVar1,local_244,&local_248);
      } while (cVar4 != '\0');
      return 1;
    }
    return 0;
  }
  local_230 = (int)lVar2;
  uStack_22c = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_228 = (ulonglong)uVar8;
  local_260 = local_254;
  local_268 = CONCAT44(local_268._4_4_,param_6);
  local_270 = local_238;
  local_278 = (undefined1 *)local_1d8;
  FUN_140394c50(local_138,param_2,param_1,param_4);
  local_1f8 = (longlong *)0x0;
  local_200 = local_f8;
  if (local_f0 == (char **)0x0) {
    local_f0 = &local_200;
  }
  else {
    if (local_f8[0] == '\0') {
      local_f0 = (char **)*local_f0;
    }
    local_1f8 = (longlong *)local_e8;
    *local_e8 = (char *)&local_200;
  }
  local_e8 = &local_200;
  local_1f0 = (ulonglong)local_258;
  uVar5 = (ulonglong)local_258;
  local_f8[0] = local_f8[0] == '\0';
  cVar4 = FUN_1402f00a0(local_1e8,local_258,local_80);
  if (cVar4 == '\0') {
    local_1b8 = FUN_1403dce40();
    uStack_234 = 0;
    local_230 = 0;
    local_228 = 0;
    local_238[0] = 1;
    uStack_22c = 0;
    local_1b0 = local_238;
    local_194 = 0;
    local_190 = param_6;
    local_18c = local_254;
    local_188[0] = '\0';
    local_180 = (char **)0x0;
    local_178 = (char **)0x0;
    local_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0x40;
    local_154 = 0x800;
    local_1c8 = param_2;
    local_1c0 = param_1;
    local_1a0 = lVar2;
    local_198 = uVar8;
    if ((char)param_1[0xc] == '\0') {
      if (*param_1 != 0) {
        LOCK();
        *param_1 = *param_1 + 1;
        UNLOCK();
      }
    }
    else {
      local_1c0 = (int *)FUN_140415d80(param_1);
      if (((char)local_1c0[1] != '\0') &&
         ((((float)local_1c0[0xd] != 0.0 || ((float)local_1c0[0xe] != 0.0)) ||
          ((char)local_1c0[0xf] != '\x01')))) {
        local_1c0[0xd] = 0;
        local_1c0[0xe] = 0;
        *(undefined1 *)(local_1c0 + 0xf) = 1;
        FUN_1403b2f70(local_1c0);
      }
      if (((char)local_1c0[1] != '\0') && ((float)local_1c0[0x12] != 0.0)) {
        local_1c0[0x12] = 0;
        FUN_1403b2f70();
      }
    }
    local_210 = (longlong *)0x0;
    local_218 = local_188;
    bVar9 = local_188[0] == '\0';
    if (local_180 == (char **)0x0) {
      local_180 = &local_218;
    }
    else {
      if (local_188[0] == '\0') {
        local_180 = (char **)*local_180;
      }
      local_210 = (longlong *)local_178;
      *local_178 = (char *)&local_218;
    }
    local_178 = &local_218;
    local_208 = uVar5;
    local_188[0] = bVar9;
    if ((0 < local_158) && (0 < local_154)) {
      local_158 = local_158 + -1;
      local_154 = local_154 + -1;
      local_1e8 = local_148;
      uStack_1e0 = uStack_140;
      FUN_14039ddb0(&local_1c8,&local_1e8);
      local_158 = local_158 + 1;
    }
    cVar4 = local_238[0];
    *(longlong **)(local_218 + 0x10) = local_210;
    if (local_210 != (longlong *)0x0) {
      *local_210 = (longlong)local_218;
    }
    if (*local_218 != '\0') {
      *(undefined8 *)(local_218 + 8) = *(undefined8 *)(*(longlong *)(local_218 + 8) + 8);
    }
    *local_218 = *local_218 == '\0';
    FUN_140415ec0(local_1c0);
    if (1 < local_230 + 1U) {
      uStack_22c = 0;
      thunk_FUN_1402d9040(local_228);
    }
    FUN_1403f5800(local_128,local_120,param_1);
    bVar9 = false;
    bVar3 = false;
    if (cVar4 == '\0') goto LAB_1403d3752;
  }
  else {
    local_268 = 0;
    if (*(longlong *)(local_128 + 0x98) != 0) {
      local_268 = *(undefined8 *)(*(longlong *)(local_128 + 0x98) + 0x20);
    }
    local_270 = (char *)CONCAT44(local_270._4_4_,(float)local_6c);
    local_278 = (undefined1 *)CONCAT44(local_278._4_4_,(float)local_70);
    (**(code **)(local_128 + 0x30))(local_128,local_120);
    FUN_1403f5800(local_128,local_120,param_1);
    bVar3 = true;
  }
  bVar9 = bVar3;
  if ((0 < local_c8) && (0 < local_c4)) {
    local_c8 = local_c8 + -1;
    local_c4 = local_c4 + -1;
    local_1e8 = local_148;
    uStack_1e0 = uStack_140;
    FUN_14039ddb0(local_138,&local_1e8);
    local_c8 = local_c8 + 1;
  }
LAB_1403d3752:
  uVar7 = 0;
  uVar6 = uVar7;
  if (*(longlong *)(local_128 + 0x98) != 0) {
    uVar6 = *(undefined8 *)(*(longlong *)(local_128 + 0x98) + 8);
  }
  (**(code **)(local_128 + 0x18))(local_128,local_120,uVar6);
  if (bVar9) {
    if (*(longlong *)(local_128 + 0x98) != 0) {
      uVar7 = *(undefined8 *)(*(longlong *)(local_128 + 0x98) + 0x38);
    }
    (**(code **)(local_128 + 0x48))(local_128,local_120,uVar7);
  }
  *(longlong **)(local_200 + 0x10) = local_1f8;
  if (local_1f8 != (longlong *)0x0) {
    *local_1f8 = (longlong)local_200;
  }
  if (*local_200 != '\0') {
    *(undefined8 *)(local_200 + 8) = *(undefined8 *)(*(longlong *)(local_200 + 8) + 8);
  }
  *local_200 = *local_200 == '\0';
  FUN_140415ec0(local_130);
  return 1;
}

