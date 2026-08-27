// Function: FUN_1403ee5e0
// Addr: 1403ee5e0
// Size: 609 bytes


void FUN_1403ee5e0(byte *param_1,longlong param_2,undefined4 param_3)

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
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar16 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,5);
  fVar14 = DAT_1404925f0;
  fVar20 = ((float)(int)((((uint)param_1[0x14] * 0x100 + (uint)param_1[0x15]) * 0x100 +
                         (uint)param_1[0x16]) * 0x100 + (uint)param_1[0x17]) + fVar16) *
           DAT_1404925f0;
  fVar16 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,4);
  fVar21 = ((float)(int)((((uint)param_1[0x11] + (uint)param_1[0x10] * 0x100) * 0x100 +
                         (uint)param_1[0x12]) * 0x100 + (uint)param_1[0x13]) + fVar16) * fVar14;
  fVar16 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,3);
  bVar1 = param_1[0xd];
  bVar2 = param_1[0xc];
  bVar3 = param_1[0xe];
  bVar4 = param_1[0xf];
  fVar17 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,2);
  bVar5 = param_1[8];
  bVar6 = param_1[9];
  bVar7 = param_1[10];
  bVar8 = param_1[0xb];
  fVar18 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,1);
  bVar9 = param_1[4];
  bVar10 = param_1[5];
  bVar11 = param_1[6];
  bVar12 = param_1[7];
  fVar19 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,0);
  lVar13 = *(longlong *)(param_2 + 0x10);
  if (fVar21 == DAT_1404929a0) {
    fVar21 = 0.0;
  }
  if (fVar20 == DAT_1404929a0) {
    fVar20 = 0.0;
  }
  uVar15 = 0;
  if (*(undefined8 **)(lVar13 + 0x98) != (undefined8 *)0x0) {
    uVar15 = **(undefined8 **)(lVar13 + 0x98);
  }
  (**(code **)(lVar13 + 0x10))
            (lVar13,*(undefined8 *)(param_2 + 0x18),
             ((float)(int)((((uint)*param_1 * 0x100 + (uint)param_1[1]) * 0x100 + (uint)param_1[2])
                           * 0x100 + (uint)param_1[3]) + fVar19) * fVar14,
             ((float)(int)((((uint)bVar9 * 0x100 + (uint)bVar10) * 0x100 + (uint)bVar11) * 0x100 +
                          (uint)bVar12) + fVar18) * fVar14,
             ((float)(int)((((uint)bVar6 + (uint)bVar5 * 0x100) * 0x100 + (uint)bVar7) * 0x100 +
                          (uint)bVar8) + fVar17) * fVar14,
             ((float)(int)((((uint)bVar1 + (uint)bVar2 * 0x100) * 0x100 + (uint)bVar3) * 0x100 +
                          (uint)bVar4) + fVar16) * fVar14,fVar21,fVar20,uVar15);
  return;
}

