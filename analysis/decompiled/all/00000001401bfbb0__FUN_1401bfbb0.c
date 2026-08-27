// Function: FUN_1401bfbb0
// Addr: 1401bfbb0
// Size: 1135 bytes


void FUN_1401bfbb0(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 local_38;
  uint local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  FUN_1401d7e80(param_1,"operation",PTR_s_multiply_140484f28);
  FUN_1401d7e80(param_1,"input",PTR_s_lifetimefraction_140484e80);
  FUN_1401d7e80(param_1,"output",PTR_DAT_140484e90);
  FUN_1401d7e80(param_1,"inputcomponent",PTR_DAT_140484e40);
  FUN_1401d7e80(param_1,"outputcomponent",PTR_DAT_140484e40);
  lVar3 = FUN_140087490(param_1,"inputrangemin","");
  if (lVar3 == 0) {
    local_30 = CONCAT31(local_30._1_3_,1);
    plVar4 = (longlong *)FUN_140086de0(param_1,"inputrangemin","");
    uVar1 = *(uint *)(plVar4 + 1);
    *(uint *)(plVar4 + 1) = local_30 & 0xfffffeff;
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
  lVar3 = FUN_140087490(param_1,"inputrangemax","");
  if (lVar3 == 0) {
    local_30 = CONCAT31(local_30._1_3_,1);
    plVar4 = (longlong *)FUN_140086de0(param_1,"inputrangemax","");
    uVar1 = *(uint *)(plVar4 + 1);
    *(uint *)(plVar4 + 1) = local_30 & 0xfffffeff;
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
  lVar3 = FUN_140087490(param_1,"outputrangemin","");
  if (lVar3 == 0) {
    local_30 = CONCAT31(local_30._1_3_,1);
    plVar4 = (longlong *)FUN_140086de0(param_1,"outputrangemin","");
    uVar1 = *(uint *)(plVar4 + 1);
    *(uint *)(plVar4 + 1) = local_30 & 0xfffffeff;
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
  lVar3 = FUN_140087490(param_1,"outputrangemax","");
  if (lVar3 == 0) {
    local_30 = CONCAT31(local_30._1_3_,1);
    local_30 = local_30 & 0xfffffeff;
    local_18 = 0;
    local_38 = 1;
    local_28 = 0;
    uStack_20 = 0;
    uVar5 = FUN_140086de0(param_1,"outputrangemax","");
    FUN_140085610(uVar5,&local_38);
    FUN_140085440(&local_38);
  }
  FUN_1401d7be0(param_1,"inputcontrolpoint0",0);
  FUN_1401d7be0(param_1,"inputcontrolpoint1",1);
  FUN_1401d7be0(param_1,"outputcontrolpoint0",0);
  FUN_1401d7be0(param_1,"outputcontrolpoint1",1);
  FUN_1401d7e80(param_1,"transformfunction",PTR_DAT_140484e00);
  FUN_1401d7d30(param_1,"transforminputscale",DAT_1404927a8);
  FUN_1401d7be0(param_1,"transformoctaves",3);
  FUN_1401d8040(param_1);
  return;
}

