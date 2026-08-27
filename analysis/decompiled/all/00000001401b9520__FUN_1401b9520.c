// Function: FUN_1401b9520
// Addr: 1401b9520
// Size: 1002 bytes


void FUN_1401b9520(undefined8 param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  uint uVar8;
  undefined8 local_68;
  uint local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  FUN_1401b8df0();
  lVar2 = FUN_140087490(param_1,"flags","");
  if (lVar2 == 0) {
    local_60 = CONCAT31(local_60._1_3_,1);
    plVar3 = (longlong *)FUN_140086de0(param_1,"flags","");
    uVar8 = *(uint *)(plVar3 + 1);
    *(uint *)(plVar3 + 1) = local_60 & 0xfffffeff;
    lVar2 = *plVar3;
    *plVar3 = 0;
    lVar1 = plVar3[2];
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    switch(uVar8 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar8 >> 8 & 1) != 0) {
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
  lVar2 = FUN_140087490(param_1,"origin","");
  if (lVar2 == 0) {
    local_60 = CONCAT31(local_60._1_3_,4);
    uVar8 = local_60 | 0x100;
    puVar4 = (undefined4 *)_malloc_base(10);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_140017170(&local_68,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_68);
    }
    *puVar4 = 5;
    puVar4[1] = DAT_14048f4d4;
    *(undefined1 *)(puVar4 + 2) = DAT_14048f4d8;
    *(undefined1 *)((longlong)puVar4 + 9) = 0;
    puVar5 = (undefined8 *)FUN_140086de0(param_1,"origin","");
    local_60 = *(uint *)(puVar5 + 1);
    *(uint *)(puVar5 + 1) = uVar8;
    local_68 = *puVar5;
    *puVar5 = puVar4;
    lVar2 = puVar5[2];
    puVar5[2] = 0;
    local_48 = puVar5[4];
    uStack_50 = puVar5[3];
    puVar5[3] = 0;
    puVar5[4] = 0;
    local_58 = lVar2;
    FUN_140086d30(&local_68);
    if (lVar2 != 0) {
      FUN_140017240(lVar2 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
  }
  pcVar7 = "1 1 1";
  puVar4 = &DAT_14048f4ec;
  if (param_2 != '\0') {
    puVar4 = &DAT_14048f488;
  }
  FUN_1401d7e80(param_1,"directions",puVar4);
  lVar2 = FUN_140087490(param_1,"distancemin","");
  if (lVar2 == 0) {
    local_60 = CONCAT31(local_60._1_3_,4);
    uVar8 = local_60 | 0x100;
    puVar4 = (undefined4 *)_malloc_base(10);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_140017170(&local_68,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_68);
    }
    *puVar4 = 5;
    puVar4[1] = DAT_14048f4d4;
    *(undefined1 *)(puVar4 + 2) = DAT_14048f4d8;
    *(undefined1 *)((longlong)puVar4 + 9) = 0;
    puVar5 = (undefined8 *)FUN_140086de0(param_1,"distancemin","");
    local_60 = *(uint *)(puVar5 + 1);
    *(uint *)(puVar5 + 1) = uVar8;
    local_68 = *puVar5;
    *puVar5 = puVar4;
    lVar2 = puVar5[2];
    puVar5[2] = 0;
    local_48 = puVar5[4];
    uStack_50 = puVar5[3];
    puVar5[3] = 0;
    puVar5[4] = 0;
    local_58 = lVar2;
    FUN_140086d30(&local_68);
    if (lVar2 != 0) {
      FUN_140017240(lVar2 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
  }
  if (param_2 != '\0') {
    pcVar7 = "256 256 0";
  }
  FUN_1401d7e80(param_1,"distancemax",pcVar7);
  lVar2 = FUN_140087490(param_1,"speedmin","");
  if (lVar2 == 0) {
    local_60 = CONCAT31(local_60._1_3_,3);
    local_60 = local_60 & 0xfffffeff;
    local_68 = 0;
    local_48 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uVar6 = FUN_140086de0(param_1,"speedmin","");
    FUN_140085610(uVar6,&local_68);
    FUN_140085440(&local_68);
  }
  FUN_1401d7d30(param_1,"speedmax",0);
  FUN_1401d7be0(param_1,"controlpoint",0);
  return;
}

