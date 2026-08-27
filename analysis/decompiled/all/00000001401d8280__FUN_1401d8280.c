// Function: FUN_1401d8280
// Addr: 1401d8280
// Size: 222 bytes


void FUN_1401d8280(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 local_38;
  uint local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  sVar1 = strlen(param_2);
  lVar2 = FUN_140087490(param_1,param_2,param_2 + sVar1);
  if (lVar2 == 0) {
    local_30 = CONCAT31(local_30._1_3_,2);
    uVar4 = local_30 & 0xfffffeff;
    strlen(param_2);
    puVar3 = (undefined8 *)FUN_140086de0(param_1,param_2);
    local_30 = *(uint *)(puVar3 + 1);
    *(uint *)(puVar3 + 1) = uVar4;
    local_38 = *puVar3;
    *puVar3 = 0;
    lVar2 = puVar3[2];
    puVar3[2] = 0;
    local_18 = puVar3[4];
    local_20 = puVar3[3];
    puVar3[3] = 0;
    puVar3[4] = 0;
    local_28 = lVar2;
    FUN_140086d30(&local_38);
    if (lVar2 != 0) {
      FUN_140017240(lVar2 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
  }
  return;
}

