// Function: FUN_1403d13a0
// Addr: 1403d13a0
// Size: 503 bytes


void FUN_1403d13a0(undefined4 *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  uint param_5)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  bool bVar10;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 local_f8 [40];
  undefined1 local_d0 [48];
  longlong local_a0;
  longlong local_68;
  
  uVar4 = 0;
  local_158 = 0;
  local_150 = 0;
  if (param_5 != 0) {
    local_148 = *(undefined8 *)(param_2 + 0x20);
    local_140 = *param_1;
    uStack_13c = param_1[1];
    uStack_138 = param_1[2];
    uStack_134 = param_1[3];
    local_130 = *(undefined8 *)(param_1 + 4);
    uStack_128 = *(undefined8 *)(param_1 + 6);
    local_120 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    local_fc = 0xffffffff;
    do {
      FUN_1403a2bc0(&local_148,uVar4 * 0x10 + param_4);
      uVar6 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar6;
    } while (uVar6 < param_5);
    FUN_1403b4c30(&local_148,&local_158);
    if (1 < (int)local_110 + 1U) {
      func_0x0001402bf8e0(local_108);
      return;
    }
    if (1 < (int)local_120 + 1U) {
      func_0x0001402bf8e0(local_118);
      return;
    }
  }
  puVar3 = (undefined8 *)FUN_1403c5780(*(longlong *)(param_2 + 0x20) + 0x158);
  puVar8 = (undefined8 *)*puVar3;
  pbVar7 = (byte *)&DAT_14045dde0;
  puVar5 = &DAT_14045dde0;
  if (puVar8 != (undefined8 *)0x0) {
    puVar5 = puVar8;
  }
  if (*(uint *)(puVar5 + 3) < 8) {
    pbVar9 = (byte *)&DAT_14045dde0;
  }
  else {
    pbVar9 = (byte *)puVar5[2];
  }
  if ((uint)*pbVar9 * 0x100 + (uint)pbVar9[1] == 0) {
    puVar3 = (undefined8 *)FUN_1403c56e0(*(longlong *)(param_2 + 0x20) + 0x160);
    puVar8 = (undefined8 *)*puVar3;
    puVar5 = &DAT_14045dde0;
    if (puVar8 != (undefined8 *)0x0) {
      puVar5 = puVar8;
    }
    if (7 < *(uint *)(puVar5 + 3)) {
      pbVar7 = (byte *)puVar5[2];
    }
    if ((uint)pbVar7[1] + (uint)*pbVar7 * 0x100 != 0) {
      FUN_140394930(local_f8,param_1,param_2,param_3,puVar8);
      cVar2 = FUN_1403ec600(param_3,param_2,"start table mort");
      if (cVar2 != '\0') {
        puVar8 = &local_158;
        if (param_5 == 0) {
          puVar8 = (undefined8 *)(param_1 + 0x22);
        }
        func_0x0001403ab460(pbVar7,local_f8,puVar8,puVar3);
        FUN_1403ec600(param_3,param_2,"end table mort");
      }
      FUN_1403bf0c0(local_d0);
      if (local_a0 != 0) {
        FUN_1403bf0c0(local_d0);
      }
    }
  }
  else {
    FUN_140394930(local_f8,param_1,param_2,param_3,puVar8);
    cVar2 = FUN_1403ec600(param_3,param_2,"start table morx");
    if (cVar2 != '\0') {
      local_68 = FUN_1403bc900(puVar3 + 3);
      puVar8 = &local_158;
      if (param_5 == 0) {
        puVar8 = (undefined8 *)(param_1 + 0x22);
      }
      FUN_1403ab720(pbVar9,local_f8,puVar8,puVar3);
      lVar1 = local_68;
      if (local_68 != 0) {
        LOCK();
        bVar10 = puVar3[3] == 0;
        if (bVar10) {
          puVar3[3] = local_68;
        }
        UNLOCK();
        if (!bVar10) {
          FUN_1403c2ab0(local_68);
          func_0x0001402bf8e0(lVar1);
          return;
        }
      }
      local_68 = 0;
      FUN_1403ec600(param_3,param_2,"end table morx");
    }
    FUN_1403bf0c0(local_d0);
    if (local_a0 != 0) {
      FUN_1403bf0c0(local_d0);
    }
  }
  if (1 < (int)local_158 + 1U) {
    func_0x00014040c020(&local_158,0);
    func_0x0001402bf8e0(local_150);
  }
  return;
}

