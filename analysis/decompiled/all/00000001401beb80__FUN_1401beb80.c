// Function: FUN_1401beb80
// Addr: 1401beb80
// Size: 882 bytes


void FUN_1401beb80(undefined8 param_1,char param_2)

{
  double dVar1;
  longlong lVar2;
  double *pdVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  double local_58;
  uint local_50;
  double local_48;
  double dStack_40;
  double local_38;
  
  fVar8 = DAT_140492704;
  fVar7 = DAT_140492704;
  if (param_2 != '\0') {
    fVar7 = DAT_14049288c;
  }
  lVar2 = FUN_140087490(param_1,"timescale","");
  if (lVar2 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar5 = local_50 & 0xfffffeff;
    pdVar3 = (double *)FUN_140086de0(param_1,"timescale","");
    local_50 = *(uint *)(pdVar3 + 1);
    *(uint *)(pdVar3 + 1) = uVar5;
    local_58 = *pdVar3;
    *pdVar3 = (double)fVar7;
    dVar1 = pdVar3[2];
    pdVar3[2] = 0.0;
    dStack_40 = pdVar3[3];
    pdVar3[3] = 0.0;
    local_38 = pdVar3[4];
    pdVar3[4] = 0.0;
    local_48 = dVar1;
    FUN_140086d30(&local_58);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  puVar6 = &DAT_14048f4ec;
  if (param_2 != '\0') {
    puVar6 = &DAT_14048f488;
  }
  FUN_1401d7e80(param_1,&DAT_14048f9a0,puVar6);
  fVar7 = DAT_1404926c0;
  if (param_2 != '\0') {
    fVar7 = DAT_140492620;
  }
  lVar2 = FUN_140087490(param_1,"scale","");
  if (lVar2 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar5 = local_50 & 0xfffffeff;
    pdVar3 = (double *)FUN_140086de0(param_1,"scale","");
    local_50 = *(uint *)(pdVar3 + 1);
    *(uint *)(pdVar3 + 1) = uVar5;
    local_58 = *pdVar3;
    *pdVar3 = (double)fVar7;
    dVar1 = pdVar3[2];
    pdVar3[2] = 0.0;
    dStack_40 = pdVar3[3];
    pdVar3[3] = 0.0;
    local_38 = pdVar3[4];
    pdVar3[4] = 0.0;
    local_48 = dVar1;
    FUN_140086d30(&local_58);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  if (param_2 != '\0') {
    fVar8 = DAT_140492930;
  }
  lVar2 = FUN_140087490(param_1,"speedmin","");
  if (lVar2 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar5 = local_50 & 0xfffffeff;
    pdVar3 = (double *)FUN_140086de0(param_1,"speedmin","");
    local_50 = *(uint *)(pdVar3 + 1);
    *(uint *)(pdVar3 + 1) = uVar5;
    local_58 = *pdVar3;
    *pdVar3 = (double)fVar8;
    dVar1 = pdVar3[2];
    pdVar3[2] = 0.0;
    dStack_40 = pdVar3[3];
    pdVar3[3] = 0.0;
    local_38 = pdVar3[4];
    pdVar3[4] = 0.0;
    local_48 = dVar1;
    FUN_140086d30(&local_58);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  fVar8 = DAT_140492858;
  if (param_2 != '\0') {
    fVar8 = DAT_140492944;
  }
  lVar2 = FUN_140087490(param_1,"speedmax","");
  if (lVar2 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    local_50 = local_50 & 0xfffffeff;
    local_48 = 0.0;
    dStack_40 = 0.0;
    local_58 = (double)fVar8;
    local_38 = 0.0;
    uVar4 = FUN_140086de0(param_1,"speedmax","");
    FUN_140085610(uVar4,&local_58);
    FUN_140085440(&local_58);
  }
  FUN_1401d7d30(param_1,"phasemin",0);
  FUN_1401d7d30(param_1,"phasemax",0);
  return;
}

