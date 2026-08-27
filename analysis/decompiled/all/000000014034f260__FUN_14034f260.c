// Function: FUN_14034f260
// Addr: 14034f260
// Size: 524 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14034f260(longlong param_1,undefined8 *param_2)

{
  ushort *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  int local_b0;
  int local_ac;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_40;
  int local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_18;
  int iVar4;
  
  local_18 = DAT_1404dc040 ^ (ulonglong)auStack_d8;
  if (param_1 == 0) {
    return 6;
  }
  if ((*(uint *)(param_2 + 2) & 1) == 0) {
    return 0x13;
  }
  puVar1 = (ushort *)param_2[1];
  if (puVar1 == (ushort *)0x0) {
    return 0x14;
  }
  if ((puVar1[1] != 0) && (*puVar1 != 0)) {
    if (*(longlong *)(puVar1 + 0xc) == 0) {
      return 0x14;
    }
    if (*(longlong *)(puVar1 + 4) == 0) {
      return 0x14;
    }
    if ((uint)puVar1[1] !=
        *(ushort *)(*(longlong *)(puVar1 + 0xc) + -2 + (ulonglong)*puVar1 * 2) + 1) {
      return 0x14;
    }
    local_68 = *(undefined8 *)puVar1;
    uStack_60 = *(undefined8 *)(puVar1 + 4);
    local_58 = *(undefined4 *)(puVar1 + 8);
    uStack_54 = *(undefined4 *)(puVar1 + 10);
    uStack_50 = *(undefined4 *)(puVar1 + 0xc);
    uStack_4c = *(undefined4 *)(puVar1 + 0xe);
    local_48 = *(undefined8 *)(puVar1 + 0x10);
    if ((*(uint *)(param_2 + 2) & 2) == 0) {
      piVar2 = (int *)*param_2;
      if (piVar2 == (int *)0x0) {
        return 6;
      }
      if (piVar2[1] == 0) {
        return 0;
      }
      if (*piVar2 == 0) {
        return 0;
      }
      local_40 = *(longlong *)(piVar2 + 4);
      if (local_40 == 0) {
        return 6;
      }
      if (-1 < piVar2[2]) {
        local_40 = (ulonglong)(uint)(piVar2[2] * (*piVar2 + -1)) + local_40;
      }
      local_38 = piVar2[2];
      iVar3 = 0;
      iVar4 = 0;
      local_30 = 0;
      local_28 = 0;
      local_b8 = 0;
      local_b0 = piVar2[1];
      local_ac = *piVar2;
    }
    else {
      local_30 = param_2[3];
      if (local_30 == 0) {
        return 0;
      }
      iVar3 = *(int *)(param_2 + 8);
      local_b0 = *(int *)(param_2 + 9);
      local_ac = *(int *)((longlong)param_2 + 0x4c);
      local_28 = param_2[7];
      iVar4 = *(int *)((longlong)param_2 + 0x44);
      local_b8 = param_2[8];
    }
    if ((iVar3 < local_b0) && (iVar4 < local_ac)) {
      uVar5 = FUN_14034fcd0(&local_b8);
      return uVar5;
    }
  }
  return 0;
}

