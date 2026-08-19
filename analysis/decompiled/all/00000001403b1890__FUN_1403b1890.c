// Function: FUN_1403b1890
// Addr: 1403b1890
// Size: 356 bytes


void FUN_1403b1890(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1b8 [160];
  longlong local_118;
  undefined1 local_110 [48];
  longlong local_e0;
  uint local_9c;
  undefined4 local_80;
  undefined4 local_7c;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong uVar3;
  
  local_38 = DAT_1404dc110 ^ (ulonglong)auStack_1f8;
  if ((*(byte *)(*(longlong *)(param_1 + 0x98) + 0x28) & 1) != 0) {
    puVar1 = *(uint **)(*(longlong *)(param_1 + 0x98) + 0x20);
    uVar3 = 0;
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_1402dd8b0(1,0x98);
    }
    local_1d0 = 0;
    local_1d8 = &DAT_14045dde0;
    FUN_140394e80(local_1b8,0,param_2,param_3);
    if (*puVar1 != 0) {
      do {
        if (*(longlong *)(puVar1 + uVar3 * 2 + 10) != 0) {
          local_9c = puVar1[uVar3 + 2];
          local_80 = 0xffffffff;
          local_7c = 0;
          FUN_1403e3c50(local_1b8);
          if (*(longlong *)(puVar1 + uVar3 * 2 + 0x18) != 0) {
            func_0x00014036ca50(local_1b8,*(undefined8 *)(puVar1 + uVar3 * 2 + 10));
          }
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < *puVar1);
    }
    if (*(longlong *)(local_118 + 0xe8) != 0) {
      *(undefined8 *)(local_118 + 0x100) = local_48;
      *(undefined8 *)(local_118 + 0x108) = local_40;
    }
    if (1 < (uint)local_78 + 1) {
      local_78 = (ulonglong)(uint)local_78;
      func_0x0001402bf8e0(local_70);
      return;
    }
    local_78 = 0;
    local_70 = 0;
    if (local_e0 != 0) {
      FUN_1403bf0c0(local_110);
    }
  }
  func_0x0001402ed2f0(local_38 ^ (ulonglong)auStack_1f8);
  return;
}

