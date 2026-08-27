// Function: FUN_1401d8040
// Addr: 1401d8040
// Size: 209 bytes


void FUN_1401d8040(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 local_38;
  uint local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  lVar1 = FUN_140087490(param_1,"flags","");
  if (lVar1 == 0) {
    local_30 = CONCAT31(local_30._1_3_,1);
    uVar3 = local_30 & 0xfffffeff;
    puVar2 = (undefined8 *)FUN_140086de0(param_1,"flags");
    local_30 = *(uint *)(puVar2 + 1);
    *(uint *)(puVar2 + 1) = uVar3;
    local_38 = *puVar2;
    *puVar2 = 1;
    lVar1 = puVar2[2];
    puVar2[2] = 0;
    local_18 = puVar2[4];
    local_20 = puVar2[3];
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
  return;
}

