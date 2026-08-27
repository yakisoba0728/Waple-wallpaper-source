// Function: FUN_1401dfc00
// Addr: 1401dfc00
// Size: 557 bytes


void FUN_1401dfc00(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_a8 [160];
  
  lVar2 = param_1[0x25];
  fVar10 = *(float *)(param_1 + 0x26);
  uVar3 = *(undefined8 *)*param_4;
  local_d0 = *(float *)((undefined8 *)*param_4 + 1);
  if ((*(int *)(param_3 + 4) < 0) ||
     (puVar5 = (undefined4 *)param_4[1], puVar5 == (undefined4 *)0x0)) {
    local_b8 = 0;
    local_b0 = 0;
    local_b4 = DAT_140492704;
  }
  else {
    local_b8 = *puVar5;
    local_b0 = puVar5[2];
    local_b4 = puVar5[1];
  }
  fVar7 = (float)uVar3 - (float)lVar2;
  local_d8._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  local_c8._4_4_ = (float)((ulonglong)lVar2 >> 0x20);
  fVar1 = local_c8._4_4_;
  fVar11 = local_d8._4_4_ - local_c8._4_4_;
  fVar9 = local_d0 - fVar10;
  local_d8 = uVar3;
  local_c8 = lVar2;
  local_c0 = fVar10;
  iVar4 = (**(code **)(*param_1 + 0x60))(param_1);
  if (iVar4 != 8) {
    local_d0 = fVar10 - fVar9;
    local_d8 = CONCAT44(fVar1 - fVar11,(float)lVar2 - fVar7);
  }
  if (DAT_1404925e0 < fVar7 * fVar7 + fVar11 * fVar11 + fVar9 * fVar9) {
    puVar5 = (undefined4 *)FUN_14019d920(local_a8,&local_c8,&local_d8,&local_b8);
    fVar10 = (float)puVar5[9];
    fVar1 = (float)puVar5[10];
    uVar6 = FUN_14041c460(puVar5[4],*puVar5);
    fVar7 = (float)FUN_14041a9c0();
    fVar9 = (float)FUN_14041a2e0(uVar6);
    uVar8 = puVar5[8] ^ DAT_140492ff0;
    fVar10 = fVar1 * fVar1 + fVar10 * fVar10;
    local_b0 = uVar6;
    if (fVar10 < 0.0) {
      fVar10 = (float)FUN_14041ad10(fVar10);
    }
    else {
      fVar10 = SQRT(fVar10);
    }
    local_b4 = FUN_14041c460(uVar8,fVar10);
    local_b8 = FUN_14041c460(fVar7 * (float)puVar5[2] - fVar9 * (float)puVar5[6],
                             fVar9 * (float)puVar5[5] - fVar7 * (float)puVar5[1]);
    FUN_1401dd630(param_1,&local_b8);
  }
  return;
}

