// Function: FUN_1401bad80
// Addr: 1401bad80
// Size: 653 bytes


void FUN_1401bad80(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 local_38;
  uint local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  lVar2 = FUN_140087490(param_1,&DAT_140488af0,&DAT_140488af3);
  if (lVar2 == 0) {
    local_30 = CONCAT31(local_30._1_3_,3);
    uVar5 = local_30 & 0xfffffeff;
    puVar3 = (undefined8 *)FUN_140086de0(param_1,&DAT_140488af0,&DAT_140488af3);
    local_30 = *(uint *)(puVar3 + 1);
    *(uint *)(puVar3 + 1) = uVar5;
    local_38 = *puVar3;
    *puVar3 = 0x3fb99999a0000000;
    lVar2 = puVar3[2];
    puVar3[2] = 0;
    local_20 = puVar3[3];
    local_18 = puVar3[4];
    puVar3[3] = 0;
    puVar3[4] = 0;
    local_28 = lVar2;
    FUN_140086d30(&local_38);
    if (lVar2 != 0) {
      FUN_140017240(lVar2 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
  }
  lVar2 = FUN_140087490(param_1,&DAT_140488af4,&DAT_140488af7);
  if (lVar2 == 0) {
    local_30 = CONCAT31(local_30._1_3_,3);
    uVar5 = local_30 & 0xfffffeff;
    puVar3 = (undefined8 *)FUN_140086de0(param_1,&DAT_140488af4,&DAT_140488af7);
    local_30 = *(uint *)(puVar3 + 1);
    *(uint *)(puVar3 + 1) = uVar5;
    local_38 = *puVar3;
    *puVar3 = 0x3fc99999a0000000;
    lVar2 = puVar3[2];
    puVar3[2] = 0;
    local_20 = puVar3[3];
    local_18 = puVar3[4];
    puVar3[3] = 0;
    puVar3[4] = 0;
    local_28 = lVar2;
    FUN_140086d30(&local_38);
    if (lVar2 != 0) {
      FUN_140017240(lVar2 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
  }
  lVar2 = FUN_140087490(param_1,"controlpoint","");
  if (lVar2 == 0) {
    local_30 = CONCAT31(local_30._1_3_,1);
    plVar4 = (longlong *)FUN_140086de0(param_1,"controlpoint","");
    uVar5 = *(uint *)(plVar4 + 1);
    *(uint *)(plVar4 + 1) = local_30 & 0xfffffeff;
    lVar2 = *plVar4;
    *plVar4 = 0;
    lVar1 = plVar4[2];
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    switch(uVar5 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar5 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(lVar2);
      }
      break;
    case 6:
    case 7:
      if (lVar2 != 0) {
        FUN_140088e40(lVar2);
        thunk_FUN_14028af80(lVar2,0x10);
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
  return;
}

