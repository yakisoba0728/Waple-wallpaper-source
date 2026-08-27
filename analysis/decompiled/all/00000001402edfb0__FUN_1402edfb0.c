// Function: FUN_1402edfb0
// Addr: 1402edfb0
// Size: 360 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1402edfb0(float param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float local_res8 [2];
  ushort local_res10 [4];
  float local_res18 [4];
  
  iVar4 = 0;
  local_res10[0] = 0;
  local_res8[0] = param_1;
  sVar2 = FUN_1402ee270(local_res10,local_res8);
  if (((sVar2 != 0) && (sVar2 != 1)) && (sVar2 != 2)) {
    uVar5 = (uint)(short)local_res10[0];
    if (((int)uVar5 / 3 + ((int)uVar5 >> 0x1f) +
        (int)(((longlong)(int)uVar5 / 3 + ((longlong)(int)uVar5 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
        3 != uVar5) {
      do {
        local_res10[0] = (short)uVar5 + 1;
        uVar5 = (uint)local_res10[0];
        iVar3 = (int)(short)local_res10[0];
        iVar4 = iVar4 + -1;
      } while ((iVar3 / 3 + (iVar3 >> 0x1f) +
               (int)(((longlong)iVar3 / 3 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3
               != (int)(short)local_res10[0]);
      if (iVar4 < 0) {
        FUN_1402ee120(local_res8,iVar4);
      }
    }
    fVar1 = local_res8[0];
    if ((int)local_res8[0] < 0) {
      local_res8[0] = (float)((uint)local_res8[0] ^ DAT_140492ff0);
    }
    fVar6 = ((local_res8[0] * _DAT_1404364a0 + _DAT_1404364a8) * local_res8[0] + _DAT_14043649c) /
            (local_res8[0] + _DAT_1404364a4);
    local_res18[0] =
         ((local_res8[0] * DAT_140492740) /
          ((local_res8[0] * DAT_1404926c0) / fVar6 + fVar6 * fVar6) + fVar6) * DAT_1404926c0;
    if ((int)fVar1 < 0) {
      local_res18[0] = (float)((uint)local_res18[0] ^ DAT_140492ff0);
    }
    iVar4 = (int)(short)local_res10[0];
    FUN_1402ee120(local_res18,
                  iVar4 / 3 + (iVar4 >> 0x1f) +
                  (int)(((longlong)iVar4 / 3 + ((longlong)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f));
    return local_res18[0];
  }
  return local_res8[0];
}

