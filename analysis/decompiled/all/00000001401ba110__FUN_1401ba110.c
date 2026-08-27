// Function: FUN_1401ba110
// Addr: 1401ba110
// Size: 709 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401ba110(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 local_58;
  uint local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar2 = FUN_140087490(param_1,&DAT_140488af0,&DAT_140488af3);
  if (lVar2 == 0) {
    local_50 = CONCAT31(local_50._1_3_,4);
    uVar5 = local_50 | 0x100;
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
    puVar4 = (undefined8 *)FUN_140086de0(param_1,&DAT_140488af0,&DAT_140488af3);
    local_50 = *(uint *)(puVar4 + 1);
    *(uint *)(puVar4 + 1) = uVar5;
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
  lVar2 = FUN_140087490(param_1,&DAT_140488af4,&DAT_140488af7);
  if (lVar2 == 0) {
    local_50 = CONCAT31(local_50._1_3_,4);
    uVar5 = local_50 | 0x100;
    puVar3 = (undefined4 *)_malloc_base(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_140017170(&local_58,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_58);
    }
    uVar1 = CONCAT17(DAT_14048f550._7_1_,(undefined7)DAT_14048f550);
    *puVar3 = 0xb;
    *(undefined8 *)(puVar3 + 1) = uVar1;
    *(undefined4 *)((longlong)puVar3 + 0xb) = ram0x00014048f557;
    *(undefined1 *)((longlong)puVar3 + 0xf) = 0;
    puVar4 = (undefined8 *)FUN_140086de0(param_1,&DAT_140488af4,&DAT_140488af7);
    local_50 = *(uint *)(puVar4 + 1);
    *(uint *)(puVar4 + 1) = uVar5;
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
  lVar2 = FUN_140087490(param_1,"exponent","");
  if (lVar2 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar5 = local_50 & 0xfffffeff;
    puVar4 = (undefined8 *)FUN_140086de0(param_1,"exponent","");
    local_50 = *(uint *)(puVar4 + 1);
    *(uint *)(puVar4 + 1) = uVar5;
    local_58 = *puVar4;
    *puVar4 = 0x3ff0000000000000;
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
  return;
}

