// Function: FUN_1401bdee0
// Addr: 1401bdee0
// Size: 946 bytes


void FUN_1401bdee0(undefined8 param_1,char param_2)

{
  double dVar1;
  longlong lVar2;
  undefined4 *puVar3;
  double *pdVar4;
  undefined8 uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  double local_88;
  uint local_80;
  double local_78;
  double dStack_70;
  double local_68;
  
  lVar2 = FUN_140087490(param_1,"offset","");
  if (lVar2 == 0) {
    local_80 = CONCAT31(local_80._1_3_,4);
    uVar6 = local_80 | 0x100;
    puVar3 = (undefined4 *)_malloc_base(10);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_140017170(&local_88,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_88);
    }
    *puVar3 = 5;
    puVar3[1] = DAT_14048f4d4;
    *(undefined1 *)(puVar3 + 2) = DAT_14048f4d8;
    *(undefined1 *)((longlong)puVar3 + 9) = 0;
    pdVar4 = (double *)FUN_140086de0(param_1,"offset","");
    local_80 = *(uint *)(pdVar4 + 1);
    *(uint *)(pdVar4 + 1) = uVar6;
    local_88 = *pdVar4;
    *pdVar4 = (double)puVar3;
    dVar1 = pdVar4[2];
    pdVar4[2] = 0.0;
    local_68 = pdVar4[4];
    dStack_70 = pdVar4[3];
    pdVar4[3] = 0.0;
    pdVar4[4] = 0.0;
    local_78 = dVar1;
    FUN_140086d30(&local_88);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  fVar8 = DAT_140492934;
  fVar7 = DAT_14049288c;
  if (param_2 != '\0') {
    fVar7 = DAT_140492934;
  }
  lVar2 = FUN_140087490(param_1,"scale","");
  if (lVar2 == 0) {
    local_80 = CONCAT31(local_80._1_3_,3);
    uVar6 = local_80 & 0xfffffeff;
    pdVar4 = (double *)FUN_140086de0(param_1,"scale","");
    local_80 = *(uint *)(pdVar4 + 1);
    *(uint *)(pdVar4 + 1) = uVar6;
    local_88 = *pdVar4;
    *pdVar4 = (double)fVar7;
    dVar1 = pdVar4[2];
    pdVar4[2] = 0.0;
    dStack_70 = pdVar4[3];
    pdVar4[3] = 0.0;
    local_68 = pdVar4[4];
    pdVar4[4] = 0.0;
    local_78 = dVar1;
    FUN_140086d30(&local_88);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  if (param_2 == '\0') {
    fVar8 = DAT_140492858;
  }
  lVar2 = FUN_140087490(param_1,"threshold","");
  if (lVar2 == 0) {
    local_80 = CONCAT31(local_80._1_3_,3);
    uVar6 = local_80 & 0xfffffeff;
    pdVar4 = (double *)FUN_140086de0(param_1,"threshold","");
    local_80 = *(uint *)(pdVar4 + 1);
    *(uint *)(pdVar4 + 1) = uVar6;
    local_88 = *pdVar4;
    *pdVar4 = (double)fVar8;
    dVar1 = pdVar4[2];
    pdVar4[2] = 0.0;
    dStack_70 = pdVar4[3];
    pdVar4[3] = 0.0;
    local_68 = pdVar4[4];
    pdVar4[4] = 0.0;
    local_78 = dVar1;
    FUN_140086d30(&local_88);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  fVar8 = DAT_1404926c0;
  if (param_2 != '\0') {
    fVar8 = DAT_140492888;
  }
  lVar2 = FUN_140087490(param_1,"deletethreshold","");
  if (lVar2 == 0) {
    local_80 = CONCAT31(local_80._1_3_,3);
    local_80 = local_80 & 0xfffffeff;
    local_78 = 0.0;
    dStack_70 = 0.0;
    local_88 = (double)fVar8;
    local_68 = 0.0;
    uVar5 = FUN_140086de0(param_1,"deletethreshold","");
    FUN_140085610(uVar5,&local_88);
    FUN_140085440(&local_88);
  }
  FUN_1401d7be0(param_1,"controlpoint",0);
  lVar2 = FUN_140087490(param_1,"flags","");
  if (lVar2 == 0) {
    local_80 = CONCAT31(local_80._1_3_,1);
    local_80 = local_80 & 0xfffffeff;
    local_68 = 0.0;
    local_88 = 9.88131291682493e-324;
    local_78 = 0.0;
    dStack_70 = 0.0;
    uVar5 = FUN_140086de0(param_1,"flags","");
    FUN_140085610(uVar5,&local_88);
    FUN_140085440(&local_88);
  }
  return;
}

