// Function: FUN_1401ba3e0
// Addr: 1401ba3e0
// Size: 827 bytes


void FUN_1401ba3e0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 local_38;
  uint local_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  lVar2 = FUN_140087490(param_1,"huemin","");
  if (lVar2 == 0) {
    local_30 = CONCAT31(local_30._1_3_,3);
    uVar6 = local_30 & 0xfffffeff;
    puVar3 = (undefined8 *)FUN_140086de0(param_1,"huemin","");
    local_30 = *(uint *)(puVar3 + 1);
    *(uint *)(puVar3 + 1) = uVar6;
    local_38 = *puVar3;
    *puVar3 = 0;
    lVar2 = puVar3[2];
    puVar3[2] = 0;
    local_18 = puVar3[4];
    uStack_20 = puVar3[3];
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
  lVar2 = FUN_140087490(param_1,&DAT_14048f564,&DAT_14048f56a);
  if (lVar2 == 0) {
    local_30 = CONCAT31(local_30._1_3_,3);
    uVar6 = local_30 & 0xfffffeff;
    puVar3 = (undefined8 *)FUN_140086de0(param_1,&DAT_14048f564,&DAT_14048f56a);
    local_30 = *(uint *)(puVar3 + 1);
    *(uint *)(puVar3 + 1) = uVar6;
    local_38 = *puVar3;
    *puVar3 = 0x3ff0000000000000;
    lVar2 = puVar3[2];
    puVar3[2] = 0;
    uStack_20 = puVar3[3];
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
  lVar2 = FUN_140087490(param_1,"huesteps","");
  if (lVar2 == 0) {
    local_30 = CONCAT31(local_30._1_3_,1);
    plVar4 = (longlong *)FUN_140086de0(param_1,"huesteps","");
    uVar6 = *(uint *)(plVar4 + 1);
    *(uint *)(plVar4 + 1) = local_30 & 0xfffffeff;
    lVar2 = *plVar4;
    *plVar4 = 6;
    lVar1 = plVar4[2];
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    switch(uVar6 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar6 >> 8 & 1) != 0) {
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
  lVar2 = FUN_140087490(param_1,"saturationmin","");
  if (lVar2 == 0) {
    local_30 = CONCAT31(local_30._1_3_,3);
    local_30 = local_30 & 0xfffffeff;
    local_28 = 0;
    uStack_20 = 0;
    local_38 = DAT_140492758;
    local_18 = 0;
    uVar5 = FUN_140086de0(param_1,"saturationmin","");
    FUN_140085610(uVar5,&local_38);
    FUN_140085440(&local_38);
  }
  FUN_1401d7d30(param_1,"saturationmax",DAT_140492704);
  FUN_1401d7d30(param_1,"valuemin",DAT_1404926c0);
  FUN_1401d7d30(param_1,"valuemax",DAT_140492704);
  return;
}

