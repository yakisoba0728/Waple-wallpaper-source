// Function: FUN_1401d7d30
// Addr: 1401d7d30
// Size: 299 bytes


void FUN_1401d7d30(undefined8 param_1,char *param_2,float param_3)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  size_t sVar4;
  longlong lVar5;
  double *pdVar6;
  uint local_40;
  
  sVar4 = strlen(param_2);
  lVar5 = FUN_140087490(param_1,param_2,param_2 + sVar4);
  if (lVar5 == 0) {
    local_40 = CONCAT31(local_40._1_3_,3);
    sVar4 = strlen(param_2);
    pdVar6 = (double *)FUN_140086de0(param_1,param_2,param_2 + sVar4);
    uVar1 = *(uint *)(pdVar6 + 1);
    *(uint *)(pdVar6 + 1) = local_40 & 0xfffffeff;
    dVar2 = *pdVar6;
    *pdVar6 = (double)param_3;
    dVar3 = pdVar6[2];
    pdVar6[2] = 0.0;
    pdVar6[3] = 0.0;
    pdVar6[4] = 0.0;
    switch(uVar1 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar1 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(dVar2);
      }
      break;
    case 6:
    case 7:
      if (dVar2 != 0.0) {
        FUN_140088e40(dVar2);
        thunk_FUN_14028af80(dVar2,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    if (dVar3 != 0.0) {
      FUN_140017240((longlong)dVar3 + 0x40);
      FUN_140017240((longlong)dVar3 + 0x20);
      FUN_140017240(dVar3);
      thunk_FUN_14028af80(dVar3,0x60);
    }
  }
  return;
}

