// Function: FUN_140256e10
// Addr: 140256e10
// Size: 261 bytes


float * FUN_140256e10(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  pfVar1 = (float *)(param_1 + 0x554);
  puVar6 = (undefined8 *)FUN_1401850a0();
  fVar2 = *(float *)(param_1 + 0x2fc);
  fVar3 = *(float *)(param_1 + 0x2f8);
  fVar4 = *(float *)(param_1 + 0x300);
  uVar5 = puVar6[1];
  *(undefined8 *)pfVar1 = *puVar6;
  *(undefined8 *)(param_1 + 0x55c) = uVar5;
  uVar5 = puVar6[3];
  *(undefined8 *)(param_1 + 0x564) = puVar6[2];
  *(undefined8 *)(param_1 + 0x56c) = uVar5;
  uVar5 = puVar6[5];
  *(undefined8 *)(param_1 + 0x574) = puVar6[4];
  *(undefined8 *)(param_1 + 0x57c) = uVar5;
  uVar5 = puVar6[7];
  *(undefined8 *)(param_1 + 0x584) = puVar6[6];
  *(undefined8 *)(param_1 + 0x58c) = uVar5;
  *(float *)(param_1 + 0x584) =
       fVar4 * *(float *)(param_1 + 0x574) +
       fVar2 * *(float *)(param_1 + 0x564) + fVar3 * *pfVar1 + *(float *)(param_1 + 0x584);
  *(float *)(param_1 + 0x588) =
       fVar4 * *(float *)(param_1 + 0x578) +
       fVar2 * *(float *)(param_1 + 0x568) +
       fVar3 * *(float *)(param_1 + 0x558) + *(float *)(param_1 + 0x588);
  *(float *)(param_1 + 0x58c) =
       fVar4 * *(float *)(param_1 + 0x57c) +
       fVar2 * *(float *)(param_1 + 0x56c) +
       fVar3 * *(float *)(param_1 + 0x55c) + *(float *)(param_1 + 0x58c);
  return pfVar1;
}

