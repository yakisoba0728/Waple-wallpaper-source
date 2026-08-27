// Function: FUN_1401bef00
// Addr: 1401bef00
// Size: 964 bytes


void FUN_1401bef00(undefined8 param_1,char param_2)

{
  double dVar1;
  longlong lVar2;
  undefined4 *puVar3;
  double *pdVar4;
  undefined8 uVar5;
  uint uVar6;
  float fVar7;
  double local_78;
  uint local_70;
  double local_68;
  double dStack_60;
  double local_58;
  
  lVar2 = FUN_140087490(param_1,"offset","");
  if (lVar2 == 0) {
    local_70 = CONCAT31(local_70._1_3_,4);
    uVar6 = local_70 | 0x100;
    puVar3 = (undefined4 *)_malloc_base(10);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_140017170(&local_78,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_78);
    }
    *puVar3 = 5;
    puVar3[1] = DAT_14048f4d4;
    *(undefined1 *)(puVar3 + 2) = DAT_14048f4d8;
    *(undefined1 *)((longlong)puVar3 + 9) = 0;
    pdVar4 = (double *)FUN_140086de0(param_1,"offset","");
    local_70 = *(uint *)(pdVar4 + 1);
    *(uint *)(pdVar4 + 1) = uVar6;
    local_78 = *pdVar4;
    *pdVar4 = (double)puVar3;
    dVar1 = pdVar4[2];
    pdVar4[2] = 0.0;
    local_58 = pdVar4[4];
    dStack_60 = pdVar4[3];
    pdVar4[3] = 0.0;
    pdVar4[4] = 0.0;
    local_68 = dVar1;
    FUN_140086d30(&local_78);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  lVar2 = FUN_140087490(param_1,&DAT_14048f6f0,&DAT_14048f6f4);
  if (lVar2 == 0) {
    local_70 = CONCAT31(local_70._1_3_,4);
    uVar6 = local_70 | 0x100;
    puVar3 = (undefined4 *)_malloc_base(10);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_140017170(&local_78,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_78);
    }
    *puVar3 = 5;
    puVar3[1] = DAT_14048f6e0;
    *(undefined1 *)(puVar3 + 2) = DAT_14048f6e4;
    *(undefined1 *)((longlong)puVar3 + 9) = 0;
    pdVar4 = (double *)FUN_140086de0(param_1,&DAT_14048f6f0,&DAT_14048f6f4);
    local_70 = *(uint *)(pdVar4 + 1);
    *(uint *)(pdVar4 + 1) = uVar6;
    local_78 = *pdVar4;
    *pdVar4 = (double)puVar3;
    dVar1 = pdVar4[2];
    pdVar4[2] = 0.0;
    local_58 = pdVar4[4];
    dStack_60 = pdVar4[3];
    pdVar4[3] = 0.0;
    pdVar4[4] = 0.0;
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
    fVar7 = DAT_140492930;
  }
  lVar2 = FUN_140087490(param_1,"distanceinner","");
  if (lVar2 == 0) {
    local_70 = CONCAT31(local_70._1_3_,3);
    uVar6 = local_70 & 0xfffffeff;
    pdVar4 = (double *)FUN_140086de0(param_1,"distanceinner","");
    local_70 = *(uint *)(pdVar4 + 1);
    *(uint *)(pdVar4 + 1) = uVar6;
    local_78 = *pdVar4;
    *pdVar4 = (double)fVar7;
    dVar1 = pdVar4[2];
    pdVar4[2] = 0.0;
    dStack_60 = pdVar4[3];
    pdVar4[3] = 0.0;
    local_58 = pdVar4[4];
    pdVar4[4] = 0.0;
    local_68 = dVar1;
    FUN_140086d30(&local_78);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  fVar7 = DAT_1404927a8;
  if (param_2 != '\0') {
    fVar7 = DAT_140492938;
  }
  lVar2 = FUN_140087490(param_1,"distanceouter","");
  if (lVar2 == 0) {
    local_70 = CONCAT31(local_70._1_3_,3);
    local_70 = local_70 & 0xfffffeff;
    local_68 = 0.0;
    dStack_60 = 0.0;
    local_78 = (double)fVar7;
    local_58 = 0.0;
    uVar5 = FUN_140086de0(param_1,"distanceouter","");
    FUN_140085610(uVar5,&local_78);
    FUN_140085440(&local_78);
  }
  fVar7 = DAT_140492704;
  if (param_2 != '\0') {
    fVar7 = DAT_140492954;
  }
  FUN_1401d7d30(param_1,"speedinner",fVar7);
  FUN_1401d7d30(param_1,"speedouter",0);
  FUN_1401d7be0(param_1,"controlpoint",0);
  FUN_1401d7be0(param_1,"flags",0);
  return;
}

