// Function: FUN_1401dff00
// Addr: 1401dff00
// Size: 145 bytes


void FUN_1401dff00(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_d8;
  float fStack_d0;
  undefined8 local_c8;
  float local_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined1 auStack_a8 [160];
  
  lVar1 = param_1[0x25];
  fVar9 = (float)lVar1;
  fVar3 = *(float *)(param_1 + 0x26);
  uVar2 = *(undefined8 *)*param_4;
  if ((*(int *)(param_3 + 4) < 0) || (pfVar4 = (float *)param_4[1], pfVar4 == (float *)0x0)) {
    fStack_b8 = 0.0;
    fStack_b0 = 0.0;
    fStack_b4 = DAT_1404927d4;
  }
  else {
    fStack_b8 = *pfVar4;
    fStack_b0 = pfVar4[2];
    fStack_b4 = pfVar4[1];
  }
  local_d8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  fVar8 = (float)uVar2 - fVar9;
  local_c8._4_4_ = (float)((ulonglong)lVar1 >> 0x20);
  fVar12 = local_c8._4_4_;
  fVar10 = *(float *)((undefined8 *)*param_4 + 1) - fVar3;
  fVar7 = fStack_b8 * fVar8 + fStack_b4 * (local_d8._4_4_ - local_c8._4_4_) + fStack_b0 * fVar10;
  fVar8 = fVar8 - fStack_b8 * fVar7;
  fVar11 = (local_d8._4_4_ - local_c8._4_4_) - fStack_b4 * fVar7;
  fVar10 = fVar10 - fStack_b0 * fVar7;
  local_d8 = uVar2;
  local_c8 = lVar1;
  local_c0 = fVar3;
  iVar5 = (**(code **)(*param_1 + 0x60))(param_1);
  if (iVar5 == 8) {
    fVar9 = fVar9 + fVar8;
    fVar12 = fVar12 + fVar11;
    fStack_d0 = fVar3 + fVar10;
  }
  else {
    fVar9 = fVar9 - fVar8;
    fVar12 = fVar12 - fVar11;
    fStack_d0 = fVar3 - fVar10;
  }
  local_d8 = CONCAT44(fVar12,fVar9);
  if (DAT_1404926b0 < fVar8 * fVar8 + fVar11 * fVar11 + fVar10 * fVar10) {
    puVar6 = (undefined4 *)func_0x00014019d9f0(auStack_a8,&local_c8,&local_d8,&fStack_b8);
    FUN_14041c530(puVar6[4],*puVar6);
                    /* WARNING: Subroutine does not return */
    FUN_14041aa90();
  }
  return;
}

