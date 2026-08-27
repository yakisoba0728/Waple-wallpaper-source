// Function: FUN_140017840
// Addr: 140017840
// Size: 1796 bytes


undefined8 FUN_140017840(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 ****ppppuVar9;
  longlong lVar10;
  undefined8 ***local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  uint local_48;
  undefined8 local_40;
  
  lVar2 = *(longlong *)ThreadLocalStoragePointer;
  if ((*(uint *)(lVar2 + 0x180) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x160) = 0;
    *(uint *)(lVar2 + 0x160) = *(uint *)(lVar2 + 0x160) & 0xfffffeff;
    *(uint *)(lVar2 + 0x180) = *(uint *)(lVar2 + 0x180) | 1;
    *(undefined ***)(lVar2 + 0x150) = &PTR_FUN_1404755b8;
    *(undefined8 *)(lVar2 + 0x168) = 0;
    *(undefined8 *)(lVar2 + 0x170) = 0;
    lVar10 = lVar2 + 0x158;
    *(undefined8 *)(lVar2 + 0x178) = 0;
    local_48 = CONCAT31(local_48._1_3_,5);
    local_50 = 1;
    plVar6 = (longlong *)FUN_140086de0(lVar10,"collectComments","");
    uVar1 = *(uint *)(plVar6 + 1);
    *(uint *)(plVar6 + 1) = local_48 & 0xfffffeff;
    lVar2 = *plVar6;
    *plVar6 = CONCAT71(uStack_4f,local_50);
    lVar3 = plVar6[2];
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    switch(uVar1 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar1 >> 8 & 1) != 0) {
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
    if (lVar3 != 0) {
      FUN_140017240(lVar3 + 0x40);
      FUN_140017240(lVar3 + 0x20);
      FUN_140017240(lVar3);
      thunk_FUN_14028af80(lVar3,0x60);
    }
    local_48 = CONCAT31(local_48._1_3_,5);
    local_50 = 1;
    plVar6 = (longlong *)FUN_140086de0(lVar10,"allowComments","");
    uVar1 = *(uint *)(plVar6 + 1);
    *(uint *)(plVar6 + 1) = local_48 & 0xfffffeff;
    lVar2 = *plVar6;
    *plVar6 = CONCAT71(uStack_4f,local_50);
    lVar3 = plVar6[2];
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    switch(uVar1 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar1 >> 8 & 1) != 0) {
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
    if (lVar3 != 0) {
      FUN_140017240(lVar3 + 0x40);
      FUN_140017240(lVar3 + 0x20);
      FUN_140017240(lVar3);
      thunk_FUN_14028af80(lVar3,0x60);
    }
    local_48 = CONCAT31(local_48._1_3_,5);
    local_50 = 1;
    plVar6 = (longlong *)FUN_140086de0(lVar10,"allowTrailingCommas","");
    uVar1 = *(uint *)(plVar6 + 1);
    *(uint *)(plVar6 + 1) = local_48 & 0xfffffeff;
    lVar2 = *plVar6;
    *plVar6 = CONCAT71(uStack_4f,local_50);
    lVar3 = plVar6[2];
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    switch(uVar1 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar1 >> 8 & 1) != 0) {
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
    if (lVar3 != 0) {
      FUN_140017240(lVar3 + 0x40);
      FUN_140017240(lVar3 + 0x20);
      FUN_140017240(lVar3);
      thunk_FUN_14028af80(lVar3,0x60);
    }
    uVar7 = uStack_70;
    uStack_70 = CONCAT71(uStack_70._1_7_,5);
    uStack_70._4_4_ = SUB84(uVar7,4);
    uStack_70 = CONCAT44(uStack_70._4_4_,(undefined4)uStack_70) & 0xfffffffffffffeff;
    local_58 = 0;
    local_78 = (undefined8 ***)((ulonglong)local_78 & 0xffffffffffffff00);
    local_68 = 0;
    uStack_60 = 0;
    uVar7 = FUN_140086de0(lVar10,"strictRoot","");
    FUN_140085610(uVar7,&local_78);
    FUN_140086d30(&local_78);
    lVar2 = local_68;
    if (local_68 != 0) {
      FUN_140017240(local_68 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
    uVar4 = uStack_70;
    uStack_70 = CONCAT71(uStack_70._1_7_,5);
    uStack_70._4_4_ = SUB84(uVar4,4);
    uStack_70 = CONCAT44(uStack_70._4_4_,(undefined4)uStack_70) & 0xfffffffffffffeff;
    local_58 = 0;
    local_78 = (undefined8 ***)((ulonglong)local_78 & 0xffffffffffffff00);
    local_68 = 0;
    uStack_60 = 0;
    uVar7 = FUN_140086de0(lVar10,"allowDroppedNullPlaceholders","");
    FUN_140085610(uVar7,&local_78);
    FUN_140085440(&local_78);
    uVar4 = uStack_70;
    uStack_70 = CONCAT71(uStack_70._1_7_,5);
    uStack_70._4_4_ = SUB84(uVar4,4);
    uStack_70 = CONCAT44(uStack_70._4_4_,(undefined4)uStack_70) & 0xfffffffffffffeff;
    local_58 = 0;
    local_78 = (undefined8 ***)((ulonglong)local_78 & 0xffffffffffffff00);
    local_68 = 0;
    uStack_60 = 0;
    uVar7 = FUN_140086de0(lVar10,"allowNumericKeys","");
    FUN_140085610(uVar7,&local_78);
    FUN_140085440(&local_78);
    uVar4 = uStack_70;
    uStack_70 = CONCAT71(uStack_70._1_7_,5);
    uStack_70._4_4_ = SUB84(uVar4,4);
    uStack_70 = CONCAT44(uStack_70._4_4_,(undefined4)uStack_70) & 0xfffffffffffffeff;
    local_58 = 0;
    local_78 = (undefined8 ***)((ulonglong)local_78 & 0xffffffffffffff00);
    local_68 = 0;
    uStack_60 = 0;
    uVar7 = FUN_140086de0(lVar10,"allowSingleQuotes","");
    FUN_140085610(uVar7,&local_78);
    FUN_140085440(&local_78);
    uVar4 = uStack_70;
    uStack_70 = CONCAT71(uStack_70._1_7_,1);
    uStack_70._4_4_ = SUB84(uVar4,4);
    uStack_70 = CONCAT44(uStack_70._4_4_,(undefined4)uStack_70) & 0xfffffffffffffeff;
    local_58 = 0;
    local_78 = (undefined8 ***)0x100;
    local_68 = 0;
    uStack_60 = 0;
    uVar7 = FUN_140086de0(lVar10,"stackLimit","");
    FUN_140085610(uVar7,&local_78);
    FUN_140085440(&local_78);
    uVar4 = uStack_70;
    uStack_70 = CONCAT71(uStack_70._1_7_,5);
    uStack_70._4_4_ = SUB84(uVar4,4);
    uStack_70 = CONCAT44(uStack_70._4_4_,(undefined4)uStack_70) & 0xfffffffffffffeff;
    local_58 = 0;
    local_78 = (undefined8 ***)((ulonglong)local_78 & 0xffffffffffffff00);
    local_68 = 0;
    uStack_60 = 0;
    uVar7 = FUN_140086de0(lVar10,"failIfExtra","");
    FUN_140085610(uVar7,&local_78);
    FUN_140085440(&local_78);
    uVar4 = uStack_70;
    uStack_70 = CONCAT71(uStack_70._1_7_,5);
    uStack_70._4_4_ = SUB84(uVar4,4);
    uStack_70 = CONCAT44(uStack_70._4_4_,(undefined4)uStack_70) & 0xfffffffffffffeff;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_78 = (undefined8 ***)((ulonglong)local_78 & 0xffffffffffffff00);
    uVar7 = FUN_140086de0(lVar10,"rejectDupKeys","");
    FUN_140085610(uVar7,&local_78);
    FUN_140085440(&local_78);
    uVar4 = uStack_70;
    uStack_70 = CONCAT71(uStack_70._1_7_,5);
    uStack_70._4_4_ = SUB84(uVar4,4);
    uStack_70 = CONCAT44(uStack_70._4_4_,(undefined4)uStack_70) & 0xfffffffffffffeff;
    local_58 = 0;
    local_78 = (undefined8 ***)((ulonglong)local_78 & 0xffffffffffffff00);
    local_68 = 0;
    uStack_60 = 0;
    uVar7 = FUN_140086de0(lVar10,"allowSpecialFloats","");
    FUN_140085610(uVar7,&local_78);
    FUN_140085440(&local_78);
    uVar4 = uStack_70;
    uStack_70 = CONCAT71(uStack_70._1_7_,5);
    uStack_70._4_4_ = SUB84(uVar4,4);
    uStack_70 = CONCAT44(uStack_70._4_4_,(undefined4)uStack_70) & 0xfffffffffffffeff;
    local_58 = 0;
    local_78 = (undefined8 ***)CONCAT71(local_78._1_7_,1);
    local_68 = 0;
    uStack_60 = 0;
    uVar7 = FUN_140086de0(lVar10,&DAT_140485588,&DAT_14048558f);
    FUN_140085610(uVar7,&local_78);
    FUN_140085440(&local_78);
    local_40 = 0;
    FUN_140086ca0(&local_50,5,0);
    local_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = (undefined8 ****)0x0;
    uStack_70 = 0;
    FUN_140017480(&local_78,"collectComments",0xf);
    ppppuVar9 = &local_78;
    if (0xf < uStack_60) {
      ppppuVar9 = (undefined8 ****)local_78;
    }
    uVar7 = FUN_140086de0(lVar10,ppppuVar9,local_68 + (longlong)ppppuVar9);
    FUN_140085610(uVar7,&local_50);
    if (0xf < uStack_60) {
      FUN_140017200(&local_78,local_78);
    }
    local_68 = 0;
    uStack_60 = 0xf;
    local_78 = (undefined8 ***)((ulonglong)local_78 & 0xffffffffffffff00);
    FUN_140085440(&local_50);
    FUN_14028b030(&LAB_140424110);
  }
  plVar8 = (longlong *)
           (**(code **)(*(longlong *)(*(longlong *)ThreadLocalStoragePointer + 0x150) + 8))();
  plVar6 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  cVar5 = (**(code **)(*plVar8 + 8))(plVar8,param_1,*plVar6 + (longlong)param_1,param_2,param_3);
  if ((cVar5 == '\0') || (1 < *(byte *)(param_2 + 8) - 6)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)*plVar8)(plVar8,1);
  }
  return uVar7;
}

