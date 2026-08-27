// Function: FUN_1401bac50
// Addr: 1401bac50
// Size: 290 bytes


void FUN_1401bac50(undefined8 param_1,char param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 local_38;
  uint local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  pcVar4 = "-1 -1 -1";
  if (param_2 != '\0') {
    pcVar4 = "-32 -32 0";
  }
  FUN_1401d7e80(param_1,&DAT_140488af0,pcVar4);
  pcVar4 = "1 1 1";
  if (param_2 != '\0') {
    pcVar4 = "32 32 0";
  }
  FUN_1401d7e80(param_1,&DAT_140488af4,pcVar4);
  lVar1 = FUN_140087490(param_1,"exponent","");
  if (lVar1 == 0) {
    local_30 = CONCAT31(local_30._1_3_,3);
    uVar3 = local_30 & 0xfffffeff;
    puVar2 = (undefined8 *)FUN_140086de0(param_1,"exponent");
    local_30 = *(uint *)(puVar2 + 1);
    *(uint *)(puVar2 + 1) = uVar3;
    local_38 = *puVar2;
    *puVar2 = 0x3ff0000000000000;
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

