// Function: FUN_1403ed780
// Addr: 1403ed780
// Size: 668 bytes


void FUN_1403ed780(longlong param_1,longlong param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 *local_108;
  code *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  uVar15 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 1) * 0x10000 +
           (uint)*(byte *)(param_1 + 3);
  if (uVar15 == 0) {
    local_108 = &DAT_14045dd10;
  }
  else {
    local_108 = (undefined8 *)((ulonglong)uVar15 + param_1);
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  bVar2 = *(byte *)(param_1 + 0xc);
  bVar3 = *(byte *)(param_1 + 10);
  bVar4 = *(byte *)(param_1 + 8);
  bVar5 = *(byte *)(param_1 + 0xf);
  bVar6 = *(byte *)(param_1 + 0xd);
  bVar7 = *(byte *)(param_1 + 0xb);
  bVar8 = *(byte *)(param_1 + 9);
  local_100 = FUN_14040c310;
  local_f0 = &LAB_14040c530;
  bVar9 = *(byte *)(param_1 + 7);
  bVar10 = *(byte *)(param_1 + 6);
  bVar11 = *(byte *)(param_1 + 5);
  bVar12 = *(byte *)(param_1 + 4);
  local_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_f8 = param_2;
  fVar16 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,5);
  fVar17 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,4);
  fVar18 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,3);
  fVar19 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,2);
  fVar20 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,1);
  fVar21 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,0);
  lVar13 = *(longlong *)(param_2 + 0x10);
  uVar14 = 0;
  if (*(longlong *)(lVar13 + 0x98) != 0) {
    uVar14 = *(undefined8 *)(*(longlong *)(lVar13 + 0x98) + 0x50);
  }
  (**(code **)(lVar13 + 0x60))
            (lVar13,*(undefined8 *)(param_2 + 0x18),&local_108,
             fVar21 + (float)(int)(short)((ushort)bVar12 * 0x100 + (ushort)bVar11),
             fVar20 + (float)(int)(short)((ushort)bVar9 + (ushort)bVar10 * 0x100),
             fVar19 + (float)(int)(short)((ushort)bVar4 * 0x100 + (ushort)bVar8),
             fVar18 + (float)(int)(short)((ushort)bVar3 * 0x100 + (ushort)bVar7),
             fVar17 + (float)(int)(short)((ushort)bVar6 + (ushort)bVar2 * 0x100),
             fVar16 + (float)(int)(short)((ushort)bVar5 + (ushort)bVar1 * 0x100),uVar14);
  return;
}

