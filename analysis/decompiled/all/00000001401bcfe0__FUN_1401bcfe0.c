// Function: FUN_1401bcfe0
// Addr: 1401bcfe0
// Size: 703 bytes


void FUN_1401bcfe0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_58;
  uint local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar1 = FUN_140087490(param_1,"startvalue","");
  if (lVar1 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar4 = local_50 & 0xfffffeff;
    puVar2 = (undefined8 *)FUN_140086de0(param_1,"startvalue","");
    local_50 = *(uint *)(puVar2 + 1);
    *(uint *)(puVar2 + 1) = uVar4;
    local_58 = *puVar2;
    *puVar2 = 0x3ff0000000000000;
    lVar1 = puVar2[2];
    puVar2[2] = 0;
    uStack_40 = puVar2[3];
    local_38 = puVar2[4];
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
  lVar1 = FUN_140087490(param_1,"endvalue","");
  if (lVar1 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar4 = local_50 & 0xfffffeff;
    puVar2 = (undefined8 *)FUN_140086de0(param_1,"endvalue","");
    local_50 = *(uint *)(puVar2 + 1);
    *(uint *)(puVar2 + 1) = uVar4;
    local_58 = *puVar2;
    *puVar2 = 0;
    lVar1 = puVar2[2];
    puVar2[2] = 0;
    local_38 = puVar2[4];
    uStack_40 = puVar2[3];
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
  lVar1 = FUN_140087490(param_1,"starttime","");
  if (lVar1 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar4 = local_50 & 0xfffffeff;
    puVar2 = (undefined8 *)FUN_140086de0(param_1,"starttime","");
    local_50 = *(uint *)(puVar2 + 1);
    *(uint *)(puVar2 + 1) = uVar4;
    local_58 = *puVar2;
    *puVar2 = 0;
    lVar1 = puVar2[2];
    puVar2[2] = 0;
    local_38 = puVar2[4];
    uStack_40 = puVar2[3];
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
  lVar1 = FUN_140087490(param_1,"endtime","");
  if (lVar1 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    local_50 = local_50 & 0xfffffeff;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = DAT_140492778;
    local_38 = 0;
    uVar3 = FUN_140086de0(param_1,"endtime","");
    FUN_140085610(uVar3,&local_58);
    FUN_140086d30(&local_58);
    lVar1 = local_48;
    if (local_48 != 0) {
      FUN_140017240(local_48 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
  }
  return;
}

