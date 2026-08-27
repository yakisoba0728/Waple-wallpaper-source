// Function: FUN_14026df30
// Addr: 14026df30
// Size: 1034 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14026df30(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,int param_5
                  ,float *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_178;
  undefined4 local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_15c;
  float local_158;
  float local_154;
  float local_14c;
  float local_148;
  float local_144;
  float local_13c;
  float local_138;
  float local_134;
  undefined8 local_128;
  float local_120;
  float local_118;
  float local_114;
  float local_108;
  float local_104;
  float local_f8;
  float local_f4;
  float local_e8;
  float local_e4;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  lVar3 = *param_1;
  lVar4 = (longlong)*(int *)(*(longlong *)(param_4 + 0x10) + (longlong)param_5 * 4);
  lVar5 = lVar4 * 0x40;
  uVar1 = *(undefined8 *)(lVar5 + 0x30 + lVar3);
  lVar4 = (ulonglong)*(uint *)(lVar4 * 0xf0 + 0x60 + *param_3) * 0x40;
  uVar2 = *(undefined8 *)(lVar4 + 0x30 + lVar3);
  fVar10 = *(float *)(lVar5 + 0x38 + lVar3) - *(float *)(lVar4 + 0x38 + lVar3);
  fVar8 = (float)uVar1 - (float)uVar2;
  fVar9 = (float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20);
  fVar6 = fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10;
  if (fVar6 < 0.0) {
    fVar6 = (float)FUN_14041ad10();
  }
  else {
    fVar6 = SQRT(fVar6);
  }
  fVar6 = DAT_140492704 / fVar6;
  local_178 = 0x3f800000;
  local_170 = 0;
  local_120 = fVar10 * fVar6;
  local_128 = CONCAT44(fVar9 * fVar6,fVar8 * fVar6);
  FUN_1402167c0(local_d8,&local_178,&local_128);
  FUN_140215200(&local_118,local_d8);
  fVar6 = *param_6;
  fVar8 = param_6[1];
  fVar9 = fVar6 * fVar6 + fVar8 * fVar8 + 0.0;
  if (fVar9 < 0.0) {
    fVar9 = (float)FUN_14041ad10();
  }
  else {
    fVar9 = SQRT(fVar9);
  }
  fVar13 = 0.0 / fVar9;
  fVar6 = fVar6 / fVar9;
  fVar8 = fVar8 / fVar9;
  FUN_14005f730(&local_16c,&local_118);
  fVar11 = local_16c * fVar6 + local_15c * fVar8 + local_14c * fVar13 + local_13c;
  fVar12 = local_168 * fVar6 + local_158 * fVar8 + local_148 * fVar13 + local_138;
  fVar10 = (float)FUN_14041c460();
  if (*(float *)(param_2 + 100) <= fVar10) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (float)((uint)(fVar10 - *(float *)(param_2 + 100)) ^ DAT_140492ff0);
  }
  if ((*(float *)(param_2 + 0x68) < fVar10) &&
     ((fVar10 = *(float *)(param_2 + 0x68) - fVar10, fVar7 == 0.0 ||
      ((float)((uint)fVar10 & _DAT_140492fc0) < (float)((uint)fVar7 & _DAT_140492fc0))))) {
    fVar7 = fVar10;
  }
  if (fVar7 != 0.0) {
    local_178 = 0;
    local_170 = 0x3f800000;
    local_c8 = _DAT_140492a60;
    uStack_c0 = _UNK_140492a68;
    local_a8 = _DAT_140492b40;
    uStack_a0 = _UNK_140492b48;
    fVar6 = local_164 * fVar6 + local_154 * fVar8 + local_144 * fVar13 + local_134;
    local_b8 = _DAT_140492a90;
    uStack_b0 = _UNK_140492a98;
    local_98 = _DAT_140492de0;
    uStack_90 = _UNK_140492de8;
    FUN_1401e2500(&local_16c,&local_c8,fVar7,&local_178);
    fVar10 = local_154 * fVar12 + local_164 * fVar11 + local_144 * fVar6;
    fVar8 = local_158 * fVar12 + local_168 * fVar11 + local_148 * fVar6;
    fVar6 = local_15c * fVar12 + local_16c * fVar11 + local_14c * fVar6;
    *param_6 = (local_118 * fVar6 + local_108 * fVar8 + local_f8 * fVar10 + local_e8) * fVar9;
    param_6[1] = (local_114 * fVar6 + local_104 * fVar8 + local_f4 * fVar10 + local_e4) * fVar9;
  }
  return;
}

