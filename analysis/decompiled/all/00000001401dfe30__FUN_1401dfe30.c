// Function: FUN_1401dfe30
// Addr: 1401dfe30
// Size: 625 bytes


void FUN_1401dfe30(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined1 local_a8 [160];
  
  lVar1 = param_1[0x25];
  fVar10 = (float)lVar1;
  fVar12 = *(float *)(param_1 + 0x26);
  uVar2 = *(undefined8 *)*param_4;
  if ((*(int *)(param_3 + 4) < 0) || (pfVar3 = (float *)param_4[1], pfVar3 == (float *)0x0)) {
    local_b8 = 0.0;
    local_b0 = 0.0;
    local_b4 = DAT_140492704;
  }
  else {
    local_b8 = *pfVar3;
    local_b0 = pfVar3[2];
    local_b4 = pfVar3[1];
  }
  local_d8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  fVar8 = (float)uVar2 - fVar10;
  local_c8._4_4_ = (float)((ulonglong)lVar1 >> 0x20);
  fVar14 = local_c8._4_4_;
  fVar11 = *(float *)((undefined8 *)*param_4 + 1) - fVar12;
  fVar7 = local_b8 * fVar8 + local_b4 * (local_d8._4_4_ - local_c8._4_4_) + local_b0 * fVar11;
  fVar8 = fVar8 - local_b8 * fVar7;
  fVar13 = (local_d8._4_4_ - local_c8._4_4_) - local_b4 * fVar7;
  fVar11 = fVar11 - local_b0 * fVar7;
  local_d8 = uVar2;
  local_c8 = lVar1;
  local_c0 = fVar12;
  iVar4 = (**(code **)(*param_1 + 0x60))(param_1);
  if (iVar4 == 8) {
    fVar10 = fVar10 + fVar8;
    fVar14 = fVar14 + fVar13;
    local_d0 = fVar12 + fVar11;
  }
  else {
    fVar10 = fVar10 - fVar8;
    fVar14 = fVar14 - fVar13;
    local_d0 = fVar12 - fVar11;
  }
  local_d8 = CONCAT44(fVar14,fVar10);
  if (DAT_1404925e0 < fVar8 * fVar8 + fVar13 * fVar13 + fVar11 * fVar11) {
    puVar5 = (undefined4 *)FUN_14019d920(local_a8,&local_c8,&local_d8,&local_b8);
    fVar12 = (float)puVar5[9];
    fVar10 = (float)puVar5[10];
    uVar6 = FUN_14041c460(puVar5[4],*puVar5);
    fVar14 = (float)FUN_14041a9c0();
    fVar7 = (float)FUN_14041a2e0(uVar6);
    uVar9 = puVar5[8] ^ DAT_140492ff0;
    fVar12 = fVar10 * fVar10 + fVar12 * fVar12;
    local_b0 = (float)uVar6;
    if (fVar12 < 0.0) {
      fVar12 = (float)FUN_14041ad10(fVar12);
    }
    else {
      fVar12 = SQRT(fVar12);
    }
    local_b4 = (float)FUN_14041c460(uVar9,fVar12);
    local_b8 = (float)FUN_14041c460(fVar14 * (float)puVar5[2] - fVar7 * (float)puVar5[6],
                                    fVar7 * (float)puVar5[5] - fVar14 * (float)puVar5[1]);
    FUN_1401dd630(param_1,&local_b8);
  }
  return;
}

