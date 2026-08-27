// Function: FUN_1401be810
// Addr: 1401be810
// Size: 845 bytes


void FUN_1401be810(undefined8 param_1,char param_2)

{
  longlong lVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  double *pdVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  double local_58;
  uint local_50;
  double local_48;
  double dStack_40;
  double local_38;
  
  lVar3 = FUN_140087490(param_1,"controlpoint","");
  if (lVar3 == 0) {
    local_50 = CONCAT31(local_50._1_3_,1);
    plVar4 = (longlong *)FUN_140086de0(param_1,"controlpoint","");
    uVar7 = *(uint *)(plVar4 + 1);
    *(uint *)(plVar4 + 1) = local_50 & 0xfffffeff;
    lVar3 = *plVar4;
    *plVar4 = 0;
    lVar1 = plVar4[2];
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    switch(uVar7 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar7 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(lVar3);
      }
      break;
    case 6:
    case 7:
      if (lVar3 != 0) {
        FUN_140088e40(lVar3);
        thunk_FUN_14028af80(lVar3,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    if (lVar1 != 0) {
      FUN_140017240(lVar1 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
  }
  fVar8 = DAT_1404926c0;
  if (param_2 != '\0') {
    fVar8 = DAT_1404928f8;
  }
  lVar3 = FUN_140087490(param_1,"distanceinner","");
  if (lVar3 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar7 = local_50 & 0xfffffeff;
    pdVar5 = (double *)FUN_140086de0(param_1,"distanceinner","");
    local_50 = *(uint *)(pdVar5 + 1);
    *(uint *)(pdVar5 + 1) = uVar7;
    local_58 = *pdVar5;
    *pdVar5 = (double)fVar8;
    dVar2 = pdVar5[2];
    pdVar5[2] = 0.0;
    dStack_40 = pdVar5[3];
    pdVar5[3] = 0.0;
    local_38 = pdVar5[4];
    pdVar5[4] = 0.0;
    local_48 = dVar2;
    FUN_140086d30(&local_58);
    if (dVar2 != 0.0) {
      FUN_140017240((longlong)dVar2 + 0x40);
      FUN_140017240((longlong)dVar2 + 0x20);
      FUN_140017240(dVar2);
      thunk_FUN_14028af80(dVar2,0x60);
    }
  }
  fVar8 = DAT_140492704;
  if (param_2 != '\0') {
    fVar8 = DAT_140492918;
  }
  lVar3 = FUN_140087490(param_1,"distanceouter","");
  if (lVar3 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar7 = local_50 & 0xfffffeff;
    pdVar5 = (double *)FUN_140086de0(param_1,"distanceouter","");
    local_50 = *(uint *)(pdVar5 + 1);
    *(uint *)(pdVar5 + 1) = uVar7;
    local_58 = *pdVar5;
    *pdVar5 = (double)fVar8;
    dVar2 = pdVar5[2];
    pdVar5[2] = 0.0;
    dStack_40 = pdVar5[3];
    pdVar5[3] = 0.0;
    local_38 = pdVar5[4];
    pdVar5[4] = 0.0;
    local_48 = dVar2;
    FUN_140086d30(&local_58);
    if (dVar2 != 0.0) {
      FUN_140017240((longlong)dVar2 + 0x40);
      FUN_140017240((longlong)dVar2 + 0x20);
      FUN_140017240(dVar2);
      thunk_FUN_14028af80(dVar2,0x60);
    }
  }
  lVar3 = FUN_140087490(param_1,"reductioninner","");
  if (lVar3 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    local_50 = local_50 & 0xfffffeff;
    local_48 = 0.0;
    dStack_40 = 0.0;
    local_58 = DAT_140492840;
    local_38 = 0.0;
    uVar6 = FUN_140086de0(param_1,"reductioninner","");
    FUN_140085610(uVar6,&local_58);
    FUN_140085440(&local_58);
  }
  FUN_1401d7d30(param_1,"reductionouter",0);
  return;
}

