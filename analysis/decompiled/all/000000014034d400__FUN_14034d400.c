// Function: FUN_14034d400
// Addr: 14034d400
// Size: 703 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14034d400(longlong param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  uint local_1d0;
  undefined **local_1c8;
  undefined4 local_1c0;
  undefined1 *local_1b8;
  uint local_1b0;
  undefined *local_1a8;
  undefined1 *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined4 local_188;
  undefined2 local_184;
  undefined2 local_182;
  longlong local_180;
  longlong local_178;
  undefined1 local_168 [276];
  int local_54;
  uint local_48;
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_1f8;
  local_180 = *(longlong *)(param_1 + 0x290);
  if ((local_180 == 0) || (*(uint *)(param_1 + 0x298) < 4)) {
    uVar4 = 8;
  }
  else {
    puVar6 = (undefined1 *)((ulonglong)*(uint *)(param_1 + 0x298) + local_180);
    local_1d0 = (uint)CONCAT11(*(undefined1 *)(local_180 + 2),*(undefined1 *)(local_180 + 3));
    puVar2 = (undefined1 *)(local_180 + 4);
    local_1a0 = puVar6;
    local_198 = param_1;
    while ((local_1d0 != 0 && (puVar2 + 8 <= puVar6))) {
      local_184 = CONCAT11(*puVar2,puVar2[1]);
      local_182 = CONCAT11(puVar2[2],puVar2[3]);
      local_1d8 = puVar2 + 8;
      local_188 = 0;
      uVar5 = CONCAT31(CONCAT21(CONCAT11(puVar2[4],puVar2[5]),puVar2[6]),puVar2[7]);
      if ((uVar5 != 0) && (uVar5 <= *(int *)(param_1 + 0x298) - 2U)) {
        local_1b8 = (undefined1 *)((ulonglong)uVar5 + local_180);
        local_1b0 = (uint)CONCAT11(*local_1b8,local_1b8[1]);
        local_1c8 = &PTR_DAT_140450d00;
        puVar1 = PTR_DAT_140450d00;
        while (puVar1 != (undefined *)0x0) {
          local_1a8 = *local_1c8;
          if (*(uint *)(local_1a8 + 0x50) == local_1b0) {
            local_1c0 = 0;
            local_190 = param_1;
            FUN_1402f9120(local_168,local_1b8,puVar6,0);
            local_48 = (uint)*(ushort *)(param_1 + 0x174);
            iVar3 = FUN_140420eb0(local_168,auStack_1f8);
            if (iVar3 == 0) {
              local_1c0 = (**(code **)(local_1a8 + 0x58))(local_1b8,local_168);
            }
            param_1 = local_198;
            puVar6 = local_1a0;
            if ((local_54 == 0) &&
               (iVar3 = FUN_1402ef870(local_1a8,local_1b8,&local_190), param_1 = local_198,
               puVar6 = local_1a0, iVar3 == 0)) {
              *(undefined4 *)(local_178 + 0x20) = local_1c0;
            }
            break;
          }
          local_1c8 = local_1c8 + 1;
          puVar1 = *local_1c8;
        }
      }
      local_1d0 = local_1d0 - 1;
      puVar2 = local_1d8;
    }
    uVar4 = 0;
  }
  return uVar4;
}

