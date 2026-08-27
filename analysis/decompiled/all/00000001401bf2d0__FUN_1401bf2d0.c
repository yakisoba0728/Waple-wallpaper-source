// Function: FUN_1401bf2d0
// Addr: 1401bf2d0
// Size: 1063 bytes


void FUN_1401bf2d0(undefined8 param_1,char param_2)

{
  double dVar1;
  float fVar2;
  longlong lVar3;
  undefined4 *puVar4;
  double *pdVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  undefined4 uVar9;
  double local_88;
  uint local_80;
  double local_78;
  double dStack_70;
  double local_68;
  
  lVar3 = FUN_140087490(param_1,&DAT_14048f6f0,&DAT_14048f6f4);
  if (lVar3 == 0) {
    local_80 = CONCAT31(local_80._1_3_,4);
    uVar7 = local_80 | 0x100;
    puVar4 = (undefined4 *)_malloc_base(10);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_140017170(&local_88,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_88);
    }
    *puVar4 = 5;
    puVar4[1] = DAT_14048f6e0;
    *(undefined1 *)(puVar4 + 2) = DAT_14048f6e4;
    *(undefined1 *)((longlong)puVar4 + 9) = 0;
    pdVar5 = (double *)FUN_140086de0(param_1,&DAT_14048f6f0,&DAT_14048f6f4);
    local_80 = *(uint *)(pdVar5 + 1);
    *(uint *)(pdVar5 + 1) = uVar7;
    local_88 = *pdVar5;
    *pdVar5 = (double)puVar4;
    dVar1 = pdVar5[2];
    pdVar5[2] = 0.0;
    local_68 = pdVar5[4];
    dStack_70 = pdVar5[3];
    pdVar5[3] = 0.0;
    pdVar5[4] = 0.0;
    local_78 = dVar1;
    FUN_140086d30(&local_88);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  fVar2 = DAT_140492704;
  fVar8 = DAT_140492704;
  if (param_2 != '\0') {
    fVar8 = DAT_140492930;
  }
  lVar3 = FUN_140087490(param_1,"distanceinner","");
  if (lVar3 == 0) {
    local_80 = CONCAT31(local_80._1_3_,3);
    uVar7 = local_80 & 0xfffffeff;
    pdVar5 = (double *)FUN_140086de0(param_1,"distanceinner","");
    local_80 = *(uint *)(pdVar5 + 1);
    *(uint *)(pdVar5 + 1) = uVar7;
    local_88 = *pdVar5;
    *pdVar5 = (double)fVar8;
    dVar1 = pdVar5[2];
    pdVar5[2] = 0.0;
    dStack_70 = pdVar5[3];
    pdVar5[3] = 0.0;
    local_68 = pdVar5[4];
    pdVar5[4] = 0.0;
    local_78 = dVar1;
    FUN_140086d30(&local_88);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  fVar8 = DAT_1404927a8;
  if (param_2 != '\0') {
    fVar8 = DAT_140492938;
  }
  lVar3 = FUN_140087490(param_1,"distanceouter","");
  if (lVar3 == 0) {
    local_80 = CONCAT31(local_80._1_3_,3);
    uVar7 = local_80 & 0xfffffeff;
    pdVar5 = (double *)FUN_140086de0(param_1,"distanceouter","");
    local_80 = *(uint *)(pdVar5 + 1);
    *(uint *)(pdVar5 + 1) = uVar7;
    local_88 = *pdVar5;
    *pdVar5 = (double)fVar8;
    dVar1 = pdVar5[2];
    pdVar5[2] = 0.0;
    dStack_70 = pdVar5[3];
    pdVar5[3] = 0.0;
    local_68 = pdVar5[4];
    pdVar5[4] = 0.0;
    local_78 = dVar1;
    FUN_140086d30(&local_88);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  fVar8 = fVar2;
  if (param_2 != '\0') {
    fVar8 = DAT_140492954;
  }
  lVar3 = FUN_140087490(param_1,"speedinner","");
  if (lVar3 == 0) {
    local_80 = CONCAT31(local_80._1_3_,3);
    local_80 = local_80 & 0xfffffeff;
    local_78 = 0.0;
    dStack_70 = 0.0;
    local_88 = (double)fVar8;
    local_68 = 0.0;
    uVar6 = FUN_140086de0(param_1,"speedinner","");
    FUN_140085610(uVar6,&local_88);
    FUN_140085440(&local_88);
  }
  FUN_1401d7d30(param_1,"speedouter",0);
  FUN_1401d7d30(param_1,"centerforce",fVar2);
  FUN_1401d7be0(param_1,"controlpoint",0);
  FUN_1401d7be0(param_1,"flags",0);
  if (param_2 == '\0') {
    FUN_1401d7d30(param_1,"ringradius",fVar2);
    FUN_1401d7d30(param_1,"ringpulldistance",DAT_14049268c);
    FUN_1401d7d30(param_1,"ringpullforce",DAT_140492644);
    uVar9 = DAT_14049267c;
  }
  else {
    FUN_1401d7d30(param_1,"ringradius",DAT_140492914);
    uVar9 = DAT_1404928cc;
    FUN_1401d7d30(param_1,"ringpulldistance",DAT_1404928cc);
    FUN_1401d7d30(param_1,"ringpullforce",DAT_140492868);
  }
  FUN_1401d7d30(param_1,"ringwidth",uVar9);
  return;
}

