// Function: FUN_140375cc0
// Addr: 140375cc0
// Size: 784 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140375cc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  int local_1a0;
  byte local_198 [8];
  longlong local_190;
  longlong local_188;
  uint local_180;
  undefined4 local_17c;
  longlong local_178;
  byte local_168 [8];
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined4 local_138;
  ulonglong local_28;
  
  local_28 = DAT_1404dc040 ^ (ulonglong)auStack_1c8;
  if (*(byte *)(param_1 + 7) == 0) {
    lVar1 = *(longlong *)(param_2 + 0x18);
    local_1a8 = param_1 + 0xc;
    local_198[0] = 0;
    local_1a0 = *(int *)(lVar1 + 0x18);
    local_188 = 0;
    local_190 = local_1a8;
    if (local_1a0 == -1) {
      lVar4 = FUN_140398a10(lVar1 + 0x80);
      local_1a0 = (uint)*(byte *)(lVar4 + 4) * 0x100 + (uint)*(byte *)(lVar4 + 5);
      if (local_1a0 == 0) {
        local_1a0 = 0;
      }
      *(int *)(lVar1 + 0x18) = local_1a0;
    }
    FUN_140384c20(&local_1a8,local_198,param_2);
  }
  else {
    uVar2 = (uint)*(byte *)(param_1 + 7);
    local_190 = param_2;
    if (uVar2 == 1) {
      local_1a8 = param_1 + 0xc;
      lVar1 = *(longlong *)(param_2 + 0x18);
      local_198[0] = 0;
      local_178 = (ulonglong)*(byte *)(param_1 + 0x1f) +
                  ((ulonglong)*(byte *)(param_1 + 0x1e) +
                  (ulonglong)
                  CONCAT11(*(undefined1 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x1d)) * 0x100)
                  * 0x100 + local_1a8;
      local_180 = local_180 & 0xffffff00;
      local_1a0 = *(int *)(lVar1 + 0x18);
      local_17c = 0;
      local_188 = local_1a8;
      if (local_1a0 == -1) {
        lVar4 = FUN_140398a10(lVar1 + 0x80);
        local_1a0 = (uint)*(byte *)(lVar4 + 5) + (uint)*(byte *)(lVar4 + 4) * 0x100;
        if (local_1a0 == 0) {
          local_1a0 = 0;
        }
        *(int *)(lVar1 + 0x18) = local_1a0;
      }
      FUN_14037c8e0(&local_1a8,local_198,param_2);
    }
    else {
      if (uVar2 == 2) {
        local_1a8 = param_1 + 0xc;
        lVar1 = *(longlong *)(param_2 + 0x18);
        local_168[0] = 0;
        local_150 = (ulonglong)*(byte *)(param_1 + 0x1f) +
                    ((ulonglong)*(byte *)(param_1 + 0x1e) +
                    (ulonglong)
                    CONCAT11(*(undefined1 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x1d)) *
                    0x100) * 0x100 + local_1a8;
        local_138 = 0;
        local_148 = (ulonglong)*(byte *)(param_1 + 0x23) +
                    ((ulonglong)*(byte *)(param_1 + 0x22) +
                    (ulonglong)
                    CONCAT11(*(undefined1 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x21)) *
                    0x100) * 0x100 + local_1a8;
        local_140 = (ulonglong)*(byte *)(param_1 + 0x27) +
                    ((ulonglong)*(byte *)(param_1 + 0x26) +
                    (ulonglong)
                    CONCAT11(*(undefined1 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x25)) *
                    0x100) * 0x100 + local_1a8;
        local_1a0 = *(int *)(lVar1 + 0x18);
        local_160 = param_2;
        local_158 = local_1a8;
        if (local_1a0 == -1) {
          lVar4 = FUN_140398a10(lVar1 + 0x80);
          local_1a0 = (uint)*(byte *)(lVar4 + 4) * 0x100 + (uint)*(byte *)(lVar4 + 5);
          if (local_1a0 == 0) {
            local_1a0 = 0;
          }
          *(int *)(lVar1 + 0x18) = local_1a0;
        }
        FUN_1403838e0(&local_1a8,local_168,param_2);
        return (ulonglong)local_168[0];
      }
      iVar3 = uVar2 - 4;
      if (iVar3 == 0) {
        uVar5 = FUN_1403a97a0(param_1 + 0xc);
        return uVar5;
      }
      if (iVar3 != 1) {
        return (ulonglong)(uint3)((uint)iVar3 >> 8) << 8;
      }
      local_1a8 = param_1 + 0xc;
      lVar1 = *(longlong *)(param_2 + 0x18);
      local_198[0] = 0;
      local_178 = (ulonglong)*(byte *)(param_1 + 0x1f) +
                  ((ulonglong)*(byte *)(param_1 + 0x1e) +
                  (ulonglong)
                  CONCAT11(*(undefined1 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x1d)) * 0x100)
                  * 0x100 + local_1a8;
      local_180 = 0;
      local_1a0 = *(int *)(lVar1 + 0x18);
      local_188 = local_1a8;
      if (local_1a0 == -1) {
        lVar4 = FUN_140398a10(lVar1 + 0x80);
        local_1a0 = (uint)*(byte *)(lVar4 + 4) * 0x100 + (uint)*(byte *)(lVar4 + 5);
        if (local_1a0 == 0) {
          local_1a0 = 0;
        }
        *(int *)(lVar1 + 0x18) = local_1a0;
      }
      FUN_14037e050(&local_1a8,local_198,param_2);
    }
  }
  return (ulonglong)local_198[0];
}

