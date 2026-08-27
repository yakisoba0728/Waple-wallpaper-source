// Function: FUN_1401d7be0
// Addr: 1401d7be0
// Size: 291 bytes


void FUN_1401d7be0(undefined8 param_1,char *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  size_t sVar3;
  longlong lVar4;
  longlong *plVar5;
  uint local_30;
  
  sVar3 = strlen(param_2);
  lVar4 = FUN_140087490(param_1,param_2,param_2 + sVar3);
  if (lVar4 == 0) {
    local_30 = CONCAT31(local_30._1_3_,1);
    sVar3 = strlen(param_2);
    plVar5 = (longlong *)FUN_140086de0(param_1,param_2,param_2 + sVar3);
    uVar1 = *(uint *)(plVar5 + 1);
    *(uint *)(plVar5 + 1) = local_30 & 0xfffffeff;
    lVar4 = *plVar5;
    *plVar5 = (longlong)param_3;
    lVar2 = plVar5[2];
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[4] = 0;
    switch(uVar1 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar1 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(lVar4);
      }
      break;
    case 6:
    case 7:
      if (lVar4 != 0) {
        FUN_140088e40(lVar4);
        thunk_FUN_14028af80(lVar4,0x10);
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

