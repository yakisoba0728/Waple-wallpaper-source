// Function: FUN_1401fd690
// Addr: 1401fd690
// Size: 2303 bytes


undefined8
FUN_1401fd690(longlong param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  float *pfVar18;
  undefined8 uVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_22c;
  float local_228;
  float local_224;
  float local_220 [2];
  undefined4 local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  undefined8 local_154;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  
  lVar14 = *(longlong *)(param_1 + 0x4b8);
  if (((lVar14 == 0) || (*(longlong *)(lVar14 + 8) == 0)) ||
     (*(longlong *)(lVar14 + 0x1a8) == *(longlong *)(lVar14 + 0x1b0))) {
LAB_1401fdecf:
    uVar19 = 0;
  }
  else {
    uVar21 = (uint)(*(longlong *)(lVar14 + 0x1e0) - *(longlong *)(lVar14 + 0x1d8) >> 2);
    do {
      uVar21 = uVar21 - 1;
      if ((int)uVar21 < 0) goto LAB_1401fdecf;
      lVar14 = *(longlong *)(param_1 + 0x4b8);
      lVar15 = *(longlong *)(lVar14 + 0x1a8);
      iVar13 = *(int *)(*(longlong *)(lVar14 + 0x1d8) + (ulonglong)uVar21 * 4);
      lVar16 = (longlong)iVar13;
      lVar14 = *(longlong *)(lVar14 + 0x340);
      lVar20 = lVar16 * 0x40;
      lVar22 = lVar16 * 0x4c;
      fVar25 = *(float *)(lVar14 + lVar20);
      fVar23 = *(float *)(lVar14 + 0x30 + lVar20);
      local_1b8 = *(undefined8 *)(lVar14 + 4 + lVar20);
      local_188 = (float)((ulonglong)local_1b8 >> 0x20);
      uStack_1b0 = 0;
      fVar24 = *(float *)(lVar14 + 0xc + lVar20);
      fVar27 = *(float *)(lVar15 + 0xc + lVar22);
      fVar28 = *(float *)(lVar15 + 0x10 + lVar22);
      fVar29 = *(float *)(lVar15 + 0x14 + lVar22);
      fVar30 = *(float *)(lVar15 + 0x18 + lVar22);
      fVar1 = *(float *)(lVar15 + 0x1c + lVar22);
      fVar2 = *(float *)(lVar15 + 0x20 + lVar22);
      fVar26 = *(float *)(lVar15 + 0x24 + lVar22);
      fVar3 = *(float *)(lVar15 + 0x28 + lVar22);
      fVar4 = *(float *)(lVar15 + 0x2c + lVar22);
      fVar5 = *(float *)(lVar15 + 0x30 + lVar22);
      fVar6 = *(float *)(lVar15 + 0x34 + lVar22);
      fVar7 = *(float *)(lVar15 + 0x38 + lVar22);
      fVar8 = *(float *)(lVar14 + 0x10 + lVar20);
      local_1c8 = *(undefined8 *)(lVar14 + 0x14 + lVar20);
      local_198 = (float)((ulonglong)local_1c8 >> 0x20);
      uStack_1c0 = 0;
      fVar9 = *(float *)(lVar14 + 0x1c + lVar20);
      fVar10 = *(float *)(lVar14 + 0x20 + lVar20);
      local_1a8 = *(undefined8 *)(lVar14 + 0x24 + lVar20);
      local_178 = (float)((ulonglong)local_1a8 >> 0x20);
      uStack_1a0 = 0;
      fVar11 = *(float *)(lVar14 + 0x2c + lVar20);
      local_128 = *(undefined8 *)(lVar14 + 0x34 + lVar20);
      local_108 = (float)((ulonglong)local_128 >> 0x20);
      uStack_120 = 0;
      fVar12 = *(float *)(lVar14 + 0x3c + lVar20);
      local_168 = fVar29 * fVar10 + fVar27 * fVar25 + fVar28 * fVar8 + fVar23 * fVar30;
      local_164 = (float)local_128 * fVar30 +
                  fVar29 * (float)local_1a8 + (float)local_1b8 * fVar27 + fVar28 * (float)local_1c8;
      local_160 = local_108 * fVar30 + fVar29 * local_178 + fVar27 * local_188 + fVar28 * local_198;
      local_15c = fVar12 * fVar30 + fVar11 * fVar29 + fVar27 * fVar24 + fVar28 * fVar9;
      local_158 = fVar2 * fVar8 + fVar25 * fVar1 + fVar26 * fVar10 + fVar3 * fVar23;
      local_154 = CONCAT44(fVar26 * local_178 + local_188 * fVar1 + fVar2 * local_198 +
                           fVar3 * local_108,
                           fVar26 * (float)local_1a8 +
                           (float)local_1b8 * fVar1 + fVar2 * (float)local_1c8 +
                           fVar3 * (float)local_128);
      local_14c = fVar26 * fVar11 + fVar24 * fVar1 + fVar9 * fVar2 + fVar3 * fVar12;
      local_148 = fVar6 * fVar10 + fVar4 * fVar25 + fVar5 * fVar8 + fVar7 * fVar23;
      fVar27 = *(float *)(lVar15 + 0x48 + lVar22);
      fVar28 = *(float *)(lVar15 + 0x3c + lVar22);
      local_144 = fVar7 * (float)local_128 +
                  fVar6 * (float)local_1a8 + fVar4 * (float)local_1b8 + fVar5 * (float)local_1c8;
      fVar29 = *(float *)(lVar15 + 0x44 + lVar22);
      local_140 = fVar7 * local_108 + fVar6 * local_178 + fVar5 * local_198 + fVar4 * local_188;
      fVar30 = *(float *)(lVar15 + 0x40 + lVar22);
      local_13c = fVar7 * fVar12 + fVar5 * fVar9 + fVar4 * fVar24 + fVar6 * fVar11;
      local_138 = fVar29 * fVar10 + fVar28 * fVar25 + fVar30 * fVar8 + fVar27 * fVar23;
      local_134 = fVar29 * (float)local_1a8 + (float)local_1b8 * fVar28 + fVar30 * (float)local_1c8
                  + fVar27 * (float)local_128;
      local_130 = fVar29 * local_178 + fVar28 * local_188 + local_198 * fVar30 + fVar27 * local_108;
      local_12c = fVar11 * fVar29 + fVar24 * fVar28 + fVar30 * fVar9 + fVar27 * fVar12;
      fStack_194 = local_198;
      fStack_190 = local_198;
      fStack_18c = local_198;
      fStack_184 = local_188;
      fStack_180 = local_188;
      fStack_17c = local_188;
      fStack_174 = local_178;
      fStack_170 = local_178;
      fStack_16c = local_178;
      fStack_104 = local_108;
      fStack_100 = local_108;
      fStack_fc = local_108;
      FUN_14005f730(&local_208,&local_168,fVar27 * local_108,fVar27 * fVar23,fVar9,fVar8,fVar11);
      fVar25 = *param_3;
      fVar23 = param_3[1];
      fVar24 = param_3[2];
      local_20c = 0.0;
      fVar29 = fVar25 * local_208 + fVar23 * local_1f8 + fVar24 * local_1e8 + local_1d8;
      local_214 = (float)param_4[1];
      local_218 = *param_4;
      local_210 = (float)param_4[2];
      fVar30 = fVar25 * local_204 + fVar23 * local_1f4 + fVar24 * local_1e4 + local_1d4;
      fVar28 = fVar23 * local_1f0 + fVar25 * local_200 + fVar24 * local_1e0 + local_1d0;
      pfVar17 = (float *)FUN_14005f480(&local_218,0);
      fVar25 = *pfVar17;
      fVar23 = local_208 * fVar25 + local_1f8 * local_214 +
               local_1e8 * local_210 + local_1d8 * local_20c;
      fVar27 = local_200 * fVar25 + local_1f0 * local_214 +
               local_1e0 * local_210 + local_1d0 * local_20c;
      fVar24 = local_204 * fVar25 + local_1f4 * local_214 +
               local_1e4 * local_210 + local_1d4 * local_20c;
      fVar25 = fVar24 * fVar24 + fVar23 * fVar23 + fVar27 * fVar27;
      if (fVar25 < 0.0) {
        fVar25 = (float)FUN_14041ad10(fVar25);
      }
      else {
        fVar25 = SQRT(fVar25);
      }
      fVar1 = *(float *)(lVar15 + 8 + lVar22);
      fVar2 = *(float *)(lVar15 + 4 + lVar22);
      fVar25 = DAT_140492704 / fVar25;
      fVar26 = DAT_140492704 / (fVar25 * fVar23);
      local_220[0] = DAT_140492704 / (fVar25 * fVar24);
      fVar23 = (*(float *)(lVar15 + lVar22) - fVar29) * fVar26;
      local_228 = DAT_140492704 / (fVar25 * fVar27);
      local_224 = (fVar2 - fVar30) * local_220[0];
      fVar26 = ((float)((uint)*(float *)(lVar15 + lVar22) ^ DAT_140492ff0) - fVar29) * fVar26;
      local_220[0] = ((float)((uint)fVar2 ^ DAT_140492ff0) - fVar30) * local_220[0];
      fVar25 = fVar23;
      if (fVar23 <= fVar26) {
        fVar25 = fVar26;
      }
      local_22c = (fVar1 - fVar28) * local_228;
      if (fVar26 <= fVar23) {
        fVar23 = fVar26;
      }
      local_228 = ((float)((uint)fVar1 ^ DAT_140492ff0) - fVar28) * local_228;
      pfVar17 = &local_22c;
      if (local_22c <= local_228) {
        pfVar17 = &local_228;
      }
      pfVar18 = &local_224;
      if (local_224 <= local_220[0]) {
        pfVar18 = local_220;
      }
      fVar24 = *pfVar18;
      if (fVar25 <= *pfVar18) {
        fVar24 = fVar25;
      }
      pfVar18 = &local_22c;
      if (local_228 <= local_22c) {
        pfVar18 = &local_228;
      }
      fVar25 = *pfVar17;
      if (fVar24 <= *pfVar17) {
        fVar25 = fVar24;
      }
      pfVar17 = &local_224;
      if (local_220[0] <= local_224) {
        pfVar17 = local_220;
      }
      fVar24 = *pfVar17;
      if (*pfVar17 <= fVar23) {
        fVar24 = fVar23;
      }
      fVar23 = *pfVar18;
      if (*pfVar18 <= fVar24) {
        fVar23 = fVar24;
      }
    } while (fVar25 < fVar23);
    if (*(longlong *)(lVar16 * 0xf0 + *(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x38) + 0x10)
        == 0) {
      uVar19 = FUN_140053e40(&local_108,iVar13);
      FUN_14000de40(param_6,uVar19);
      FUN_140017240(&local_108);
      uVar19 = 1;
    }
    else {
      uVar19 = FUN_140016fc0(&local_128);
      FUN_14000de40(param_6,uVar19);
      FUN_140017240(&local_128);
      uVar19 = 1;
    }
  }
  return uVar19;
}

