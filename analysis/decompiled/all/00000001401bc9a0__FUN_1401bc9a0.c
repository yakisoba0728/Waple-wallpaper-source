// Function: FUN_1401bc9a0
// Addr: 1401bc9a0
// Size: 698 bytes


void FUN_1401bc9a0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uint uVar6;
  undefined8 local_58;
  uint local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar2 = FUN_140087490(param_1,"gravity","");
  if (lVar2 == 0) {
    local_50 = CONCAT31(local_50._1_3_,4);
    uVar6 = local_50 | 0x100;
    puVar3 = (undefined4 *)_malloc_base(10);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_140017170(&local_58,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_58);
    }
    *puVar3 = 5;
    puVar3[1] = DAT_14048f4d4;
    *(undefined1 *)(puVar3 + 2) = DAT_14048f4d8;
    *(undefined1 *)((longlong)puVar3 + 9) = 0;
    puVar4 = (undefined8 *)FUN_140086de0(param_1,"gravity","");
    local_50 = *(uint *)(puVar4 + 1);
    *(uint *)(puVar4 + 1) = uVar6;
    local_58 = *puVar4;
    *puVar4 = puVar3;
    lVar2 = puVar4[2];
    puVar4[2] = 0;
    local_38 = puVar4[4];
    local_40 = puVar4[3];
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
  lVar2 = FUN_140087490(param_1,&DAT_14048f938,&DAT_14048f93c);
  if (lVar2 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar6 = local_50 & 0xfffffeff;
    puVar4 = (undefined8 *)FUN_140086de0(param_1,&DAT_14048f938,&DAT_14048f93c);
    local_50 = *(uint *)(puVar4 + 1);
    *(uint *)(puVar4 + 1) = uVar6;
    local_58 = *puVar4;
    *puVar4 = 0;
    lVar2 = puVar4[2];
    puVar4[2] = 0;
    local_38 = puVar4[4];
    local_40 = puVar4[3];
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
  lVar2 = FUN_140087490(param_1,"flags","");
  if (lVar2 == 0) {
    local_50 = CONCAT31(local_50._1_3_,1);
    plVar5 = (longlong *)FUN_140086de0(param_1,"flags","");
    uVar6 = *(uint *)(plVar5 + 1);
    *(uint *)(plVar5 + 1) = local_50 & 0xfffffeff;
    lVar2 = *plVar5;
    *plVar5 = 0;
    lVar1 = plVar5[2];
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[4] = 0;
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
  return;
}

