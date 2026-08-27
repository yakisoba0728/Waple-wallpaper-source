// Function: FUN_14031ad50
// Addr: 14031ad50
// Size: 492 bytes


int FUN_14031ad50(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  int local_res8 [8];
  
  puVar2 = *(uint **)(param_1 + 0x2e0);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  local_res8[0] = 0;
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)FUN_1402f7e90(uVar4,0x300,local_res8);
    if (local_res8[0] != 0) {
      return local_res8[0];
    }
    puVar2[0xbe] = 0;
    puVar2[0x42] = 0;
    puVar2[0x43] = 0;
    puVar2[0x44] = 0;
    puVar2[0x45] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    *(uint **)(param_1 + 0x2e0) = puVar2;
  }
  if (param_2 != 0) {
    if (*puVar2 == 0) {
      uVar3 = FUN_1402f80b0(uVar4,0x38,0,param_2,0,local_res8);
      *(undefined8 *)(puVar2 + 0x48) = uVar3;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      uVar3 = FUN_1402f80b0(uVar4,0xc4,0,param_2,0,local_res8);
      *(undefined8 *)(puVar2 + 0x6a) = uVar3;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      uVar4 = FUN_1402f80b0(uVar4,0x10,0,param_2,0,local_res8);
      *(undefined8 *)(puVar2 + 0x8e) = uVar4;
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      uVar6 = 2;
      *(longlong *)(puVar2 + 0x46) = param_1 + 0xd8;
      *(longlong *)(puVar2 + 0x68) = param_1 + 0x114;
      *(longlong *)(puVar2 + 0x8c) = param_1 + 0x27c;
      if (1 < param_2) {
        do {
          uVar1 = (int)uVar6 - 1;
          uVar5 = (int)uVar6 + 1;
          *(longlong *)(puVar2 + uVar6 * 2 + 0x46) =
               *(longlong *)(puVar2 + (ulonglong)uVar1 * 2 + 0x46) + 0x38;
          *(longlong *)(puVar2 + uVar6 * 2 + 0x68) =
               *(longlong *)(puVar2 + (ulonglong)uVar1 * 2 + 0x68) + 0xc4;
          *(longlong *)(puVar2 + uVar6 * 2 + 0x8c) =
               *(longlong *)(puVar2 + (ulonglong)uVar1 * 2 + 0x8c) + 0x10;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 <= param_2);
      }
      *puVar2 = param_2;
    }
    else if (*puVar2 != param_2) {
      return 3;
    }
  }
  if (param_3 != 0) {
    if ((puVar2[1] != 0) && (puVar2[1] != param_3)) {
      return 3;
    }
    puVar2[1] = param_3;
  }
  return local_res8[0];
}

