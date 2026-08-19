// Function: FUN_140375d90
// Addr: 140375d90
// Size: 592 bytes


void FUN_140375d90(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  int local_1a0;
  undefined1 local_198 [8];
  longlong local_190;
  longlong local_188;
  uint local_180;
  undefined4 uStack_17c;
  longlong local_178;
  undefined1 local_168 [8];
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined4 local_138;
  ulonglong local_28;
  
  local_28 = DAT_1404dc110 ^ (ulonglong)auStack_1c8;
  cVar1 = *(char *)(param_1 + 7);
  if (cVar1 == '\0') {
    lVar2 = *(longlong *)(param_2 + 0x18);
    local_1a8 = param_1 + 0xc;
    local_198[0] = 0;
    local_1a0 = *(int *)(lVar2 + 0x18);
    local_188 = 0;
    local_190 = local_1a8;
    if (local_1a0 == -1) {
      lVar3 = FUN_140398ae0(lVar2 + 0x80);
      local_1a0 = (uint)*(byte *)(lVar3 + 4) * 0x100 + (uint)*(byte *)(lVar3 + 5);
      if (local_1a0 == 0) {
        local_1a0 = 0;
      }
      *(int *)(lVar2 + 0x18) = local_1a0;
    }
    func_0x000140384cf0(&local_1a8,local_198,param_2);
  }
  else if (cVar1 == '\x01') {
    local_1a8 = param_1 + 0xc;
    lVar2 = *(longlong *)(param_2 + 0x18);
    local_198[0] = 0;
    local_178 = (ulonglong)*(byte *)(param_1 + 0x1f) +
                ((ulonglong)*(byte *)(param_1 + 0x1e) +
                (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x1d))
                * 0x100) * 0x100 + local_1a8;
    local_180 = local_180 & 0xffffff00;
    local_1a0 = *(int *)(lVar2 + 0x18);
    uStack_17c = 0;
    local_190 = param_2;
    local_188 = local_1a8;
    if (local_1a0 == -1) {
      lVar3 = FUN_140398ae0(lVar2 + 0x80);
      local_1a0 = (uint)*(byte *)(lVar3 + 5) + (uint)*(byte *)(lVar3 + 4) * 0x100;
      if (local_1a0 == 0) {
        local_1a0 = 0;
      }
      *(int *)(lVar2 + 0x18) = local_1a0;
    }
    func_0x00014037c9b0(&local_1a8,local_198,param_2);
  }
  else if (cVar1 == '\x02') {
    local_1a8 = param_1 + 0xc;
    lVar2 = *(longlong *)(param_2 + 0x18);
    local_168[0] = 0;
    local_150 = (ulonglong)*(byte *)(param_1 + 0x1f) +
                ((ulonglong)*(byte *)(param_1 + 0x1e) +
                (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x1d))
                * 0x100) * 0x100 + local_1a8;
    local_138 = 0;
    local_148 = (ulonglong)*(byte *)(param_1 + 0x23) +
                ((ulonglong)*(byte *)(param_1 + 0x22) +
                (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x21))
                * 0x100) * 0x100 + local_1a8;
    local_140 = (ulonglong)*(byte *)(param_1 + 0x27) +
                ((ulonglong)*(byte *)(param_1 + 0x26) +
                (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x25))
                * 0x100) * 0x100 + local_1a8;
    local_1a0 = *(int *)(lVar2 + 0x18);
    local_160 = param_2;
    local_158 = local_1a8;
    if (local_1a0 == -1) {
      lVar3 = FUN_140398ae0(lVar2 + 0x80);
      local_1a0 = (uint)*(byte *)(lVar3 + 4) * 0x100 + (uint)*(byte *)(lVar3 + 5);
      if (local_1a0 == 0) {
        local_1a0 = 0;
      }
      *(int *)(lVar2 + 0x18) = local_1a0;
    }
    FUN_1403839b0(&local_1a8,local_168,param_2);
  }
  else if (cVar1 == '\x04') {
    FUN_1403a9870(param_1 + 0xc);
  }
  else if (cVar1 == '\x05') {
    local_1a8 = param_1 + 0xc;
    lVar2 = *(longlong *)(param_2 + 0x18);
    local_198[0] = 0;
    local_178 = (ulonglong)*(byte *)(param_1 + 0x1f) +
                ((ulonglong)*(byte *)(param_1 + 0x1e) +
                (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x1d))
                * 0x100) * 0x100 + local_1a8;
    local_180 = 0;
    local_1a0 = *(int *)(lVar2 + 0x18);
    local_190 = param_2;
    local_188 = local_1a8;
    if (local_1a0 == -1) {
      lVar3 = FUN_140398ae0(lVar2 + 0x80);
      local_1a0 = (uint)*(byte *)(lVar3 + 4) * 0x100 + (uint)*(byte *)(lVar3 + 5);
      if (local_1a0 == 0) {
        local_1a0 = 0;
      }
      *(int *)(lVar2 + 0x18) = local_1a0;
    }
    FUN_14037e120(&local_1a8,local_198,param_2);
  }
  func_0x0001402ed2f0(local_28 ^ (ulonglong)auStack_1c8);
  return;
}

