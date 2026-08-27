// Function: FUN_1401b8df0
// Addr: 1401b8df0
// Size: 778 bytes


void FUN_1401b8df0(undefined8 param_1)

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
  
  lVar1 = FUN_140087490(param_1,&DAT_1404884a4,&DAT_1404884a8);
  if (lVar1 == 0) {
    local_30 = CONCAT31(local_30._1_3_,3);
    uVar4 = local_30 & 0xfffffeff;
    puVar2 = (undefined8 *)FUN_140086de0(param_1,&DAT_1404884a4,&DAT_1404884a8);
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
  lVar1 = FUN_140087490(param_1,"duration","");
  if (lVar1 == 0) {
    local_30 = CONCAT31(local_30._1_3_,3);
    uVar4 = local_30 & 0xfffffeff;
    puVar2 = (undefined8 *)FUN_140086de0(param_1,"duration","");
    local_30 = *(uint *)(puVar2 + 1);
    *(uint *)(puVar2 + 1) = uVar4;
    local_38 = *puVar2;
    *puVar2 = 0;
    lVar1 = puVar2[2];
    puVar2[2] = 0;
    local_18 = puVar2[4];
    uStack_20 = puVar2[3];
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
  lVar1 = FUN_140087490(param_1,"delay","");
  if (lVar1 == 0) {
    local_30 = CONCAT31(local_30._1_3_,3);
    uVar4 = local_30 & 0xfffffeff;
    puVar2 = (undefined8 *)FUN_140086de0(param_1,"delay","");
    local_30 = *(uint *)(puVar2 + 1);
    *(uint *)(puVar2 + 1) = uVar4;
    local_38 = *puVar2;
    *puVar2 = 0;
    lVar1 = puVar2[2];
    puVar2[2] = 0;
    local_18 = puVar2[4];
    uStack_20 = puVar2[3];
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
  lVar1 = FUN_140087490(param_1,"instantaneous","");
  if (lVar1 == 0) {
    local_30 = CONCAT31(local_30._1_3_,1);
    local_30 = local_30 & 0xfffffeff;
    local_18 = 0;
    local_38 = 0;
    local_28 = 0;
    uStack_20 = 0;
    uVar3 = FUN_140086de0(param_1,"instantaneous","");
    FUN_140085610(uVar3,&local_38);
    FUN_140085440(&local_38);
  }
  FUN_1401d7d30(param_1,"minperiodicduration",DAT_1404927a8);
  FUN_1401d7d30(param_1,"maxperiodicduration",DAT_140492830);
  FUN_1401d7d30(param_1,"minperiodicdelay",DAT_140492704);
  FUN_1401d7d30(param_1,"maxperiodicdelay",DAT_1404927a8);
  FUN_1401d7be0(param_1,"maxtoemitperperiod",0);
  return;
}

