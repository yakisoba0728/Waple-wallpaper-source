// Function: FUN_1401be2a0
// Addr: 1401be2a0
// Size: 751 bytes


void FUN_1401be2a0(undefined8 param_1,char param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  longlong *plVar5;
  uint uVar6;
  float fVar7;
  double local_48;
  uint local_40;
  double local_38;
  double local_30;
  double local_28;
  
  fVar7 = DAT_140492704;
  if (param_2 != '\0') {
    fVar7 = DAT_140492904;
  }
  lVar3 = FUN_140087490(param_1,"distance","");
  if (lVar3 == 0) {
    local_40 = CONCAT31(local_40._1_3_,3);
    uVar6 = local_40 & 0xfffffeff;
    pdVar4 = (double *)FUN_140086de0(param_1,"distance","");
    local_40 = *(uint *)(pdVar4 + 1);
    *(uint *)(pdVar4 + 1) = uVar6;
    local_48 = *pdVar4;
    *pdVar4 = (double)fVar7;
    dVar1 = pdVar4[2];
    pdVar4[2] = 0.0;
    local_30 = pdVar4[3];
    pdVar4[3] = 0.0;
    local_28 = pdVar4[4];
    pdVar4[4] = 0.0;
    local_38 = dVar1;
    FUN_140086d30(&local_48);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  lVar3 = FUN_140087490(param_1,"controlpoint","");
  if (lVar3 == 0) {
    local_40 = CONCAT31(local_40._1_3_,1);
    plVar5 = (longlong *)FUN_140086de0(param_1,"controlpoint","");
    uVar6 = *(uint *)(plVar5 + 1);
    *(uint *)(plVar5 + 1) = local_40 & 0xfffffeff;
    lVar3 = *plVar5;
    *plVar5 = 0;
    lVar2 = plVar5[2];
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[4] = 0;
    switch(uVar6 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar6 >> 8 & 1) != 0) {
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
    if (lVar2 != 0) {
      FUN_140017240(lVar2 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
  }
  lVar3 = FUN_140087490(param_1,"variablestrength","");
  if (lVar3 == 0) {
    local_40 = CONCAT31(local_40._1_3_,1);
    plVar5 = (longlong *)FUN_140086de0(param_1,"variablestrength","");
    uVar6 = *(uint *)(plVar5 + 1);
    *(uint *)(plVar5 + 1) = local_40 & 0xfffffeff;
    lVar3 = *plVar5;
    *plVar5 = 0;
    lVar2 = plVar5[2];
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[4] = 0;
    switch(uVar6 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar6 >> 8 & 1) != 0) {
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
    if (lVar2 != 0) {
      FUN_140017240(lVar2 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
  }
  return;
}

