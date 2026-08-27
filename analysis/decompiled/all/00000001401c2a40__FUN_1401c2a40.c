// Function: FUN_1401c2a40
// Addr: 1401c2a40
// Size: 1038 bytes


void FUN_1401c2a40(float *param_1,undefined8 param_2,undefined1 *param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  undefined8 local_78;
  uint local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar1 = FUN_140087490(param_2,"blendinstart","");
  if (lVar1 == 0) {
    local_70 = CONCAT31(local_70._1_3_,3);
    uVar4 = local_70 & 0xfffffeff;
    puVar2 = (undefined8 *)FUN_140086de0(param_2,"blendinstart","");
    local_70 = *(uint *)(puVar2 + 1);
    *(uint *)(puVar2 + 1) = uVar4;
    local_78 = *puVar2;
    *puVar2 = 0;
    lVar1 = puVar2[2];
    puVar2[2] = 0;
    local_58 = puVar2[4];
    uStack_60 = puVar2[3];
    puVar2[3] = 0;
    puVar2[4] = 0;
    local_68 = lVar1;
    FUN_140086d30(&local_78);
    if (lVar1 != 0) {
      FUN_140017240(lVar1 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
  }
  lVar1 = FUN_140087490(param_2,"blendinend","");
  if (lVar1 == 0) {
    local_70 = CONCAT31(local_70._1_3_,3);
    uVar4 = local_70 & 0xfffffeff;
    puVar2 = (undefined8 *)FUN_140086de0(param_2,"blendinend","");
    local_70 = *(uint *)(puVar2 + 1);
    *(uint *)(puVar2 + 1) = uVar4;
    local_78 = *puVar2;
    *puVar2 = 0;
    lVar1 = puVar2[2];
    puVar2[2] = 0;
    local_58 = puVar2[4];
    uStack_60 = puVar2[3];
    puVar2[3] = 0;
    puVar2[4] = 0;
    local_68 = lVar1;
    FUN_140086d30(&local_78);
    if (lVar1 != 0) {
      FUN_140017240(lVar1 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
  }
  lVar1 = FUN_140087490(param_2,"blendoutstart","");
  if (lVar1 == 0) {
    local_70 = CONCAT31(local_70._1_3_,3);
    uVar4 = local_70 & 0xfffffeff;
    puVar2 = (undefined8 *)FUN_140086de0(param_2,"blendoutstart","");
    local_70 = *(uint *)(puVar2 + 1);
    *(uint *)(puVar2 + 1) = uVar4;
    local_78 = *puVar2;
    *puVar2 = 0x3ff0000000000000;
    lVar1 = puVar2[2];
    puVar2[2] = 0;
    uStack_60 = puVar2[3];
    local_58 = puVar2[4];
    puVar2[3] = 0;
    puVar2[4] = 0;
    local_68 = lVar1;
    FUN_140086d30(&local_78);
    if (lVar1 != 0) {
      FUN_140017240(lVar1 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
  }
  lVar1 = FUN_140087490(param_2,"blendoutend","");
  if (lVar1 == 0) {
    local_70 = CONCAT31(local_70._1_3_,3);
    local_70 = local_70 & 0xfffffeff;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = DAT_140492778;
    local_58 = 0;
    uVar3 = FUN_140086de0(param_2,"blendoutend","");
    FUN_140085610(uVar3,&local_78);
    FUN_140085440(&local_78);
  }
  uVar3 = FUN_140086de0(param_2,"blendinstart","");
  fVar5 = (float)FUN_140086220(uVar3);
  uVar3 = FUN_140086de0(param_2,"blendinend","");
  fVar6 = (float)FUN_140086220(uVar3);
  uVar3 = FUN_140086de0(param_2,"blendoutstart","");
  fVar7 = (float)FUN_140086220(uVar3);
  uVar3 = FUN_140086de0(param_2,"blendoutend","");
  fVar8 = (float)FUN_140086220(uVar3);
  if (fVar6 - DAT_1404925fc < fVar5) {
    fVar5 = fVar6 - DAT_1404925fc;
  }
  if (fVar8 <= fVar7 + DAT_1404925fc) {
    fVar8 = fVar7 + DAT_1404925fc;
  }
  fVar11 = fVar6 - fVar5;
  *param_1 = fVar5;
  param_1[1] = fVar5;
  param_1[2] = fVar5;
  param_1[3] = fVar5;
  fVar5 = fVar8 - fVar7;
  param_1[8] = fVar8;
  param_1[9] = fVar8;
  param_1[10] = fVar8;
  param_1[0xb] = fVar8;
  fVar8 = DAT_140492620;
  auVar9._4_4_ = fVar11;
  auVar9._0_4_ = fVar11;
  auVar9._8_4_ = fVar11;
  auVar9._12_4_ = fVar11;
  auVar9 = rcpps(auVar9,auVar9);
  *(undefined1 (*) [16])(param_1 + 4) = auVar9;
  auVar10._4_4_ = fVar5;
  auVar10._0_4_ = fVar5;
  auVar10._8_4_ = fVar5;
  auVar10._12_4_ = fVar5;
  auVar9 = rcpps(auVar10,auVar10);
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar9;
  if (((fVar8 < fVar6) || (fVar7 < DAT_1404926f8)) &&
     ((fVar8 < fVar7 - fVar6 || ((fVar8 < fVar11 || (fVar8 < fVar5)))))) {
    *param_3 = param_4;
  }
  return;
}

