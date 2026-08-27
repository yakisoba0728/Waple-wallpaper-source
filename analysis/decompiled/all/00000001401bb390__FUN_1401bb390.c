// Function: FUN_1401bb390
// Addr: 1401bb390
// Size: 708 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401bb390(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 local_58;
  uint local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar5 = FUN_140087490(param_1,&DAT_140488af0,&DAT_140488af3);
  if (lVar5 == 0) {
    local_50 = CONCAT31(local_50._1_3_,4);
    uVar8 = local_50 | 0x100;
    puVar6 = (undefined4 *)_malloc_base(10);
    if (puVar6 == (undefined4 *)0x0) {
      FUN_140017170(&local_58,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_58);
    }
    *puVar6 = 5;
    puVar6[1] = DAT_14048f4d4;
    *(undefined1 *)(puVar6 + 2) = DAT_14048f4d8;
    *(undefined1 *)((longlong)puVar6 + 9) = 0;
    puVar7 = (undefined8 *)FUN_140086de0(param_1,&DAT_140488af0,&DAT_140488af3);
    local_50 = *(uint *)(puVar7 + 1);
    *(uint *)(puVar7 + 1) = uVar8;
    local_58 = *puVar7;
    *puVar7 = puVar6;
    lVar5 = puVar7[2];
    puVar7[2] = 0;
    local_38 = puVar7[4];
    local_40 = puVar7[3];
    puVar7[3] = 0;
    puVar7[4] = 0;
    local_48 = lVar5;
    FUN_140086d30(&local_58);
    if (lVar5 != 0) {
      FUN_140017240(lVar5 + 0x40);
      FUN_140017240(lVar5 + 0x20);
      FUN_140017240(lVar5);
      thunk_FUN_14028af80(lVar5,0x60);
    }
  }
  lVar5 = FUN_140087490(param_1,&DAT_140488af4,&DAT_140488af7);
  if (lVar5 == 0) {
    local_50 = CONCAT31(local_50._1_3_,4);
    uVar8 = local_50 | 0x100;
    puVar6 = (undefined4 *)_malloc_base(0x16);
    uVar4 = _UNK_14048f6a4;
    uVar3 = _UNK_14048f6a0;
    uVar2 = _UNK_14048f69c;
    uVar1 = _DAT_14048f698;
    if (puVar6 == (undefined4 *)0x0) {
      FUN_140017170(&local_58,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_58);
    }
    *puVar6 = 0x11;
    puVar6[1] = uVar1;
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
    puVar6[4] = uVar4;
    *(undefined1 *)(puVar6 + 5) = DAT_14048f6a8;
    *(undefined1 *)((longlong)puVar6 + 0x15) = 0;
    puVar7 = (undefined8 *)FUN_140086de0(param_1,&DAT_140488af4,&DAT_140488af7);
    local_50 = *(uint *)(puVar7 + 1);
    *(uint *)(puVar7 + 1) = uVar8;
    local_58 = *puVar7;
    *puVar7 = puVar6;
    lVar5 = puVar7[2];
    puVar7[2] = 0;
    local_38 = puVar7[4];
    local_40 = puVar7[3];
    puVar7[3] = 0;
    puVar7[4] = 0;
    local_48 = lVar5;
    FUN_140086d30(&local_58);
    if (lVar5 != 0) {
      FUN_140017240(lVar5 + 0x40);
      FUN_140017240(lVar5 + 0x20);
      FUN_140017240(lVar5);
      thunk_FUN_14028af80(lVar5,0x60);
    }
  }
  lVar5 = FUN_140087490(param_1,"exponent","");
  if (lVar5 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar8 = local_50 & 0xfffffeff;
    puVar7 = (undefined8 *)FUN_140086de0(param_1,"exponent","");
    local_50 = *(uint *)(puVar7 + 1);
    *(uint *)(puVar7 + 1) = uVar8;
    local_58 = *puVar7;
    *puVar7 = 0x3ff0000000000000;
    lVar5 = puVar7[2];
    puVar7[2] = 0;
    local_40 = puVar7[3];
    local_38 = puVar7[4];
    puVar7[3] = 0;
    puVar7[4] = 0;
    local_48 = lVar5;
    FUN_140086d30(&local_58);
    if (lVar5 != 0) {
      FUN_140017240(lVar5 + 0x40);
      FUN_140017240(lVar5 + 0x20);
      FUN_140017240(lVar5);
      thunk_FUN_14028af80(lVar5,0x60);
    }
  }
  return;
}

