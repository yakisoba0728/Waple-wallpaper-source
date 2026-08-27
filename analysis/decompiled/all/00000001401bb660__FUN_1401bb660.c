// Function: FUN_1401bb660
// Addr: 1401bb660
// Size: 860 bytes


void FUN_1401bb660(undefined8 param_1,char param_2)

{
  double dVar1;
  longlong lVar2;
  double *pdVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  float fVar7;
  double local_78;
  uint local_70;
  double local_68;
  double dStack_60;
  double local_58;
  
  puVar6 = &DAT_14048f4ec;
  if (param_2 != '\0') {
    puVar6 = &DAT_14048f488;
  }
  FUN_1401d7e80(param_1,"directions",puVar6);
  lVar2 = FUN_140087490(param_1,&DAT_14048f49c,&DAT_14048f4a0);
  if (lVar2 == 0) {
    local_70 = CONCAT31(local_70._1_3_,4);
    uVar5 = local_70 | 0x100;
    puVar6 = (undefined4 *)_malloc_base(10);
    if (puVar6 == (undefined4 *)0x0) {
      FUN_140017170(&local_78,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_78);
    }
    *puVar6 = 5;
    puVar6[1] = DAT_14048f4d4;
    *(undefined1 *)(puVar6 + 2) = DAT_14048f4d8;
    *(undefined1 *)((longlong)puVar6 + 9) = 0;
    pdVar3 = (double *)FUN_140086de0(param_1,&DAT_14048f49c,&DAT_14048f4a0);
    local_70 = *(uint *)(pdVar3 + 1);
    *(uint *)(pdVar3 + 1) = uVar5;
    local_78 = *pdVar3;
    *pdVar3 = (double)puVar6;
    dVar1 = pdVar3[2];
    pdVar3[2] = 0.0;
    local_58 = pdVar3[4];
    dStack_60 = pdVar3[3];
    pdVar3[3] = 0.0;
    pdVar3[4] = 0.0;
    local_68 = dVar1;
    FUN_140086d30(&local_78);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  fVar7 = DAT_140492704;
  if (param_2 != '\0') {
    fVar7 = DAT_140492608;
  }
  lVar2 = FUN_140087490(param_1,"scale","");
  if (lVar2 == 0) {
    local_70 = CONCAT31(local_70._1_3_,3);
    uVar5 = local_70 & 0xfffffeff;
    pdVar3 = (double *)FUN_140086de0(param_1,"scale","");
    local_70 = *(uint *)(pdVar3 + 1);
    *(uint *)(pdVar3 + 1) = uVar5;
    local_78 = *pdVar3;
    *pdVar3 = (double)fVar7;
    dVar1 = pdVar3[2];
    pdVar3[2] = 0.0;
    dStack_60 = pdVar3[3];
    pdVar3[3] = 0.0;
    local_58 = pdVar3[4];
    pdVar3[4] = 0.0;
    local_68 = dVar1;
    FUN_140086d30(&local_78);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  fVar7 = DAT_140492654;
  if (param_2 != '\0') {
    fVar7 = DAT_1404928f8;
  }
  lVar2 = FUN_140087490(param_1,"distance","");
  if (lVar2 == 0) {
    local_70 = CONCAT31(local_70._1_3_,3);
    uVar5 = local_70 & 0xfffffeff;
    pdVar3 = (double *)FUN_140086de0(param_1,"distance","");
    local_70 = *(uint *)(pdVar3 + 1);
    *(uint *)(pdVar3 + 1) = uVar5;
    local_78 = *pdVar3;
    *pdVar3 = (double)fVar7;
    dVar1 = pdVar3[2];
    pdVar3[2] = 0.0;
    dStack_60 = pdVar3[3];
    pdVar3[3] = 0.0;
    local_58 = pdVar3[4];
    pdVar3[4] = 0.0;
    local_68 = dVar1;
    FUN_140086d30(&local_78);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  lVar2 = FUN_140087490(param_1,"timescale","");
  if (lVar2 == 0) {
    local_70 = CONCAT31(local_70._1_3_,3);
    local_70 = local_70 & 0xfffffeff;
    local_68 = 0.0;
    dStack_60 = 0.0;
    local_78 = DAT_140492778;
    local_58 = 0.0;
    uVar4 = FUN_140086de0(param_1,"timescale","");
    FUN_140085610(uVar4,&local_78);
    FUN_140085440(&local_78);
  }
  FUN_1401d7be0(param_1,"octaves",6);
  return;
}

