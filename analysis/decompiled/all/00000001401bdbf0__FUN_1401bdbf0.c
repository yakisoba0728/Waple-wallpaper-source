// Function: FUN_1401bdbf0
// Addr: 1401bdbf0
// Size: 738 bytes


void FUN_1401bdbf0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_38;
  uint local_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  lVar1 = FUN_140087490(param_1,"frequencymin","");
  if (lVar1 == 0) {
    local_30 = CONCAT31(local_30._1_3_,3);
    uVar4 = local_30 & 0xfffffeff;
    puVar2 = (undefined8 *)FUN_140086de0(param_1,"frequencymin","");
    local_30 = *(uint *)(puVar2 + 1);
    *(uint *)(puVar2 + 1) = uVar4;
    local_38 = *puVar2;
    *puVar2 = 0x3ff0000000000000;
    lVar1 = puVar2[2];
    puVar2[2] = 0;
    uStack_20 = puVar2[3];
    local_18 = puVar2[4];
    puVar2[3] = 0;
    puVar2[4] = 0;
    local_28 = lVar1;
    FUN_140086d30(&local_38);
    if (lVar1 != 0) {
      FUN_140017240(lVar1 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
  }
  lVar1 = FUN_140087490(param_1,"frequencymax","");
  if (lVar1 == 0) {
    local_30 = CONCAT31(local_30._1_3_,3);
    uVar4 = local_30 & 0xfffffeff;
    puVar2 = (undefined8 *)FUN_140086de0(param_1,"frequencymax","");
    local_30 = *(uint *)(puVar2 + 1);
    *(uint *)(puVar2 + 1) = uVar4;
    local_38 = *puVar2;
    *puVar2 = 0x4024000000000000;
    lVar1 = puVar2[2];
    puVar2[2] = 0;
    uStack_20 = puVar2[3];
    local_18 = puVar2[4];
    puVar2[3] = 0;
    puVar2[4] = 0;
    local_28 = lVar1;
    FUN_140086d30(&local_38);
    if (lVar1 != 0) {
      FUN_140017240(lVar1 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
  }
  lVar1 = FUN_140087490(param_1,"scalemin","");
  if (lVar1 == 0) {
    local_30 = CONCAT31(local_30._1_3_,3);
    uVar4 = local_30 & 0xfffffeff;
    puVar2 = (undefined8 *)FUN_140086de0(param_1,"scalemin","");
    local_30 = *(uint *)(puVar2 + 1);
    *(uint *)(puVar2 + 1) = uVar4;
    local_38 = *puVar2;
    *puVar2 = 0x3fe99999a0000000;
    lVar1 = puVar2[2];
    puVar2[2] = 0;
    uStack_20 = puVar2[3];
    local_18 = puVar2[4];
    puVar2[3] = 0;
    puVar2[4] = 0;
    local_28 = lVar1;
    FUN_140086d30(&local_38);
    if (lVar1 != 0) {
      FUN_140017240(lVar1 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
  }
  lVar1 = FUN_140087490(param_1,"scalemax","");
  if (lVar1 == 0) {
    local_30 = CONCAT31(local_30._1_3_,3);
    local_30 = local_30 & 0xfffffeff;
    local_28 = 0;
    uStack_20 = 0;
    local_38 = DAT_140492790;
    local_18 = 0;
    uVar3 = FUN_140086de0(param_1,"scalemax","");
    FUN_140085610(uVar3,&local_38);
    FUN_140085440(&local_38);
  }
  FUN_1401d7d30(param_1,"phasemin",0);
  FUN_1401d7d30(param_1,"phasemax",DAT_140492864);
  return;
}

