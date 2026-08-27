// Function: FUN_140091ef0
// Addr: 140091ef0
// Size: 1379 bytes


void FUN_140091ef0(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong local_68;
  uint local_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_60 = CONCAT31(local_60._1_3_,5);
  local_68 = CONCAT71(local_68._1_7_,1);
  puVar4 = (ulonglong *)FUN_140086de0(param_1,"collectComments","");
  uVar3 = puVar4[1];
  *(uint *)(puVar4 + 1) = local_60 & 0xfffffeff;
  uVar1 = *puVar4;
  *puVar4 = local_68;
  uVar2 = puVar4[2];
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  switch((uint)uVar3 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    break;
  case 4:
    if (((uint)uVar3 >> 8 & 1) != 0) {
      thunk_FUN_1402d9040(uVar1);
    }
    break;
  case 6:
  case 7:
    if (uVar1 != 0) {
      FUN_140088e40(uVar1);
      thunk_FUN_14028af80(uVar1,0x10);
    }
    break;
  default:
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  }
  if (uVar2 != 0) {
    FUN_140017240(uVar2 + 0x40);
    FUN_140017240(uVar2 + 0x20);
    FUN_140017240(uVar2);
    thunk_FUN_14028af80(uVar2,0x60);
  }
  local_60 = CONCAT31(local_60._1_3_,5);
  local_68 = CONCAT71(local_68._1_7_,1);
  puVar4 = (ulonglong *)FUN_140086de0(param_1,"allowComments","");
  uVar3 = puVar4[1];
  *(uint *)(puVar4 + 1) = local_60 & 0xfffffeff;
  uVar1 = *puVar4;
  *puVar4 = local_68;
  uVar2 = puVar4[2];
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  switch((uint)uVar3 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    break;
  case 4:
    if (((uint)uVar3 >> 8 & 1) != 0) {
      thunk_FUN_1402d9040(uVar1);
    }
    break;
  case 6:
  case 7:
    if (uVar1 != 0) {
      FUN_140088e40(uVar1);
      thunk_FUN_14028af80(uVar1,0x10);
    }
    break;
  default:
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  }
  if (uVar2 != 0) {
    FUN_140017240(uVar2 + 0x40);
    FUN_140017240(uVar2 + 0x20);
    FUN_140017240(uVar2);
    thunk_FUN_14028af80(uVar2,0x60);
  }
  local_60 = CONCAT31(local_60._1_3_,5);
  local_68 = CONCAT71(local_68._1_7_,1);
  puVar4 = (ulonglong *)FUN_140086de0(param_1,"allowTrailingCommas","");
  uVar3 = puVar4[1];
  *(uint *)(puVar4 + 1) = local_60 & 0xfffffeff;
  uVar1 = *puVar4;
  *puVar4 = local_68;
  uVar2 = puVar4[2];
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  switch((uint)uVar3 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    break;
  case 4:
    if (((uint)uVar3 >> 8 & 1) != 0) {
      thunk_FUN_1402d9040(uVar1);
    }
    break;
  case 6:
  case 7:
    if (uVar1 != 0) {
      FUN_140088e40(uVar1);
      thunk_FUN_14028af80(uVar1,0x10);
    }
    break;
  default:
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  }
  if (uVar2 != 0) {
    FUN_140017240(uVar2 + 0x40);
    FUN_140017240(uVar2 + 0x20);
    FUN_140017240(uVar2);
    thunk_FUN_14028af80(uVar2,0x60);
  }
  local_60 = CONCAT31(local_60._1_3_,5);
  local_68 = local_68 & 0xffffffffffffff00;
  uVar6 = local_60 & 0xfffffeff;
  puVar4 = (ulonglong *)FUN_140086de0(param_1,"strictRoot","");
  local_60 = (uint)puVar4[1];
  *(uint *)(puVar4 + 1) = uVar6;
  uVar1 = *puVar4;
  *puVar4 = local_68;
  uVar2 = puVar4[2];
  puVar4[2] = 0;
  local_48 = puVar4[4];
  uStack_50 = puVar4[3];
  puVar4[3] = 0;
  puVar4[4] = 0;
  local_68 = uVar1;
  local_58 = uVar2;
  FUN_140086d30(&local_68);
  if (uVar2 != 0) {
    FUN_140017240(uVar2 + 0x40);
    FUN_140017240(uVar2 + 0x20);
    FUN_140017240(uVar2);
    thunk_FUN_14028af80(uVar2,0x60);
  }
  local_60 = CONCAT31(local_60._1_3_,5);
  local_60 = local_60 & 0xfffffeff;
  local_48 = 0;
  local_68 = local_68 & 0xffffffffffffff00;
  local_58 = 0;
  uStack_50 = 0;
  uVar5 = FUN_140086de0(param_1,"allowDroppedNullPlaceholders","");
  FUN_140085610(uVar5,&local_68);
  FUN_140085440(&local_68);
  local_60 = CONCAT31(local_60._1_3_,5);
  local_60 = local_60 & 0xfffffeff;
  local_48 = 0;
  local_68 = local_68 & 0xffffffffffffff00;
  local_58 = 0;
  uStack_50 = 0;
  uVar5 = FUN_140086de0(param_1,"allowNumericKeys","");
  FUN_140085610(uVar5,&local_68);
  FUN_140085440(&local_68);
  local_60 = CONCAT31(local_60._1_3_,5);
  local_60 = local_60 & 0xfffffeff;
  local_48 = 0;
  local_68 = local_68 & 0xffffffffffffff00;
  local_58 = 0;
  uStack_50 = 0;
  uVar5 = FUN_140086de0(param_1,"allowSingleQuotes","");
  FUN_140085610(uVar5,&local_68);
  FUN_140085440(&local_68);
  local_60 = CONCAT31(local_60._1_3_,1);
  local_60 = local_60 & 0xfffffeff;
  local_48 = 0;
  local_68 = 0x100;
  local_58 = 0;
  uStack_50 = 0;
  uVar5 = FUN_140086de0(param_1,"stackLimit","");
  FUN_140085610(uVar5,&local_68);
  FUN_140085440(&local_68);
  local_60 = CONCAT31(local_60._1_3_,5);
  local_60 = local_60 & 0xfffffeff;
  local_48 = 0;
  local_68 = local_68 & 0xffffffffffffff00;
  local_58 = 0;
  uStack_50 = 0;
  uVar5 = FUN_140086de0(param_1,"failIfExtra","");
  FUN_140085610(uVar5,&local_68);
  FUN_140085440(&local_68);
  local_60 = CONCAT31(local_60._1_3_,5);
  local_60 = local_60 & 0xfffffeff;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_68 = local_68 & 0xffffffffffffff00;
  uVar5 = FUN_140086de0(param_1,"rejectDupKeys","");
  FUN_140085610(uVar5,&local_68);
  FUN_140085440(&local_68);
  local_60 = CONCAT31(local_60._1_3_,5);
  local_60 = local_60 & 0xfffffeff;
  local_48 = 0;
  local_68 = local_68 & 0xffffffffffffff00;
  local_58 = 0;
  uStack_50 = 0;
  uVar5 = FUN_140086de0(param_1,"allowSpecialFloats","");
  FUN_140085610(uVar5,&local_68);
  FUN_140085440(&local_68);
  local_60 = CONCAT31(local_60._1_3_,5);
  local_60 = local_60 & 0xfffffeff;
  local_48 = 0;
  local_68 = CONCAT71(local_68._1_7_,1);
  local_58 = 0;
  uStack_50 = 0;
  uVar5 = FUN_140086de0(param_1,&DAT_140485588,&DAT_14048558f);
  FUN_140085610(uVar5,&local_68);
  FUN_140085440(&local_68);
  return;
}

