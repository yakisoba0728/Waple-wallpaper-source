// Function: FUN_1403d0210
// Addr: 1403d0210
// Size: 690 bytes


undefined8 * FUN_1403d0210(longlong param_1,undefined8 *param_2,uint param_3,char param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  short sVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  byte *local_78;
  byte *pbStack_70;
  uint local_68;
  undefined4 uStack_64;
  byte *local_58;
  byte *pbStack_50;
  undefined8 local_48;
  byte *pbStack_40;
  int iStack_34;
  
  uVar8 = (ulonglong)param_3;
  if (*(uint *)(param_1 + 0x1c) <= param_3) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = &DAT_14045dd10;
    *(undefined4 *)(param_2 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
    return param_2;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x18) == '\0') {
    puVar5 = &DAT_14045dd10;
    if (puVar1 != (undefined8 *)0x0) {
      puVar5 = puVar1;
    }
    lVar2 = puVar5[2];
    pbVar7 = (byte *)(lVar2 + uVar8 * 4);
    uVar6 = (uint)pbVar7[1] * 0x10000 + (uint)*(byte *)(lVar2 + 2 + uVar8 * 4) * 0x100 +
            (uint)*pbVar7 * 0x1000000 + (uint)pbVar7[3];
    uVar4 = param_3 + 1;
    local_68 = (uint)*(byte *)(lVar2 + 1 + (ulonglong)uVar4 * 4) * 0x10000 +
               (uint)*(byte *)(lVar2 + 2 + (ulonglong)uVar4 * 4) * 0x100 +
               (uint)*(byte *)(lVar2 + (ulonglong)uVar4 * 4) * 0x1000000 +
               (uint)*(byte *)(lVar2 + 3 + (ulonglong)uVar4 * 4);
  }
  else {
    puVar5 = &DAT_14045dd10;
    if (puVar1 != (undefined8 *)0x0) {
      puVar5 = puVar1;
    }
    lVar2 = puVar5[2];
    uVar6 = ((uint)*(byte *)(lVar2 + 1 + uVar8 * 2) + (uint)*(byte *)(lVar2 + uVar8 * 2) * 0x100) *
            2;
    local_68 = ((uint)*(byte *)(lVar2 + 1 + (ulonglong)(param_3 + 1) * 2) +
               (uint)*(byte *)(lVar2 + (ulonglong)(param_3 + 1) * 2) * 0x100) * 2;
  }
  if (local_68 < uVar6) {
LAB_1403d0490:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = &DAT_14045dd10;
    *(undefined4 *)(param_2 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
    return param_2;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  puVar5 = &DAT_14045dd10;
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  if (*(uint *)(puVar5 + 3) < local_68) goto LAB_1403d0490;
  puVar5 = &DAT_14045dd10;
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  local_68 = local_68 - uVar6;
  pbStack_70 = (byte *)(puVar5[2] + (ulonglong)uVar6);
  pbVar7 = (byte *)&DAT_14045dd10;
  if (9 < local_68) {
    pbVar7 = pbStack_70;
  }
  uStack_64 = 0;
  sVar3 = (ushort)pbVar7[1] + (ushort)*pbVar7 * 0x100;
  if (sVar3 == 0) {
    iStack_34 = 0;
  }
  else if (sVar3 < 1) {
    iStack_34 = 0;
    if (0x7fffffff < (uint)(int)sVar3) {
      iStack_34 = 2;
    }
  }
  else {
    iStack_34 = 1;
  }
  if (param_4 == '\0') {
    local_58 = local_78;
    local_48._4_4_ = 0;
    pbStack_50 = pbStack_70;
    local_48._0_4_ = local_68;
    pbStack_40 = pbVar7;
    goto LAB_1403d0462;
  }
  if ((iStack_34 != 0) && (iStack_34 == 1)) {
    uStack_64 = 0;
    pbStack_40 = (byte *)(ulonglong)local_68;
    local_58 = pbVar7;
    local_48 = pbStack_70;
    FUN_14040eba0(&local_58,&local_78);
  }
  local_58 = local_78;
  pbStack_40 = (byte *)&DAT_14045dd10;
  if (9 < local_68) {
    pbStack_40 = pbStack_70;
  }
  sVar3 = (ushort)*pbStack_40 * 0x100 + (ushort)pbStack_40[1];
  pbStack_50 = pbStack_70;
  local_48._0_4_ = local_68;
  local_48._4_4_ = uStack_64;
  if (sVar3 != 0) {
    if (0 < sVar3) {
      iStack_34 = 1;
      goto LAB_1403d0462;
    }
    iStack_34 = 2;
    if (sVar3 < 0) goto LAB_1403d0462;
  }
  iStack_34 = 0;
LAB_1403d0462:
  *param_2 = local_58;
  param_2[1] = pbStack_50;
  param_2[2] = CONCAT44(local_48._4_4_,(uint)local_48);
  param_2[3] = pbStack_40;
  param_2[4] = CONCAT44(iStack_34,param_3);
  return param_2;
}

