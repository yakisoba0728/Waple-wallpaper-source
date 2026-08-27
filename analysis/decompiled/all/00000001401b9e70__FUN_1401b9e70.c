// Function: FUN_1401b9e70
// Addr: 1401b9e70
// Size: 657 bytes


void FUN_1401b9e70(undefined8 param_1,char param_2)

{
  double dVar1;
  longlong lVar2;
  double *pdVar3;
  uint uVar4;
  float fVar5;
  double local_48;
  uint local_40;
  double local_38;
  double local_30;
  double local_28;
  
  fVar5 = DAT_140492608;
  if (param_2 != '\0') {
    fVar5 = DAT_140492858;
  }
  lVar2 = FUN_140087490(param_1,&DAT_140488af0,&DAT_140488af3);
  if (lVar2 == 0) {
    local_40 = CONCAT31(local_40._1_3_,3);
    uVar4 = local_40 & 0xfffffeff;
    pdVar3 = (double *)FUN_140086de0(param_1,&DAT_140488af0,&DAT_140488af3);
    local_40 = *(uint *)(pdVar3 + 1);
    *(uint *)(pdVar3 + 1) = uVar4;
    local_48 = *pdVar3;
    *pdVar3 = (double)fVar5;
    dVar1 = pdVar3[2];
    pdVar3[2] = 0.0;
    local_30 = pdVar3[3];
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
  fVar5 = DAT_140492704;
  if (param_2 != '\0') {
    fVar5 = DAT_1404928cc;
  }
  lVar2 = FUN_140087490(param_1,&DAT_140488af4,&DAT_140488af7);
  if (lVar2 == 0) {
    local_40 = CONCAT31(local_40._1_3_,3);
    uVar4 = local_40 & 0xfffffeff;
    pdVar3 = (double *)FUN_140086de0(param_1,&DAT_140488af4,&DAT_140488af7);
    local_40 = *(uint *)(pdVar3 + 1);
    *(uint *)(pdVar3 + 1) = uVar4;
    local_48 = *pdVar3;
    *pdVar3 = (double)fVar5;
    dVar1 = pdVar3[2];
    pdVar3[2] = 0.0;
    local_30 = pdVar3[3];
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
  lVar2 = FUN_140087490(param_1,"exponent","");
  if (lVar2 == 0) {
    local_40 = CONCAT31(local_40._1_3_,3);
    uVar4 = local_40 & 0xfffffeff;
    pdVar3 = (double *)FUN_140086de0(param_1,"exponent","");
    local_40 = *(uint *)(pdVar3 + 1);
    *(uint *)(pdVar3 + 1) = uVar4;
    local_48 = *pdVar3;
    *pdVar3 = 1.0;
    dVar1 = pdVar3[2];
    pdVar3[2] = 0.0;
    local_30 = pdVar3[3];
    local_28 = pdVar3[4];
    pdVar3[3] = 0.0;
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
  return;
}

