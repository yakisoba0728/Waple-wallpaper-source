// Function: FUN_1401b9c40
// Addr: 1401b9c40
// Size: 553 bytes


void FUN_1401b9c40(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 local_58;
  uint local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_140087490(param_1,&DAT_140488af0,&DAT_140488af3);
  if (lVar1 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar3 = local_50 & 0xfffffeff;
    puVar2 = (undefined8 *)FUN_140086de0(param_1,&DAT_140488af0,&DAT_140488af3);
    local_50 = *(uint *)(puVar2 + 1);
    *(uint *)(puVar2 + 1) = uVar3;
    local_58 = *puVar2;
    *puVar2 = 0;
    lVar1 = puVar2[2];
    puVar2[2] = 0;
    local_38 = puVar2[4];
    local_40 = puVar2[3];
    puVar2[3] = 0;
    puVar2[4] = 0;
    local_48 = lVar1;
    FUN_140086d30(&local_58);
    if (lVar1 != 0) {
      FUN_140017240(lVar1 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
  }
  lVar1 = FUN_140087490(param_1,&DAT_140488af4,&DAT_140488af7);
  if (lVar1 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar3 = local_50 & 0xfffffeff;
    puVar2 = (undefined8 *)FUN_140086de0(param_1,&DAT_140488af4,&DAT_140488af7);
    local_50 = *(uint *)(puVar2 + 1);
    *(uint *)(puVar2 + 1) = uVar3;
    local_58 = *puVar2;
    *puVar2 = 0x3ff0000000000000;
    lVar1 = puVar2[2];
    puVar2[2] = 0;
    local_38 = puVar2[4];
    local_40 = puVar2[3];
    puVar2[3] = 0;
    puVar2[4] = 0;
    local_48 = lVar1;
    FUN_140086d30(&local_58);
    if (lVar1 != 0) {
      FUN_140017240(lVar1 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
  }
  lVar1 = FUN_140087490(param_1,"exponent","");
  if (lVar1 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar3 = local_50 & 0xfffffeff;
    puVar2 = (undefined8 *)FUN_140086de0(param_1,"exponent","");
    local_50 = *(uint *)(puVar2 + 1);
    *(uint *)(puVar2 + 1) = uVar3;
    local_58 = *puVar2;
    *puVar2 = 0x3ff0000000000000;
    lVar1 = puVar2[2];
    puVar2[2] = 0;
    local_38 = puVar2[4];
    local_40 = puVar2[3];
    puVar2[3] = 0;
    puVar2[4] = 0;
    local_48 = lVar1;
    FUN_140086d30(&local_58);
    if (lVar1 != 0) {
      FUN_140017240(lVar1 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
  }
  return;
}

