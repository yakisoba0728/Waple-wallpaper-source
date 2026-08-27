// Function: FUN_1403ee200
// Addr: 1403ee200
// Size: 493 bytes


void FUN_1403ee200(longlong param_1,longlong param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 *local_d8;
  code *local_d0;
  longlong local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar7 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 1) * 0x10000 +
          (uint)*(byte *)(param_1 + 3);
  if (uVar7 == 0) {
    local_d8 = &DAT_14045dd10;
  }
  else {
    local_d8 = (undefined8 *)((ulonglong)uVar7 + param_1);
  }
  local_d0 = FUN_14040c310;
  local_b8 = 0;
  local_c0 = &LAB_14040c530;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_c8 = param_2;
  fVar8 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,3);
  fVar10 = ((float)(int)(short)((ushort)*(byte *)(param_1 + 0xb) +
                               (ushort)*(byte *)(param_1 + 10) * 0x100) + fVar8) * DAT_140471a5c;
  fVar8 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,2);
  bVar1 = *(byte *)(param_1 + 6);
  bVar2 = *(byte *)(param_1 + 5);
  bVar3 = *(byte *)(param_1 + 7);
  bVar4 = *(byte *)(param_1 + 4);
  fVar11 = ((float)(int)(short)((ushort)*(byte *)(param_1 + 8) * 0x100 +
                               (ushort)*(byte *)(param_1 + 9)) + fVar8) * DAT_140471a5c;
  fVar8 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,1);
  fVar9 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,0);
  lVar5 = *(longlong *)(param_2 + 0x10);
  uVar6 = 0;
  if (*(longlong *)(lVar5 + 0x98) != 0) {
    uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 0x98) + 0x60);
  }
  (**(code **)(lVar5 + 0x70))
            (lVar5,*(undefined8 *)(param_2 + 0x18),&local_d8,
             fVar9 + (float)(int)(short)((ushort)bVar2 + (ushort)bVar4 * 0x100),
             fVar8 + (float)(int)(short)((ushort)bVar3 + (ushort)bVar1 * 0x100),
             (fVar11 + DAT_140492704) * DAT_140492834,(fVar10 + DAT_140492704) * DAT_140492834,uVar6
            );
  return;
}

