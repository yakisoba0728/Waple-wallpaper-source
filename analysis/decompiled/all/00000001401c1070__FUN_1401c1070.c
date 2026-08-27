// Function: FUN_1401c1070
// Addr: 1401c1070
// Size: 886 bytes


void FUN_1401c1070(undefined8 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong local_38;
  uint local_30;
  ulonglong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  lVar3 = FUN_140087490(param_1,"length","");
  if (lVar3 == 0) {
    local_30 = CONCAT31(local_30._1_3_,3);
    uVar7 = local_30 & 0xfffffeff;
    puVar4 = (ulonglong *)FUN_140086de0(param_1,"length","");
    local_30 = (uint)puVar4[1];
    *(uint *)(puVar4 + 1) = uVar7;
    local_38 = *puVar4;
    *puVar4 = 0x3ff0000000000000;
    uVar1 = puVar4[2];
    puVar4[2] = 0;
    uStack_20 = puVar4[3];
    local_18 = puVar4[4];
    puVar4[3] = 0;
    puVar4[4] = 0;
    local_28 = uVar1;
    FUN_140086d30(&local_38);
    if (uVar1 != 0) {
      FUN_140017240(uVar1 + 0x40);
      FUN_140017240(uVar1 + 0x20);
      FUN_140017240(uVar1);
      thunk_FUN_14028af80(uVar1,0x60);
    }
  }
  lVar3 = FUN_140087490(param_1,"segments","");
  if (lVar3 == 0) {
    local_30 = CONCAT31(local_30._1_3_,1);
    plVar5 = (longlong *)FUN_140086de0(param_1,"segments","");
    uVar7 = *(uint *)(plVar5 + 1);
    *(uint *)(plVar5 + 1) = local_30 & 0xfffffeff;
    lVar3 = *plVar5;
    *plVar5 = 4;
    lVar2 = plVar5[2];
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[4] = 0;
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
    if (lVar2 != 0) {
      FUN_140017240(lVar2 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
  }
  lVar3 = FUN_140087490(param_1,"subdivision","");
  if (lVar3 == 0) {
    local_30 = CONCAT31(local_30._1_3_,1);
    plVar5 = (longlong *)FUN_140086de0(param_1,"subdivision","");
    uVar7 = *(uint *)(plVar5 + 1);
    *(uint *)(plVar5 + 1) = local_30 & 0xfffffeff;
    lVar3 = *plVar5;
    *plVar5 = 1;
    lVar2 = plVar5[2];
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[4] = 0;
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
    if (lVar2 != 0) {
      FUN_140017240(lVar2 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
  }
  lVar3 = FUN_140087490(param_1,"uvscrolling","");
  if (lVar3 == 0) {
    local_30 = CONCAT31(local_30._1_3_,5);
    local_30 = local_30 & 0xfffffeff;
    local_18 = 0;
    local_38 = local_38 & 0xffffffffffffff00;
    local_28 = 0;
    uStack_20 = 0;
    uVar6 = FUN_140086de0(param_1,"uvscrolling","");
    FUN_140085610(uVar6,&local_38);
    FUN_140085440(&local_38);
  }
  FUN_1401d7be0(param_1,"uvscale",1);
  FUN_1401d8120(param_1,"fadealpha",0);
  FUN_1401d8120(param_1,"fadesize",0);
  return;
}

