// Function: FUN_1401fd3f0
// Addr: 1401fd3f0
// Size: 281 bytes


float * FUN_1401fd3f0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  
  if (*(char *)(param_1 + 0x4b1) == '\0') {
    pfVar5 = (float *)FUN_1401850a0();
    return pfVar5;
  }
  pfVar5 = (float *)(param_1 + 0x450);
  puVar6 = (undefined8 *)FUN_1401850a0();
  fVar1 = *(float *)(param_1 + 0x2fc);
  fVar2 = *(float *)(param_1 + 0x2f8);
  fVar3 = *(float *)(param_1 + 0x300);
  uVar4 = puVar6[1];
  *(undefined8 *)pfVar5 = *puVar6;
  *(undefined8 *)(param_1 + 0x458) = uVar4;
  uVar4 = puVar6[3];
  *(undefined8 *)(param_1 + 0x460) = puVar6[2];
  *(undefined8 *)(param_1 + 0x468) = uVar4;
  uVar4 = puVar6[5];
  *(undefined8 *)(param_1 + 0x470) = puVar6[4];
  *(undefined8 *)(param_1 + 0x478) = uVar4;
  uVar4 = puVar6[7];
  *(undefined8 *)(param_1 + 0x480) = puVar6[6];
  *(undefined8 *)(param_1 + 0x488) = uVar4;
  *(float *)(param_1 + 0x480) =
       fVar3 * *(float *)(param_1 + 0x470) +
       fVar1 * *(float *)(param_1 + 0x460) + fVar2 * *pfVar5 + *(float *)(param_1 + 0x480);
  *(float *)(param_1 + 0x484) =
       fVar3 * *(float *)(param_1 + 0x474) +
       fVar1 * *(float *)(param_1 + 0x464) +
       fVar2 * *(float *)(param_1 + 0x454) + *(float *)(param_1 + 0x484);
  *(float *)(param_1 + 0x488) =
       fVar3 * *(float *)(param_1 + 0x478) +
       fVar1 * *(float *)(param_1 + 0x468) +
       fVar2 * *(float *)(param_1 + 0x458) + *(float *)(param_1 + 0x488);
  return pfVar5;
}

