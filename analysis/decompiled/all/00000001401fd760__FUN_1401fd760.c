// Function: FUN_1401fd760
// Addr: 1401fd760
// Size: 1350 bytes


ulonglong FUN_1401fd760(longlong param_1)

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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 *puVar24;
  longlong lVar25;
  uint uVar26;
  undefined1 local_208 [64];
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
  
  lVar21 = *(longlong *)(param_1 + 0x4b8);
  puVar24 = (undefined1 *)register0x00000020;
  if ((((lVar21 != 0) && (*(longlong *)(lVar21 + 8) != 0)) &&
      (puVar24 = *(undefined1 **)(lVar21 + 0x1b0), *(undefined1 **)(lVar21 + 0x1a8) != puVar24)) &&
     (uVar26 = (int)(*(longlong *)(lVar21 + 0x1e0) - *(longlong *)(lVar21 + 0x1d8) >> 2) - 1,
     -1 < (int)uVar26)) {
    lVar21 = *(longlong *)(param_1 + 0x4b8);
    lVar22 = *(longlong *)(lVar21 + 0x1a8);
    lVar23 = (longlong)*(int *)(*(longlong *)(lVar21 + 0x1d8) + (ulonglong)uVar26 * 4);
    lVar21 = *(longlong *)(lVar21 + 0x340);
    lVar25 = lVar23 * 0x40;
    lVar23 = lVar23 * 0x4c;
    fVar1 = *(float *)(lVar21 + lVar25);
    fVar2 = *(float *)(lVar21 + 0x30 + lVar25);
    local_1b8 = *(undefined8 *)(lVar21 + 4 + lVar25);
    local_188 = (float)((ulonglong)local_1b8 >> 0x20);
    uStack_1b0 = 0;
    fVar3 = *(float *)(lVar21 + 0xc + lVar25);
    fVar4 = *(float *)(lVar22 + 0xc + lVar23);
    fVar5 = *(float *)(lVar22 + 0x10 + lVar23);
    fVar6 = *(float *)(lVar22 + 0x14 + lVar23);
    fVar7 = *(float *)(lVar22 + 0x18 + lVar23);
    fVar8 = *(float *)(lVar22 + 0x1c + lVar23);
    fVar9 = *(float *)(lVar22 + 0x20 + lVar23);
    fVar10 = *(float *)(lVar22 + 0x24 + lVar23);
    fVar11 = *(float *)(lVar22 + 0x28 + lVar23);
    fVar12 = *(float *)(lVar22 + 0x2c + lVar23);
    fVar13 = *(float *)(lVar22 + 0x30 + lVar23);
    fVar14 = *(float *)(lVar22 + 0x34 + lVar23);
    fVar15 = *(float *)(lVar22 + 0x38 + lVar23);
    fVar16 = *(float *)(lVar21 + 0x10 + lVar25);
    local_1c8 = *(undefined8 *)(lVar21 + 0x14 + lVar25);
    local_198 = (float)((ulonglong)local_1c8 >> 0x20);
    uStack_1c0 = 0;
    fVar17 = *(float *)(lVar21 + 0x1c + lVar25);
    fVar18 = *(float *)(lVar21 + 0x20 + lVar25);
    local_1a8 = *(undefined8 *)(lVar21 + 0x24 + lVar25);
    local_178 = (float)((ulonglong)local_1a8 >> 0x20);
    uStack_1a0 = 0;
    fVar19 = *(float *)(lVar21 + 0x2c + lVar25);
    local_128 = *(undefined8 *)(lVar21 + 0x34 + lVar25);
    local_108 = (float)((ulonglong)local_128 >> 0x20);
    uStack_120 = 0;
    fVar20 = *(float *)(lVar21 + 0x3c + lVar25);
    local_168 = fVar6 * fVar18 + fVar4 * fVar1 + fVar5 * fVar16 + fVar2 * fVar7;
    local_164 = (float)local_128 * fVar7 +
                fVar6 * (float)local_1a8 + (float)local_1b8 * fVar4 + fVar5 * (float)local_1c8;
    local_160 = local_108 * fVar7 + fVar6 * local_178 + fVar4 * local_188 + fVar5 * local_198;
    local_15c = fVar20 * fVar7 + fVar19 * fVar6 + fVar4 * fVar3 + fVar5 * fVar17;
    local_158 = fVar9 * fVar16 + fVar1 * fVar8 + fVar10 * fVar18 + fVar11 * fVar2;
    local_154 = CONCAT44(fVar10 * local_178 + local_188 * fVar8 + fVar9 * local_198 +
                         fVar11 * local_108,
                         fVar10 * (float)local_1a8 +
                         (float)local_1b8 * fVar8 + fVar9 * (float)local_1c8 +
                         fVar11 * (float)local_128);
    local_14c = fVar10 * fVar19 + fVar3 * fVar8 + fVar17 * fVar9 + fVar11 * fVar20;
    local_148 = fVar14 * fVar18 + fVar12 * fVar1 + fVar13 * fVar16 + fVar15 * fVar2;
    fVar4 = *(float *)(lVar22 + 0x48 + lVar23);
    fVar5 = *(float *)(lVar22 + 0x3c + lVar23);
    local_144 = fVar15 * (float)local_128 +
                fVar14 * (float)local_1a8 + fVar12 * (float)local_1b8 + fVar13 * (float)local_1c8;
    fVar6 = *(float *)(lVar22 + 0x44 + lVar23);
    local_140 = fVar15 * local_108 + fVar14 * local_178 + fVar13 * local_198 + fVar12 * local_188;
    fVar7 = *(float *)(lVar22 + 0x40 + lVar23);
    local_13c = fVar15 * fVar20 + fVar13 * fVar17 + fVar12 * fVar3 + fVar14 * fVar19;
    local_138 = fVar6 * fVar18 + fVar5 * fVar1 + fVar7 * fVar16 + fVar4 * fVar2;
    local_134 = fVar6 * (float)local_1a8 + (float)local_1b8 * fVar5 + fVar7 * (float)local_1c8 +
                fVar4 * (float)local_128;
    local_130 = fVar6 * local_178 + fVar5 * local_188 + local_198 * fVar7 + fVar4 * local_108;
    local_12c = fVar19 * fVar6 + fVar3 * fVar5 + fVar7 * fVar17 + fVar4 * fVar20;
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
                    /* WARNING: Subroutine does not return */
    FUN_14005f800(local_208,&local_168,fVar4 * local_108,fVar4 * fVar2,fVar17,fVar16,fVar19);
  }
  return (ulonglong)puVar24 & 0xffffffffffffff00;
}

