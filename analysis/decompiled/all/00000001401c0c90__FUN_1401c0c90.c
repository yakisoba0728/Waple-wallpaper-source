// Function: FUN_1401c0c90
// Addr: 1401c0c90
// Size: 894 bytes


void FUN_1401c0c90(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  ulonglong local_38;
  uint local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  lVar6 = FUN_140087490(param_1,"subdivision","");
  if (lVar6 == 0) {
    local_30 = CONCAT31(local_30._1_3_,1);
    plVar7 = (longlong *)FUN_140086de0(param_1,"subdivision","");
    uVar1 = *(uint *)(plVar7 + 1);
    *(uint *)(plVar7 + 1) = local_30 & 0xfffffeff;
    lVar6 = *plVar7;
    *plVar7 = 4;
    lVar2 = plVar7[2];
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar7[4] = 0;
    switch(uVar1 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar1 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(lVar6);
      }
      break;
    case 6:
    case 7:
      if (lVar6 != 0) {
        FUN_140088e40(lVar6);
        thunk_FUN_14028af80(lVar6,0x10);
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
  lVar6 = FUN_140087490(param_1,"uvsmoothing","");
  if (lVar6 == 0) {
    local_30 = CONCAT31(local_30._1_3_,5);
    local_38 = CONCAT71(local_38._1_7_,1);
    puVar8 = (ulonglong *)FUN_140086de0(param_1,"uvsmoothing","");
    uVar5 = puVar8[1];
    *(uint *)(puVar8 + 1) = local_30 & 0xfffffeff;
    uVar3 = *puVar8;
    *puVar8 = local_38;
    uVar4 = puVar8[2];
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    switch((uint)uVar5 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if (((uint)uVar5 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(uVar3);
      }
      break;
    case 6:
    case 7:
      if (uVar3 != 0) {
        FUN_140088e40(uVar3);
        thunk_FUN_14028af80(uVar3,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    if (uVar4 != 0) {
      FUN_140017240(uVar4 + 0x40);
      FUN_140017240(uVar4 + 0x20);
      FUN_140017240(uVar4);
      thunk_FUN_14028af80(uVar4,0x60);
    }
  }
  lVar6 = FUN_140087490(param_1,"uvscrolling","");
  if (lVar6 == 0) {
    local_30 = CONCAT31(local_30._1_3_,5);
    local_38 = local_38 & 0xffffffffffffff00;
    puVar8 = (ulonglong *)FUN_140086de0(param_1,"uvscrolling","");
    uVar5 = puVar8[1];
    *(uint *)(puVar8 + 1) = local_30 & 0xfffffeff;
    uVar3 = *puVar8;
    *puVar8 = local_38;
    uVar4 = puVar8[2];
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    switch((uint)uVar5 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if (((uint)uVar5 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(uVar3);
      }
      break;
    case 6:
    case 7:
      if (uVar3 != 0) {
        FUN_140088e40(uVar3);
        thunk_FUN_14028af80(uVar3,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    if (uVar4 != 0) {
      FUN_140017240(uVar4 + 0x40);
      FUN_140017240(uVar4 + 0x20);
      FUN_140017240(uVar4);
      thunk_FUN_14028af80(uVar4,0x60);
    }
  }
  lVar6 = FUN_140087490(param_1,"uvscale","");
  if (lVar6 == 0) {
    local_30 = CONCAT31(local_30._1_3_,1);
    local_30 = local_30 & 0xfffffeff;
    local_18 = 0;
    local_38 = 1;
    local_28 = 0;
    uStack_20 = 0;
    uVar9 = FUN_140086de0(param_1,"uvscale","");
    FUN_140085610(uVar9,&local_38);
    FUN_140085440(&local_38);
  }
  return;
}

