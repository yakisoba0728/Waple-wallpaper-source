// Function: FUN_1401be5d0
// Addr: 1401be5d0
// Size: 502 bytes


void FUN_1401be5d0(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint local_50;
  
  lVar3 = FUN_140087490(param_1,"controlpointstart","");
  if (lVar3 == 0) {
    local_50 = CONCAT31(local_50._1_3_,1);
    plVar4 = (longlong *)FUN_140086de0(param_1,"controlpointstart","");
    uVar1 = *(uint *)(plVar4 + 1);
    *(uint *)(plVar4 + 1) = local_50 & 0xfffffeff;
    lVar3 = *plVar4;
    *plVar4 = 0;
    lVar2 = plVar4[2];
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    switch(uVar1 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar1 >> 8 & 1) != 0) {
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
  lVar3 = FUN_140087490(param_1,"controlpointend","");
  if (lVar3 == 0) {
    local_50 = CONCAT31(local_50._1_3_,1);
    plVar4 = (longlong *)FUN_140086de0(param_1,"controlpointend","");
    uVar1 = *(uint *)(plVar4 + 1);
    *(uint *)(plVar4 + 1) = local_50 & 0xfffffeff;
    lVar3 = *plVar4;
    *plVar4 = 1;
    lVar2 = plVar4[2];
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    switch(uVar1 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar1 >> 8 & 1) != 0) {
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

