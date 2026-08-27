// Function: FUN_1401bf700
// Addr: 1401bf700
// Size: 930 bytes


void FUN_1401bf700(undefined8 param_1,char param_2)

{
  double dVar1;
  longlong lVar2;
  double *pdVar3;
  undefined8 uVar4;
  uint uVar5;
  float fVar6;
  double local_48;
  uint local_40;
  double local_38;
  double dStack_30;
  double local_28;
  
  fVar6 = DAT_14049262c;
  if (param_2 != '\0') {
    fVar6 = DAT_14049288c;
  }
  lVar2 = FUN_140087490(param_1,"separationthreshold","");
  if (lVar2 == 0) {
    local_40 = CONCAT31(local_40._1_3_,3);
    uVar5 = local_40 & 0xfffffeff;
    pdVar3 = (double *)FUN_140086de0(param_1,"separationthreshold","");
    local_40 = *(uint *)(pdVar3 + 1);
    *(uint *)(pdVar3 + 1) = uVar5;
    local_48 = *pdVar3;
    *pdVar3 = (double)fVar6;
    dVar1 = pdVar3[2];
    pdVar3[2] = 0.0;
    dStack_30 = pdVar3[3];
    pdVar3[3] = 0.0;
    local_28 = pdVar3[4];
    pdVar3[4] = 0.0;
    local_38 = dVar1;
    FUN_140086d30(&local_48);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  fVar6 = DAT_14049267c;
  if (param_2 != '\0') {
    fVar6 = DAT_1404928cc;
  }
  lVar2 = FUN_140087490(param_1,"neighborthreshold","");
  if (lVar2 == 0) {
    local_40 = CONCAT31(local_40._1_3_,3);
    uVar5 = local_40 & 0xfffffeff;
    pdVar3 = (double *)FUN_140086de0(param_1,"neighborthreshold","");
    local_40 = *(uint *)(pdVar3 + 1);
    *(uint *)(pdVar3 + 1) = uVar5;
    local_48 = *pdVar3;
    *pdVar3 = (double)fVar6;
    dVar1 = pdVar3[2];
    pdVar3[2] = 0.0;
    dStack_30 = pdVar3[3];
    pdVar3[3] = 0.0;
    local_28 = pdVar3[4];
    pdVar3[4] = 0.0;
    local_38 = dVar1;
    FUN_140086d30(&local_48);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  fVar6 = DAT_140492704;
  if (param_2 != '\0') {
    fVar6 = DAT_140492930;
  }
  lVar2 = FUN_140087490(param_1,"maxspeed","");
  if (lVar2 == 0) {
    local_40 = CONCAT31(local_40._1_3_,3);
    uVar5 = local_40 & 0xfffffeff;
    pdVar3 = (double *)FUN_140086de0(param_1,"maxspeed","");
    local_40 = *(uint *)(pdVar3 + 1);
    *(uint *)(pdVar3 + 1) = uVar5;
    local_48 = *pdVar3;
    *pdVar3 = (double)fVar6;
    dVar1 = pdVar3[2];
    pdVar3[2] = 0.0;
    dStack_30 = pdVar3[3];
    pdVar3[3] = 0.0;
    local_28 = pdVar3[4];
    pdVar3[4] = 0.0;
    local_38 = dVar1;
    FUN_140086d30(&local_48);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  lVar2 = FUN_140087490(param_1,"separationfactor","");
  if (lVar2 == 0) {
    local_40 = CONCAT31(local_40._1_3_,3);
    local_40 = local_40 & 0xfffffeff;
    local_38 = 0.0;
    dStack_30 = 0.0;
    local_48 = DAT_140492818;
    local_28 = 0.0;
    uVar4 = FUN_140086de0(param_1,"separationfactor","");
    FUN_140085610(uVar4,&local_48);
    FUN_140085440(&local_48);
  }
  FUN_1401d7d30(param_1,"alignmentfactor",DAT_140492704);
  FUN_1401d7d30(param_1,"cohesionfactor",DAT_1404927a8);
  lVar2 = FUN_140087490(param_1,"flags","");
  if (lVar2 == 0) {
    local_40 = CONCAT31(local_40._1_3_,1);
    local_40 = local_40 & 0xfffffeff;
    local_28 = 0.0;
    local_48 = 4.94065645841247e-324;
    local_38 = 0.0;
    dStack_30 = 0.0;
    uVar4 = FUN_140086de0(param_1,"flags","");
    FUN_140085610(uVar4,&local_48);
    FUN_140085440(&local_48);
  }
  return;
}

