// Function: FUN_1401b9930
// Addr: 1401b9930
// Size: 744 bytes


void FUN_1401b9930(undefined8 param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 local_58;
  uint local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  FUN_1401b8df0();
  lVar2 = FUN_140087490(param_1,"flags","");
  if (lVar2 == 0) {
    local_50 = CONCAT31(local_50._1_3_,1);
    plVar3 = (longlong *)FUN_140086de0(param_1,"flags","");
    uVar5 = *(uint *)(plVar3 + 1);
    *(uint *)(plVar3 + 1) = local_50 & 0xfffffeff;
    lVar2 = *plVar3;
    *plVar3 = 0x10000;
    lVar1 = plVar3[2];
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
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
  lVar2 = FUN_140087490(param_1,"speedmin","");
  if (lVar2 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar5 = local_50 & 0xfffffeff;
    puVar4 = (undefined8 *)FUN_140086de0(param_1,"speedmin","");
    local_50 = *(uint *)(puVar4 + 1);
    *(uint *)(puVar4 + 1) = uVar5;
    local_58 = *puVar4;
    *puVar4 = 0x3fb99999a0000000;
    lVar2 = puVar4[2];
    puVar4[2] = 0;
    local_40 = puVar4[3];
    local_38 = puVar4[4];
    puVar4[3] = 0;
    puVar4[4] = 0;
    local_48 = lVar2;
    FUN_140086d30(&local_58);
    if (lVar2 != 0) {
      FUN_140017240(lVar2 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
  }
  lVar2 = FUN_140087490(param_1,"speedmax","");
  if (lVar2 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar5 = local_50 & 0xfffffeff;
    puVar4 = (undefined8 *)FUN_140086de0(param_1,"speedmax","");
    local_50 = *(uint *)(puVar4 + 1);
    *(uint *)(puVar4 + 1) = uVar5;
    local_58 = *puVar4;
    *puVar4 = 0x3fc99999a0000000;
    lVar2 = puVar4[2];
    puVar4[2] = 0;
    local_40 = puVar4[3];
    local_38 = puVar4[4];
    puVar4[3] = 0;
    puVar4[4] = 0;
    local_48 = lVar2;
    FUN_140086d30(&local_58);
    if (lVar2 != 0) {
      FUN_140017240(lVar2 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
  }
  pcVar6 = "0 0 0";
  pcVar7 = "0 0 0";
  if (param_2 != '\0') {
    pcVar7 = "-5 -5 0";
  }
  FUN_1401d7e80(param_1,"offsetmin",pcVar7);
  if (param_2 != '\0') {
    pcVar6 = "5 5 0";
  }
  FUN_1401d7e80(param_1,"offsetmax",pcVar6);
  return;
}

