// Function: FUN_1403b40e0
// Addr: 1403b40e0
// Size: 448 bytes


void FUN_1403b40e0(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  ulonglong uVar9;
  undefined4 local_a8;
  int iStack_a4;
  byte *pbStack_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  int local_84;
  byte *local_80;
  int local_78;
  int local_74;
  undefined *local_70;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  
  uVar6 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
  if (uVar6 == 0) {
    puVar7 = &DAT_14045dd10;
  }
  else {
    puVar7 = (undefined8 *)((ulonglong)uVar6 + param_1);
  }
  cVar5 = FUN_14036f9e0(puVar7,*(undefined8 *)(param_2 + 0x18));
  if (cVar5 != '\0') {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar6 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
    if (uVar6 == 0) {
      pbVar8 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar8 = (byte *)((ulonglong)uVar6 + param_1);
    }
    bVar1 = *(byte *)(param_1 + 5);
    bVar2 = *(byte *)(param_1 + 4);
    iStack_a4 = (uint)*pbVar8 * 0x100 + (uint)pbVar8[1];
    pbStack_a0 = (byte *)0x0;
    local_a8 = 0;
    uVar4 = local_a8;
    local_a8 = 0;
    local_98 = 0;
    uStack_90 = 0;
    if (iStack_a4 == 1) {
      uVar9 = 0;
    }
    else if (iStack_a4 == 2) {
      FUN_1403e3ad0(&pbStack_a0,pbVar8);
      uVar9 = local_98 & 0xffffffff;
      pbVar8 = pbStack_a0;
    }
    else {
      uVar9 = 0;
      pbVar8 = (byte *)0x0;
      local_a8 = uVar4;
    }
    uStack_4c = uStack_90._4_4_;
    uStack_48 = local_a8;
    iStack_44 = iStack_a4;
    local_84 = iStack_a4;
    uStack_88 = local_a8;
    local_70 = &DAT_14047054f;
    local_98 = CONCAT44((int)(local_98 >> 0x20),(int)uVar9);
    local_74 = 0;
    pbStack_a0 = pbVar8;
    local_80 = (byte *)(param_1 + 6);
    local_78 = (uint)bVar2 * 0x100 + (uint)bVar1;
    while( true ) {
      if (iStack_a4 == 1) {
        uVar6 = (uint)pbStack_a0[3] + (uint)pbStack_a0[2] * 0x100;
      }
      else {
        if (iStack_a4 != 2) {
          return;
        }
        uVar6 = (uint)pbStack_a0[3] + (uint)pbStack_a0[2] * 0x100;
      }
      if (uVar6 <= (uint)uVar9) break;
      if (local_78 == 0) {
        return;
      }
      pbVar8 = (byte *)&DAT_14045dd10;
      if (local_78 != 0) {
        pbVar8 = local_80;
      }
      FUN_1403a29e0(uVar3,(uint)*pbVar8 * 0x100 + (uint)pbVar8[1]);
      FUN_140398f40(&local_a8);
      uVar9 = local_98 & 0xffffffff;
      if (local_78 != 0) {
        local_74 = local_74 + 1;
        local_78 = local_78 + -1;
        local_80 = local_80 + 2;
      }
    }
    return;
  }
  return;
}

